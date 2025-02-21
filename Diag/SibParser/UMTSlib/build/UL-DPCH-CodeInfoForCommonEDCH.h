/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UL_DPCH_CodeInfoForCommonEDCH_H_
#define	_UL_DPCH_CodeInfoForCommonEDCH_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ScramblingCodeType.h"
#include "UL-ScramblingCode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UL-DPCH-CodeInfoForCommonEDCH */
typedef struct UL_DPCH_CodeInfoForCommonEDCH {
	ScramblingCodeType_t	 ul_DPCCHscramblingCodeType;
	UL_ScramblingCode_t	*ul_DPCCHscramblingCode	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_DPCH_CodeInfoForCommonEDCH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_DPCH_CodeInfoForCommonEDCH;
extern asn_SEQUENCE_specifics_t asn_SPC_UL_DPCH_CodeInfoForCommonEDCH_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_DPCH_CodeInfoForCommonEDCH_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UL_DPCH_CodeInfoForCommonEDCH_H_ */
#include <asn_internal.h>
