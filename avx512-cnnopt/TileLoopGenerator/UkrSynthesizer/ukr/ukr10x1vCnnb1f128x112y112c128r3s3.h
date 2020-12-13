#pragma once
#include "immintrin.h"
void ukr10x1vCnnb1f128x112y112c128r3s3(float* A,float* B,float* C,int* Astrd)
{
__m512 Amm0;
__m512 Amm1;
__m512 Amm2;
__m512 Amm3;
__m512 Amm4;
__m512 Amm5;
__m512 Amm6;
__m512 Amm7;
__m512 Amm8;
__m512 Amm9;
__m512 Bmm0;
__m512 Cmm0_0;
__m512 Cmm1_0;
__m512 Cmm2_0;
__m512 Cmm3_0;
__m512 Cmm4_0;
__m512 Cmm5_0;
__m512 Cmm6_0;
__m512 Cmm7_0;
__m512 Cmm8_0;
__m512 Cmm9_0;
Cmm0_0 = _mm512_setzero();
Cmm1_0 = _mm512_setzero();
Cmm2_0 = _mm512_setzero();
Cmm3_0 = _mm512_setzero();
Cmm4_0 = _mm512_setzero();
Cmm5_0 = _mm512_setzero();
Cmm6_0 = _mm512_setzero();
Cmm7_0 = _mm512_setzero();
Cmm8_0 = _mm512_setzero();
Cmm9_0 = _mm512_setzero();
_mm_prefetch(C+0, 0);
_mm_prefetch(C+12544, 0);
_mm_prefetch(C+25088, 0);
_mm_prefetch(C+37632, 0);
_mm_prefetch(C+50176, 0);
_mm_prefetch(C+62720, 0);
_mm_prefetch(C+75264, 0);
_mm_prefetch(C+87808, 0);
_mm_prefetch(C+100352, 0);
_mm_prefetch(C+112896, 0);
_mm_prefetch(C+125440, 0);
_mm_prefetch(C+137984, 0);
_mm_prefetch(C+150528, 0);
_mm_prefetch(C+163072, 0);
_mm_prefetch(C+175616, 0);
_mm_prefetch(C+188160, 0);
for(int c1 = 0;c1<32;c1+=1){
// c2iter=0, riter=0,siter=0
Amm0 = _mm512_set1_ps(A[0+0]);
Bmm0 = _mm512_load_ps(B+0);
Cmm0_0 = _mm512_fmadd_ps(Amm0, Bmm0, Cmm0_0);
Amm1 = _mm512_set1_ps(A[1+0]);
Cmm1_0 = _mm512_fmadd_ps(Amm1, Bmm0, Cmm1_0);
Amm2 = _mm512_set1_ps(A[2+0]);
Cmm2_0 = _mm512_fmadd_ps(Amm2, Bmm0, Cmm2_0);
Amm3 = _mm512_set1_ps(A[3+0]);
Cmm3_0 = _mm512_fmadd_ps(Amm3, Bmm0, Cmm3_0);
Amm4 = _mm512_set1_ps(A[4+0]);
Cmm4_0 = _mm512_fmadd_ps(Amm4, Bmm0, Cmm4_0);
Amm5 = _mm512_set1_ps(A[5+0]);
Cmm5_0 = _mm512_fmadd_ps(Amm5, Bmm0, Cmm5_0);
Amm6 = _mm512_set1_ps(A[6+0]);
Cmm6_0 = _mm512_fmadd_ps(Amm6, Bmm0, Cmm6_0);
Amm7 = _mm512_set1_ps(A[7+0]);
Cmm7_0 = _mm512_fmadd_ps(Amm7, Bmm0, Cmm7_0);
Amm8 = _mm512_set1_ps(A[8+0]);
Cmm8_0 = _mm512_fmadd_ps(Amm8, Bmm0, Cmm8_0);
Amm9 = _mm512_set1_ps(A[9+0]);
Cmm9_0 = _mm512_fmadd_ps(Amm9, Bmm0, Cmm9_0);
// c2iter=0, riter=0,siter=1
Amm0 = _mm512_set1_ps(A[9+1]);
Bmm0 = _mm512_load_ps(B+16);
Cmm0_0 = _mm512_fmadd_ps(Amm1, Bmm0, Cmm0_0);
Cmm1_0 = _mm512_fmadd_ps(Amm2, Bmm0, Cmm1_0);
Cmm2_0 = _mm512_fmadd_ps(Amm3, Bmm0, Cmm2_0);
Cmm3_0 = _mm512_fmadd_ps(Amm4, Bmm0, Cmm3_0);
Cmm4_0 = _mm512_fmadd_ps(Amm5, Bmm0, Cmm4_0);
Cmm5_0 = _mm512_fmadd_ps(Amm6, Bmm0, Cmm5_0);
Cmm6_0 = _mm512_fmadd_ps(Amm7, Bmm0, Cmm6_0);
Cmm7_0 = _mm512_fmadd_ps(Amm8, Bmm0, Cmm7_0);
Cmm8_0 = _mm512_fmadd_ps(Amm9, Bmm0, Cmm8_0);
Cmm9_0 = _mm512_fmadd_ps(Amm0, Bmm0, Cmm9_0);
// c2iter=0, riter=0,siter=2
Amm1 = _mm512_set1_ps(A[9+2]);
Bmm0 = _mm512_load_ps(B+32);
Cmm0_0 = _mm512_fmadd_ps(Amm2, Bmm0, Cmm0_0);
Cmm1_0 = _mm512_fmadd_ps(Amm3, Bmm0, Cmm1_0);
Cmm2_0 = _mm512_fmadd_ps(Amm4, Bmm0, Cmm2_0);
Cmm3_0 = _mm512_fmadd_ps(Amm5, Bmm0, Cmm3_0);
Cmm4_0 = _mm512_fmadd_ps(Amm6, Bmm0, Cmm4_0);
Cmm5_0 = _mm512_fmadd_ps(Amm7, Bmm0, Cmm5_0);
Cmm6_0 = _mm512_fmadd_ps(Amm8, Bmm0, Cmm6_0);
Cmm7_0 = _mm512_fmadd_ps(Amm9, Bmm0, Cmm7_0);
Cmm8_0 = _mm512_fmadd_ps(Amm0, Bmm0, Cmm8_0);
Cmm9_0 = _mm512_fmadd_ps(Amm1, Bmm0, Cmm9_0);
// c2iter=0, riter=1,siter=0
Amm0 = _mm512_set1_ps(A[0+114]);
Bmm0 = _mm512_load_ps(B+48);
Cmm0_0 = _mm512_fmadd_ps(Amm0, Bmm0, Cmm0_0);
Amm1 = _mm512_set1_ps(A[1+114]);
Cmm1_0 = _mm512_fmadd_ps(Amm1, Bmm0, Cmm1_0);
Amm2 = _mm512_set1_ps(A[2+114]);
Cmm2_0 = _mm512_fmadd_ps(Amm2, Bmm0, Cmm2_0);
Amm3 = _mm512_set1_ps(A[3+114]);
Cmm3_0 = _mm512_fmadd_ps(Amm3, Bmm0, Cmm3_0);
Amm4 = _mm512_set1_ps(A[4+114]);
Cmm4_0 = _mm512_fmadd_ps(Amm4, Bmm0, Cmm4_0);
Amm5 = _mm512_set1_ps(A[5+114]);
Cmm5_0 = _mm512_fmadd_ps(Amm5, Bmm0, Cmm5_0);
Amm6 = _mm512_set1_ps(A[6+114]);
Cmm6_0 = _mm512_fmadd_ps(Amm6, Bmm0, Cmm6_0);
Amm7 = _mm512_set1_ps(A[7+114]);
Cmm7_0 = _mm512_fmadd_ps(Amm7, Bmm0, Cmm7_0);
Amm8 = _mm512_set1_ps(A[8+114]);
Cmm8_0 = _mm512_fmadd_ps(Amm8, Bmm0, Cmm8_0);
Amm9 = _mm512_set1_ps(A[9+114]);
Cmm9_0 = _mm512_fmadd_ps(Amm9, Bmm0, Cmm9_0);
// c2iter=0, riter=1,siter=1
Amm0 = _mm512_set1_ps(A[9+115]);
Bmm0 = _mm512_load_ps(B+64);
Cmm0_0 = _mm512_fmadd_ps(Amm1, Bmm0, Cmm0_0);
Cmm1_0 = _mm512_fmadd_ps(Amm2, Bmm0, Cmm1_0);
Cmm2_0 = _mm512_fmadd_ps(Amm3, Bmm0, Cmm2_0);
Cmm3_0 = _mm512_fmadd_ps(Amm4, Bmm0, Cmm3_0);
Cmm4_0 = _mm512_fmadd_ps(Amm5, Bmm0, Cmm4_0);
Cmm5_0 = _mm512_fmadd_ps(Amm6, Bmm0, Cmm5_0);
Cmm6_0 = _mm512_fmadd_ps(Amm7, Bmm0, Cmm6_0);
Cmm7_0 = _mm512_fmadd_ps(Amm8, Bmm0, Cmm7_0);
Cmm8_0 = _mm512_fmadd_ps(Amm9, Bmm0, Cmm8_0);
Cmm9_0 = _mm512_fmadd_ps(Amm0, Bmm0, Cmm9_0);
// c2iter=0, riter=1,siter=2
Amm1 = _mm512_set1_ps(A[9+116]);
Bmm0 = _mm512_load_ps(B+80);
Cmm0_0 = _mm512_fmadd_ps(Amm2, Bmm0, Cmm0_0);
Cmm1_0 = _mm512_fmadd_ps(Amm3, Bmm0, Cmm1_0);
Cmm2_0 = _mm512_fmadd_ps(Amm4, Bmm0, Cmm2_0);
Cmm3_0 = _mm512_fmadd_ps(Amm5, Bmm0, Cmm3_0);
Cmm4_0 = _mm512_fmadd_ps(Amm6, Bmm0, Cmm4_0);
Cmm5_0 = _mm512_fmadd_ps(Amm7, Bmm0, Cmm5_0);
Cmm6_0 = _mm512_fmadd_ps(Amm8, Bmm0, Cmm6_0);
Cmm7_0 = _mm512_fmadd_ps(Amm9, Bmm0, Cmm7_0);
Cmm8_0 = _mm512_fmadd_ps(Amm0, Bmm0, Cmm8_0);
Cmm9_0 = _mm512_fmadd_ps(Amm1, Bmm0, Cmm9_0);
// c2iter=0, riter=2,siter=0
Amm0 = _mm512_set1_ps(A[0+228]);
Bmm0 = _mm512_load_ps(B+96);
Cmm0_0 = _mm512_fmadd_ps(Amm0, Bmm0, Cmm0_0);
Amm1 = _mm512_set1_ps(A[1+228]);
Cmm1_0 = _mm512_fmadd_ps(Amm1, Bmm0, Cmm1_0);
Amm2 = _mm512_set1_ps(A[2+228]);
Cmm2_0 = _mm512_fmadd_ps(Amm2, Bmm0, Cmm2_0);
Amm3 = _mm512_set1_ps(A[3+228]);
Cmm3_0 = _mm512_fmadd_ps(Amm3, Bmm0, Cmm3_0);
Amm4 = _mm512_set1_ps(A[4+228]);
Cmm4_0 = _mm512_fmadd_ps(Amm4, Bmm0, Cmm4_0);
Amm5 = _mm512_set1_ps(A[5+228]);
Cmm5_0 = _mm512_fmadd_ps(Amm5, Bmm0, Cmm5_0);
Amm6 = _mm512_set1_ps(A[6+228]);
Cmm6_0 = _mm512_fmadd_ps(Amm6, Bmm0, Cmm6_0);
Amm7 = _mm512_set1_ps(A[7+228]);
Cmm7_0 = _mm512_fmadd_ps(Amm7, Bmm0, Cmm7_0);
Amm8 = _mm512_set1_ps(A[8+228]);
Cmm8_0 = _mm512_fmadd_ps(Amm8, Bmm0, Cmm8_0);
Amm9 = _mm512_set1_ps(A[9+228]);
Cmm9_0 = _mm512_fmadd_ps(Amm9, Bmm0, Cmm9_0);
// c2iter=0, riter=2,siter=1
Amm0 = _mm512_set1_ps(A[9+229]);
Bmm0 = _mm512_load_ps(B+112);
Cmm0_0 = _mm512_fmadd_ps(Amm1, Bmm0, Cmm0_0);
Cmm1_0 = _mm512_fmadd_ps(Amm2, Bmm0, Cmm1_0);
Cmm2_0 = _mm512_fmadd_ps(Amm3, Bmm0, Cmm2_0);
Cmm3_0 = _mm512_fmadd_ps(Amm4, Bmm0, Cmm3_0);
Cmm4_0 = _mm512_fmadd_ps(Amm5, Bmm0, Cmm4_0);
Cmm5_0 = _mm512_fmadd_ps(Amm6, Bmm0, Cmm5_0);
Cmm6_0 = _mm512_fmadd_ps(Amm7, Bmm0, Cmm6_0);
Cmm7_0 = _mm512_fmadd_ps(Amm8, Bmm0, Cmm7_0);
Cmm8_0 = _mm512_fmadd_ps(Amm9, Bmm0, Cmm8_0);
Cmm9_0 = _mm512_fmadd_ps(Amm0, Bmm0, Cmm9_0);
// c2iter=0, riter=2,siter=2
Amm1 = _mm512_set1_ps(A[9+230]);
Bmm0 = _mm512_load_ps(B+128);
Cmm0_0 = _mm512_fmadd_ps(Amm2, Bmm0, Cmm0_0);
Cmm1_0 = _mm512_fmadd_ps(Amm3, Bmm0, Cmm1_0);
Cmm2_0 = _mm512_fmadd_ps(Amm4, Bmm0, Cmm2_0);
Cmm3_0 = _mm512_fmadd_ps(Amm5, Bmm0, Cmm3_0);
Cmm4_0 = _mm512_fmadd_ps(Amm6, Bmm0, Cmm4_0);
Cmm5_0 = _mm512_fmadd_ps(Amm7, Bmm0, Cmm5_0);
Cmm6_0 = _mm512_fmadd_ps(Amm8, Bmm0, Cmm6_0);
Cmm7_0 = _mm512_fmadd_ps(Amm9, Bmm0, Cmm7_0);
Cmm8_0 = _mm512_fmadd_ps(Amm0, Bmm0, Cmm8_0);
Cmm9_0 = _mm512_fmadd_ps(Amm1, Bmm0, Cmm9_0);
A+=12996;
B+=144;
}
__mmask16 iomask;
iomask = _mm512_int2mask(1023);
__m512 T0;
__m512 R0;
__m512 T1;
__m512 R1;
__m512 T2;
__m512 R2;
__m512 T3;
__m512 R3;
__m512 T4;
__m512 R4;
__m512 T5;
__m512 R5;
__m512 T6;
__m512 R6;
__m512 T7;
__m512 R7;
__m512 T8;
__m512 R8;
__m512 T9;
__m512 R9;
__m512 T10;
__m512 R10;
__m512 T11;
__m512 R11;
__m512 T12;
__m512 R12;
__m512 T13;
__m512 R13;
__m512 T14;
__m512 R14;
__m512 T15;
__m512 R15;
__m512 ZeroMM;
ZeroMM = _mm512_setzero();
T0 = _mm512_unpacklo_ps(Cmm0_0, Cmm1_0);
T1 = _mm512_unpackhi_ps(Cmm0_0, Cmm1_0);
T2 = _mm512_unpacklo_ps(Cmm2_0, Cmm3_0);
T3 = _mm512_unpackhi_ps(Cmm2_0, Cmm3_0);
T4 = _mm512_unpacklo_ps(Cmm4_0, Cmm5_0);
T5 = _mm512_unpackhi_ps(Cmm4_0, Cmm5_0);
T6 = _mm512_unpacklo_ps(Cmm6_0, Cmm7_0);
T7 = _mm512_unpackhi_ps(Cmm6_0, Cmm7_0);
T8 = _mm512_unpacklo_ps(Cmm8_0, Cmm9_0);
T9 = _mm512_unpackhi_ps(Cmm8_0, Cmm9_0);
R0 = _mm512_unpacklo_pd(T0, T2);
R1 = _mm512_unpackhi_pd(T0, T2);
R2 = _mm512_unpacklo_pd(T1, T3);
R3 = _mm512_unpackhi_pd(T1, T3);
R4 = _mm512_unpacklo_pd(T4, T6);
R5 = _mm512_unpackhi_pd(T4, T6);
R6 = _mm512_unpacklo_pd(T5, T7);
R7 = _mm512_unpackhi_pd(T5, T7);
R8 = _mm512_unpacklo_pd(T8, T10);
R9 = _mm512_unpackhi_pd(T8, T10);
R10 = _mm512_unpacklo_pd(T9, T11);
R11 = _mm512_unpackhi_pd(T9, T11);
T0 = _mm512_shuffle_f32x4(R0, R4, 0x88);
T4 = _mm512_shuffle_f32x4(R0, R4, 0xdd);
T1 = _mm512_shuffle_f32x4(R1, R5, 0x88);
T5 = _mm512_shuffle_f32x4(R1, R5, 0xdd);
T2 = _mm512_shuffle_f32x4(R2, R6, 0x88);
T6 = _mm512_shuffle_f32x4(R2, R6, 0xdd);
T3 = _mm512_shuffle_f32x4(R3, R7, 0x88);
T7 = _mm512_shuffle_f32x4(R3, R7, 0xdd);
T8 = _mm512_shuffle_f32x4(R8, ZeroMM, 0x88);
T12 = _mm512_shuffle_f32x4(R8, ZeroMM, 0xdd);
T9 = _mm512_shuffle_f32x4(R9, ZeroMM, 0x88);
T13 = _mm512_shuffle_f32x4(R9, ZeroMM, 0xdd);
T10 = _mm512_shuffle_f32x4(R10, ZeroMM, 0x88);
T14 = _mm512_shuffle_f32x4(R10, ZeroMM, 0xdd);
T11 = _mm512_shuffle_f32x4(R11, ZeroMM, 0x88);
T15 = _mm512_shuffle_f32x4(R11, ZeroMM, 0xdd);
R0 = _mm512_shuffle_f32x4(T0, T8, 0x88);
R8 = _mm512_shuffle_f32x4(T0, T8, 0xdd);
R1 = _mm512_shuffle_f32x4(T1, T9, 0x88);
R9 = _mm512_shuffle_f32x4(T1, T9, 0xdd);
R2 = _mm512_shuffle_f32x4(T2, T10, 0x88);
R10 = _mm512_shuffle_f32x4(T2, T10, 0xdd);
R3 = _mm512_shuffle_f32x4(T3, T11, 0x88);
R11 = _mm512_shuffle_f32x4(T3, T11, 0xdd);
R4 = _mm512_shuffle_f32x4(T4, T12, 0x88);
R12 = _mm512_shuffle_f32x4(T4, T12, 0xdd);
R5 = _mm512_shuffle_f32x4(T5, T13, 0x88);
R13 = _mm512_shuffle_f32x4(T5, T13, 0xdd);
R6 = _mm512_shuffle_f32x4(T6, T14, 0x88);
R14 = _mm512_shuffle_f32x4(T6, T14, 0xdd);
R7 = _mm512_shuffle_f32x4(T7, T15, 0x88);
R15 = _mm512_shuffle_f32x4(T7, T15, 0xdd);
T0 = _mm512_maskz_loadu_ps(iomask, C+0);
R0 = _mm512_add_ps(R0, T0);
_mm512_mask_storeu_ps(C+0, iomask, R0);
T1 = _mm512_maskz_loadu_ps(iomask, C+12544);
R1 = _mm512_add_ps(R1, T1);
_mm512_mask_storeu_ps(C+12544, iomask, R1);
T2 = _mm512_maskz_loadu_ps(iomask, C+25088);
R2 = _mm512_add_ps(R2, T2);
_mm512_mask_storeu_ps(C+25088, iomask, R2);
T3 = _mm512_maskz_loadu_ps(iomask, C+37632);
R3 = _mm512_add_ps(R3, T3);
_mm512_mask_storeu_ps(C+37632, iomask, R3);
T4 = _mm512_maskz_loadu_ps(iomask, C+50176);
R4 = _mm512_add_ps(R4, T4);
_mm512_mask_storeu_ps(C+50176, iomask, R4);
T5 = _mm512_maskz_loadu_ps(iomask, C+62720);
R5 = _mm512_add_ps(R5, T5);
_mm512_mask_storeu_ps(C+62720, iomask, R5);
T6 = _mm512_maskz_loadu_ps(iomask, C+75264);
R6 = _mm512_add_ps(R6, T6);
_mm512_mask_storeu_ps(C+75264, iomask, R6);
T7 = _mm512_maskz_loadu_ps(iomask, C+87808);
R7 = _mm512_add_ps(R7, T7);
_mm512_mask_storeu_ps(C+87808, iomask, R7);
T8 = _mm512_maskz_loadu_ps(iomask, C+100352);
R8 = _mm512_add_ps(R8, T8);
_mm512_mask_storeu_ps(C+100352, iomask, R8);
T9 = _mm512_maskz_loadu_ps(iomask, C+112896);
R9 = _mm512_add_ps(R9, T9);
_mm512_mask_storeu_ps(C+112896, iomask, R9);
T10 = _mm512_maskz_loadu_ps(iomask, C+125440);
R10 = _mm512_add_ps(R10, T10);
_mm512_mask_storeu_ps(C+125440, iomask, R10);
T11 = _mm512_maskz_loadu_ps(iomask, C+137984);
R11 = _mm512_add_ps(R11, T11);
_mm512_mask_storeu_ps(C+137984, iomask, R11);
T12 = _mm512_maskz_loadu_ps(iomask, C+150528);
R12 = _mm512_add_ps(R12, T12);
_mm512_mask_storeu_ps(C+150528, iomask, R12);
T13 = _mm512_maskz_loadu_ps(iomask, C+163072);
R13 = _mm512_add_ps(R13, T13);
_mm512_mask_storeu_ps(C+163072, iomask, R13);
T14 = _mm512_maskz_loadu_ps(iomask, C+175616);
R14 = _mm512_add_ps(R14, T14);
_mm512_mask_storeu_ps(C+175616, iomask, R14);
T15 = _mm512_maskz_loadu_ps(iomask, C+188160);
R15 = _mm512_add_ps(R15, T15);
_mm512_mask_storeu_ps(C+188160, iomask, R15);
}
