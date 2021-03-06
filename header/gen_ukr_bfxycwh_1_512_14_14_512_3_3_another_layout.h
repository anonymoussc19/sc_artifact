
inline void cnn_ukr_float_scatter_6x2v_bfxy_bcxy_cwhf(float *A, float *B, float *C, long long sf_tile, long long *Astride){
__asm__(
"mov %[A], %%rax;"
"mov %[B], %%rbx;"
"mov %[C], %%rcx;"
"prefetcht0 0(%%rbx);"
"prefetcht0 64(%%rbx);"
"prefetcht0 128(%%rbx);"
"prefetcht0 192(%%rbx);"
"prefetcht0 256(%%rbx);"
"prefetcht0 320(%%rbx);"
"prefetcht0 384(%%rbx);"
"prefetcht0 448(%%rbx);"
"prefetcht0 512(%%rbx);"
"mov %[sf_tile], %%rsi;"
"mov %[Astride], %%r8;"

"vxorps %%ymm0, %%ymm0, %%ymm0;"
"vxorps %%ymm1, %%ymm1, %%ymm1;"
"vxorps %%ymm2, %%ymm2, %%ymm2;"
"vxorps %%ymm3, %%ymm3, %%ymm3;"
"vxorps %%ymm4, %%ymm4, %%ymm4;"
"vxorps %%ymm5, %%ymm5, %%ymm5;"
"vxorps %%ymm6, %%ymm6, %%ymm6;"
"vxorps %%ymm7, %%ymm7, %%ymm7;"
"vxorps %%ymm8, %%ymm8, %%ymm8;"
"vxorps %%ymm9, %%ymm9, %%ymm9;"
"vxorps %%ymm10, %%ymm10, %%ymm10;"
"vxorps %%ymm11, %%ymm11, %%ymm11;"
"vxorps %%ymm12, %%ymm12, %%ymm12;"
"vxorps %%ymm13, %%ymm13, %%ymm13;"
"vxorps %%ymm14, %%ymm14, %%ymm14;"
"vxorps %%ymm15, %%ymm15, %%ymm15;"
"mov 8(%%r8), %%r9;"
"mov 16(%%r8), %%r10;"
"mov 24(%%r8), %%r11;"
"mov 32(%%r8), %%r12;"
"mov 40(%%r8), %%r13;"
"mov 0(%%r8), %%r8;"

"prefetcht0 0(%%rcx);"
"prefetcht0 784(%%rcx);"
"prefetcht0 1568(%%rcx);"
"prefetcht0 2352(%%rcx);"
"prefetcht0 3136(%%rcx);"
"prefetcht0 3920(%%rcx);"
"prefetcht0 4704(%%rcx);"
"prefetcht0 5488(%%rcx);"
"prefetcht0 6272(%%rcx);"
"prefetcht0 7056(%%rcx);"
"prefetcht0 7840(%%rcx);"
"prefetcht0 8624(%%rcx);"
"prefetcht0 9408(%%rcx);"
"prefetcht0 10192(%%rcx);"
"prefetcht0 10976(%%rcx);"
"prefetcht0 11760(%%rcx);"
"test %%rsi, %%rsi;"
"jz .Lukr1002;"
".Lukr1001:"
"prefetcht0 1024(%%rax);"
"prefetcht0 1056(%%rax);"

"vmovaps 0(%%rbx), %%ymm2;"
"vmovaps 32(%%rbx), %%ymm3;"
"prefetcht0 576+0(%%rbx);"
"vbroadcastss 0(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 0(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 0(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 0(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
"vbroadcastss 0(%%rax,%%r12,4), %%ymm0;"
"vbroadcastss 0(%%rax,%%r13,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm12;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm13;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm14;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm15;"


"vmovaps 16*4(%%rbx), %%ymm2;"
"vmovaps 16*4+32(%%rbx), %%ymm3;"
"vbroadcastss 4(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 4(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 4(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 4(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
"vbroadcastss 4(%%rax,%%r12,4), %%ymm0;"
"vbroadcastss 4(%%rax,%%r13,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm12;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm13;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm14;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm15;"
"prefetcht0 576+16*4(%%rbx);"

"vmovaps 16*2*4(%%rbx), %%ymm2;"
"vmovaps 16*2*4+32(%%rbx), %%ymm3;"
"vbroadcastss 8(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 8(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 8(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 8(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
"vbroadcastss 8(%%rax,%%r12,4), %%ymm0;"
"vbroadcastss 8(%%rax,%%r13,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm12;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm13;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm14;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm15;"
"prefetcht0 576+16*2*4(%%rbx);"

"prefetcht0 1088(%%rax);"
"prefetcht0 1120(%%rax);"

"vmovaps 192*1+0(%%rbx), %%ymm2;"
"vmovaps 192*1+32(%%rbx), %%ymm3;"
"vbroadcastss 64(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 64(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 64(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 64(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
"vbroadcastss 64(%%rax,%%r12,4), %%ymm0;"
"vbroadcastss 64(%%rax,%%r13,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm12;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm13;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm14;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm15;"
"prefetcht0 576+192*1+0(%%rbx);"

"vmovaps 192*1+16*4(%%rbx), %%ymm2;"
"vmovaps 192*1+16*4+32(%%rbx), %%ymm3;"
"vbroadcastss 68(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 68(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 68(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 68(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
"vbroadcastss 68(%%rax,%%r12,4), %%ymm0;"
"vbroadcastss 68(%%rax,%%r13,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm12;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm13;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm14;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm15;"
"prefetcht0 576+192*1+16*4(%%rbx);"

"vmovaps 192*1+16*2*4(%%rbx), %%ymm2;"
"vmovaps 192*1+16*2*4+32(%%rbx), %%ymm3;"
"vbroadcastss 72(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 72(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 72(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 72(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
"vbroadcastss 72(%%rax,%%r12,4), %%ymm0;"
"vbroadcastss 72(%%rax,%%r13,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm12;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm13;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm14;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm15;"
"prefetcht0 576+192*1+16*2*4(%%rbx);"

"prefetcht0 1152(%%rax);"
"prefetcht0 1184(%%rax);"

"vmovaps 192*2(%%rbx), %%ymm2;"
"vmovaps 192*2+32(%%rbx), %%ymm3;"
"vbroadcastss 128(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 128(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 128(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 128(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
"vbroadcastss 128(%%rax,%%r12,4), %%ymm0;"
"vbroadcastss 128(%%rax,%%r13,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm12;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm13;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm14;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm15;"
"prefetcht0 576+192*2(%%rbx);"

"vmovaps 192*2+16*4(%%rbx), %%ymm2;"
"vmovaps 192*2+16*4+32(%%rbx), %%ymm3;"
"vbroadcastss 132(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 132(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 132(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 132(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
"vbroadcastss 132(%%rax,%%r12,4), %%ymm0;"
"vbroadcastss 132(%%rax,%%r13,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm12;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm13;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm14;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm15;"
"prefetcht0 576+192*2+16*4(%%rbx);"

"vmovaps 192*2+16*2*4(%%rbx), %%ymm2;"
"vmovaps 192*2+16*2*4+32(%%rbx), %%ymm3;"
"vbroadcastss 136(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 136(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 136(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 136(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
"vbroadcastss 136(%%rax,%%r12,4), %%ymm0;"
"vbroadcastss 136(%%rax,%%r13,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm12;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm13;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm14;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm15;"
"prefetcht0 576+192*2+16*2*4(%%rbx);"

"add $1024, %%rax;"
"add $576, %%rbx;"
"sub $1, %%rsi;"
"jnz .Lukr1001;"
".Lukr1002:"

//"jmp Lexit1;"
"vunpcklps %%ymm6, %%ymm4, %%ymm0;"
"vunpckhps %%ymm6, %%ymm4, %%ymm1;"
"vunpcklps %%ymm10, %%ymm8, %%ymm2;"
"vunpckhps %%ymm10, %%ymm8, %%ymm3;"
"vshufps $68, %%ymm2, %%ymm0, %%ymm4;"
"vshufps $238, %%ymm2, %%ymm0, %%ymm6;"
"vshufps $68, %%ymm3, %%ymm1, %%ymm8;"
"vshufps $238, %%ymm3, %%ymm1, %%ymm10;"
"vunpcklps %%ymm7, %%ymm5, %%ymm0;"
"vunpckhps %%ymm7, %%ymm5, %%ymm1;"
"vunpcklps %%ymm11, %%ymm9, %%ymm2;"
"vunpckhps %%ymm11, %%ymm9, %%ymm3;"
"vshufps $68, %%ymm2, %%ymm0, %%ymm5;"
"vshufps $238, %%ymm2, %%ymm0, %%ymm7;"
"vshufps $68, %%ymm3, %%ymm1, %%ymm9;"
"vshufps $238, %%ymm3, %%ymm1, %%ymm11;"
"vunpcklps %%ymm14, %%ymm12, %%ymm0;"
"vunpckhps %%ymm14, %%ymm12, %%ymm1;"
"vunpcklps %%ymm15, %%ymm13, %%ymm2;"
"vunpckhps %%ymm15, %%ymm13, %%ymm3;"
"vxorps %%ymm12, %%ymm12, %%ymm12;"
"vxorps %%ymm13, %%ymm13, %%ymm13;"
"vxorps %%ymm14, %%ymm14, %%ymm14;"
"vxorps %%ymm15, %%ymm15, %%ymm15;"
"vmovups 0(%%rcx), %%xmm12;"
"vmovups 784(%%rcx), %%xmm13;"
"vmovups 1568(%%rcx), %%xmm14;"
"vmovups 2352(%%rcx), %%xmm15;"
"vaddps %%ymm4, %%ymm12, %%ymm4;"
"vaddps %%ymm6, %%ymm13, %%ymm6;"
"vaddps %%ymm8, %%ymm14, %%ymm8;"
"vaddps %%ymm10, %%ymm15, %%ymm10;"
"vmovups %%xmm4, 0(%%rcx);"
"vmovups %%xmm6, 784(%%rcx);"
"vmovups %%xmm8, 1568(%%rcx);"
"vmovups %%xmm10, 2352(%%rcx);"
"vextractf128 $1, %%ymm4, %%xmm4;"
"vextractf128 $1, %%ymm6, %%xmm6;"
"vextractf128 $1, %%ymm8, %%xmm8;"
"vextractf128 $1, %%ymm10, %%xmm10;"
"vmovups 3136(%%rcx), %%xmm12;"
"vmovups 3920(%%rcx), %%xmm13;"
"vmovups 4704(%%rcx), %%xmm14;"
"vmovups 5488(%%rcx), %%xmm15;"
"vaddps %%ymm4, %%ymm12, %%ymm4;"
"vaddps %%ymm6, %%ymm13, %%ymm6;"
"vaddps %%ymm8, %%ymm14, %%ymm8;"
"vaddps %%ymm10, %%ymm15, %%ymm10;"
"vmovups %%xmm4, 3136(%%rcx);"
"vmovups %%xmm6, 3920(%%rcx);"
"vmovups %%xmm8, 4704(%%rcx);"
"vmovups %%xmm10, 5488(%%rcx);"
"vxorps %%ymm12, %%ymm12, %%ymm12;"
"vxorps %%ymm13, %%ymm13, %%ymm13;"
"vxorps %%ymm14, %%ymm14, %%ymm14;"
"vxorps %%ymm15, %%ymm15, %%ymm15;"
"vmovups 6272(%%rcx), %%xmm12;"
"vmovups 7056(%%rcx), %%xmm13;"
"vmovups 7840(%%rcx), %%xmm14;"
"vmovups 8624(%%rcx), %%xmm15;"
"vaddps %%ymm5, %%ymm12, %%ymm5;"
"vaddps %%ymm7, %%ymm13, %%ymm7;"
"vaddps %%ymm9, %%ymm14, %%ymm9;"
"vaddps %%ymm11, %%ymm15, %%ymm11;"
"vmovups %%xmm5, 6272(%%rcx);"
"vmovups %%xmm7, 7056(%%rcx);"
"vmovups %%xmm9, 7840(%%rcx);"
"vmovups %%xmm11, 8624(%%rcx);"
"vextractf128 $1, %%ymm5, %%xmm5;"
"vextractf128 $1, %%ymm7, %%xmm7;"
"vextractf128 $1, %%ymm9, %%xmm9;"
"vextractf128 $1, %%ymm11, %%xmm11;"
"vmovups 9408(%%rcx), %%xmm12;"
"vmovups 10192(%%rcx), %%xmm13;"
"vmovups 10976(%%rcx), %%xmm14;"
"vmovups 11760(%%rcx), %%xmm15;"
"vaddps %%ymm5, %%ymm12, %%ymm5;"
"vaddps %%ymm7, %%ymm13, %%ymm7;"
"vaddps %%ymm9, %%ymm14, %%ymm9;"
"vaddps %%ymm11, %%ymm15, %%ymm11;"
"vmovups %%xmm5, 9408(%%rcx);"
"vmovups %%xmm7, 10192(%%rcx);"
"vmovups %%xmm9, 10976(%%rcx);"
"vmovups %%xmm11, 11760(%%rcx);"
"vxorps %%ymm4, %%ymm4, %%ymm4;"
"vxorps %%ymm5, %%ymm5, %%ymm5;"
"vxorps %%ymm6, %%ymm6, %%ymm6;"
"vxorps %%ymm7, %%ymm7, %%ymm7;"
"vmovlps 16(%%rcx), %%xmm4, %%xmm4;"
"vmovhps 800(%%rcx), %%xmm4, %%xmm4;"
"vmovlps 1584(%%rcx), %%xmm5, %%xmm5;"
"vmovhps 2368(%%rcx), %%xmm5, %%xmm5;"
"vmovlps 6288(%%rcx), %%xmm6, %%xmm6;"
"vmovhps 7072(%%rcx), %%xmm6, %%xmm6;"
"vmovlps 7856(%%rcx), %%xmm7, %%xmm7;"
"vmovhps 8640(%%rcx), %%xmm7, %%xmm7;"
"vaddps %%ymm0, %%ymm4, %%ymm4;"
"vaddps %%ymm1, %%ymm5, %%ymm5;"
"vaddps %%ymm2, %%ymm6, %%ymm6;"
"vaddps %%ymm3, %%ymm7, %%ymm7;"
"vmovlps %%xmm4, 16(%%rcx);"
"vmovhps %%xmm4, 800(%%rcx);"
"vmovlps %%xmm5, 1584(%%rcx);"
"vmovhps %%xmm5, 2368(%%rcx);"
"vmovlps %%xmm6, 6288(%%rcx);"
"vmovhps %%xmm6, 7072(%%rcx);"
"vmovlps %%xmm7, 7856(%%rcx);"
"vmovhps %%xmm7, 8640(%%rcx);"
"vxorps %%ymm4, %%ymm4, %%ymm4;"
"vxorps %%ymm5, %%ymm5, %%ymm5;"
"vxorps %%ymm6, %%ymm6, %%ymm6;"
"vxorps %%ymm7, %%ymm7, %%ymm7;"
"vmovlps 3152(%%rcx), %%xmm12, %%xmm12;"
"vmovhps 3936(%%rcx), %%xmm12, %%xmm12;"
"vmovlps 4720(%%rcx), %%xmm13, %%xmm13;"
"vmovhps 5504(%%rcx), %%xmm13, %%xmm13;"
"vmovlps 9424(%%rcx), %%xmm14, %%xmm14;"
"vmovhps 10208(%%rcx), %%xmm14, %%xmm14;"
"vmovlps 10992(%%rcx), %%xmm15, %%xmm15;"
"vmovhps 11776(%%rcx), %%xmm15, %%xmm15;"
"vextractf128 $1, %%ymm0, %%xmm8;"
"vextractf128 $1, %%ymm1, %%xmm9;"
"vextractf128 $1, %%ymm2, %%xmm10;"
"vextractf128 $1, %%ymm3, %%xmm11;"
"vaddps %%ymm8, %%ymm12, %%ymm12;"
"vaddps %%ymm9, %%ymm13, %%ymm13;"
"vaddps %%ymm10, %%ymm14, %%ymm14;"
"vaddps %%ymm11, %%ymm15, %%ymm15;"
"vmovlps %%xmm12, 3152(%%rcx);"
"vmovhps %%xmm12, 3936(%%rcx);"
"vmovlps %%xmm13, 4720(%%rcx);"
"vmovhps %%xmm13, 5504(%%rcx);"
"vmovlps %%xmm14, 9424(%%rcx);"
"vmovhps %%xmm14, 10208(%%rcx);"
"vmovlps %%xmm15, 10992(%%rcx);"
"vmovhps %%xmm15, 11776(%%rcx);"

:
: [A] "m" (A),
 [B] "m" (B),
 [C] "m" (C),
 [sf_tile] "m" (sf_tile),
 [Astride] "m" (Astride)
: "rax", "rbx", "rcx", "rdx", "rsi", "rdi", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "ymm0", "ymm1", "ymm2", "ymm3", "ymm4", "ymm5", "ymm6", "ymm7", "ymm8", "ymm9", "ymm10", "ymm11", "ymm12", "ymm13", "ymm14", "ymm15");
}







