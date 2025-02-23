/******************************************************************************
 *  Filename:       rf_patch_rfe_genook.h
 *  Revised:        $Date: 2019-01-31 15:04:25 +0100 (to, 31 jan 2019) $
 *  Revision:       $Revision: 18842 $
 *
 *  Description: RF core patch for CC13x0 Generic OOK
 *
 *  Copyright (c) 2015-2019, Texas Instruments Incorporated
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *
 *  1) Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *
 *  2) Redistributions in binary form must reproduce the above copyright notice,
 *     this list of conditions and the following disclaimer in the documentation
 *     and/or other materials provided with the distribution.
 *
 *  3) Neither the name of the ORGANIZATION nor the names of its contributors may
 *     be used to endorse or promote products derived from this software without
 *     specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************/

#ifndef _RF_PATCH_RFE_GENOOK_H
#define _RF_PATCH_RFE_GENOOK_H

#include "../inc/hw_types.h"
#include <stdint.h>

#ifndef RFE_PATCH_TYPE
#define RFE_PATCH_TYPE static const uint32_t
#endif

#ifndef PATCH_FUN_SPEC
#define PATCH_FUN_SPEC static inline
#endif

#ifndef RFC_RFERAM_BASE
#define RFC_RFERAM_BASE 0x2100C000
#endif

#ifndef RFE_PATCH_MODE
#define RFE_PATCH_MODE 0
#endif

