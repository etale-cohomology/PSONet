#!/usr/bin/env py
'''
PSO complexity:
	nsteps * nparams * nparticles
http://cmap.polytechnique.fr/~nikolaus.hansen/Tech-Report-May-30-05.pdf
'''
import numpy as np, math, time, contextlib
np.set_printoptions(linewidth=0xc0,edgeitems=1<<14, precision=3,suppress=True)  # precision=3,suppress=True formatter={'float': lambda x:f'{x:6.3f}'}

# -----------------------------------------------------------------------------------------------------------------------------# @blk1  util
def sep(n=1, w=128):
	lf  = '\n'
	SEP = '{}\x1b[31m#\x1b[0m'.format(max(w-1,0)*'-')
	print(f'{n*lf}{n*(SEP+lf)}', end='')
def dprint(*args, **kwargs):
	sep(kwargs.get('n',1), kwargs.get('width',128))
	if 'n'         in kwargs:  del kwargs['n']
	if 'width'     in kwargs:  del kwargs['width']
	if 'sep'   not in kwargs:  kwargs['sep'] = '\n'
	print(*args, **kwargs)
@contextlib.contextmanager  # Define factory function for `with`-statement context managers
def timeit(ini='', end='\n', fmt='.3f'):
	print(ini, end='')
	t0 = time.perf_counter()
	yield  # The decorated function (in this case @timeit) must return a generator-iterator!
	t1 = time.perf_counter()
	print(f'\x1b[32m{t1-t0:{fmt}} \x1b[0m', end=end)

# -----------------------------------------------------------------------------------------------------------------------------# @blk1
def show(x, name=''):  print(f"\x1b[32m{name} \x1b[0m{x.shape}\x1b[0m\n{x}")
def log(p):
	r = np.where(p>1e-9, p, -10)  #.astype(DTYPE)
	return np.log(r, out=r, where=r>0)  # the @out is needed, otherwise you get undefined values where r<=0

def sigmoid(   z):  return 1 / (1 + np.exp(-z))  # activation function.               input is the X*W+b      of the current layer. sigmoid requires larger  step size (1e+0, 1e-1), convergence is slower,     always converges
def relu(      z):  return z*(z>0)               # activation function.               input is the X*W+b      of the current layer. relu    requires smaller step size (1e-1, 1e-2), convergence is faster, not always converges, neurons can die
def idt(       z):  return z                     # activation function.               input is the X*W+b      of the current layer
def Dsigmoid(  y):  return y*(1-y)               # derivative of activation function. input is the activation of the current layer
def Drelu(     z):  return z>0                   # derivative of activation function. input is the activation of the current layer
def Didt(      y):  return np.ones_like(y)       # derivative of activation function. input 

def mse(          Y,y):         return 0.5*np.sum((y-Y)**2)                            # input is the output of the prev layer (and the ground truth Y). mean square error
def abse(         Y,y):         return np.sum(np.abs(y-Y))                             # input is the output of the prev layer (and the ground truth Y). absolute error
def bce(          Y,y):         return -np.sum(Y*log(y) + (1-Y)*log(1-y))              # binary cross entropy, aka. 2-class cross entropy. minimizing wrt to @y is equivalent to minimizing the KL-divergence KL[Y,y]
def crossentropy( Y,y):         return -np.sum(Y*log(y))                               # cross entropy?        aka. k-class cross entropy. minimizing wrt to @y is equivalent to minimizing the KL-divergence KL[Y,y]
def Dbce(         Y,y):         return -np.sum(Y/y - (1-Y)/(1-y), axis=1, keepdims=1)  # Y: ground truth. minimizing DL[p,q] is NOT the same as minimizing DL[p,q]. minimizing DL[p,q] places high proba where p has high proba. minimizing DL[q,p] places low proba where p has low proba
def Dmse(         Y,y):         return  y-Y                                            # Y: ground truth
def Dabse(        Y,y):  e=y-Y; return (-1*(e<0) + 1*(e>=0)).astype(DTYPE)             # Y: ground truth. incorrect?
# def Dcrossentropy(Y,y):         return -np.sum(y-Y, axis=1, keepdims=1)

