/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_STTI_SupportedCombinations_r15_H_
#define	_STTI_SupportedCombinations_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DL_UL_CCs_r15;

/* STTI-SupportedCombinations-r15 */
typedef struct STTI_SupportedCombinations_r15 {
	struct DL_UL_CCs_r15	*combination_22_r15	/* OPTIONAL */;
	struct DL_UL_CCs_r15	*combination_77_r15	/* OPTIONAL */;
	struct DL_UL_CCs_r15	*combination_27_r15	/* OPTIONAL */;
	struct STTI_SupportedCombinations_r15__combination_22_27_r15 {
		A_SEQUENCE_OF(struct DL_UL_CCs_r15) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *combination_22_27_r15;
	struct STTI_SupportedCombinations_r15__combination_77_22_r15 {
		A_SEQUENCE_OF(struct DL_UL_CCs_r15) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *combination_77_22_r15;
	struct STTI_SupportedCombinations_r15__combination_77_27_r15 {
		A_SEQUENCE_OF(struct DL_UL_CCs_r15) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *combination_77_27_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} STTI_SupportedCombinations_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_STTI_SupportedCombinations_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_STTI_SupportedCombinations_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_STTI_SupportedCombinations_r15_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DL-UL-CCs-r15.h"

#endif	/* _STTI_SupportedCombinations_r15_H_ */
#include <asn_internal.h>
