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
void namtut(){  // nj = fj[SUM[i,Bj, ni*wij]]  // THE VALUE OF EACH NEURON nj IS ALWAYS ALWAYS A SIMPLE DOT PRODUCT
	sep();
	print("\x1b[92m%c\x1b[0m\n", __func__);
	print("\x1b[91m- \x1b[0mn\x1b[32mj\x1b[0m \x1b[91m= \x1b[35mf\x1b[32mj\x1b[91m[\x1b[35mSUM\x1b[91m[\x1b[31mi\x1b[91m,\x1b[92mB\x1b[32mj\x1b[91m, \x1b[0mn\x1b[31mi\x1b[91m*\x1b[0mw\x1b[31mi\x1b[32mj\x1b[91m]]\x1b[0m\n");
	print("\x1b[91m- \x1b[0mthe VALUE n\x1b[32mj \x1b[0mof each \x1b[91mNEURON \x1b[0mn\x1b[32mj\x1b[0m is ALWAYS ALWAYS a SIMPLE DOT PRODUCT (followed by \x1b[35mf\x1b[32mj\x1b[0m), where each \x1b[92mB\x1b[32mj \x1b[0mis a (maybe empty) set of indices (eg. \x1b[91m{\x1b[0m1\x1b[91m,\x1b[0m3\x1b[91m,\x1b[0m4\x1b[91m}\x1b[0m) associated to each neuron n\x1b[32mj\x1b[0m\n");
	putchar(0x0a);
	print("\x1b[91m- \x1b[92mN                       \x1b[0mis the set of all INTEGERS in \x1b[91m[\x1b[0m0 \x1b[91m.. \x1b[92mN\x1b[91m)\x1b[0m, and also the number of \x1b[91mNEURONS\x1b[0m\n");
	print("\x1b[91m- \x1b[91m{\x1b[00mn\x1b[32mj  \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m}          \x1b[0mis the set of all \x1b[91mNEURONS\x1b[0m\n");
	print("\x1b[91m- \x1b[91m{\x1b[35mf\x1b[32mj  \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m}          \x1b[0mis the set of all \x1b[91mNEURON ACTIVATION FNS\x1b[0m\n");
	print("\x1b[91m- \x1b[91m{\x1b[92mB\x1b[32mj  \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m}          \x1b[0mis the set of all sets of \x1b[91mNEURON BWD-CONNECTION INDICES\x1b[0m, where each NBCI set \x1b[92mB\x1b[32mj \x1b[0mis the set of all indices \x1b[31mi \x1b[0mfor neurons n\x1b[31mi \x1b[91minto \x1b[0mn\x1b[32mj\x1b[0m. used during fwd propagation\n");
	print("\x1b[91m- \x1b[91m{\x1b[92mF\x1b[32mj  \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m}          \x1b[0mis the set of all sets of \x1b[91mNEURON FWD-CONNECTION INDICES\x1b[0m, where each NFCI set \x1b[92mF\x1b[32mj \x1b[0mis the set of all indices \x1b[34mk \x1b[0mfor neurons n\x1b[34mk \x1b[91mfrom \x1b[0mn\x1b[32mj\x1b[0m. used during bwd propagation\n");
	print("\x1b[91m- \x1b[91m{\x1b[0mw\x1b[31mi\x1b[32mj \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m, \x1b[31mi \x1b[91min \x1b[92mB\x1b[32mj\x1b[91m} \x1b[0mis the set of all NEURON CONNECTIONS from neuron n\x1b[31mi \x1b[0mto neuron n\x1b[32mj \x1b[0m(aka. synapses, weights, parameters)\n");
	print("  \x1b[91m- \x1b[0mfor each \x1b[32mj \x1b[0mthere's a different set of bwd-indices \x1b[92mB\x1b[32mj\x1b[0m\n");
	print("\x1b[91m- \x1b[0mto FULLY SPECIFY (the topology/connectivity of) a net (feedforward-only like fc/conv/recurrent nets, or feedback/backward like deep boltzmann machines)\n");
	print("  it suffices to SPECIFY \x1b[92mN\x1b[0m, \x1b[35mf\x1b[32mj\x1b[0m, \x1b[0mand \x1b[92mB\x1b[32mj \x1b[0mfor each \x1b[32mj \x1b[91min \x1b[92mN\x1b[0m, OR\n");
	print("  it suffices to SPECIFY \x1b[92mN\x1b[0m, \x1b[35mf\x1b[32mj\x1b[0m, \x1b[0mand \x1b[92mF\x1b[32mj \x1b[0mfor each \x1b[32mj \x1b[91min \x1b[92mN\x1b[0m.\n");
	print("  this representation is called the NIR (neural index representation), because it encodes the (topology/connectivity of) the net via \x1b[92mN \x1b[0msets of indices.\n");
	print("  example (NIR).\n");
	print("    let \x1b[92mN \x1b[0mbe \x1b[34m0x\x1b[35m0e\x1b[0m. now:\n");
	print("      \x1b[91m- \x1b[0mthe \x1b[32mj\x1b[0m-indices                   are in \x1b[91m{ \x1b[32m0\x1b[0m, \x1b[32m1\x1b[0m, \x1b[32m2\x1b[0m, \x1b[32m3\x1b[0m, \x1b[32m4\x1b[0m, \x1b[32m5\x1b[0m, \x1b[32m6\x1b[0m, \x1b[32m7\x1b[0m, \x1b[32m8\x1b[0m, \x1b[32m9\x1b[0m, \x1b[32ma\x1b[0m, \x1b[32mb\x1b[0m, \x1b[32mc\x1b[0m, \x1b[32md\x1b[0m\x1b[91m}\x1b[0m\n");
	print("      \x1b[91m- \x1b[0mthe neurons n\x1b[32mj                  \x1b[0mare in \x1b[91m{\x1b[0mn\x1b[32m0\x1b[0m,n\x1b[32m1\x1b[0m,n\x1b[32m2\x1b[0m,n\x1b[32m3\x1b[0m,n\x1b[32m4\x1b[0m,n\x1b[32m5\x1b[0m,n\x1b[32m6\x1b[0m,n\x1b[32m7\x1b[0m,n\x1b[32m8\x1b[0m,n\x1b[32m9\x1b[0m,n\x1b[32ma\x1b[0m,n\x1b[32mb\x1b[0m,n\x1b[32mc\x1b[0m,n\x1b[32md\x1b[0m\x1b[91m}\x1b[0m\n");
	print("      \x1b[91m- \x1b[0mthe activation fns \x1b[35mf\x1b[32mj           \x1b[0mare in \x1b[91m{\x1b[35mf\x1b[32m0\x1b[0m,\x1b[35mf\x1b[32m1\x1b[0m,\x1b[35mf\x1b[32m2\x1b[0m,\x1b[35mf\x1b[32m3\x1b[0m,\x1b[35mf\x1b[32m4\x1b[0m,\x1b[35mf\x1b[32m5\x1b[0m,\x1b[35mf\x1b[32m6\x1b[0m,\x1b[35mf\x1b[32m7\x1b[0m,\x1b[35mf\x1b[32m8\x1b[0m,\x1b[35mf\x1b[32m9\x1b[0m,\x1b[35mf\x1b[32ma\x1b[0m,\x1b[35mf\x1b[32mb\x1b[0m,\x1b[35mf\x1b[32mc\x1b[0m,\x1b[35mf\x1b[32md\x1b[0m\x1b[91m}\x1b[0m\n");
	print("      \x1b[91m- \x1b[0mthe sets of bwd-indices \x1b[92mB\x1b[32mj \x1b[0mare in \x1b[91m{\x1b[92mB\x1b[32m0\x1b[0m,\x1b[92mB\x1b[32m1\x1b[0m,\x1b[92mB\x1b[32m2\x1b[0m,\x1b[92mB\x1b[32m3\x1b[0m,\x1b[92mB\x1b[32m4\x1b[0m,\x1b[92mB\x1b[32m5\x1b[0m,\x1b[92mB\x1b[32m6\x1b[0m,\x1b[92mB\x1b[32m7\x1b[0m,\x1b[92mB\x1b[32m8\x1b[0m,\x1b[92mB\x1b[32m9\x1b[0m,\x1b[92mB\x1b[32ma\x1b[0m,\x1b[92mB\x1b[32mb\x1b[0m,\x1b[92mB\x1b[32mc\x1b[0m,\x1b[92mB\x1b[32md\x1b[0m\x1b[91m}\x1b[0m\n");
	print("    let \x1b[92mB\x1b[32m0 \x1b[0mbe \x1b[91m{\x1b[0m\x1b[91m}         \x1b[0mso n\x1b[32m0 \x1b[0mcomes from nothing.     layer \x1b[35m0\x1b[0m: length \x1b[35m0 \x1b[0mdependency chain (input neuron: no inputs)\n");
	print("    let \x1b[92mB\x1b[32m1 \x1b[0mbe \x1b[91m{\x1b[0m\x1b[91m}         \x1b[0mso n\x1b[32m1 \x1b[0mcomes from nothing.     layer \x1b[35m0\x1b[0m: length \x1b[35m0 \x1b[0mdependency chain (input neuron: no inputs)\n");
	print("    let \x1b[92mB\x1b[32m2 \x1b[0mbe \x1b[91m{\x1b[0m\x1b[91m}         \x1b[0mso n\x1b[32m2 \x1b[0mcomes from nothing.     layer \x1b[35m0\x1b[0m: length \x1b[35m0 \x1b[0mdependency chain (input neuron: no inputs)\n");
	print("    let \x1b[92mB\x1b[32m3 \x1b[0mbe \x1b[91m{\x1b[0m\x1b[91m}         \x1b[0mso n\x1b[32m3 \x1b[0mcomes from nothing.     layer \x1b[35m0\x1b[0m: length \x1b[35m0 \x1b[0mdependency chain (input neuron: no inputs)\n");
	print("    let \x1b[92mB\x1b[32m4 \x1b[0mbe \x1b[91m{\x1b[0m0\x1b[91m,\x1b[0m1\x1b[91m}\x1b[0m.     so n\x1b[32m4\x1b[0m comes from n\x1b[32m0\x1b[0m,n\x1b[32m1\x1b[0m.       layer \x1b[35m1\x1b[0m: length \x1b[35m1 \x1b[0mdependency chain\n");
	print("    let \x1b[92mB\x1b[32m5 \x1b[0mbe \x1b[91m{\x1b[0m0\x1b[91m,\x1b[0m1\x1b[91m,\x1b[0m2\x1b[91m}\x1b[0m.   so n\x1b[32m5\x1b[0m comes from n\x1b[32m0\x1b[0m,n\x1b[32m1\x1b[0m,n\x1b[32m2\x1b[0m.    layer \x1b[35m1\x1b[0m: length \x1b[35m1 \x1b[0mdependency chain\n");
	print("    let \x1b[92mB\x1b[32m6 \x1b[0mbe \x1b[91m{\x1b[0m1\x1b[91m,\x1b[0m2\x1b[91m,\x1b[0m3\x1b[91m}\x1b[0m.   so n\x1b[32m6\x1b[0m comes from n\x1b[32m1\x1b[0m,n\x1b[32m2\x1b[0m,n\x1b[32m3\x1b[0m.    layer \x1b[35m1\x1b[0m: length \x1b[35m1 \x1b[0mdependency chain\n");
	print("    let \x1b[92mB\x1b[32m7 \x1b[0mbe \x1b[91m{\x1b[0m2\x1b[91m,\x1b[0m3\x1b[91m}\x1b[0m.     so n\x1b[32m7\x1b[0m comes from n\x1b[32m2\x1b[0m,n\x1b[32m3\x1b[0m.       layer \x1b[35m1\x1b[0m: length \x1b[35m1 \x1b[0mdependency chain\n");
	print("    let \x1b[92mB\x1b[32m8 \x1b[0mbe \x1b[91m{\x1b[0m4\x1b[91m,\x1b[0m5\x1b[91m}\x1b[0m.     so n\x1b[32m8\x1b[0m comes from n\x1b[32m4\x1b[0m,n\x1b[32m5\x1b[0m.       layer \x1b[35m2\x1b[0m: length \x1b[35m2 \x1b[0mdependency chain\n");
	print("    let \x1b[92mB\x1b[32m9 \x1b[0mbe \x1b[91m{\x1b[0m4\x1b[91m,\x1b[0m5\x1b[91m,\x1b[0m6\x1b[91m}\x1b[0m.   so n\x1b[32m9\x1b[0m comes from n\x1b[32m4\x1b[0m,n\x1b[32m5\x1b[0m,n\x1b[32m6\x1b[0m.    layer \x1b[35m2\x1b[0m: length \x1b[35m2 \x1b[0mdependency chain\n");
	print("    let \x1b[92mB\x1b[32ma \x1b[0mbe \x1b[91m{\x1b[0m5\x1b[91m,\x1b[0m6\x1b[91m,\x1b[0m7\x1b[91m}\x1b[0m.   so n\x1b[32ma\x1b[0m comes from n\x1b[32m5\x1b[0m,n\x1b[32m6\x1b[0m,n\x1b[32m7\x1b[0m.    layer \x1b[35m2\x1b[0m: length \x1b[35m2 \x1b[0mdependency chain\n");
	print("    let \x1b[92mB\x1b[32mb \x1b[0mbe \x1b[91m{\x1b[0m6\x1b[91m,\x1b[0m7\x1b[91m}\x1b[0m.     so n\x1b[32mb\x1b[0m comes from n\x1b[32m6\x1b[0m,n\x1b[32m7\x1b[0m.       layer \x1b[35m2\x1b[0m: length \x1b[35m2 \x1b[0mdependency chain\n");
	print("    let \x1b[92mB\x1b[32mc \x1b[0mbe \x1b[91m{\x1b[0m8\x1b[91m,\x1b[0m9\x1b[91m,\x1b[0ma\x1b[91m,\x1b[0mb\x1b[91m}\x1b[0m. so n\x1b[32mc\x1b[0m comes from n\x1b[32m8\x1b[0m,n\x1b[32m9\x1b[0m,n\x1b[32ma\x1b[0m,n\x1b[32mb\x1b[0m. layer \x1b[35m3\x1b[0m: length \x1b[35m3 \x1b[0mdependency chain (output neuron: no outputs)\n");
	print("    let \x1b[92mB\x1b[32md \x1b[0mbe \x1b[91m{\x1b[0m8\x1b[91m,\x1b[0m9\x1b[91m,\x1b[0ma\x1b[91m,\x1b[0mb\x1b[91m}\x1b[0m. so n\x1b[32mc\x1b[0m comes from n\x1b[32m8\x1b[0m,n\x1b[32m9\x1b[0m,n\x1b[32ma\x1b[0m,n\x1b[32mb\x1b[0m. layer \x1b[35m3\x1b[0m: length \x1b[35m3 \x1b[0mdependency chain (output neuron: no outputs)\n");
	print("    now \x1b[92mF\x1b[32m0 \x1b[0mis \x1b[91m{\x1b[0m4\x1b[91m,\x1b[0m5\x1b[91m}\x1b[0m.     so n\x1b[32m0\x1b[0m goes  into n\x1b[32m4\x1b[0m,n\x1b[32m5\x1b[0m\n");
	print("    now \x1b[92mF\x1b[32m1 \x1b[0mis \x1b[91m{\x1b[0m4\x1b[91m,\x1b[0m5\x1b[91m,\x1b[0m6\x1b[91m}\x1b[0m.   so n\x1b[32m1\x1b[0m goes  into n\x1b[32m4\x1b[0m,n\x1b[32m5\x1b[0m,n\x1b[32m6\x1b[0m\n");
	print("    now \x1b[92mF\x1b[32m2 \x1b[0mis \x1b[91m{\x1b[0m5\x1b[91m,\x1b[0m6\x1b[91m,\x1b[0m7\x1b[91m}\x1b[0m.   so n\x1b[32m2\x1b[0m goes  into n\x1b[32m5\x1b[0m,n\x1b[32m6\x1b[0m,n\x1b[32m7\x1b[0m\n");
	print("    now \x1b[92mF\x1b[32m3 \x1b[0mis \x1b[91m{\x1b[0m6\x1b[91m,\x1b[0m7\x1b[91m}\x1b[0m.     so n\x1b[32m3\x1b[0m goes  into n\x1b[32m6\x1b[0m,n\x1b[32m7\x1b[0m\n");
	print("    now \x1b[92mF\x1b[32m4 \x1b[0mis \x1b[91m{\x1b[0m8\x1b[91m,\x1b[0m9\x1b[91m\x1b[91m}\x1b[0m.     so n\x1b[32m4\x1b[0m goes  into n\x1b[32m8\x1b[0m,n\x1b[32m9\x1b[0m\n");
	print("    now \x1b[92mF\x1b[32m5 \x1b[0mis \x1b[91m{\x1b[0m8\x1b[91m,\x1b[0m9\x1b[91m,\x1b[0ma\x1b[91m}\x1b[0m.   so n\x1b[32m5\x1b[0m goes  into n\x1b[32m8\x1b[0m,n\x1b[32m9\x1b[0m,n\x1b[32ma\x1b[0m\n");
	print("    now \x1b[92mF\x1b[32m6 \x1b[0mis \x1b[91m{\x1b[0m9\x1b[91m,\x1b[0ma\x1b[91m,\x1b[0mb\x1b[91m}\x1b[0m.   so n\x1b[32m6\x1b[0m goes  into n\x1b[32m9\x1b[0m,n\x1b[32ma\x1b[0m,n\x1b[32mb\x1b[0m\n");
	print("    now \x1b[92mF\x1b[32m7 \x1b[0mis \x1b[91m{\x1b[0ma\x1b[91m,\x1b[0mb\x1b[91m}\x1b[0m.     so n\x1b[32m7\x1b[0m goes  into n\x1b[32ma\x1b[0m,n\x1b[32mb\x1b[0m\n");
	print("    now \x1b[92mF\x1b[32m8 \x1b[0mis \x1b[91m{\x1b[0mc\x1b[91m,\x1b[0md\x1b[91m}\x1b[0m.     so n\x1b[32m8\x1b[0m goes  into n\x1b[32mc\x1b[0m,n\x1b[32md\x1b[0m\n");
	print("    now \x1b[92mF\x1b[32m9 \x1b[0mis \x1b[91m{\x1b[0mc\x1b[91m,\x1b[0md\x1b[91m}\x1b[0m.     so n\x1b[32m9\x1b[0m goes  into n\x1b[32mc\x1b[0m,n\x1b[32md\x1b[0m\n");
	print("    now \x1b[92mF\x1b[32ma \x1b[0mis \x1b[91m{\x1b[0mc\x1b[91m,\x1b[0md\x1b[91m}\x1b[0m.     so n\x1b[32ma\x1b[0m goes  into n\x1b[32mc\x1b[0m,n\x1b[32md\x1b[0m\n");
	print("    now \x1b[92mF\x1b[32mb \x1b[0mis \x1b[91m{\x1b[0mc\x1b[91m,\x1b[0md\x1b[91m}\x1b[0m.     so n\x1b[32mb\x1b[0m goes  into n\x1b[32mc\x1b[0m,n\x1b[32md\x1b[0m\n");
	print("    now \x1b[92mF\x1b[32mc \x1b[0mis \x1b[91m{\x1b[91m}\x1b[0m.        so n\x1b[32mc\x1b[0m goes  into nothing\x1b[0m\n");
	print("    now \x1b[92mF\x1b[32md \x1b[0mis \x1b[91m{\x1b[91m}\x1b[0m.        so n\x1b[32md\x1b[0m goes  into nothing\x1b[0m\n");
	print("    this specifies a net with: 4 inputs, a 4-neuron (sparsely-connected) hidden layer, a 4-neuron (sparsely-connected) hidden layer, and 2 outputs\n");
	print("\x1b[91m- \x1b[0mthe \"number of layers\" is an implicit number gvien in the NAM/NIR, defined as the longest chain in a topological sort of the connectivity graph (implicitly) given by the NAM/NIR\n");
}