def softmax(x, dim=1):  # minibatch @softmax(), assuming BATCHES ARE STACKED ALONG DIM 0 and "FEATURES" ALONG DIM 1
	z = np.exp(x - np.max(x,axis=dim))
	return z / np.sum(z,axis=dim)[:,np.newaxis]
def onehot(y):  # @arg y  a 1D-like array where each entry is a label!
	y  = y.squeeze().astype('i4')
	oh = np.full((y.size,y.max()+1), 0, dtype=y.dtype)
	oh[np.arange(y.size), y] = 1
	return oh

# ----------------------------------------------------------------
class Net:

	def __init__(s, batch_size,input_size,out_size,h0_size,lr,wd,show,show_step,dtype, L,DL):
		s.LR        = lr
		s.WD        = wd
		s.SHOW      = show
		s.SHOW_STEP = show_step
		s.DTYPE     = dtype
		s.L         = L
		s.DL        = DL

		s.P = [  # params
			{'w':np.random.normal(0,1/math.sqrt(H0_SIZE), (INPUT_SIZE,H0_SIZE)) .astype(DTYPE), 'b':np.full((1,H0_SIZE), 0).astype(DTYPE), 'f':sigmoid, 'Df':Dsigmoid},  # each column (not each entry) in this matrix represents a hidden unit!                                                 # broadcast b over dim 0
			{'w':np.random.normal(0,1/math.sqrt(OUT_SIZE),(H0_SIZE,   OUT_SIZE)).astype(DTYPE), 'b':np.full((1,OUT_SIZE),0).astype(DTYPE), 'f':sigmoid, 'Df':Dsigmoid},  # use sigmoid in the final layer for 2-class classification (aka. binary classification, 2 mutually exclusive classes)  # broadcast b over dim 0  # you can use sigmoid on the last layer (needs a large step size, like 1e2), but NOT relu!
		]
		s.nparams = sum([l['w'].size+l['b'].size for l in s.P])
		# s.P[0]['w'] = np.array([  # https://youtube.com/watch?v=kNPGXgzxoHw
		# 	[+10,-10],
		# 	[+10,-10],
		# ])
		# s.P[0]['w'][0,0] = +10
		# s.P[0]['w'][1,0] = +10
		# s.P[0]['w'][0,1] = -10
		# s.P[0]['w'][1,1] = -10
		# s.P[0]['b'][0,0] = - 5
		# s.P[0]['b'][0,1] = +15
		# s.P[1]['w'][0,0] = +10
		# s.P[1]['w'][1,0] = +10
		# s.P[1]['b'][0,0] = -15

		s.pflat = np.empty(sum([l['w'].size+l['b'].size for l in s.P]), dtype=s.DTYPE)  # flattened params (all in a single 1-array)
		i = 0
		for ly in s.P:  # np.cumsum([s for p in [[l['w'].size,l['b'].size] for l in s.P] for s in p]):
			s.pflat[i:i+ly['w'].size] = np.random.normal(0,1,ly['w'].size); i+=ly['w'].size
			s.pflat[i:i+ly['b'].size] = np.zeros(            ly['b'].size); i+=ly['b'].size

	def fwd(s,x):
		ys = [x]  # activation layer -1. we must keep the activations around for the backward pass
		for ly in s.P:
			ys.append(ly['f'](ys[-1]@ly['w'] + ly['b']))
		return ys

	def fwdpl(s, pflat,X,Y):  # forward pass w/ params & loss
		# s.punflatten(pflat)
		# y = s.fwd(X)[-1]
		# l = s.L(Y,y)

		y = X  # activation layer -1
		i = 0
		for ly in s.P:
			w  = ly['w']; wn = w.size
			b  = ly['b']; bn = b.size
			y  = ly['f'](y @ pflat[i:i+wn].reshape(w.shape) + pflat[i+wn:i+wn+bn])  # + s.P[0]['b']
			i += wn+bn
		l = s.L(Y,y)

		return y,l

	def pflatten(s):  # flatten the net's parameters
		i = 0
		for ly in s.P:
			w=ly['w']; wn=w.size
			b=ly['b']; bn=b.size
			s.pflat[i   :i+wn]    = w.ravel()
			s.pflat[i+wn:i+wn+bn] = b.ravel()
			i += wn + bn
		return s.pflat

	def punflatten(s,pflat):  # load @pflat, a parameter 1-array, into the net's parameters
		i = 0
		for ly in s.P:
			ly['w'] = pflat[i:i+ly['w'].size].reshape(ly['w'].shape); i+=ly['w'].size
			ly['b'] = pflat[i:i+ly['b'].size].reshape(ly['b'].shape); i+=ly['b'].size

	def train(s, nepochs, X,Y):  # gradient-descent optimization
		loss = []
		lr   = s.LR
		sep()
		t = time.perf_counter()
		for ep in range(nepochs):

			# ----------------------------------------------------------------
			t0 = time.perf_counter()

			# ----------------------------------------------------------------
			# 0) fwd
			ys = s.fwd(X)
			l  = s.L(Y,ys[-1])  # network's loss

			# ----------------------------------------------------------------
			if ep%SHOW_STEP == -1%SHOW_STEP and SHOW:
				sep(2)
				print(f'\x1b[32m{ep:,} \x1b[92mfwd\x1b[0m')

				for i,(y,ly) in enumerate(zip(ys,s.P)):
					print()
					print(f"\x1b[34mly {i:04x} \x1b[32mx \x1b[35m{y      .shape}\x1b[0m", y,       sep='\n')
					print(f"\x1b[34mly {i:04x} \x1b[32mw \x1b[35m{ly['w'].shape}\x1b[0m", ly['w'], sep='\n')
					print(f"\x1b[34mly {i:04x} \x1b[32mb \x1b[35m{ly['b'].shape}\x1b[0m", ly['b'], sep='\n')

				print()
				print(f"\x1b[34mly {len(ys)-1:04x} \x1b[32my \x1b[35m{ys[-1].shape}\x1b[0m", ys[-1], sep='\n')
				print(f"\x1b[34mly {len(ys)-1:04x} \x1b[32mY \x1b[35m{Y.shape}\x1b[0m",      Y,      sep='\n')
				print(f'L \x1b[31m{l:.3f}\x1b[0m')

			# ---------------------------------------------------------------- https://goodboychan.github.io/python/deep_learning/2020/09/16/01-XOR-Problem-in-Deep-Neural-Network.html
			# 1) bwd
			# dl/dz2 : dl/dy2 * dy2/dz2?
			# dl/dw2 : dl/dy2 * dy2/dw2?
			dl_dy2  = s.DL(Y,ys[2])
			dy2_dz2 = s.P[1]['Df'](ys[2])
			dl_dz2  = dl_dy2  * dy2_dz2
			dz_dw2  = ys[1].T
			dl_dw2  = dz_dw2 @ dl_dz2

			# dl/dy1 : dl/dy2 * dy2/dy1?
			dy1_dz1 = s.P[0]['Df'](ys[1])
			dy1     = (dl_dz2@s.P[1]['w'].T) * dy1_dz1
			dz1_dw1 = ys[0].T
			dl_dw1  = dz1_dw1 @ dy1

			s.P[1]['w'] -= lr*dl_dw2 / BATCH_SIZE
			s.P[0]['w'] -= lr*dl_dw1 / BATCH_SIZE
			lr *= s.WD

			# ----------------------------------------------------------------
			t1 = time.perf_counter()

			# ----------------------------------------------------------------
			loss.append(l)
			if ep%SHOW_STEP == -1%SHOW_STEP and not SHOW:  print(f'{ep:5,} \x1b[32m{t1-t0:.6f} \x1b[31m{l:.6f} \x1b[37m{dl_dy2.T} \x1b[35m{lr:.3f} \x1b[0m{ys[-1].squeeze()}')
			if ep%SHOW_STEP == -1%SHOW_STEP and     SHOW:
				sep()
				print(f'\x1b[32m{ep:,} \x1b[92mbwd\x1b[0m')

				print(f'\n\x1b[34mly {2:04x}\x1b[0m')
				show(dl_dy2,  "dl/dy2")
				show(dy2_dz2, "Dy2/Dz2??")
				show(dl_dz2,  "dl/dz2??")
				show(dl_dw2,  "dl_dw2")

				print('\n\x1b[34mly 0\x1b[0m')
				show(dy1, "dy1")
				show(dl_dw1, "dl_dw1")

		print(f'\x1b[32m{time.perf_counter()-t:.3f} \x1b[0mtrain')
		return loss

	def pshow(s):
		dprint('\x1b[92mshow net parameters\x1b[0m\n')
		for i,ly in enumerate(s.P):
			print(f"ly \x1b[34m{i:04x} \x1b[32mw \x1b[35m{ly['w'].shape}\x1b[0m", ly['w'], sep='\n')
			print(f"ly \x1b[34m{i:04x} \x1b[32mb \x1b[35m{ly['b'].shape}\x1b[0m", ly['b'], sep='\n')
			print()
		print('\x1b[1A',end='')

