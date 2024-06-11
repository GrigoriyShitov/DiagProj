/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_PUSCH_SysInfoList_SFN_LCR_r4_H_
#define	_PUSCH_SysInfoList_SFN_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "PUSCH-SysInfo-LCR-r4.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SFN_TimeInfo;

/* Forward definitions */
typedef struct PUSCH_SysInfoList_SFN_LCR_r4__Member {
	PUSCH_SysInfo_LCR_r4_t	 pusch_SysInfo;
	struct SFN_TimeInfo	*sfn_TimeInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_SysInfoList_SFN_LCR_r4__Member;

/* PUSCH-SysInfoList-SFN-LCR-r4 */
typedef struct PUSCH_SysInfoList_SFN_LCR_r4 {
	A_SEQUENCE_OF(PUSCH_SysInfoList_SFN_LCR_r4__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_SysInfoList_SFN_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_SysInfoList_SFN_LCR_r4;
extern asn_SET_OF_specifics_t asn_SPC_PUSCH_SysInfoList_SFN_LCR_r4_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_SysInfoList_SFN_LCR_r4_1[1];
extern asn_per_constraints_t asn_PER_type_PUSCH_SysInfoList_SFN_LCR_r4_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SFN-TimeInfo.h"

#endif	/* _PUSCH_SysInfoList_SFN_LCR_r4_H_ */
#include <asn_internal.h>
