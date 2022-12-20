/*
t gcc-8 ptx.c -o ptx -lcuda -l:libnvptxcompiler_static.a -lm -lpthread  &&  t ./ptx
ptxas ptx.c
stackoverflow.com/questions/20012318
*/
#include <stdio.h>
#include <string.h>
#include "cuda.h"
#include "nvPTXCompiler.h"

#define NUM_THREADS 0x40
#define NUM_BLOCKS  0x02
#define SIZE NUM_THREADS * NUM_BLOCKS

#define dchk(x)                                               \
	do {                                                                \
		CUresult result = x;                                            \
		if(result != CUDA_SUCCESS){                                   \
			const char *msg;                                            \
			cuGetErrorName(result, &msg);                               \
			printf("error: %s failed with error %s\n", #x, msg);        \
			exit(1);                                                    \
		}                                                               \
	} while(0)

#define ptxchk(x)                                       \
	do {                                                                 \
		nvPTXCompileResult result = x;                                   \
		if(result != NVPTXCOMPILE_SUCCESS){                            \
			printf("error: %s failed with error code %d\n", #x, result); \
			exit(1);                                                     \
		}                                                                \
	} while(0)

// ----------------------------------------------------------------------------------------------------------------------------# @blk1
// extern "C" __global__ void fn00(float* x, float* y, float* out){
//   size_t tid = blockIdx.x * blockDim.x + threadIdx.x;
//   out[tid] = x[tid] + y[tid];
// }
const char* ptxCode = "\
.version 7.0\n\
.target sm_70\n\
.address_size 64\n\
.visible .entry fn00(\n\
	.param .u64 fn00__param_0,\n\
	.param .u64 fn00__param_1,\n\
	.param .u64 fn00__param_2\n\
){\n\
	.reg .f32          %f<4>;\n\
	.reg .b32          %r<5>;\n\
	.reg .b64          %rd<11>;\n\
	ld.param.u64       %rd1, [fn00__param_0];\n\
	ld.param.u64       %rd2, [fn00__param_1];\n\
	ld.param.u64       %rd3, [fn00__param_2];\n\
	cvta.to.global.u64 %rd4, %rd3;\n\
	cvta.to.global.u64 %rd5, %rd2;\n\
	cvta.to.global.u64 %rd6, %rd1;\n\
\n\
	mov.u32            %r1, %ctaid.x;\n\
	mov.u32            %r2, %ntid.x;\n\
	mov.u32            %r3, %tid.x;\n\
\n\
	mad.lo.s32         %r4,   %r2,    %r1,  %r3;\n\
	mul.wide.u32       %rd7,  %r4,    4;\n\
	add.s64            %rd8,  %rd6,   %rd7;\n\
\n\
	ld.global.f32      %f1,   [%rd8];\n\
	add.s64            %rd9,  %rd5,   %rd7;\n\
\n\
	ld.global.f32      %f2,   [%rd9];\n\
	add.f32            %f3,   %f1,    %f2;\n\
	add.s64            %rd10, %rd4,   %rd7;\n\
\n\
	st.global.f32      [%rd10], %f3;\n\
	ret;\n\
}\n";
	
// ----------------------------------------------------------------------------------------------------------------------------# @blk1
int elf_ker_load_launch(void* elf, size_t elfSize){
	CUdevice cuDevice;
	CUcontext context;
	CUmodule module;
	CUfunction kernel;
	dchk(cuInit(0));
	dchk(cuDeviceGet(&cuDevice, 0));
	dchk(cuCtxCreate(&context, 0, cuDevice));
	dchk(cuModuleLoadDataEx(&module, elf, 0, 0, 0));
	dchk(cuModuleGetFunction(&kernel, module, "fn00"));

	size_t bufferSize = SIZE * sizeof(float);
	float hX[SIZE], hY[SIZE], hOut[SIZE];
	for(int i=0; i<SIZE; ++i){  // Generate input for execution, and create output buffers.
		hX[i] = (float)i;
		hY[i] = (float)i*2;
	}
	CUdeviceptr dX, dY, dOut;
	dchk(cuMemAlloc(&dX,   bufferSize));
	dchk(cuMemAlloc(&dY,   bufferSize));
	dchk(cuMemAlloc(&dOut, bufferSize));
	dchk(cuMemcpyHtoD(dX, hX, bufferSize));
	dchk(cuMemcpyHtoD(dY, hY, bufferSize));

	void* args[3];
	args[0] = &dX;
	args[1] = &dY;
	args[2] = &dOut;
	dchk(cuLaunchKernel(kernel, NUM_BLOCKS,1,1, NUM_THREADS,1,1, 0,NULL, args,0));
	dchk(cuCtxSynchronize());  // Retrieve and print output

	dchk(cuMemcpyDtoH(hOut, dOut, bufferSize));
	for(int i=0; i<SIZE; ++i)  printf("out \x1b[31m%3ld \x1b[32m%4.0f\x1b[0m\n", i, hOut[i]);

	dchk(cuMemFree(dX));
	dchk(cuMemFree(dY));
	dchk(cuMemFree(dOut));
	dchk(cuModuleUnload(module));
	dchk(cuCtxDestroy(context));
	return 0;
}
	
// ----------------------------------------------------------------------------------------------------------------------------# @blk1
int main(int _argc, char *_argv[]){
	nvPTXCompilerHandle compiler = NULL;
	nvPTXCompileResult status;

	size_t elfSize, infoSize, errorSize;
	char *elf, *infoLog, *errorLog;
	unsigned int minorVer, majorVer;

	ptxchk(nvPTXCompilerGetVersion(&majorVer, &minorVer));  printf("Current PTX Compiler API Version : %d.%d\n", majorVer, minorVer);
	ptxchk(nvPTXCompilerCreate(&compiler,(size_t)strlen(ptxCode), ptxCode));

	const char* compile_options[] = {"--gpu-name=sm_70", "--verbose"};
	status = nvPTXCompilerCompile(compiler, 2,compile_options);  /* numCompileOptions,compileOptions */
	if(status != NVPTXCOMPILE_SUCCESS){
		ptxchk(nvPTXCompilerGetErrorLogSize(compiler, &errorSize));

		if(errorSize != 0){
			errorLog = malloc(errorSize+1);
			ptxchk(nvPTXCompilerGetErrorLog(compiler, errorLog));
			printf("Error log: %s\n", errorLog);
			free(errorLog);
		}
		exit(1);
	}

	ptxchk(nvPTXCompilerGetCompiledProgramSize(compiler, &elfSize));

	elf = malloc(elfSize);
	ptxchk(nvPTXCompilerGetCompiledProgram(compiler, (void*)elf));

	ptxchk(nvPTXCompilerGetInfoLogSize(compiler, &infoSize));

	if(infoSize != 0){
		infoLog = malloc(infoSize+1);
		ptxchk(nvPTXCompilerGetInfoLog(compiler, infoLog));
		printf("Info log: %s\n", infoLog);
		free(infoLog);
	}

	ptxchk(nvPTXCompilerDestroy(&compiler));

	elf_ker_load_launch(elf, elfSize);  // Load the compiled GPU assembly code 'elf'
	free(elf);

	return 0;
}
