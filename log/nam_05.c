/*
t tcc   nam.c -o nam                          &&  t ./nam
t gcc-8 nam.c -o nam                          &&  t ./nam
t gcc-8 nam.c -o nam  $cflags $cnopie $cfast  &&  t ./nam

# .nir file format spec

- 1 .nir file encodes 1 neural net
- all number are interpreted as big-endian in hex base, over the alphabet: @{0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f}. eg. the NIR number @ffff is the (big-endian, decimal) number @65535, also known as sixty-five thousand five hundred and thirty-five
- each neuron @nj maps to a 2-tuple @(fj,Ij), where @fj is the activation fn for @nj, and @Ij is the set of in-indices @{i} for @nj, so that the value of each neuron @nj is `SUM[i,Ij, ni*wij]`
- activation fn codes:
	0: identity
	1: sigmoid
	2: tanh
	3: relu
	4: silu
	5: gelu
	6: swish
*/
#include <mathisart4.h>

#define NIRPATH "nn00.nir"
#define NAMPATH "nn00.nam"

#define OPADD    0xffffffff
#define OPMUL    0xfffffffe

// ----------------------------------------------------------------------------------------------------------------------------# @blk1
fdef void nntut(){  // nj = fj[SUM[i,Ij, ni*wij]]  // THE VALUE OF EACH NEURON nj IS ALWAYS ALWAYS A SIMPLE DOT PRODUCT
	sep();
	print("\x1b[92m%c\x1b[0m\n", __func__);
	print("\x1b[91m- \x1b[0mn\x1b[32mj       \x1b[0m\x1b[91m= \x1b[35mf\x1b[32mj\x1b[91m[\x1b[35mSUM\x1b[91m[\x1b[31mi\x1b[91m,\x1b[92mI\x1b[32mj\x1b[91m, \x1b[0mn\x1b[31mi\x1b[91m*\x1b[0mw\x1b[31mi\x1b[32mj\x1b[91m]]\x1b[0m\n");
	print("\x1b[91m- \x1b[34mD\x1b[0mLY\x1b[91m_\x1b[34mD\x1b[0mw\x1b[31mi\x1b[32mj \x1b[91m=    \x1b[35mSUM\x1b[91m[\x1b[34mk\x1b[91m,\x1b[92mO\x1b[32mj\x1b[91m, \x1b[34mD\x1b[0mLY\x1b[91m_\x1b[34mD\x1b[0mn\x1b[34mk\x1b[91m*\x1b[34mD\x1b[0mn\x1b[34mk\x1b[91m_\x1b[0mw\x1b[31mi\x1b[32mj\x1b[91m]\x1b[0m\n");
	print("\x1b[91m- \x1b[0mfwd-prop: the \x1b[91mVALUE                  \x1b[0mn\x1b[32mj       \x1b[0mof each \x1b[91mNEURON            \x1b[0mn\x1b[32mj  \x1b[0mis ALWAYS a DOT PRODUCT (and \x1b[35mf\x1b[32mj\x1b[91m[]\x1b[0m) over \x1b[91mNEURON IN -CONECTIONS \x1b[91m{\x1b[0mw\x1b[31mi\x1b[32mj\x1b[91m} \x1b[0mfor \x1b[91mIN -NEURONS \x1b[91m{\x1b[0mn\x1b[31mi\x1b[91m} \x1b[92minto   \x1b[0mn\x1b[32mj\x1b[0m\n");
	print("\x1b[91m- \x1b[0mbwd-prop: the \x1b[91mLOSS-WEIGHT DERIVATIVE \x1b[34mD\x1b[0mLY\x1b[91m_\x1b[34mD\x1b[0mw\x1b[31mi\x1b[32mj \x1b[0mof each \x1b[91mNEURON CONNECTION \x1b[0mw\x1b[31mi\x1b[32mj \x1b[0mis ALWAYS a DOT PRODUCT            over \x1b[91mNEURON OUT-CONECTIONS \x1b[91m{\x1b[0mw\x1b[32mj\x1b[34mk\x1b[91m} \x1b[0mfor \x1b[91mOUT-NEURONS \x1b[91m{\x1b[0mn\x1b[34mk\x1b[91m} \x1b[92mout of \x1b[0mn\x1b[32mj\x1b[0m\n");
	print("\x1b[91m- \x1b[0meach \x1b[92mI\x1b[32mj \x1b[0mis the set of all indices \x1b[91m{\x1b[31mi\x1b[91m} \x1b[0mfor \x1b[91mIN -NEURONS \x1b[91m{\x1b[0mn\x1b[31mi\x1b[91m} \x1b[92minto   \x1b[0mn\x1b[32mj\x1b[0m. eg. if \x1b[92mI\x1b[32m4 \x1b[0mis \x1b[91m{\x1b[31m0\x1b[91m,\x1b[31m1\x1b[91m}\x1b[0m, then n\x1b[31m0\x1b[0m,n\x1b[31m1 \x1b[0mgo   \x1b[92minto   \x1b[0mn\x1b[32m4\x1b[0m. n\x1b[31m0\x1b[0m,n\x1b[31m1 \x1b[0mcan simultaneously go   \x1b[92minto   \x1b[0mother neurons, say n\x1b[32m5\x1b[0m\n");
	print("\x1b[91m- \x1b[0meach \x1b[92mO\x1b[32mj \x1b[0mis the set of all indices \x1b[91m{\x1b[34mk\x1b[91m} \x1b[0mfor \x1b[91mOUT-NEURONS \x1b[91m{\x1b[0mn\x1b[34mk\x1b[91m} \x1b[92mout of \x1b[0mn\x1b[32mj\x1b[0m. eg. if \x1b[92mO\x1b[32m0 \x1b[0mis \x1b[91m{\x1b[34m4\x1b[91m,\x1b[34m5\x1b[91m}\x1b[0m, then n\x1b[34m4\x1b[0m,n\x1b[34m5 \x1b[0mcome \x1b[92mout of \x1b[0mn\x1b[32m0\x1b[0m. n\x1b[34m4\x1b[0m,n\x1b[34m5 \x1b[0mcan simultaneously come \x1b[92mout of \x1b[0mother neurons, say n\x1b[32m1\x1b[0m\n");
	print("\x1b[91m- \x1b[0meach factor in the summand \x1b[34mD\x1b[0mn\x1b[34mk\x1b[91m*\x1b[34mD\x1b[0mn\x1b[34mk\x1b[91m_\x1b[0mw\x1b[31mi\x1b[32mj \x1b[0min the dot product \x1b[35mSUM\x1b[91m[\x1b[34mk\x1b[91m,\x1b[92mO\x1b[32mj\x1b[91m, \x1b[34mD\x1b[0mLY\x1b[91m_\x1b[34mD\x1b[0mn\x1b[34mk\x1b[91m*\x1b[34mD\x1b[0mn\x1b[34mk\x1b[91m_\x1b[0mw\x1b[31mi\x1b[32mj\x1b[91m] \x1b[0mtriggers \x1b[35mO\x1b[91m[\x1b[92mN\x1b[91m^\x1b[0m2\x1b[91m] \x1b[0mproducts? but there are many repeated computations: this is backpropagation\n");
	putchar(0x0a);
	print("\x1b[91m- \x1b[0ma \x1b[91mneural net \x1b[0mis a \x1b[91mdirected graph\x1b[0m, where the \x1b[91mvertices \x1b[0mare \x1b[91mneurons \x1b[0mand the \x1b[91medges \x1b[0mare \x1b[91mneuron connections\x1b[0m\n");
	print("\x1b[91m- \x1b[0mthe \x1b[91mneuron connections \x1b[0mare the so-called \x1b[91mweights\x1b[0m\n");
	putchar(0x0a);
	print("\x1b[91m- \x1b[92mN                       \x1b[0mis the set of all INTEGERS in \x1b[91m[\x1b[0m0\x1b[91m..\x1b[92mN\x1b[91m)\x1b[0m, and also the number of \x1b[91mNEURONS\x1b[0m\n");
	print("\x1b[91m- \x1b[91m{\x1b[00mn\x1b[32mj  \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m}          \x1b[0mis the set of all \x1b[91mNEURONS\x1b[0m\n");
	print("\x1b[91m- \x1b[91m{\x1b[35mf\x1b[32mj  \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m}          \x1b[0mis the set of all \x1b[91mNEURON ACTIVATION FNS\x1b[0m\n");
	print("\x1b[91m- \x1b[91m{\x1b[92mI\x1b[32mj  \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m}          \x1b[0mis the set of all sets of \x1b[91mNEURON IN -CONNECTION INDICES\x1b[0m, where each \x1b[92mI\x1b[32mj \x1b[0mis the set of all indices \x1b[91m{\x1b[31mi\x1b[91m} \x1b[0mfor \x1b[91mIN -NEURONS \x1b[91m{\x1b[0mn\x1b[31mi\x1b[91m} \x1b[92minto   \x1b[0mn\x1b[32mj\x1b[0m. used during fwd-prop\x1b[0m\n");
	print("\x1b[91m- \x1b[91m{\x1b[92mO\x1b[32mj  \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m}          \x1b[0mis the set of all sets of \x1b[91mNEURON OUT-CONNECTION INDICES\x1b[0m, where each \x1b[92mO\x1b[32mj \x1b[0mis the set of all indices \x1b[91m{\x1b[34mk\x1b[91m} \x1b[0mfor \x1b[91mOUT-NEURONS \x1b[91m{\x1b[0mn\x1b[34mk\x1b[91m} \x1b[92mout of \x1b[0mn\x1b[32mj\x1b[0m. used during bwd-prop\x1b[0m\n");
	print("\x1b[91m- \x1b[91m{\x1b[0mw\x1b[31mi\x1b[32mj \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m, \x1b[31mi \x1b[91min \x1b[92mI\x1b[32mj\x1b[91m} \x1b[0mis the set of all \x1b[91mNEURON IN -CONNECTIONS \x1b[0mfrom neuron n\x1b[31mi \x1b[0mto neuron n\x1b[32mj \x1b[0m(aka. synapses, weights, parameters)\n");
	print("\x1b[91m- \x1b[91m{\x1b[0mw\x1b[32mj\x1b[34mk \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m, \x1b[34mk \x1b[91min \x1b[92mO\x1b[34mk\x1b[91m} \x1b[0mis the set of all \x1b[91mNEURON OUT-CONNECTIONS \x1b[0mfrom neuron n\x1b[32mj \x1b[0mto neuron n\x1b[34mk \x1b[0m(aka. synapses, weights, parameters)\n");
	print("\x1b[91m- \x1b[91m{\x1b[0mw\x1b[31mi\x1b[32mj \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m, \x1b[31mi \x1b[91min \x1b[92mI\x1b[32mj\x1b[91m} \x1b[0mand \x1b[91m{\x1b[0mw\x1b[32mj\x1b[34mk \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m, \x1b[34mk \x1b[91min \x1b[92mO\x1b[34mk\x1b[91m} \x1b[0mare isomorphic\n");
	print("\x1b[91m- \x1b[91m{\x1b[92mI\x1b[32mj  \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m} \x1b[0mand \x1b[91m{\x1b[92mO\x1b[32mj  \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m} \x1b[0mare isomorphic, via graph ops. complexity may be \x1b[35mO\x1b[91m[\x1b[0mV\x1b[91m] \x1b[0mw/ a hash table for each index set \x1b[92mI\x1b[32mj\x1b[0m/\x1b[92mO\x1b[32mj\x1b[0m, or \x1b[35mO\x1b[91m[\x1b[0mV\x1b[91m*\x1b[0mE\x1b[91m] \x1b[0mw/ an array for each index set \x1b[92mI\x1b[32mj\x1b[0m/\x1b[92mO\x1b[32mj\x1b[0m\n");
	print("\x1b[91m- \x1b[0mto FULLY SPECIFY (the topology/connectivity of) a net (feedforward-only like fc/conv/recurrent nets, or feedforward/feedback like deep boltzmann machines).\n");
	print("  it suffices to SPECIFY \x1b[92mN\x1b[0m, \x1b[35mf\x1b[32mj \x1b[0mfor each \x1b[32mj \x1b[91min \x1b[92mN\x1b[0m, and \x1b[92mI\x1b[32mj \x1b[0mfor each \x1b[32mj \x1b[91min \x1b[92mN\x1b[0m, OR\n");
	print("  it suffices to SPECIFY \x1b[92mN\x1b[0m, \x1b[35mf\x1b[32mj \x1b[0mfor each \x1b[32mj \x1b[91min \x1b[92mN\x1b[0m, and \x1b[92mO\x1b[32mj \x1b[0mfor each \x1b[32mj \x1b[91min \x1b[92mN\x1b[0m.\n");
	print("  this representation is called the \x1b[91mNIR \x1b[0m(neural index representation), because it encodes the (topology/connectivity of) the net via \x1b[92mN \x1b[0msets of indices.\n");
	print("  example (\x1b[91mNIR\x1b[0m).\n");
	print("    let \x1b[92mN \x1b[0mbe \x1b[34m0x\x1b[35m0e\x1b[0m. now:\n");
	print("      \x1b[91m- \x1b[0mthe \x1b[32mj\x1b[0m-indices             are in \x1b[91m{ \x1b[32m0\x1b[0m, \x1b[32m1\x1b[0m, \x1b[32m2\x1b[0m, \x1b[32m3\x1b[0m, \x1b[32m4\x1b[0m, \x1b[32m5\x1b[0m, \x1b[32m6\x1b[0m, \x1b[32m7\x1b[0m, \x1b[32m8\x1b[0m, \x1b[32m9\x1b[0m, \x1b[32ma\x1b[0m, \x1b[32mb\x1b[0m, \x1b[32mc\x1b[0m, \x1b[32md\x1b[0m\x1b[91m}\x1b[0m\n");
	print("      \x1b[91m- \x1b[0mthe neurons n\x1b[32mj            \x1b[0mare in \x1b[91m{\x1b[0mn\x1b[32m0\x1b[0m,n\x1b[32m1\x1b[0m,n\x1b[32m2\x1b[0m,n\x1b[32m3\x1b[0m,n\x1b[32m4\x1b[0m,n\x1b[32m5\x1b[0m,n\x1b[32m6\x1b[0m,n\x1b[32m7\x1b[0m,n\x1b[32m8\x1b[0m,n\x1b[32m9\x1b[0m,n\x1b[32ma\x1b[0m,n\x1b[32mb\x1b[0m,n\x1b[32mc\x1b[0m,n\x1b[32md\x1b[0m\x1b[91m}\x1b[0m\n");
	print("      \x1b[91m- \x1b[0mthe activation fns \x1b[35mf\x1b[32mj     \x1b[0mare in \x1b[91m{\x1b[35mf\x1b[32m0\x1b[0m,\x1b[35mf\x1b[32m1\x1b[0m,\x1b[35mf\x1b[32m2\x1b[0m,\x1b[35mf\x1b[32m3\x1b[0m,\x1b[35mf\x1b[32m4\x1b[0m,\x1b[35mf\x1b[32m5\x1b[0m,\x1b[35mf\x1b[32m6\x1b[0m,\x1b[35mf\x1b[32m7\x1b[0m,\x1b[35mf\x1b[32m8\x1b[0m,\x1b[35mf\x1b[32m9\x1b[0m,\x1b[35mf\x1b[32ma\x1b[0m,\x1b[35mf\x1b[32mb\x1b[0m,\x1b[35mf\x1b[32mc\x1b[0m,\x1b[35mf\x1b[32md\x1b[0m\x1b[91m}\x1b[0m\n");
	print("      \x1b[91m- \x1b[0mthe sets of in-indices \x1b[92mI\x1b[32mj \x1b[0mare in \x1b[91m{\x1b[92mI\x1b[32m0\x1b[0m,\x1b[92mI\x1b[32m1\x1b[0m,\x1b[92mI\x1b[32m2\x1b[0m,\x1b[92mI\x1b[32m3\x1b[0m,\x1b[92mI\x1b[32m4\x1b[0m,\x1b[92mI\x1b[32m5\x1b[0m,\x1b[92mI\x1b[32m6\x1b[0m,\x1b[92mI\x1b[32m7\x1b[0m,\x1b[92mI\x1b[32m8\x1b[0m,\x1b[92mI\x1b[32m9\x1b[0m,\x1b[92mI\x1b[32ma\x1b[0m,\x1b[92mI\x1b[32mb\x1b[0m,\x1b[92mI\x1b[32mc\x1b[0m,\x1b[92mI\x1b[32md\x1b[0m\x1b[91m}\x1b[0m\n");
	print("    let \x1b[92mI\x1b[32m0 \x1b[0mbe \x1b[91m{\x1b[0m\x1b[91m}         \x1b[0mso n\x1b[32m0 \x1b[0mcomes from nothing.     layer \x1b[35m0\x1b[0m: length \x1b[35m0 \x1b[0mdependency chain (input neuron: no inputs)\n");
	print("    let \x1b[92mI\x1b[32m1 \x1b[0mbe \x1b[91m{\x1b[0m\x1b[91m}         \x1b[0mso n\x1b[32m1 \x1b[0mcomes from nothing.     layer \x1b[35m0\x1b[0m: length \x1b[35m0 \x1b[0mdependency chain (input neuron: no inputs)\n");
	print("    let \x1b[92mI\x1b[32m2 \x1b[0mbe \x1b[91m{\x1b[0m\x1b[91m}         \x1b[0mso n\x1b[32m2 \x1b[0mcomes from nothing.     layer \x1b[35m0\x1b[0m: length \x1b[35m0 \x1b[0mdependency chain (input neuron: no inputs)\n");
	print("    let \x1b[92mI\x1b[32m3 \x1b[0mbe \x1b[91m{\x1b[0m\x1b[91m}         \x1b[0mso n\x1b[32m3 \x1b[0mcomes from nothing.     layer \x1b[35m0\x1b[0m: length \x1b[35m0 \x1b[0mdependency chain (input neuron: no inputs)\n");
	print("    let \x1b[92mI\x1b[32m4 \x1b[0mbe \x1b[91m{\x1b[0m0\x1b[91m,\x1b[0m1\x1b[91m}\x1b[0m.     so n\x1b[32m4 \x1b[0mcomes from n\x1b[31m0\x1b[0m,n\x1b[31m1\x1b[0m.       layer \x1b[35m1\x1b[0m: length \x1b[35m1 \x1b[0mdependency chain\n");
	print("    let \x1b[92mI\x1b[32m5 \x1b[0mbe \x1b[91m{\x1b[0m0\x1b[91m,\x1b[0m1\x1b[91m,\x1b[0m2\x1b[91m}\x1b[0m.   so n\x1b[32m5 \x1b[0mcomes from n\x1b[31m0\x1b[0m,n\x1b[31m1\x1b[0m,n\x1b[31m2\x1b[0m.    layer \x1b[35m1\x1b[0m: length \x1b[35m1 \x1b[0mdependency chain\n");
	print("    let \x1b[92mI\x1b[32m6 \x1b[0mbe \x1b[91m{\x1b[0m1\x1b[91m,\x1b[0m2\x1b[91m,\x1b[0m3\x1b[91m}\x1b[0m.   so n\x1b[32m6 \x1b[0mcomes from n\x1b[31m1\x1b[0m,n\x1b[31m2\x1b[0m,n\x1b[31m3\x1b[0m.    layer \x1b[35m1\x1b[0m: length \x1b[35m1 \x1b[0mdependency chain\n");
	print("    let \x1b[92mI\x1b[32m7 \x1b[0mbe \x1b[91m{\x1b[0m2\x1b[91m,\x1b[0m3\x1b[91m}\x1b[0m.     so n\x1b[32m7 \x1b[0mcomes from n\x1b[31m2\x1b[0m,n\x1b[31m3\x1b[0m.       layer \x1b[35m1\x1b[0m: length \x1b[35m1 \x1b[0mdependency chain\n");
	print("    let \x1b[92mI\x1b[32m8 \x1b[0mbe \x1b[91m{\x1b[0m4\x1b[91m,\x1b[0m5\x1b[91m}\x1b[0m.     so n\x1b[32m8 \x1b[0mcomes from n\x1b[31m4\x1b[0m,n\x1b[31m5\x1b[0m.       layer \x1b[35m2\x1b[0m: length \x1b[35m2 \x1b[0mdependency chain\n");
	print("    let \x1b[92mI\x1b[32m9 \x1b[0mbe \x1b[91m{\x1b[0m4\x1b[91m,\x1b[0m5\x1b[91m,\x1b[0m6\x1b[91m}\x1b[0m.   so n\x1b[32m9 \x1b[0mcomes from n\x1b[31m4\x1b[0m,n\x1b[31m5\x1b[0m,n\x1b[31m6\x1b[0m.    layer \x1b[35m2\x1b[0m: length \x1b[35m2 \x1b[0mdependency chain\n");
	print("    let \x1b[92mI\x1b[32ma \x1b[0mbe \x1b[91m{\x1b[0m5\x1b[91m,\x1b[0m6\x1b[91m,\x1b[0m7\x1b[91m}\x1b[0m.   so n\x1b[32ma \x1b[0mcomes from n\x1b[31m5\x1b[0m,n\x1b[31m6\x1b[0m,n\x1b[31m7\x1b[0m.    layer \x1b[35m2\x1b[0m: length \x1b[35m2 \x1b[0mdependency chain\n");
	print("    let \x1b[92mI\x1b[32mb \x1b[0mbe \x1b[91m{\x1b[0m6\x1b[91m,\x1b[0m7\x1b[91m}\x1b[0m.     so n\x1b[32mb \x1b[0mcomes from n\x1b[31m6\x1b[0m,n\x1b[31m7\x1b[0m.       layer \x1b[35m2\x1b[0m: length \x1b[35m2 \x1b[0mdependency chain\n");
	print("    let \x1b[92mI\x1b[32mc \x1b[0mbe \x1b[91m{\x1b[0m8\x1b[91m,\x1b[0m9\x1b[91m,\x1b[0ma\x1b[91m,\x1b[0mb\x1b[91m}\x1b[0m. so n\x1b[32mc \x1b[0mcomes from n\x1b[31m8\x1b[0m,n\x1b[31m9\x1b[0m,n\x1b[31ma\x1b[0m,n\x1b[31mb\x1b[0m. layer \x1b[35m3\x1b[0m: length \x1b[35m3 \x1b[0mdependency chain (output neuron: no outputs)\n");
	print("    let \x1b[92mI\x1b[32md \x1b[0mbe \x1b[91m{\x1b[0m8\x1b[91m,\x1b[0m9\x1b[91m,\x1b[0ma\x1b[91m,\x1b[0mb\x1b[91m}\x1b[0m. so n\x1b[32mc \x1b[0mcomes from n\x1b[31m8\x1b[0m,n\x1b[31m9\x1b[0m,n\x1b[31ma\x1b[0m,n\x1b[31mb\x1b[0m. layer \x1b[35m3\x1b[0m: length \x1b[35m3 \x1b[0mdependency chain (output neuron: no outputs)\n");
	print("    now \x1b[92mO\x1b[32m0 \x1b[0mis \x1b[91m{\x1b[0m4\x1b[91m,\x1b[0m5\x1b[91m}\x1b[0m.     so n\x1b[32m0 \x1b[0mgoes  into n\x1b[34m4\x1b[0m,n\x1b[34m5\x1b[0m\n");
	print("    now \x1b[92mO\x1b[32m1 \x1b[0mis \x1b[91m{\x1b[0m4\x1b[91m,\x1b[0m5\x1b[91m,\x1b[0m6\x1b[91m}\x1b[0m.   so n\x1b[32m1 \x1b[0mgoes  into n\x1b[34m4\x1b[0m,n\x1b[34m5\x1b[0m,n\x1b[34m6\x1b[0m\n");
	print("    now \x1b[92mO\x1b[32m2 \x1b[0mis \x1b[91m{\x1b[0m5\x1b[91m,\x1b[0m6\x1b[91m,\x1b[0m7\x1b[91m}\x1b[0m.   so n\x1b[32m2 \x1b[0mgoes  into n\x1b[34m5\x1b[0m,n\x1b[34m6\x1b[0m,n\x1b[34m7\x1b[0m\n");
	print("    now \x1b[92mO\x1b[32m3 \x1b[0mis \x1b[91m{\x1b[0m6\x1b[91m,\x1b[0m7\x1b[91m}\x1b[0m.     so n\x1b[32m3 \x1b[0mgoes  into n\x1b[34m6\x1b[0m,n\x1b[34m7\x1b[0m\n");
	print("    now \x1b[92mO\x1b[32m4 \x1b[0mis \x1b[91m{\x1b[0m8\x1b[91m,\x1b[0m9\x1b[91m\x1b[91m}\x1b[0m.     so n\x1b[32m4 \x1b[0mgoes  into n\x1b[34m8\x1b[0m,n\x1b[34m9\x1b[0m\n");
	print("    now \x1b[92mO\x1b[32m5 \x1b[0mis \x1b[91m{\x1b[0m8\x1b[91m,\x1b[0m9\x1b[91m,\x1b[0ma\x1b[91m}\x1b[0m.   so n\x1b[32m5 \x1b[0mgoes  into n\x1b[34m8\x1b[0m,n\x1b[34m9\x1b[0m,n\x1b[34ma\x1b[0m\n");
	print("    now \x1b[92mO\x1b[32m6 \x1b[0mis \x1b[91m{\x1b[0m9\x1b[91m,\x1b[0ma\x1b[91m,\x1b[0mb\x1b[91m}\x1b[0m.   so n\x1b[32m6 \x1b[0mgoes  into n\x1b[34m9\x1b[0m,n\x1b[34ma\x1b[0m,n\x1b[34mb\x1b[0m\n");
	print("    now \x1b[92mO\x1b[32m7 \x1b[0mis \x1b[91m{\x1b[0ma\x1b[91m,\x1b[0mb\x1b[91m}\x1b[0m.     so n\x1b[32m7 \x1b[0mgoes  into n\x1b[34ma\x1b[0m,n\x1b[34mb\x1b[0m\n");
	print("    now \x1b[92mO\x1b[32m8 \x1b[0mis \x1b[91m{\x1b[0mc\x1b[91m,\x1b[0md\x1b[91m}\x1b[0m.     so n\x1b[32m8 \x1b[0mgoes  into n\x1b[34mc\x1b[0m,n\x1b[34md\x1b[0m\n");
	print("    now \x1b[92mO\x1b[32m9 \x1b[0mis \x1b[91m{\x1b[0mc\x1b[91m,\x1b[0md\x1b[91m}\x1b[0m.     so n\x1b[32m9 \x1b[0mgoes  into n\x1b[34mc\x1b[0m,n\x1b[34md\x1b[0m\n");
	print("    now \x1b[92mO\x1b[32ma \x1b[0mis \x1b[91m{\x1b[0mc\x1b[91m,\x1b[0md\x1b[91m}\x1b[0m.     so n\x1b[32ma \x1b[0mgoes  into n\x1b[34mc\x1b[0m,n\x1b[34md\x1b[0m\n");
	print("    now \x1b[92mO\x1b[32mb \x1b[0mis \x1b[91m{\x1b[0mc\x1b[91m,\x1b[0md\x1b[91m}\x1b[0m.     so n\x1b[32mb \x1b[0mgoes  into n\x1b[34mc\x1b[0m,n\x1b[34md\x1b[0m\n");
	print("    now \x1b[92mO\x1b[32mc \x1b[0mis \x1b[91m{\x1b[91m}\x1b[0m.        so n\x1b[32mc \x1b[0mgoes  into nothing\x1b[0m\n");
	print("    now \x1b[92mO\x1b[32md \x1b[0mis \x1b[91m{\x1b[91m}\x1b[0m.        so n\x1b[32md \x1b[0mgoes  into nothing\x1b[0m\n");
	print("    this specifies a net with: 4 inputs, a 4-neuron (sparsely-connected) hidden layer, a 4-neuron (sparsely-connected) hidden layer, and 2 outputs\n");
	print("\x1b[91m- \x1b[0mthe \"number of layers\" is an implicit number given in the NAM/NIR, defined as the longest chain in a topological sort of the connectivity graph (implicitly) given by the NAM/NIR\n");
}

