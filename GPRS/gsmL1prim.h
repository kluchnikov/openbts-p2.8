/*
* Copyright 2012 Thomas Cooper <tacooper@vt.edu>
*
* This software is distributed under the terms of the GNU Affero Public License.
* See the COPYING file in the main directory for details.
*
* This use of this software may be subject to additional restrictions.
* See the LEGAL file in the main directory for details.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Affero General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU Affero General Public License for more details.

You should have received a copy of the GNU Affero General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef GSML1PRIM_H
#define GSML1PRIM_H

#include <stdint.h>

typedef enum GsmL1_SubCh_t {
GsmL1_SubCh_NA,
} GsmL1_SubCh_t;

typedef enum GsmL1_Sapi_t {
GsmL1_Sapi_Fcch,
GsmL1_Sapi_Sch,
GsmL1_Sapi_Sacch,
GsmL1_Sapi_Sdcch,
GsmL1_Sapi_Bcch,
GsmL1_Sapi_Pch,
GsmL1_Sapi_Agch,
GsmL1_Sapi_Cbch,
GsmL1_Sapi_Rach,
GsmL1_Sapi_TchF,
GsmL1_Sapi_FacchF,
GsmL1_Sapi_TchH,
GsmL1_Sapi_FacchH,
GsmL1_Sapi_Nch,
GsmL1_Sapi_Pdtch,
GsmL1_Sapi_Pacch,
GsmL1_Sapi_Pbcch,
GsmL1_Sapi_Pagch,
GsmL1_Sapi_Ppch,
GsmL1_Sapi_Pnch,
GsmL1_Sapi_Ptcch,
GsmL1_Sapi_Prach,
GsmL1_Sapi_Idle,
GsmL1_Sapi_NUM,
} GsmL1_Sapi_t;

typedef enum GsmL1_Status_t {
GsmL1_Status_Success,
GsmL1_Status_Generic,
GsmL1_Status_NoMemory,
GsmL1_Status_Timeout,
GsmL1_Status_InvalidParam,
GsmL1_Status_Busy,
GsmL1_Status_NoRessource,
GsmL1_Status_Uninitialized,
GsmL1_Status_NullInterface,
GsmL1_Status_NullFctnPtr,
GsmL1_Status_BadCrc,
GsmL1_Status_BadUsf,
GsmL1_Status_InvalidCPS,
GsmL1_Status_UnexpectedBurst,
GsmL1_Status_UnavailCodec,
GsmL1_Status_CriticalError,
GsmL1_Status_OverheatError,
GsmL1_Status_DeviceError,
GsmL1_Status_FacchError,
GsmL1_Status_AlreadyDeactivated,
GsmL1_Status_TxBurstFifoOvrn,
GsmL1_Status_TxBurstFifoUndr,
GsmL1_Status_NotSynchronized,
GsmL1_Status_Unsupported,
GSML1_STATUS_NUM,
} GsmL1_Status_t;

typedef enum GsmL1_PrimId_t {
GsmL1_PrimId_MphInitReq,
GsmL1_PrimId_MphCloseReq,
GsmL1_PrimId_MphConnectReq,
GsmL1_PrimId_MphDisconnectReq,
GsmL1_PrimId_MphActivateReq,
GsmL1_PrimId_MphDeactivateReq,
GsmL1_PrimId_MphConfigReq,
GsmL1_PrimId_MphMeasureReq,
GsmL1_PrimId_MphInitCnf,
GsmL1_PrimId_MphCloseCnf,
GsmL1_PrimId_MphConnectCnf,
GsmL1_PrimId_MphDisconnectCnf,
GsmL1_PrimId_MphActivateCnf,
GsmL1_PrimId_MphDeactivateCnf,
GsmL1_PrimId_MphConfigCnf,
GsmL1_PrimId_MphMeasureCnf,
GsmL1_PrimId_MphTimeInd,
GsmL1_PrimId_MphSyncInd,
GsmL1_PrimId_PhEmptyFrameReq,
GsmL1_PrimId_PhDataReq,
GsmL1_PrimId_PhConnectInd,
GsmL1_PrimId_PhReadyToSendInd,
GsmL1_PrimId_PhDataInd,
GsmL1_PrimId_PhRaInd,
GsmL1_PrimId_NUM,
} GsmL1_PrimId_t;

typedef enum GsmL1_Dir_t {
GsmL1_Dir_TxDownlink,
GsmL1_Dir_RxUplink,
} GsmL1_Dir_t;

typedef enum GsmL1_DevType_t {
GsmL1_DevType_TxdRxu,
} GsmL1_DevType_t;

typedef enum GsmL1_TchPlType_t {
GsmL1_TchPlType_NA,
GsmL1_TchPlType_Efr,
GsmL1_TchPlType_Fr,
GsmL1_TchPlType_Hr,
GsmL1_TchPlType_Amr,
GsmL1_TchPlType_Amr_SidBad,
GsmL1_TchPlType_Amr_Onset,
GsmL1_TchPlType_Amr_Ratscch,
GsmL1_TchPlType_Amr_SidUpdateInH,
GsmL1_TchPlType_Amr_SidFirstP1,
GsmL1_TchPlType_Amr_SidFirstP2,
GsmL1_TchPlType_Amr_SidFirstInH,
GsmL1_TchPlType_Amr_RatscchMarker,
GsmL1_TchPlType_Amr_RatscchData,
} GsmL1_TchPlType_t;

typedef enum GsmL1_ConfigParamId_t {
GsmL1_ConfigParamId_SetNbTsc,
GsmL1_ConfigParamId_SetTxPowerLevel,
GsmL1_ConfigParamId_SetLogChParams,
GsmL1_ConfigParamId_SetCipheringParams,
} GsmL1_ConfigParamId_t;

typedef struct GsmL1_DeviceParam_t {
enum GsmL1_DevType_t devType;
int freqBand;
uint16_t u16Arfcn;
uint16_t u16BcchArfcn;
uint8_t u8NbTsc;
uint8_t u8Ncc;
float fRxPowerLevel;
float fTxPowerLevel;
} GsmL1_DeviceParam_t;

typedef struct GsmL1_MsgUnitParam_t {
uint8_t u8Buffer[256];
uint8_t u8Size;
} GsmL1_MsgUnitParam_t;

typedef struct GsmL1_MeasParam_t {
float fRssi;
float fLinkQuality;
float fBer;
int16_t i16BurstTiming;
} GsmL1_MeasParam_t;

typedef struct GsmL1_LogChParam_t {
union {
struct {
enum GsmL1_TchPlType_t tchPlType;
        
enum {
GsmL1_AmrCmiPhase_NA,
GsmL1_AmrCmiPhase_Odd,
} amrCmiPhase;
        
enum {
GsmL1_AmrCodecMode_Unset,
} amrInitCodecMode;

enum {
GsmL1_AmrCodec_Unset,
GsmL1_AmrCodec_4_75,
GsmL1_AmrCodec_5_15,
GsmL1_AmrCodec_5_9,
GsmL1_AmrCodec_6_7,
GsmL1_AmrCodec_7_4,
GsmL1_AmrCodec_7_95,
GsmL1_AmrCodec_10_2,
GsmL1_AmrCodec_12_2,
} amrActiveCodecSet[8];
} tch;

struct {
uint8_t u8Bsic;
uint8_t u8NbrOfAgch;
} rach;

struct {
uint8_t u8MsPowerLevel;
} sacch;

struct {
uint8_t u8NbrOfAgch;
} agch;
};
} GsmL1_LogChParam_t;

typedef enum GsmL1_LogChComb_t {
GsmL1_LogChComb_0,
GsmL1_LogChComb_I,
GsmL1_LogChComb_II,
GsmL1_LogChComb_IV,
GsmL1_LogChComb_V,
GsmL1_LogChComb_VII,
GsmL1_LogChComb_XIII,
} GsmL1_LogChComb_t;

enum {
GsmL1_FreqBand_850,
GsmL1_FreqBand_900,
GsmL1_FreqBand_1800,
GsmL1_FreqBand_1900,
};

typedef struct GsmL1_MphInitReq_t {
struct GsmL1_DeviceParam_t deviceParam;
} GsmL1_MphInitReq_t;

typedef struct GsmL1_MphCloseReq_t {
uint32_t hLayer1;
} GsmL1_MphCloseReq_t;

typedef struct GsmL1_MphConnectReq_t {
uint32_t hLayer1;
uint8_t u8Tn;
enum GsmL1_LogChComb_t logChComb;
} GsmL1_MphConnectReq_t;

typedef struct GsmL1_MphDisconnectReq_t {
uint32_t hLayer1;
} GsmL1_MphDisconnectReq_t;

typedef struct GsmL1_MphActivateReq_t {
uint32_t hLayer1;
struct GsmL1_LogChParam_t logChPrm;
uint8_t u8Tn;
enum GsmL1_SubCh_t subCh;
enum GsmL1_Dir_t dir;
enum GsmL1_Sapi_t sapi;
uint32_t hLayer2;
float fBFILevel;
} GsmL1_MphActivateReq_t;

typedef struct GsmL1_MphDeactivateReq_t {
uint32_t hLayer1;
uint8_t u8Tn;
enum GsmL1_SubCh_t subCh;
enum GsmL1_Dir_t dir;
enum GsmL1_Sapi_t sapi;
} GsmL1_MphDeactivateReq_t;

typedef struct GsmL1_ConfigParam_t {
struct {
enum GsmL1_Sapi_t sapi;
uint8_t u8Tn;
enum GsmL1_SubCh_t subCh;
enum GsmL1_Dir_t dir;
struct GsmL1_LogChParam_t logChParams;
} setLogChParams;
} GsmL1_ConfigParam_t;

typedef struct GsmL1_MphConfigReq_t {
uint32_t hLayer1;
enum GsmL1_ConfigParamId_t cfgParamId;
struct GsmL1_ConfigParam_t cfgParams;
} GsmL1_MphConfigReq_t;

typedef struct GsmL1_MphConfigCnf_t {
enum GsmL1_Status_t status;
enum GsmL1_ConfigParamId_t cfgParamId;
struct GsmL1_ConfigParam_t cfgParams;
} GsmL1_MphConfigCnf_t;

typedef struct GsmL1_MphMeasureReq_t {
uint32_t hLayer1;
} GsmL1_MphMeasureReq_t;

typedef struct GsmL1_MphInitCnf_t {
uint32_t hLayer1;
enum GsmL1_Status_t status;
} GsmL1_MphInitCnf_t;

typedef struct GsmL1_MphCloseCnf_t {
enum GsmL1_Status_t status;
} GsmL1_MphCloseCnf_t;

typedef struct GsmL1_MphConnectCnf_t {
enum GsmL1_Status_t status;
} GsmL1_MphConnectCnf_t;

typedef struct GsmL1_MphDisconnectCnf_t {
enum GsmL1_Status_t status;
} GsmL1_MphDisconnectCnf_t;

typedef struct GsmL1_MphActivateCnf_t {
enum GsmL1_Status_t status;
uint8_t u8Tn;
int sapi;
} GsmL1_MphActivateCnf_t;

typedef struct GsmL1_MphDeactivateCnf_t {
enum GsmL1_Status_t status;
uint8_t u8Tn;
enum GsmL1_Sapi_t sapi;
} GsmL1_MphDeactivateCnf_t;

typedef struct GsmL1_MphMeasureCnf_t {
enum GsmL1_Status_t status;
} GsmL1_MphMeasureCnf_t;

typedef struct GsmL1_MphTimeInd_t {
uint32_t u32Fn;
} GsmL1_MphTimeInd_t;

typedef struct GsmL1_MphSyncInd_t {
} GsmL1_MphSyncInd_t;

typedef struct GsmL1_PhEmptyFrameReq_t {
uint32_t hLayer1;
uint8_t u8Tn;
uint32_t u32Fn;
enum GsmL1_Sapi_t sapi;
enum GsmL1_SubCh_t subCh;
uint8_t u8BlockNbr;
} GsmL1_PhEmptyFrameReq_t;

typedef struct GsmL1_PhDataReq_t {
uint32_t hLayer1;
uint8_t u8Tn;
uint32_t u32Fn;
enum GsmL1_Sapi_t sapi;
enum GsmL1_SubCh_t subCh;
uint8_t u8BlockNbr;
struct GsmL1_MsgUnitParam_t msgUnitParam;
} GsmL1_PhDataReq_t;

typedef struct GsmL1_PhConnectInd_t {
uint8_t u8Tn;
uint8_t u8Tsc;
uint16_t u16Arfcn;
} GsmL1_PhConnectInd_t;

typedef struct GsmL1_PhReadyToSendInd_t {
uint32_t hLayer1;
uint8_t u8Tn;
uint32_t u32Fn;
enum GsmL1_Sapi_t sapi;
enum GsmL1_SubCh_t subCh;
uint8_t u8BlockNbr;
uint32_t hLayer2;
} GsmL1_PhReadyToSendInd_t;

typedef struct GsmL1_PhDataInd_t {
struct GsmL1_MeasParam_t measParam;
struct GsmL1_MsgUnitParam_t msgUnitParam;
enum GsmL1_Sapi_t sapi;
uint32_t hLayer2;
} GsmL1_PhDataInd_t;

typedef struct GsmL1_PhRaInd_t {
struct GsmL1_MeasParam_t measParam;
struct GsmL1_MsgUnitParam_t msgUnitParam;
uint32_t u32Fn;
uint32_t hLayer2;
} GsmL1_PhRaInd_t;

typedef struct GsmL1_Prim_t {
union {
struct GsmL1_MphInitReq_t mphInitReq;
struct GsmL1_MphCloseReq_t mphCloseReq;
struct GsmL1_MphConnectReq_t mphConnectReq;
struct GsmL1_MphDisconnectReq_t mphDisconnectReq;
struct GsmL1_MphActivateReq_t mphActivateReq;
struct GsmL1_MphDeactivateReq_t mphDeactivateReq;
struct GsmL1_MphConfigReq_t mphConfigReq;
struct GsmL1_MphMeasureReq_t mphMeasureReq;
struct GsmL1_MphInitCnf_t mphInitCnf;
struct GsmL1_MphCloseCnf_t mphCloseCnf;
struct GsmL1_MphConnectCnf_t mphConnectCnf;
struct GsmL1_MphDisconnectCnf_t mphDisconnectCnf;
struct GsmL1_MphActivateCnf_t mphActivateCnf;
struct GsmL1_MphDeactivateCnf_t mphDeactivateCnf;
struct GsmL1_MphConfigCnf_t mphConfigCnf;
struct GsmL1_MphMeasureCnf_t mphMeasureCnf;
struct GsmL1_MphTimeInd_t mphTimeInd;
struct GsmL1_MphSyncInd_t mphSyncInd;
struct GsmL1_PhEmptyFrameReq_t phEmptyFrameReq;
struct GsmL1_PhDataReq_t phDataReq;
struct GsmL1_PhConnectInd_t phConnectInd;
struct GsmL1_PhReadyToSendInd_t phReadyToSendInd;
struct GsmL1_PhDataInd_t phDataInd;
struct GsmL1_PhRaInd_t phRaInd;
} u;

enum GsmL1_PrimId_t id;
} GsmL1_Prim_t;

#endif
