/*
t tcc   nam.c -o nam                          &&  t ./nam
t gcc-8 nam.c -o nam                          &&  t ./nam
t gcc-8 nam.c -o nam  $cflags $cnopie $cfast  &&  t ./nam
*/
#include <mathisart4.h>

#define FILEPATH "nn00.nam"

#define OPADD    0xffffffff
#define OPMUL    0xfffffffe

// ----------------------------------------------------------------------------------------------------------------------------# @blk1
void namshow(i64 n, u32* NAM){  // parameter-show
	print("\n\x1b[92m%c\x1b[0m\n", __func__);
	i64 C = divceilu(n,32);  // cols
	print("\x1b[31m%,d \x1b[32m%,d\x1b[0m\n", n,C);
	mfor(i, 0,n){
		mfor(j, 0,C)
			printf("%s %d", fmtbl(NAM[i*C+j],n), n);
		putchar(0x0a);
	}
}

void dotshow(u32** dot){  // @arg dot  a vector of type u32[2], ie. u32[][]  // nj = SUM[i,0,?, ni*wij]  // THE VALUE OF EACH NEURON nj IS ALWAYS ALWAYS A SIMPLE DOT PRODUCT
	print("\n\x1b[92m%c  \x1b[0mn\x1b[32mj\x1b[0m \x1b[91m= \x1b[0mSUM\x1b[91m[\x1b[31mi\x1b[91m,\x1b[92mI\x1b[32mj\x1b[91m, \x1b[0mn\x1b[31mi\x1b[91m*\x1b[0mw\x1b[31mi\x1b[32mj\x1b[91m]\x1b[0m\n", __func__);
	print("\x1b[91m- \x1b[0mthe VALUE of EACH NEURON n\x1b[32mj\x1b[0m is ALWAYS ALWAYS a SIMPLE DOT PRODUCT, where \x1b[92mI\x1b[32mj \x1b[0mis a (possibly empty) set of indices (eg. \x1b[91m{\x1b[0m1\x1b[91m,\x1b[0m3\x1b[91m,\x1b[0m4\x1b[91m}\x1b[0m) that depends on each neuron n\x1b[32mj\x1b[0m\n");
	print("\x1b[91m- \x1b[91m{\x1b[0mn\x1b[32mj  \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m}          \x1b[0mis the set of all NEURONS. in the literature it seems to be IMPLICIT\n");
	print("\x1b[91m- \x1b[91m{\x1b[0mw\x1b[31mi\x1b[32mj \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m, \x1b[31mi \x1b[91min \x1b[92mI\x1b[32mj\x1b[91m} \x1b[0mis the set of all NEURON CONNECTIONS (aka. synapses, weights, parameters), the famous \"set of parameters\".\n");
	print("  w\x1b[31mi\x1b[32mj \x1b[0m means that neuron n\x1b[31mi \x1b[0mis connected to neuron n\x1b[32mj\x1b[0m\n");
	print("  NOTE that for each \x1b[32mj \x1b[0mthere's a different set of \x1b[31mi\x1b[0m-indices \x1b[92mI\x1b[32mj\x1b[0m\n");
	print("\x1b[91m- \x1b[0mto FULLY SPECIFY (the topology/connectivity of) a FEEDFORWARD-ONLY net (ie. a net with no feedback/backward connections, LIKE an fc net, a conv net, an rnn, and UNLIKE a deep boltzmann machine)\n");
	print("  it suffices to SPECIFY \x1b[92mN \x1b[0mand \x1b[92mI\x1b[32mj \x1b[0mfor each \x1b[32mj \x1b[91min \x1b[92mN\x1b[0m.\n");
	print("  example.\n");
	print("    let \x1b[92mN \x1b[0mbe \x1b[34m0x\x1b[35m0e\n");
	print("    let \x1b[92mI\x1b[32m00 \x1b[0mbe \x1b[91m{\x1b[0m\x1b[91m} \x1b[0m(input neuron: no inputs)\n");
	print("    let \x1b[92mI\x1b[32m01 \x1b[0mbe \x1b[91m{\x1b[0m\x1b[91m} \x1b[0m(input neuron: no inputs)\n");
	print("    let \x1b[92mI\x1b[32m02 \x1b[0mbe \x1b[91m{\x1b[0m\x1b[91m} \x1b[0m(input neuron: no inputs)\n");
	print("    let \x1b[92mI\x1b[32m03 \x1b[0mbe \x1b[91m{\x1b[0m\x1b[91m} \x1b[0m(input neuron: no inputs)\n");
	print("    let \x1b[92mI\x1b[32m04 \x1b[0mbe \x1b[91m{\x1b[0m0,1\x1b[91m}\x1b[0m\n");
	print("    let \x1b[92mI\x1b[32m05 \x1b[0mbe \x1b[91m{\x1b[0m0,1,2\x1b[91m}\x1b[0m\n");
	print("    let \x1b[92mI\x1b[32m06 \x1b[0mbe \x1b[91m{\x1b[0m1,2,3\x1b[91m}\x1b[0m\n");
	print("    let \x1b[92mI\x1b[32m07 \x1b[0mbe \x1b[91m{\x1b[0m2,3\x1b[91m}\x1b[0m\n");
	print("    let \x1b[92mI\x1b[32m08 \x1b[0mbe \x1b[91m{\x1b[0m4,5\x1b[91m}\x1b[0m\n");
	print("    let \x1b[92mI\x1b[32m09 \x1b[0mbe \x1b[91m{\x1b[0m4,5,6\x1b[91m}\x1b[0m\n");
	print("    let \x1b[92mI\x1b[32m0a \x1b[0mbe \x1b[91m{\x1b[0m5,6,7\x1b[91m}\x1b[0m\n");
	print("    let \x1b[92mI\x1b[32m0b \x1b[0mbe \x1b[91m{\x1b[0m6,7\x1b[91m}\x1b[0m\n");
	print("    let \x1b[92mI\x1b[32m0c \x1b[0mbe \x1b[91m{\x1b[0m8,9,a,b\x1b[91m} \x1b[0m(output neuron: no outputs)\n");
	print("    let \x1b[92mI\x1b[32m0d \x1b[0mbe \x1b[91m{\x1b[0m8,9,a,b\x1b[91m} \x1b[0m(output neuron: no outputs)\n");
	mfor(i, 0,vidim(dot)){
		u32* row = dot[i];
		printf("n%02x = F(", i);  // printf("%c = F(",0x61+i);  printf("n%02x = F(",i);
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
			case OPADD: printf(" + n");      break;  // putchar(0x2b);
			case OPMUL: printf("*w");        break;  // putchar(0x2a); printf(" * w"); printf("*w");
			default:    printf("%02x",*it1); break;
		}
#endif
			// printf(" %02x",*it1);
		printf(")\n");
	}
}