fdef void nirshow(){}

fdef void namshow(i64 n, u32* NAM){
	sep(); print("\x1b[92m%c\x1b[0m\n", __func__);
	i64 C = divceilu(n,32);  // cols
	print("\x1b[31m%,d \x1b[32m%,d\x1b[0m\n", n,C);
	mfor(i, 0,n){
		mfor(j, 0,C)
			printf("%s", fmtbl(NAM[i*C+j],n));
		putchar(0x0a);
	}
}

fdef void opsshow(u32** ops){  // @arg ops  a vector of type u32[2], ie. u32[][]  // nj = fj[SUM[i,Ij, ni*wij]]  // THE VALUE OF EACH NEURON nj IS ALWAYS ALWAYS A SIMPLE DOT PRODUCT
	sep();
	print("\x1b[92m%c\x1b[0m\n", __func__);
	print("\x1b[91m- \x1b[0mn\x1b[32mj       \x1b[0m\x1b[91m= \x1b[35mf\x1b[32mj\x1b[91m[\x1b[35mSUM\x1b[91m[\x1b[31mi\x1b[91m,\x1b[92mI\x1b[32mj\x1b[91m, \x1b[0mn\x1b[31mi\x1b[91m*\x1b[0mw\x1b[31mi\x1b[32mj\x1b[91m]]\x1b[0m\n");
	print("\x1b[91m- \x1b[34mD\x1b[0mLY\x1b[91m_\x1b[34mD\x1b[0mw\x1b[31mi\x1b[32mj \x1b[91m=    \x1b[35mSUM\x1b[91m[\x1b[34mk\x1b[91m,\x1b[92mO\x1b[32mj\x1b[91m, \x1b[34mD\x1b[0mLY\x1b[91m_\x1b[34mD\x1b[0mn\x1b[34mk\x1b[91m*\x1b[34mD\x1b[0mn\x1b[34mk\x1b[91m_\x1b[0mw\x1b[31mi\x1b[32mj\x1b[91m]\x1b[0m\n");

	mfor(i, 0,vidim(ops)){
		u32* row = ops[i];
		printf("n%02x = f%02x(", i,i);  // printf("%c = f(",0x61+i);  printf("n%02x = f(",i);
		vfor(row,it1)
#if 0
			switch(*it1){
				case OPADD: printf(" + ");          break;  // putchar(0x2b);
				case OPMUL: putchar(0x2a);          break;  // printf(" * w");
				default:    printf("%c",0x61+*it1); break;
			}
#endif
#if 1  // n{0kx:i} means the output of neuron i (where neurons are indexed using k hex digits  // w{0kx:i}{0kx:j} means the weight connection neuron n{0kx:i} to neuron n{0kx:j}
		switch(*it1){
			case OPADD: printf(" +n");       break;  // putchar(0x2b);
			case OPMUL: printf("*w");        break;  // putchar(0x2a); printf(" * w"); printf("*w");
			default:    printf("%02x",*it1); break;
		}
#endif
			// printf(" %02x",*it1);
		printf(")\n");
	}
}

