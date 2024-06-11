/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SysInfoType17_v7xyext_IEs_H_
#define	_SysInfoType17_v7xyext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PUSCH_SysInfoList_SFN_VHCR;
struct PDSCH_SysInfoList_r7;

/* SysInfoType17-v7xyext-IEs */
typedef struct SysInfoType17_v7xyext_IEs {
	struct PUSCH_SysInfoList_SFN_VHCR	*pusch_SysInfoList_SFN_VHCR	/* OPTIONAL */;
	struct PDSCH_SysInfoList_r7	*pdsch_SysInfoList_r7	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType17_v7xyext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType17_v7xyext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SysInfoType17_v7xyext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SysInfoType17_v7xyext_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PUSCH-SysInfoList-SFN-VHCR.h"
#include "PDSCH-SysInfoList-r7.h"

#endif	/* _SysInfoType17_v7xyext_IEs_H_ */
#include <asn_internal.h>