void nam_str2mat(char* namtxt, i64* on,u32** oNAM){  // n is the number of neurons, including input and output "layers"
	char* pos = namtxt;  // puts(namtxt);
	i64   n   = 0;
	while(*pos!=0x00 && *pos!=0x0a){
		++pos; ++n;
	}
	sep(); print("\x1b[31m%,d \x1b[32m%,d  \x1b[34m%,d \x1b[0m%,d\n", n,divceilu(n,32), n*n, Bsize(u32)*n*divceilu(n,32));

	u32*   NAM = malloc(Bsize(u32)*n*divceilu(n,32));  memset(NAM,0x00,Bsize(u32)*n*divceilu(n,32));  // f32* P = malloc(Bsize(u32)*n*n); memset(P, 0x00,Bsize(u32)*n*n);  // we DO NOT want the full adjacency matrix, because, if there are 10^11 neurons, then the adjacency matrix has 10^22 neurons
	u32**  dot = vini1(u32*,n);
	mfor(i,0,n)  vpush(dot,vini(u32));
	pos         = namtxt;
	i64 C       = divceilu(n,32);
	i64 i       = 0;
	i64 j       = 0;
	int val     = 0;
	mfor(i,0,n) printf("        n%02x",i);  putchar(0x0a);  // printf("   %c  ",0x61+i);  printf("   n%02x",i);
	// printf("%c",0x61+0);
	while((val=*pos)!=0x00){
		++pos;
		if(val==0x0a){
			if(j!=n)         fail("expected %d rows, but got %d", n,j);
			// else if(i!=n-1)  printf("\n%c",0x61+i+1);
			else             putchar(0x0a);
			++i; j=0;
			continue;
		}else if(val==0x31)  NAM[i*C + j/32] |= 1 << j%32; // print(" (%02x,%02x,%02x,%3d,%3d,%c,%c)\n", i,j,val, i*C + j/32,j%32, fmtu32bl(1 << j%32));

		char op0,op1,a,b;

		// if(val==0x30)  op0=0x20, op1=0x5f, a=0x5f,   b=0x5f;
		// else           op0=0x2b, op1=0x2a, a=0x61+i, b=0x61+j;
		// printf(" %c%c%c%c%c", op0,a,op1, a,b);

		if(val==0x30){  putchar(0x20);  mfor(i,0,1+1+2+1+1+2+2) putchar(0x5f);  }
		else         {  printf(" %cn%02x%cw%02x%02x", 0x2b,i,0x2a, i,j);  }

		// if(val==0x31) printf("%d %d\n",i,j);

		if(val==0x31){  // as you go over columns j, you should add it to the columns j
			vpush(dot[j], OPADD);
			vpush(dot[j], i);
			vpush(dot[j], OPMUL);
			vpush(dot[j], i);
			vpush(dot[j], j);
		}

		++j;
	}  // putchar(0x20);  mfor(i,0,6*n) putchar(0x2d);  putchar(0x0a);

	namshow(n,NAM);
	dotshow(dot);

	vfor(dot,it0) vend(*it0);
	vend(dot);
	*on=n; *oNAM=NAM;
}

// ----------------------------------------------------------------------------------------------------------------------------# @blk1
int main(int nargs, char* args[]){
	char* filepath = FILEPATH;  if(1<nargs) filepath = args[1];
	if(access(filepath,F_OK|R_OK)<0){ fail("can't open \x1b[92m%s\x1b[0m",filepath); exit(1); }

	print("\x1b[92m%c\x1b[0m\n", filepath);
	file_t file = file_ini(filepath);
	i64 n; u32* P;
	nam_str2mat(file.data, &n,&P);
	file_end(&file);

	free(P);
	exit(0);
}

// def nam2cmat(nam:str=''):  # neural adjacency matrix to connection matrix
// 	nneurons = len(nam[:nam.find('\n')]) - 1
// 	return nam[:nam.find('\n')]