RFE_PATCH_TYPE patchGenookRfe[425] =
    {
        0x00006122,
        0x0ec20ec1,
        0x0ec40ec3,
        0x0ec90ec6,
        0x0edf0ecf,
        0x0e3f0eef,
        0x0e3f0e3f,
        0x0e3f0e3f,
        0x0e3f0e3f,
        0x0d0f0e3f,
        0x0d3f0d1f,
        0x0d7f0d5f,
        0x0dbf0d9f,
        0x0dff0ddf,
        0x10000008,
        0x12031101,
        0x24f1004d,
        0x0018002e,
        0x72000a94,
        0x003ffffe,
        0x00ff007f,
        0x403003ff,
        0x40014000,
        0x40074003,
        0x404f400f,
        0x41cf40cf,
        0x47cf43cf,
        0x3fcf4fcf,
        0x1fcf2fcf,
        0x00000fcf,
        0x0008000f,
        0x003f0000,
        0x00000000,
        0x000000c0,
        0x00680004,
        0x00dc000e,
        0x00430006,
        0x0005001a,
        0x00000000,
        0x00000002,
        0x0000003f,
        0x00040000,
        0x000000c0,
        0x00c00004,
        0x00070000,
        0x9100c050,
        0xc0707000,
        0x70009100,
        0x00213182,
        0xb1109131,
        0x81017000,
        0xa100b101,
        0x91323182,
        0x9101b110,
        0x81411011,
        0x406d2241,
        0x700006f1,
        0x9101c051,
        0x39101830,
        0xd0083183,
        0x6f413118,
        0x91310031,
        0x1483b110,
        0x68791614,
        0x10257000,
        0x9100c050,
        0xc2b0c3f4,
        0x6f031420,
        0x04411031,
        0x3182c022,
        0x91310021,
        0x3963b110,
        0x04411031,
        0x3182c082,
        0x91310021,
        0x3963b110,
        0xc0a21031,
        0x00213182,
        0xb1109131,
        0x31151050,
        0x92051405,
        0x645d7000,
        0x1031c052,
        0x31610631,
        0x646002c1,
        0x1031c112,
        0x06713921,
        0x02e13151,
        0x70006460,
        0xb054645d,
        0xa0547100,
        0x80f0b064,
        0x40b32200,
        0xc122c111,
        0xc3006460,
        0x645d68be,
        0x90b01240,
        0x8253b032,
        0x39533953,
        0xc36064a3,
        0x128068c8,
        0xb03290b0,
        0x645d7000,
        0xc122c101,
        0xc1016460,
        0x6460c0c2,
        0x64a38253,
        0x90b012c0,
        0x7000b032,
        0xc272645d,
        0x6460c081,
        0xc111c122,
        0xc0026460,
        0x6460c111,
        0xc331c062,
        0xc3626460,
        0x6460c111,
        0xc111c302,
        0x82536460,
        0x64a33953,
        0x6465c3e2,
        0x40f02211,
        0xc881c242,
        0xc2526460,
        0x6460c111,
        0xcee1c272,
        0xc2026460,
        0x6460c881,
        0xc801c202,
        0xc0b06460,
        0x70006904,
        0xc242645d,
        0x6460c801,
        0xc011c252,
        0xc2726460,
        0x6460c0e1,
        0xc101c002,
        0xc0626460,
        0x6460c301,
        0xc101c122,
        0xc3626460,
        0x6460c101,
        0xc101c302,
        0x82536460,
        0x700064a3,
        0x72057306,
        0x720e720b,
        0x7100b050,
        0xb0608081,
        0x8092a050,
        0x224180a2,
        0x80804543,
        0x0410c1f1,
        0x11011630,
        0x6c011401,
        0x61556154,
        0x61576156,
        0x61596158,
        0x615c615a,
        0x6160615e,
        0x62dd6162,
        0x809162e0,
        0x80823111,
        0x14122a42,
        0x11011632,
        0x6c011421,
        0x61836170,
        0x62e06176,
        0x61836170,
        0x62e06176,
        0x61636163,
        0x61636163,
        0x61636163,
        0x616364b2,
        0x616364cd,
        0x616364da,
        0x61636506,
        0x12106163,
        0x616890b0,
        0x90b01220,
        0x9050c010,
        0x90607a60,
        0x1210720e,
        0x61269030,
        0x674bcff0,
        0xc003c3b4,
        0x6472c3c0,
        0x91507a00,
        0x92107a10,
        0x92207a20,
        0x92307a30,
        0x92407a40,
        0x92607a50,
        0xa0bc6163,
        0xb060a0e1,
        0x80f0a054,
        0x458e2250,
        0x22008040,
        0x618546aa,
        0x674bcfe0,
        0x393080f0,
        0x22100630,
        0x79f14197,
        0x2200619c,
        0x79e1419b,
        0x79d1619c,
        0x822d9191,
        0x39408230,
        0x0410c0f1,
        0xc0121007,
        0x82193072,
        0x0419c0f1,
        0xc0f1821a,
        0x041a394a,
        0xc0f1821e,
        0x041e398e,
        0x10bc10ab,
        0x648110c2,
        0x7aa7c00f,
        0xb003b013,
        0xb053664e,
        0xb013b050,
        0xc0826624,
        0x6635668a,
        0xb0637100,
        0x22018041,
        0x80f046aa,
        0x41c02250,
        0x45c02210,
        0x46c822f0,
        0x668ac082,
        0x392010f0,
        0x81d391c0,
        0x10306654,
        0x4dde18d3,
        0x16130bf3,
        0x49f21ce3,
        0x81e391c3,
        0x61e3143b,
        0x49f21ce3,
        0x81e391c3,
        0x1cab183b,
        0x1c9b4e31,
        0x1cbc4a33,
        0x10b241f2,
        0x22d08210,
        0x80f041f0,
        0x45f22210,
        0x65f36481,
        0x10c061c0,
        0x4a0518b0,
        0x39101003,
        0x41fc1e00,
        0x3807380f,
        0x42152203,
        0x392010f0,
        0x1070180f,
        0x18073920,
        0x10036215,
        0x1801c001,
        0x1e013911,
        0x301f420d,
        0x22033017,
        0x10f04215,
        0x140f3920,
        0x39201070,
        0x66a11407,
        0x06f08230,
        0x80f13110,
        0x06313931,
        0x421f1e01,
        0xb0633810,
        0x6a1f7100,
        0x700010bc,
        0x06f08230,
        0x80f13110,
        0x06313931,
        0x422d1e01,
        0xb0633810,
        0x6a2d7100,
        0x10ab7000,
        0x109b61e7,
        0x10f261e7,
        0x91c23922,
        0x820181d2,
        0x81511812,
        0x82411812,
        0x3d813181,
        0x4a461c12,
        0xb032b0e1,
        0x674bcfd0,
        0x1421c7f1,
        0xc8124e4a,
        0x91729162,
        0x7000b031,
        0xc0061208,
        0x9160c800,
        0x70009170,
        0x10308201,
        0x81511810,
        0x14061810,
        0x824280e1,
        0x3d823182,
        0x4a661c20,
        0x46702211,
        0xb032b0e1,
        0x674bcfc0,
        0x42702211,
        0x1c201a32,
        0xa0e14e70,
        0xdfb0b032,
        0x674b92f2,
        0x39418231,
        0x1e0106f1,
        0x1618427b,
        0x3010c010,
        0x46891c08,
        0xc7f13c16,
        0x4e7f1461,
        0x9166c816,
        0x31818171,
        0x1c163d81,
        0x91764a86,
        0xc006b031,
        0x70001208,
        0x312381b3,
        0x187110f1,
        0x10153c21,
        0x4e931c37,
        0x10376295,
        0x14176296,
        0x4a991c3f,
        0x103f629b,
        0x1e0162a1,
        0x1211469e,
        0x42a11e0f,
        0x10f1181f,
        0x39311471,
        0x063080e0,
        0x14103121,
        0x700090e0,
        0x81628201,
        0x3d823182,
        0x92f1efa0,
        0x674b9302,
        0x6506a003,
        0x81616163,
        0x3d813181,
        0x39808240,
        0x1cf11801,
        0x14014ac7,
        0x22c080b0,
        0xb0bc46c7,
        0xef90b033,
        0x930f92f1,
        0x7000674b,
        0xb063a003,
        0xb054b064,
        0x6506b0e0,
        0x80407100,
        0x46aa2200,
        0x64dab064,
        0x7100a0e0,
        0x22008040,
        0xb06446aa,
        0xb003a054,
        0x80a261c0,
        0x61636481,
        0x39808260,
        0x10083950,
        0x82693128,
        0xc1f13989,
        0xc01b0419,
        0x1c9a79ca,
        0x109a4af0,
        0x62f31209,
        0x1a1918a9,
        0xb0e1c00b,
        0xb064b054,
        0x80f07100,
        0x47382240,
        0x42fd2210,
        0x645a631a,
        0x1e1b1090,
        0xc0214308,
        0x10001401,
        0x673a1000,
        0x67426b01,
        0xc131b101,
        0x6f1214a1,
        0xb1109132,
        0x1a1010a0,
        0x1401c131,
        0x10001000,
        0x6b10673a,
        0xc0c2c101,
        0x62f56460,
        0x645d6742,
        0xc0c2c111,
        0x10a06460,
        0x10a2c131,
        0x14211802,
        0x6b20673a,
        0x43371e1b,
        0xc021a101,
        0x91326f12,
        0x1090b110,
        0x43371e00,
        0xc0211a10,
        0x18021092,
        0x673a1421,
        0x62f56b31,
        0x6163a054,
        0x10801004,
        0x10406b3c,
        0x91326f12,
        0x7000b110,
        0x9101c051,
        0x3182c0e2,
        0x0002cc00,
        0xb1109132,
        0x92e07000,
        0x220082d0,
        0xb2c0474c,
        0x00007000};

PATCH_FUN_SPEC void rf_patch_rfe_genook(void)
{
#ifdef __PATCH_NO_UNROLLING
    uint32_t i;

    for (i = 0; i < 425; i++)
    {
        HWREG(RFC_RFERAM_BASE + 4 * i) = patchGenookRfe[i];
    }

#else
    const uint32_t* pS = patchGenookRfe;
    volatile unsigned long* pD = &HWREG(RFC_RFERAM_BASE);
    uint32_t t1, t2, t3, t4, t5, t6, t7, t8;
    uint32_t nIterations = 53;

    do
    {
        t1 = *pS++;
        t2 = *pS++;
        t3 = *pS++;
        t4 = *pS++;
        t5 = *pS++;
        t6 = *pS++;
        t7 = *pS++;
        t8 = *pS++;
        *pD++ = t1;
        *pD++ = t2;
        *pD++ = t3;
        *pD++ = t4;
        *pD++ = t5;
        *pD++ = t6;
        *pD++ = t7;
        *pD++ = t8;
    } while (--nIterations);

    t1 = *pS++;
    *pD++ = t1;
#endif
}

#endif
