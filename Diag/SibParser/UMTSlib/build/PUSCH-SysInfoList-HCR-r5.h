/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PUSCH_SysInfoList_HCR_r5_H_
#define	_PUSCH_SysInfoList_HCR_r5_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PUSCH_SysInfo_HCR_r5;

/* PUSCH-SysInfoList-HCR-r5 */
typedef struct PUSCH_SysInfoList_HCR_r5 {
	A_SEQUENCE_OF(struct PUSCH_SysInfo_HCR_r5) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_SysInfoList_HCR_r5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_SysInfoList_HCR_r5;
extern asn_SET_OF_specifics_t asn_SPC_PUSCH_SysInfoList_HCR_r5_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_SysInfoList_HCR_r5_1[1];
extern asn_per_constraints_t asn_PER_type_PUSCH_SysInfoList_HCR_r5_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PUSCH-SysInfo-HCR-r5.h"

#endif	/* _PUSCH_SysInfoList_HCR_r5_H_ */
#include <asn_internal.h>
