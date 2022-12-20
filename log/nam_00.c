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

void dotshow(u32** dot){  // @arg dot  a vector of type u32[2], ie. u32[][]
	print("\n\x1b[92m%c\x1b[0m\n", __func__);
	mfor(i, 0,vidim(dot)){
		u32* row = dot[i];
		printf("n%02x = F(", i);  // printf("%c = F(", 0x61+i);
		vfor(row,it1)
#if 1
			switch(*it1){
				case OPADD:   printf(" + ");          break;  // putchar(0x2b);
				case OPMUL:   putchar(0x2a);          break;
				default:      printf("%c",0x61+*it1); break;
			}
#endif
#if 0
			if(     *it1==OPADD)  printf(" + ");  // putchar(0x2b);
			else if(*it1==OPMUL)  putchar(0x2a);
			else                  printf("%c",0x61+*it1);  // printf("%02x",*it1);
#endif
#if 0  // n{0kx:i} means the output of neuron i (where neurons are indexed using k hex digits  // w{0kx:i}{0kx:j} means the weight connection neuron n{0kx:i} to neuron n{0kx:j}
			if(     *it1==OPADD)  printf(" + n");  // putchar(0x2b);
			else if(*it1==OPMUL)  printf(" * w");
			else                  printf("%02x",*it1);  // printf("%02x",*it1);
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
	mfor(i,0,n) printf("   %c  ",0x61+i);  putchar(0x0a);
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
		if(val==0x30)  op0=0x20, op1=0x5f, a=0x5f,   b=0x5f;
		else           op0=0x2b, op1=0x2a, a=0x61+i, b=0x61+j;
		printf(" %c%c%c%c%c", op0,a,op1, a,b);
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
