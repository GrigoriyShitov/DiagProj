/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SRNC_RelocationInfo_v860ext_IEs_H_
#define	_SRNC_RelocationInfo_v860ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E_RGCH_CombinationInfoList;

/* SRNC-RelocationInfo-v860ext-IEs */
typedef struct SRNC_RelocationInfo_v860ext_IEs {
	struct E_RGCH_CombinationInfoList	*e_RGCH_CombinationInfoList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRNC_RelocationInfo_v860ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRNC_RelocationInfo_v860ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SRNC_RelocationInfo_v860ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SRNC_RelocationInfo_v860ext_IEs_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "E-RGCH-CombinationInfoList.h"

#endif	/* _SRNC_RelocationInfo_v860ext_IEs_H_ */
#include <asn_internal.h>
