#include "__cf_BattEv.h"
#ifndef RTW_HEADER_BattEv_cap_host_h_
#define RTW_HEADER_BattEv_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; } BattEv_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void BattEv_host_InitializeDataMapInfo ( BattEv_host_DataMapInfo_T * dataMap
, const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