inline void cnn_ukr_float_scatter_4x2v_bfxy_bcxy_cwhf(float *A, float *B, float *C, long long sf_tile, long long *Astride){
__asm__(
"mov %[A], %%rax;"
"mov %[B], %%rbx;"
"mov %[C], %%rcx;"
"prefetcht0 0(%%rbx);"
"mov %[sf_tile], %%rsi;"
"mov %[Astride], %%r8;"
"vxorps %%ymm4, %%ymm4, %%ymm4;"
"vxorps %%ymm5, %%ymm5, %%ymm5;"
"vxorps %%ymm6, %%ymm6, %%ymm6;"
"vxorps %%ymm7, %%ymm7, %%ymm7;"
"vxorps %%ymm8, %%ymm8, %%ymm8;"
"vxorps %%ymm9, %%ymm9, %%ymm9;"
"vxorps %%ymm10, %%ymm10, %%ymm10;"
"vxorps %%ymm11, %%ymm11, %%ymm11;"
"vxorps %%ymm12, %%ymm12, %%ymm12;"
"vxorps %%ymm13, %%ymm13, %%ymm13;"
"vxorps %%ymm14, %%ymm14, %%ymm14;"
"vxorps %%ymm15, %%ymm15, %%ymm15;"
"mov 8(%%r8), %%r9;"
"mov 16(%%r8), %%r10;"
"mov 24(%%r8), %%r11;"
"mov 32(%%r8), %%r12;"
"mov 40(%%r8), %%r13;"
"mov 0(%%r8), %%r8;"
"prefetcht0 0(%%rcx);"
"prefetcht0 784(%%rcx);"
"prefetcht0 1568(%%rcx);"
"prefetcht0 2352(%%rcx);"
"prefetcht0 3136(%%rcx);"
"prefetcht0 3920(%%rcx);"
"prefetcht0 4704(%%rcx);"
"prefetcht0 5488(%%rcx);"
"prefetcht0 6272(%%rcx);"
"prefetcht0 7056(%%rcx);"
"prefetcht0 7840(%%rcx);"
"prefetcht0 8624(%%rcx);"
"prefetcht0 9408(%%rcx);"
"prefetcht0 10192(%%rcx);"
"prefetcht0 10976(%%rcx);"
"prefetcht0 11760(%%rcx);"
"test %%rsi, %%rsi;"
"jz .Lpartukr2002;"
".Lpartukr2001:"
"prefetcht0 1024(%%rax);"
"prefetcht0 1056(%%rax);"

"vmovaps 0(%%rbx), %%ymm2;"
"vmovaps 32(%%rbx), %%ymm3;"
"prefetcht0 576+0(%%rbx);"
"vbroadcastss 0(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 0(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 0(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 0(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
/* "vbroadcastss 0(%%rax,%%r12,4), %%ymm0;" */
/* "vbroadcastss 0(%%rax,%%r13,4), %%ymm1;" */
/* "vfmadd231ps %%ymm0, %%ymm2, %%ymm12;" */
/* "vfmadd231ps %%ymm0, %%ymm3, %%ymm13;" */
/* "vfmadd231ps %%ymm1, %%ymm2, %%ymm14;" */
/* "vfmadd231ps %%ymm1, %%ymm3, %%ymm15;" */


"vmovaps 16*4(%%rbx), %%ymm2;"
"vmovaps 16*4+32(%%rbx), %%ymm3;"
"vbroadcastss 4(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 4(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 4(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 4(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
/* "vbroadcastss 4(%%rax,%%r12,4), %%ymm0;" */
/* "vbroadcastss 4(%%rax,%%r13,4), %%ymm1;" */
/* "vfmadd231ps %%ymm0, %%ymm2, %%ymm12;" */
/* "vfmadd231ps %%ymm0, %%ymm3, %%ymm13;" */
/* "vfmadd231ps %%ymm1, %%ymm2, %%ymm14;" */
/* "vfmadd231ps %%ymm1, %%ymm3, %%ymm15;" */
"prefetcht0 576+16*4(%%rbx);"

"vmovaps 16*2*4(%%rbx), %%ymm2;"
"vmovaps 16*2*4+32(%%rbx), %%ymm3;"
"vbroadcastss 8(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 8(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 8(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 8(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
/* "vbroadcastss 8(%%rax,%%r12,4), %%ymm0;" */
/* "vbroadcastss 8(%%rax,%%r13,4), %%ymm1;" */
/* "vfmadd231ps %%ymm0, %%ymm2, %%ymm12;" */
/* "vfmadd231ps %%ymm0, %%ymm3, %%ymm13;" */
/* "vfmadd231ps %%ymm1, %%ymm2, %%ymm14;" */
/* "vfmadd231ps %%ymm1, %%ymm3, %%ymm15;" */
"prefetcht0 576+16*2*4(%%rbx);"

"prefetcht0 1088(%%rax);"
"prefetcht0 1120(%%rax);"

"vmovaps 192*1+0(%%rbx), %%ymm2;"
"vmovaps 192*1+32(%%rbx), %%ymm3;"
"vbroadcastss 64(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 64(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 64(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 64(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
/* "vbroadcastss 64(%%rax,%%r12,4), %%ymm0;" */
/* "vbroadcastss 64(%%rax,%%r13,4), %%ymm1;" */
/* "vfmadd231ps %%ymm0, %%ymm2, %%ymm12;" */
/* "vfmadd231ps %%ymm0, %%ymm3, %%ymm13;" */
/* "vfmadd231ps %%ymm1, %%ymm2, %%ymm14;" */
/* "vfmadd231ps %%ymm1, %%ymm3, %%ymm15;" */
"prefetcht0 576+192*1+0(%%rbx);"

"vmovaps 192*1+16*4(%%rbx), %%ymm2;"
"vmovaps 192*1+16*4+32(%%rbx), %%ymm3;"
"vbroadcastss 68(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 68(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 68(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 68(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
/* "vbroadcastss 68(%%rax,%%r12,4), %%ymm0;" */
/* "vbroadcastss 68(%%rax,%%r13,4), %%ymm1;" */
/* "vfmadd231ps %%ymm0, %%ymm2, %%ymm12;" */
/* "vfmadd231ps %%ymm0, %%ymm3, %%ymm13;" */
/* "vfmadd231ps %%ymm1, %%ymm2, %%ymm14;" */
/* "vfmadd231ps %%ymm1, %%ymm3, %%ymm15;" */
"prefetcht0 576+192*1+16*4(%%rbx);"

"vmovaps 192*1+16*2*4(%%rbx), %%ymm2;"
"vmovaps 192*1+16*2*4+32(%%rbx), %%ymm3;"
"vbroadcastss 72(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 72(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 72(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 72(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
/* "vbroadcastss 72(%%rax,%%r12,4), %%ymm0;" */
/* "vbroadcastss 72(%%rax,%%r13,4), %%ymm1;" */
/* "vfmadd231ps %%ymm0, %%ymm2, %%ymm12;" */
/* "vfmadd231ps %%ymm0, %%ymm3, %%ymm13;" */
/* "vfmadd231ps %%ymm1, %%ymm2, %%ymm14;" */
/* "vfmadd231ps %%ymm1, %%ymm3, %%ymm15;" */
"prefetcht0 576+192*1+16*2*4(%%rbx);"

"prefetcht0 1152(%%rax);"
"prefetcht0 1184(%%rax);"

"vmovaps 192*2(%%rbx), %%ymm2;"
"vmovaps 192*2+32(%%rbx), %%ymm3;"
"vbroadcastss 128(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 128(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 128(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 128(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
/* "vbroadcastss 128(%%rax,%%r12,4), %%ymm0;" */
/* "vbroadcastss 128(%%rax,%%r13,4), %%ymm1;" */
/* "vfmadd231ps %%ymm0, %%ymm2, %%ymm12;" */
/* "vfmadd231ps %%ymm0, %%ymm3, %%ymm13;" */
/* "vfmadd231ps %%ymm1, %%ymm2, %%ymm14;" */
/* "vfmadd231ps %%ymm1, %%ymm3, %%ymm15;" */
"prefetcht0 576+192*2(%%rbx);"

"vmovaps 192*2+16*4(%%rbx), %%ymm2;"
"vmovaps 192*2+16*4+32(%%rbx), %%ymm3;"
"vbroadcastss 132(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 132(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 132(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 132(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
/* "vbroadcastss 132(%%rax,%%r12,4), %%ymm0;" */
/* "vbroadcastss 132(%%rax,%%r13,4), %%ymm1;" */
/* "vfmadd231ps %%ymm0, %%ymm2, %%ymm12;" */
/* "vfmadd231ps %%ymm0, %%ymm3, %%ymm13;" */
/* "vfmadd231ps %%ymm1, %%ymm2, %%ymm14;" */
/* "vfmadd231ps %%ymm1, %%ymm3, %%ymm15;" */
"prefetcht0 576+192*2+16*4(%%rbx);"

"vmovaps 192*2+16*2*4(%%rbx), %%ymm2;"
"vmovaps 192*2+16*2*4+32(%%rbx), %%ymm3;"
"vbroadcastss 136(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 136(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 136(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 136(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
/* "vbroadcastss 136(%%rax,%%r12,4), %%ymm0;" */
/* "vbroadcastss 136(%%rax,%%r13,4), %%ymm1;" */
/* "vfmadd231ps %%ymm0, %%ymm2, %%ymm12;" */
/* "vfmadd231ps %%ymm0, %%ymm3, %%ymm13;" */
/* "vfmadd231ps %%ymm1, %%ymm2, %%ymm14;" */
/* "vfmadd231ps %%ymm1, %%ymm3, %%ymm15;" */
"prefetcht0 576+192*2+16*2*4(%%rbx);"

"add $1024, %%rax;"
"add $576, %%rbx;"
"sub $1, %%rsi;"
"jnz .Lpartukr2001;"
".Lpartukr2002:"
//"jmp Lexit2;"
"vunpcklps %%ymm6, %%ymm4, %%ymm0;"
"vunpckhps %%ymm6, %%ymm4, %%ymm1;"
"vunpcklps %%ymm10, %%ymm8, %%ymm2;"
"vunpckhps %%ymm10, %%ymm8, %%ymm3;"
"vshufps $68, %%ymm2, %%ymm0, %%ymm4;"
"vshufps $238, %%ymm2, %%ymm0, %%ymm6;"
"vshufps $68, %%ymm3, %%ymm1, %%ymm8;"
"vshufps $238, %%ymm3, %%ymm1, %%ymm10;"
"vunpcklps %%ymm7, %%ymm5, %%ymm0;"
"vunpckhps %%ymm7, %%ymm5, %%ymm1;"
"vunpcklps %%ymm11, %%ymm9, %%ymm2;"
"vunpckhps %%ymm11, %%ymm9, %%ymm3;"
"vshufps $68, %%ymm2, %%ymm0, %%ymm5;"
"vshufps $238, %%ymm2, %%ymm0, %%ymm7;"
"vshufps $68, %%ymm3, %%ymm1, %%ymm9;"
"vshufps $238, %%ymm3, %%ymm1, %%ymm11;"
"vunpcklps %%ymm14, %%ymm12, %%ymm0;"
"vunpckhps %%ymm14, %%ymm12, %%ymm1;"
"vunpcklps %%ymm15, %%ymm13, %%ymm2;"
"vunpckhps %%ymm15, %%ymm13, %%ymm3;"
"vxorps %%ymm12, %%ymm12, %%ymm12;"
"vxorps %%ymm13, %%ymm13, %%ymm13;"
"vxorps %%ymm14, %%ymm14, %%ymm14;"
"vxorps %%ymm15, %%ymm15, %%ymm15;"
"vmovups 0(%%rcx), %%xmm12;"
"vmovups 784(%%rcx), %%xmm13;"
"vmovups 1568(%%rcx), %%xmm14;"
"vmovups 2352(%%rcx), %%xmm15;"
"vaddps %%ymm4, %%ymm12, %%ymm4;"
"vaddps %%ymm6, %%ymm13, %%ymm6;"
"vaddps %%ymm8, %%ymm14, %%ymm8;"
"vaddps %%ymm10, %%ymm15, %%ymm10;"
"vmovups %%xmm4, 0(%%rcx);"
"vmovups %%xmm6, 784(%%rcx);"
"vmovups %%xmm8, 1568(%%rcx);"
"vmovups %%xmm10, 2352(%%rcx);"
"vextractf128 $1, %%ymm4, %%xmm4;"
"vextractf128 $1, %%ymm6, %%xmm6;"
"vextractf128 $1, %%ymm8, %%xmm8;"
"vextractf128 $1, %%ymm10, %%xmm10;"
"vmovups 3136(%%rcx), %%xmm12;"
"vmovups 3920(%%rcx), %%xmm13;"
"vmovups 4704(%%rcx), %%xmm14;"
"vmovups 5488(%%rcx), %%xmm15;"
"vaddps %%ymm4, %%ymm12, %%ymm4;"
"vaddps %%ymm6, %%ymm13, %%ymm6;"
"vaddps %%ymm8, %%ymm14, %%ymm8;"
"vaddps %%ymm10, %%ymm15, %%ymm10;"
"vmovups %%xmm4, 3136(%%rcx);"
"vmovups %%xmm6, 3920(%%rcx);"
"vmovups %%xmm8, 4704(%%rcx);"
"vmovups %%xmm10, 5488(%%rcx);"
"vxorps %%ymm12, %%ymm12, %%ymm12;"
"vxorps %%ymm13, %%ymm13, %%ymm13;"
"vxorps %%ymm14, %%ymm14, %%ymm14;"
"vxorps %%ymm15, %%ymm15, %%ymm15;"
"vmovups 6272(%%rcx), %%xmm12;"
"vmovups 7056(%%rcx), %%xmm13;"
"vmovups 7840(%%rcx), %%xmm14;"
"vmovups 8624(%%rcx), %%xmm15;"
"vaddps %%ymm5, %%ymm12, %%ymm5;"
"vaddps %%ymm7, %%ymm13, %%ymm7;"
"vaddps %%ymm9, %%ymm14, %%ymm9;"
"vaddps %%ymm11, %%ymm15, %%ymm11;"
"vmovups %%xmm5, 6272(%%rcx);"
"vmovups %%xmm7, 7056(%%rcx);"
"vmovups %%xmm9, 7840(%%rcx);"
"vmovups %%xmm11, 8624(%%rcx);"
"vextractf128 $1, %%ymm5, %%xmm5;"
"vextractf128 $1, %%ymm7, %%xmm7;"
"vextractf128 $1, %%ymm9, %%xmm9;"
"vextractf128 $1, %%ymm11, %%xmm11;"
"vmovups 9408(%%rcx), %%xmm12;"
"vmovups 10192(%%rcx), %%xmm13;"
"vmovups 10976(%%rcx), %%xmm14;"
"vmovups 11760(%%rcx), %%xmm15;"
"vaddps %%ymm5, %%ymm12, %%ymm5;"
"vaddps %%ymm7, %%ymm13, %%ymm7;"
"vaddps %%ymm9, %%ymm14, %%ymm9;"
"vaddps %%ymm11, %%ymm15, %%ymm11;"
"vmovups %%xmm5, 9408(%%rcx);"
"vmovups %%xmm7, 10192(%%rcx);"
"vmovups %%xmm9, 10976(%%rcx);"
"vmovups %%xmm11, 11760(%%rcx);"

/* "vxorps %%ymm4, %%ymm4, %%ymm4;" */
/* "vxorps %%ymm5, %%ymm5, %%ymm5;" */
/* "vxorps %%ymm6, %%ymm6, %%ymm6;" */
/* "vxorps %%ymm7, %%ymm7, %%ymm7;" */
/* "vmovlps 16(%%rcx), %%xmm4, %%xmm4;" */
/* "vmovhps 800(%%rcx), %%xmm4, %%xmm4;" */
/* "vmovlps 1584(%%rcx), %%xmm5, %%xmm5;" */
/* "vmovhps 2368(%%rcx), %%xmm5, %%xmm5;" */
/* "vmovlps 6288(%%rcx), %%xmm6, %%xmm6;" */
/* "vmovhps 7072(%%rcx), %%xmm6, %%xmm6;" */
/* "vmovlps 7856(%%rcx), %%xmm7, %%xmm7;" */
/* "vmovhps 8640(%%rcx), %%xmm7, %%xmm7;" */
/* "vaddps %%ymm0, %%ymm4, %%ymm4;" */
/* "vaddps %%ymm1, %%ymm5, %%ymm5;" */
/* "vaddps %%ymm2, %%ymm6, %%ymm6;" */
/* "vaddps %%ymm3, %%ymm7, %%ymm7;" */
/* "vmovlps %%xmm4, 16(%%rcx);" */
/* "vmovhps %%xmm4, 800(%%rcx);" */
/* "vmovlps %%xmm5, 1584(%%rcx);" */
/* "vmovhps %%xmm5, 2368(%%rcx);" */
/* "vmovlps %%xmm6, 6288(%%rcx);" */
/* "vmovhps %%xmm6, 7072(%%rcx);" */
/* "vmovlps %%xmm7, 7856(%%rcx);" */
/* "vmovhps %%xmm7, 8640(%%rcx);" */
/* "vxorps %%ymm4, %%ymm4, %%ymm4;" */
/* "vxorps %%ymm5, %%ymm5, %%ymm5;" */
/* "vxorps %%ymm6, %%ymm6, %%ymm6;" */
/* "vxorps %%ymm7, %%ymm7, %%ymm7;" */
/* "vmovlps 3152(%%rcx), %%xmm12, %%xmm12;" */
/* "vmovhps 3936(%%rcx), %%xmm12, %%xmm12;" */
/* "vmovlps 4720(%%rcx), %%xmm13, %%xmm13;" */
/* "vmovhps 5504(%%rcx), %%xmm13, %%xmm13;" */
/* "vmovlps 9424(%%rcx), %%xmm14, %%xmm14;" */
/* "vmovhps 10208(%%rcx), %%xmm14, %%xmm14;" */
/* "vmovlps 10992(%%rcx), %%xmm15, %%xmm15;" */
/* "vmovhps 11776(%%rcx), %%xmm15, %%xmm15;" */
/* "vextractf128 $1, %%ymm0, %%xmm8;" */
/* "vextractf128 $1, %%ymm1, %%xmm9;" */
/* "vextractf128 $1, %%ymm2, %%xmm10;" */
/* "vextractf128 $1, %%ymm3, %%xmm11;" */
/* "vaddps %%ymm8, %%ymm12, %%ymm12;" */
/* "vaddps %%ymm9, %%ymm13, %%ymm13;" */
/* "vaddps %%ymm10, %%ymm14, %%ymm14;" */
/* "vaddps %%ymm11, %%ymm15, %%ymm15;" */
/* "vmovlps %%xmm12, 3152(%%rcx);" */
/* "vmovhps %%xmm12, 3936(%%rcx);" */
/* "vmovlps %%xmm13, 4720(%%rcx);" */
/* "vmovhps %%xmm13, 5504(%%rcx);" */
/* "vmovlps %%xmm14, 9424(%%rcx);" */
/* "vmovhps %%xmm14, 10208(%%rcx);" */
/* "vmovlps %%xmm15, 10992(%%rcx);" */
/* "vmovhps %%xmm15, 11776(%%rcx);" */

:
: [A] "m" (A),
 [B] "m" (B),
 [C] "m" (C),
 [sf_tile] "m" (sf_tile),
 [Astride] "m" (Astride)
: "rax", "rbx", "rcx", "rdx", "rsi", "rdi", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "ymm0", "ymm1", "ymm2", "ymm3", "ymm4", "ymm5", "ymm6", "ymm7", "ymm8", "ymm9", "ymm10", "ymm11", "ymm12", "ymm13", "ymm14", "ymm15");
}