# -----------------------------------------------------------------------------------------------------------------------------# @blk1
class PSO:

	def __init__(s, C0,C1,C2,S0,S1,K, f, net,trainx,trainy):
		s.C0 = 0.8  # PSO hyperparameters
		s.C1 = 0.1
		s.C2 = 0.1
		s.S0 = S0
		s.S1 = S1
		s.K  = K

		s.Px  = np.random.normal(0,s.S0, (net.nparams,s.K))  # particle positions.  choose K random points inside parameter space
		s.Pv  = np.random.normal(0,s.S1, (net.nparams,s.K))  # particle velocities. choose random velocities
		s.f   = f
		s.net = net
		# dprint(s.Px,s.Pv)

		# PSO initialization
		s.pbestx = s.Px                                                                # pbest: pesonal best for this flock member
		s.pbesty = [s.f(s.Px[:,fi], trainx,trainy)[1] for fi in range(s.Px.shape[1])]  # @fi: flock index  # s.f(s.Px)
		s.gbestx = s.pbestx[:,np.argmin(s.pbesty)]                                     # gbest: global best over the entire flock
		s.gbesty = np.min(s.pbesty)

	def train(s, nepochs):
		dprint(s.Px.shape)
		for ep in range(nepochs):  pso.step(ep)
		dprint(s.gbestx)

	def step(s,ep):  # 1 step/iteration of Particle Swarm Optimization (PSO)
		print(f'\x1b[37m{ep:02x} \x1b[0m',end='')
		with timeit(end='', fmt='.6f'):
			r0,r1 = np.random.rand(2)
			s.Pv  = s.C0*s.Pv + s.C1*r0*(s.pbestx - s.Px) + s.C2*r1*(s.gbestx[:,np.newaxis] - s.Px)                      # 150 ms
			s.Px  = s.Px + s.Pv                                                                                          #  35 ms
			Py    = [s.f(s.Px[:,fi], trainx,trainy)[1] for fi in range(s.Px.shape[1])]  # @fi: flock index  # s.f(s.Px)  # 300 ms

			sel             = Py<=s.pbesty
			s.pbestx[:,sel] = s.Px[:,sel]
			s.pbesty        = np.min(np.array([Py,s.pbesty]), axis=0)
			s.gbestx        = s.pbestx[:, np.argmin(s.pbesty)]
			s.gbesty        = np.min(s.pbesty)
		s.show()

	def show(s):
		# dprint(s.pbesty, s.pbestx)
		print(f'\x1b[31m{s.gbesty:.6f} \x1b[0m{s.f(s.gbestx,trainx,trainy)[0].squeeze()}')# \x1b[0m{s.gbestx}')

