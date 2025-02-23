/******************************************************************************
 *  Filename:       rf_patch_mce_tof.h
 *  Revised:        $Date: 2019-01-31 15:04:59 +0100 (to, 31 jan 2019) $
 *  Revision:       $Revision: 18843 $
 *
 *  Description: RF core MCE patch for time of flight 2Mbps PHY for CC13x2 and CC26x2
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

#ifndef _RF_PATCH_MCE_TOF_H
#define _RF_PATCH_MCE_TOF_H

#include "../inc/hw_types.h"
#include <stdint.h>

#ifndef MCE_PATCH_TYPE
#define MCE_PATCH_TYPE static const uint32_t
#endif

#ifndef PATCH_FUN_SPEC
#define PATCH_FUN_SPEC static inline
#endif

#ifndef RFC_MCERAM_BASE
#define RFC_MCERAM_BASE 0x21008000
#endif

#ifndef MCE_PATCH_MODE
#define MCE_PATCH_MODE 0
#endif

MCE_PATCH_TYPE patchTofMce[506] =
    {
        0x0003605b,
        0x00f1000f,
        0x00000000,
        0x000c8000,
        0x00000000,
        0x0c650000,
        0x80000000,
        0x00800010,
        0x00000000,
        0x0594091e,
        0x00000350,
        0x7c200000,
        0x000000c2,
        0x34340013,
        0x0003005a,
        0x00000032,
        0xfe6b2840,
        0xdeade8ca,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x07d00011,
        0x6fdd2fea,
        0x0fb00ff0,
        0xf80f0003,
        0x007f7f30,
        0x3434001f,
        0x8010005a,
        0x01900000,
        0x40000800,
        0xc0300c65,
        0x722367ee,
        0xa35d7263,
        0x73057303,
        0x73047203,
        0x72047306,
        0x72917391,
        0x8001c7c0,
        0x90010001,
        0x08019010,
        0x720d9001,
        0x720f720e,
        0xb0d07210,
        0xc0407100,
        0xa0d067ee,
        0x721bb110,
        0x10208162,
        0x06703952,
        0x16300020,
        0x14011101,
        0x60936c01,
        0x60c260a4,
        0x6219617b,
        0x60936093,
        0x60936093,
        0x60c260a4,
        0x6219617b,
        0x60936093,
        0x60976093,
        0x12206095,
        0xc050609a,
        0x121267ee,
        0x73117223,
        0x73137312,
        0x81b17314,
        0x91b20012,
        0x6073b070,
        0xc2b2c011,
        0x1820c710,
        0x6e236f13,
        0x16121611,
        0x7d7068a8,
        0xc0229990,
        0x39818161,
        0xd0601812,
        0x67ee9a12,
        0x40971e01,
        0x99907d80,
        0x93807d50,
        0x93307d60,
        0x93007d90,
        0x6097b360,
        0xc07067e5,
        0x677e67ee,
        0x91f0c070,
        0x670bb750,
        0xb233b914,
        0xa750672d,
        0x95b488d4,
        0x95c488e4,
        0x95948ca4,
        0x95a487c4,
        0x2a007cb0,
        0x88d49060,
        0x88e495d4,
        0xc0f495e4,
        0x91449134,
        0x22008c80,
        0xb0f040e5,
        0xb0f6b130,
        0xb0d5b0d0,
        0xb110b136,
        0xb140b100,
        0x73137314,
        0x2a007cb0,
        0xc0f19060,
        0x40f51e0e,
        0x99311611,
        0xc037b912,
        0xb115b041,
        0xa910c031,
        0xb0737100,
        0xba3eb910,
        0x22008090,
        0x80b24574,
        0x45182262,
        0x220280c2,
        0xb061410b,
        0x2250b140,
        0x824040f9,
        0x45152200,
        0x40f9220f,
        0x679e100f,
        0x100f60f9,
        0x60f967b4,
        0xb234a913,
        0x93acba39,
        0xa0d58462,
        0xb0d1720f,
        0x7100b111,
        0xb1119937,
        0xb35d7100,
        0x9930c3f0,
        0xc0d0b074,
        0x894193f0,
        0x67bf9791,
        0x14018941,
        0x7100b111,
        0xba3aba3b,
        0xc210b078,
        0xa2329930,
        0xb111b235,
        0xa35d7100,
        0x7291b06e,
        0x8af2a0d1,
        0x3d823182,
        0x67eec080,
        0x8c528c33,
        0x8c441423,
        0x14248c62,
        0x06f28b32,
        0x31418b21,
        0x97a20012,
        0x0424cff2,
        0x31433143,
        0x97b40034,
        0x6957c8f0,
        0xb130b235,
        0xb136a0f0,
        0xb140a0f6,
        0xb914a100,
        0xa7507291,
        0xa002a003,
        0x9010c7c0,
        0x72047203,
        0x73067305,
        0xa23267e5,
        0x8242b235,
        0x456b1e02,
        0xc0907223,
        0x609767ee,
        0xa232b235,
        0xd0a08942,
        0x67ee9a12,
        0x67e56159,
        0x677ec00f,
        0x91f0c070,
        0xc0b0670b,
        0xb01367ee,
        0x22008c80,
        0xb0f04189,
        0xb0f6b130,
        0xb0d5b0d0,
        0xb136b111,
        0x72917313,
        0xc0e1b912,
        0x41951e0e,
        0x99311611,
        0xb041c037,
        0xc031b232,
        0xb115a910,
        0xb0737100,
        0xba3eb910,
        0x22008090,
        0x80b24614,
        0x45b32262,
        0x41992250,
        0x22008240,
        0x220f45b0,
        0x100f4199,
        0x6199679e,
        0x67b4100f,
        0xb9136199,
        0xba39b234,
        0xa0d593ac,
        0x7313720f,
        0x73147210,
        0x264081b0,
        0xb0d191b0,
        0x7100b111,
        0x9937b041,
        0x7100b111,
        0xc3f0b35d,
        0xb0749930,
        0x93f0c0d0,
        0x7100b111,
        0xc210b078,
        0xa2329930,
        0x7100b111,
        0xb06ea35d,
        0xa0d1a910,
        0x899167bf,
        0x81a01401,
        0x99311401,
        0xb0d6b116,
        0xb1167100,
        0x8090a0d6,
        0x46142200,
        0x88d4b012,
        0x88e495b4,
        0x8ca495c4,
        0x87c49594,
        0x729195a4,
        0x2a208230,
        0x92302630,
        0xc070672d,
        0x8af287b1,
        0x3d823182,
        0x69fbc310,
        0xb111b064,
        0xa0f6b136,
        0xa0f0b130,
        0x8242b235,
        0x46021e02,
        0x7291b914,
        0xa002a003,
        0x9010c7c0,
        0x72047203,
        0x73067305,
        0x67eec0c0,
        0x609767e5,
        0x67eec0d0,
        0x7291b235,
        0x677e6202,
        0xc070c00b,
        0x670b91f0,
        0x67eec0e0,
        0x727ab914,
        0xb0137226,
        0x73147313,
        0x8c8072c9,
        0x422d2200,
        0xb130b0f0,
        0x85b06231,
        0x95d085c1,
        0xb10095e1,
        0xb110b140,
        0xb0f6b064,
        0xb0d5b0d0,
        0x7313b136,
        0xb041b061,
        0x42411e1b,
        0xb9127291,
        0xc13772c9,
        0x1e0ec070,
        0x16104247,
        0x9930c0b7,
        0xb115b232,
        0xa910c031,
        0xb0737100,
        0xba3eb910,
        0x22008090,
        0x80b24705,
        0x46682262,
        0x220280c2,
        0xb061425b,
        0x2250b140,
        0x82404249,
        0x46652200,
        0x4249220f,
        0x679e100f,
        0x100f6249,
        0x624967b4,
        0x1e1bb234,
        0xa9154285,
        0xb913b916,
        0x8b33ba3b,
        0x8b2406f3,
        0x00433144,
        0x8c3397a3,
        0x14038c50,
        0x8c448c60,
        0x31431404,
        0x00343143,
        0x81b097b4,
        0x91b02650,
        0x67eec0f0,
        0xa91362bf,
        0x264081b0,
        0x993791b0,
        0x93acba39,
        0x720fa0d5,
        0xb111b0d1,
        0x7100b111,
        0xc3e0b35d,
        0xb0749930,
        0x93f0c0d0,
        0x97918941,
        0xb11167bf,
        0xb0787100,
        0x9930c210,
        0xb235a232,
        0x7100b111,
        0xb06ea35d,
        0xa0d17291,
        0x31828af2,
        0xba3b3d82,
        0x06f38b33,
        0x31448b24,
        0x92630043,
        0x8c508c33,
        0x8c601403,
        0x14048c44,
        0x31433143,
        0x97b40034,
        0x6abdc8f0,
        0xbc9062e3,
        0x95b488d4,
        0x95c488e4,
        0x95948ca4,
        0x95a487c4,
        0x85b0c01b,
        0x95d085c1,
        0x731195e1,
        0x73137312,
        0xb1007314,
        0xb0f6b140,
        0xb110b136,
        0xa232b064,
        0x22628242,
        0x722342d7,
        0xb115b064,
        0xc410b232,
        0x679e6ae0,
        0xb2356249,
        0xa100b140,
        0xa0f6b136,
        0x7291b914,
        0xa003a750,
        0xc7c0a002,
        0x72039010,
        0x73057204,
        0x73117306,
        0x73137312,
        0x720f7314,
        0x7210720d,
        0x7223720e,
        0xb235a232,
        0x1e028242,
        0x722346fc,
        0x67eec100,
        0xc1106097,
        0xb23567ee,
        0x8942a232,
        0x824262e4,
        0x430b2212,
        0xb016b006,
        0xb002b012,
        0xb014b004,
        0x90307ca0,
        0x7cb09050,
        0x90609040,
        0x73127311,
        0x73147313,
        0x720e720d,
        0x7210720f,
        0xb0e1b121,
        0xb0727100,
        0xd680a0e1,
        0x679e6b28,
        0x93f0c090,
        0xbc907000,
        0x9930c040,
        0xb910b911,
        0xb111b0d1,
        0x72917100,
        0xb111a0d1,
        0x9635722c,
        0xc0f38c82,
        0xb013b003,
        0x92c08170,
        0x96408190,
        0xb120b0e0,
        0x22027100,
        0x85b04750,
        0x92c39640,
        0x7100b120,
        0x964085c0,
        0x7100b120,
        0x96408590,
        0xb12092c3,
        0x85a07100,
        0xb1209640,
        0x8cb07100,
        0x0410cff1,
        0xb1209640,
        0x96367100,
        0x9930c040,
        0xb910b911,
        0xb111b0d1,
        0xb120a0e0,
        0x72917100,
        0xb111a0d1,
        0x1e108750,
        0xb2354371,
        0xa9156378,
        0xb913b916,
        0x2a308230,
        0x92302620,
        0x6b79c090,
        0xc120ac90,
        0x700067ee,
        0x721b7223,
        0x92c0c0f0,
        0xc1f1722f,
        0xc01592d1,
        0x7c977c86,
        0x8c807ccc,
        0x43912200,
        0x94407cf0,
        0x94607d10,
        0x7d206393,
        0xac909440,
        0xc1009636,
        0x816e91e0,
        0xc01d398e,
        0x439d1e0e,
        0x7000c03d,
        0x726a7269,
        0xb0537ce2,
        0xc76093a2,
        0x73a36ba4,
        0x96908a40,
        0x96a18a51,
        0x7cd093a6,
        0x8a4393a0,
        0x31338a54,
        0x31343d33,
        0x70003d34,
        0x8a439a31,
        0x31338a54,
        0x31343d63,
        0x96933d64,
        0xb05396a4,
        0x1e0e7000,
        0x8c3143d6,
        0x18108c40,
        0xc0024fd0,
        0x161110d1,
        0x16201812,
        0x1c203d20,
        0x10204fe4,
        0x63e41610,
        0x3d201620,
        0x4be41cd0,
        0x63e410d0,
        0xc082c000,
        0x8c448c33,
        0x1c241834,
        0x14424fe0,
        0x63e44be2,
        0x63e410d0,
        0x18d0c000,
        0x720d7000,
        0x720f720e,
        0x73117210,
        0x73137312,
        0x70007314,
        0x89f09a00,
        0x47ef2200,
        0x7000b9e0};

PATCH_FUN_SPEC void rf_patch_mce_tof(void)
{
#ifdef __PATCH_NO_UNROLLING
    uint32_t i;

    for (i = 0; i < 506; i++)
    {
        HWREG(RFC_MCERAM_BASE + 4 * i) = patchTofMce[i];
    }

#else
    const uint32_t* pS = patchTofMce;
    volatile unsigned long* pD = &HWREG(RFC_MCERAM_BASE);
    uint32_t t1, t2, t3, t4, t5, t6, t7, t8;
    uint32_t nIterations = 63;

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
    t2 = *pS++;
    *pD++ = t1;
    *pD++ = t2;
#endif
}

#endif