void namshow(i64 n, u32* NAM){
	sep(); print("\x1b[92m%c\x1b[0m\n", __func__);
	i64 C = divceilu(n,32);  // cols
	print("\x1b[31m%,d \x1b[32m%,d\x1b[0m\n", n,C);
	mfor(i, 0,n){
		mfor(j, 0,C)
			printf("%s", fmtbl(NAM[i*C+j],n));
		putchar(0x0a);
	}
}

void dotsshow(u32** dots){  // @arg dots  a vector of type u32[2], ie. u32[][]  // nj = fj[SUM[i,Ij, ni*wij]]  // THE VALUE OF EACH NEURON nj IS ALWAYS ALWAYS A SIMPLE DOT PRODUCT
	sep();
	print("\x1b[92m%c\x1b[0m\n", __func__);
	print("\x1b[91m- \x1b[0mn\x1b[32mj\x1b[0m \x1b[91m= \x1b[35mf\x1b[32mj\x1b[91m[\x1b[35mSUM\x1b[91m[\x1b[31mi\x1b[91m,\x1b[92mB\x1b[32mj\x1b[91m, \x1b[0mn\x1b[31mi\x1b[91m*\x1b[0mw\x1b[31mi\x1b[32mj\x1b[91m]]\x1b[0m\n");
	print("\x1b[91m- \x1b[34mD\x1b[0mLY\x1b[91m_\x1b[34mD\x1b[0mw\x1b[31mi\x1b[32mj \x1b[91m= \x1b[35mSUM\x1b[91m[\x1b[34mk\x1b[91m,\x1b[91m, \x1b[34mD\x1b[0mLY\x1b[91m_\x1b[34mD\x1b[0mn\x1b[34mk\x1b[91m*\x1b[34mD\x1b[0mn\x1b[34mk\x1b[91m_\x1b[0mw\x1b[31mi\x1b[32mj\x1b[91m]\x1b[0m\n");

	mfor(i, 0,vidim(dots)){
		u32* row = dots[i];
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

void namstr2mat(char* namtxt, i64* on,u32** oNAM){  // n is the number of neurons, including input and output "layers"
	sep(); print("\x1b[92m%c\x1b[0m\n", __func__);
	char* pos = namtxt;  // puts(namtxt);
	i64   nr  = 0;       // nneurons across rows
	i64   nc  = 0;       // nneurons across cols
	while(*pos!=0x00 && *pos!=0x0a){
		++pos; ++nc;
	}

	i64   nambdim = Bsize(u32)*nc*divceilu(nc,32);
	u32*  NAM     = malloc(nambdim);  memset(NAM,0x00,nambdim);  // f32* P = malloc(Bsize(u32)*nc*nc); memset(P, 0x00,Bsize(u32)*nc*nc);  // we DO NOT want the full adjacency matrix, because, if there are 10^11 neurons, then the adjacency matrix has 10^22 neurons
	u32** DOTS    = vini1(u32*,nc);  // a vector of dot products, each a product is a list of ...
	print("\x1b[31m%,d \x1b[32m%,d  \x1b[34m%,d \x1b[0m%,d\n", nc,divceilu(nc,32), nc*nc, nambdim);

	mfor(i,0,nc)  vpush(DOTS,vini(u32));
	pos     = namtxt;
	i64 C   = divceilu(nc,32);
	i64 i   = 0;
	i64 j   = 0;
	int val = 0;
	mfor(i,0,nc) printf("        n\x1b[32m%02x\x1b[0m",i);  putchar(0x0a);  // printf("   %c  ",0x61+i);  printf("   n%02x",i);
	// printf("%c",0x61+0);
	while((val=*pos)!=0x00){
		++pos;
		if(val==0x0a){
			if(j!=nc)        fail("expected %d rows, but got %d", nc,j);
			// else if(i!=nc-1)  printf("\n%c",0x61+i+1);
			else             putchar(0x0a);
			++i; j=0; ++nr;
			continue;
		}else if(val==0x31)  NAM[i*C + j/32] |= 1 << j%32; // print(" (%02x,%02x,%02x,%3d,%3d,%c,%c)\n", i,j,val, i*C + j/32,j%32, fmtu32bl(1 << j%32));

		char op0,op1,a,b;

		// if(val==0x30)  op0=0x20, op1=0x5f, a=0x5f,   b=0x5f;
		// else           op0=0x2b, op1=0x2a, a=0x61+i, b=0x61+j;
		// printf(" %c%c%c%c%c", op0,a,op1, a,b);

		if(val==0x30){  putchar(0x20);  mfor(i,0,1+1+2+1+1+2+2) putchar(0x5f);  }
		else         {  printf(" \x1b[91m%c\x1b[0mn\x1b[32m%02x\x1b[91m%c\x1b[0mw\x1b[31m%02x\x1b[32m%02x\x1b[0m", 0x2b,i,0x2a, i,j);  }

		// if(val==0x31) printf("%d %d\n",i,j);

		if(val==0x31){  // as you go over columns j, you should add it to the columns j
			vpush(DOTS[j], OPADD);
			vpush(DOTS[j], i);
			vpush(DOTS[j], OPMUL);
			vpush(DOTS[j], i);
			vpush(DOTS[j], j);
		}

		++j;
	}  // putchar(0x20);  mfor(i,0,6*nc) putchar(0x2d);  putchar(0x0a);
	if(nr!=nc){ fail("\x1b[34mnr\x1b[0m not equal to \x1b[34mnc\x1b[0m, \x1b[34mnr\x1b[0m: \x1b[31m%d\x1b[0m, \x1b[34mnc\x1b[0m: \x1b[31m%d\x1b[0m", nr,nc); exit(1); }

#if 0
	namshow(nc,NAM);
	dotsshow(DOTS);
#endif

	vfor(DOTS,it0) vend(*it0);
	vend(DOTS);
	*on=nc; *oNAM=NAM;
}

// ----------------------------------------------------------------------------------------------------------------------------# @blk1
int main(int nargs, char* args[]){
	char* filepath = FILEPATH;  if(1<nargs) filepath = args[1];
	if(access(filepath,F_OK|R_OK)<0){ fail("can't open \x1b[92m%s\x1b[0m",filepath); exit(1); }

	print("filepath \x1b[34m%c\x1b[0m\n", filepath);
	namtut();

	file_t file = file_ini(filepath);
	i64 n; u32* P;
	namstr2mat(file.data, &n,&P);
	file_end(&file);

	free(P);
	exit(0);
}

// def nam2cmat(nam:str=''):  # neural adjacency matrix to connection matrix
// 	nneurons = len(nam[:nam.find('\n')]) - 1
// 	return nam[:nam.find('\n')]