# -----------------------------------------------------------------------------------------------------------------------------# @blk1
# ---------------------------------------------------------------- define net & training data
BATCH_SIZE = 4
INPUT_SIZE = 2       # dimension of the input  space (number of input  features)
OUT_SIZE   = 1       # dimension of the output space (number of output features)
H0_SIZE    = 0x10    # dimension of hidden layer 0  # 4 128
LR         = 1e1     # 1e2 1e1 1e0 1e-1 1e-2
WD         = 0.9999  # 0.999 0.9999
SHOW       = 0
SHOW_STEP  = 0x2
DTYPE      = np.float32
L          = bce
DL         = Dbce

# 5-bit parity problem, 1 possible generalization of the XOR problem (aka. the 2-bit parity problem). can be solved w/ an FC net having only 2 hidden neurons, or with a more general net having 1 hidden neuron  faqs.org/faqs/ai-faq/neural-nets/part2/section-8.html
# http://faqs.org/faqs/ai-faq/neural-nets/part2/section-8.html
   # x1    x2    x3    x4    x5    target
   #  0     0     0     0     0       0
   #  1     0     0     0     0       1
   #  0     1     0     0     0       1
   #  1     1     0     0     0       0
   #  0     0     1     0     0       1
   #  1     0     1     0     0       0
   #  0     1     1     0     0       0
   #  1     1     1     0     0       1
   #  0     0     0     1     0       1
   #  1     0     0     1     0       0
   #  0     1     0     1     0       0
   #  1     1     0     1     0       1
   #  0     0     1     1     0       0
   #  1     0     1     1     0       1
   #  0     1     1     1     0       1
   #  1     1     1     1     0       0
   #  0     0     0     0     1       1
   #  1     0     0     0     1       0
   #  0     1     0     0     1       0
   #  1     1     0     0     1       1
   #  0     0     1     0     1       0
   #  1     0     1     0     1       1
   #  0     1     1     0     1       1
   #  1     1     1     0     1       0
   #  0     0     0     1     1       0
   #  1     0     0     1     1       1
   #  0     1     0     1     1       1
   #  1     1     0     1     1       0
   #  0     0     1     1     1       1
   #  1     0     1     1     1       0
   #  0     1     1     1     1       0
   #  1     1     1     1     1       1