// ----------------------------------------------------------------------------------------------------------------------------# @blk1
// @meta  NIR parse int. consume at least 1 character, or fail
#define nirpint(TXTBDIM,TXTDATA)({  \
	int _n   = 0;  \
	u8  _val = *TXTDATA;  if(!isasciihex(_val)){ fail("\x1b[31m%'d \x1b[32m%02x  \x1b[0mexpected an ascii hex byte", TXTBDIM,*TXTDATA); exit(1); }  \
	while(TXTBDIM && isasciihex(_val)){  \
		--TXTBDIM; ++TXTDATA;  \
	  _n *= 0x10;  \
	  _n += asciihex_to_u4(_val);  \
		_val = *TXTDATA;  \
	}  \
	--TXTBDIM; ++TXTDATA;  \
	_n;  \
})

fdef void nirparse(i64 txtbdim,u8* txtdata, i64* on){
	sep(); print("\x1b[92m%c\x1b[0m\n", __func__);
	if(txtbdim<3){ fail("file is too small: %'d bytes"); exit(1); }

	// ----------------------------------------------------------------
	if(*txtdata==0x25){
		while(txtbdim && *txtdata!=0x0a){ --txtbdim; ++txtdata; }  // line0 is a comment
		--txtbdim; ++txtdata;  // skip 0x0a
	}

	u8 val0 = *txtdata; --txtbdim; ++txtdata;
	u8 val1 = *txtdata; --txtbdim; ++txtdata;
	if(val0!=0x4e && val0!=0x6e){ fail("character 0 must be N or n");  exit(1); }
	if(val1!=0x20){               fail("character 1 must be a space"); exit(1); }

	// ----------------------------------------------------------------
	// i64 n = 0;
	// u8  val;
	// while(txtbdim && (val=*txtdata)!=0x0a){
	// 	--txtbdim; ++txtdata;
	//   n *= 0x10;
	//   n += asciihex_to_u4(val);
	// }
	// --txtbdim; ++txtdata;  // skip 0x0a
	i64 n = nirpint(txtbdim,txtdata);
	printf("\x1b[92mN \x1b[34m%02x\x1b[0m\n",n);

	// ----------------------------------------------------------------
	u32*  F = vini(u32);  // a vec of ints, where each int is the code for an activation fn
	u32** I = vini(u32);  // a vec of vecs of in-indices

	u8  val;
	while(txtbdim){
		val = *txtdata; --txtbdim; ++txtdata;
		putchar(val);
	}

	// ----------------------------------------------------------------
	vend(F);
	vend(I);
}