data = np.array([
	[0,0, 0],  # feature0, feature1, label
	[0,1, 1],
	[1,0, 1],
	[1,1, 0],
], dtype=DTYPE).reshape(BATCH_SIZE,INPUT_SIZE+1)
trainx = data[:,:-1]                # (BATCH_SIZE,INPUT_SIZE)
trainy = data[:, -1][:,np.newaxis]  # (BATCH_SIZE,1)

net = Net(BATCH_SIZE,INPUT_SIZE,OUT_SIZE,H0_SIZE,LR,WD,SHOW,SHOW_STEP,DTYPE, L,DL)
# net.pshow()

if 0:  # optimization: backpropagation
	NEPOCHS = 0x100  # 0x100 0x400 0x1000

	# train net
	loss = net.train(NEPOCHS, trainx,trainy)

	# test net
	# net.pshow()
	y = net.fwd(trainx)[-1]
	dprint('\x1b[92mtest\x1b[0m', n=2)
	print(f'L \x1b[31m{net.L(trainy,y):.6f} \x1b[0m{y.squeeze()}')

	# import matplotlib.pyplot as plt
	# plt.figure(figsize=(16,9))
	# plt.plot(np.log(loss), linewidth=1, label='loss')
	# plt.tight_layout()
	# plt.show()

else:  # optimization: PSO
	NEPOCHS = 0x10
	K       = int(0x10*net.nparams**0.25)  # nparticles
	C0      = 0.6  # 0.8 0.6  # PSO hyperparameters. need not sum to 1?
	C1      = 0.2  # 0.1 0.2
	C2      = 0.2  # 0.1 0.2
	S0      = 7    # sometimes parameters can be large; don't be afraid to values much larger than 1 (like 7)
	S1      = 1

	pso = PSO(C0,C1,C2,S0,S1,K, net.fwdpl, net,trainx,trainy)
	pso.train(NEPOCHS)

	net.punflatten(pso.gbestx)
	net.pshow()
	dprint(net.fwd(trainx)[-1].squeeze())