// ----------------------------------------------------------------------------------------------------------------------------# @blk1
void namparse(i64 txtbdim,u8* txtdata, i64* on,u32** oNAM){  // n is the number of neurons, including input and output "layers"
	sep(); print("\x1b[92m%c\x1b[0m\n", __func__);
	u8* pos = txtdata;  // puts(txtdata);
	i64 nr  = 0;       // nneurons across rows
	i64 nc  = 0;       // nneurons across cols
	while(*pos!=0x00 && *pos!=0x0a){
		++pos; ++nc;
	}

	i64   nambdim = Bsize(u32)*nc*divceilu(nc,32);
	u32*  NAM     = malloc(nambdim);  memset(NAM,0x00,nambdim);  // f32* P = malloc(Bsize(u32)*nc*nc); memset(P, 0x00,Bsize(u32)*nc*nc);  // we DO NOT want the full adjacency matrix, because, if there are 10^11 neurons, then the adjacency matrix has 10^22 neurons
	u32** OPS     = vini1(u32*,nc);  // a vector of operations
	print("\x1b[31m%,d \x1b[32m%,d  \x1b[34m%,d \x1b[0m%,d\n", nc,divceilu(nc,32), nc*nc, nambdim);

	mfor(i,0,nc)  vpush(OPS,vini(u32));
	pos   = txtdata;
	i64 C = divceilu(nc,32);
	i64 i = 0;
	i64 j = 0;
	u8  val;
	mfor(i,0,nc) printf("        n\x1b[32m%02x\x1b[0m",i);  putchar(0x0a);  // printf("   %c  ",0x61+i);  printf("   n%02x",i);
	printf("n\x1b[32m%02x\x1b[0m",0);
	while((val=*pos)!=0x00){
		++pos;
		if(val==0x0a){
			if(j!=nc){ fail("expected %d rows, but got %d", nc,j); exit(1); }
			// else if(i!=nc-1)  printf("\n%c",0x61+i+1);
			++i; j=0;
			if(i<nc) printf("\nn\x1b[32m%02x\x1b[0m",i);  // BUG! @print() is bugged! try: @print("\n");
			else     putchar(0x0a);
			continue;
		}else if(val==0x31)  NAM[i*C + j/32] |= 1 << j%32; // print(" (%02x,%02x,%02x,%3d,%3d,%c,%c)\n", i,j,val, i*C + j/32,j%32, fmtu32bl(1 << j%32));

		// char op0,op1,a,b;
		// if(val==0x30)  op0=0x20, op1=0x5f, a=0x5f,   b=0x5f;
		// else           op0=0x2b, op1=0x2a, a=0x61+i, b=0x61+j;
		// printf(" %c%c%c%c%c", op0,a,op1, a,b);

		if(val==0x30){  putchar(0x20);  mfor(i,0,1+1+2+1+1+2+2) putchar(0x5f);  }
		else         {  printf(" \x1b[91m%c\x1b[0mn\x1b[32m%02x\x1b[91m%c\x1b[0mw\x1b[31m%02x\x1b[32m%02x\x1b[0m", 0x2b,i,0x2a, i,j);  }

		// if(val==0x31) printf("%d %d\n",i,j);

		if(val==0x31){  // as you go over columns j, you should add it to the columns j
			vpush(OPS[j], OPADD);
			vpush(OPS[j], i);
			vpush(OPS[j], OPMUL);
			vpush(OPS[j], i);
			vpush(OPS[j], j);
		}

		++j;
	}  // putchar(0x20);  mfor(i,0,6*nc) putchar(0x2d);  putchar(0x0a);
	nr = i;
	if(nr!=nc){ fail("\x1b[34mnr \x1b[0mnot equal to \x1b[34mnc\x1b[0m, \x1b[34mnr\x1b[0m: \x1b[31m%d\x1b[0m, \x1b[34mnc\x1b[0m: \x1b[31m%d\x1b[0m", nr,nc); exit(1); }

	namshow(nc,NAM);
	opsshow(OPS);

	vfor(OPS,it0) vend(*it0);
	vend(OPS);
	*on=nc; *oNAM=NAM;
}

// ----------------------------------------------------------------------------------------------------------------------------# @blk1
fdefe int main(int nargs, char* args[]){
	char* filepath = NAMPATH;  if(1<nargs) filepath = args[1];
	if(access(filepath,F_OK|R_OK)<0){ fail("can't open \x1b[92m%s\x1b[0m",filepath); exit(1); }

	// ----------------------------------------------------------------
	print("filepath \x1b[34m%c\x1b[0m\n", filepath);
	nntut();

	i64 filepath_bdim = strlen(filepath);
	if(3<filepath_bdim && memcmp(".nam",filepath+filepath_bdim-4,4)==0){
		file_t namfile = file_ini(filepath);
		i64 n; u32* P=NULL;
		namparse(namfile.bdim,namfile.data, &n,&P);
		file_end(&namfile);
		free(P);
	}else{
		file_t nirfile = file_ini(filepath);
		i64 n;
		nirparse(nirfile.bdim,nirfile.data, &n);
		file_end(&nirfile);
	}

	// ----------------------------------------------------------------
	exit(0);
}

// def nam2cmat(nam:str=''):  # neural adjacency matrix to connection matrix
// 	nneurons = len(nam[:nam.find('\n')]) - 1
// 	return nam[:nam.find('\n')]
