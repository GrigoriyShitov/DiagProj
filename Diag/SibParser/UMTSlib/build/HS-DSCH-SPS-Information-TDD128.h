/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_HS_DSCH_SPS_Information_TDD128_H_
#define	_HS_DSCH_SPS_Information_TDD128_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "HS-DSCH-SPS-NewOperation-TDD128.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HS_DSCH_SPS_Information_TDD128__hs_dsch_SPS_Operation_PR {
	HS_DSCH_SPS_Information_TDD128__hs_dsch_SPS_Operation_PR_NOTHING,	/* No components present */
	HS_DSCH_SPS_Information_TDD128__hs_dsch_SPS_Operation_PR_continue,
	HS_DSCH_SPS_Information_TDD128__hs_dsch_SPS_Operation_PR_newOperation
} HS_DSCH_SPS_Information_TDD128__hs_dsch_SPS_Operation_PR;

/* HS-DSCH-SPS-Information-TDD128 */
typedef struct HS_DSCH_SPS_Information_TDD128 {
	struct HS_DSCH_SPS_Information_TDD128__hs_dsch_SPS_Operation {
		HS_DSCH_SPS_Information_TDD128__hs_dsch_SPS_Operation_PR present;
		union HS_DSCH_SPS_Information_TDD128__hs_dsch_SPS_Operation_u {
			NULL_t	 Continue;
			HS_DSCH_SPS_NewOperation_TDD128_t	 newOperation;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} hs_dsch_SPS_Operation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HS_DSCH_SPS_Information_TDD128_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HS_DSCH_SPS_Information_TDD128;
extern asn_SEQUENCE_specifics_t asn_SPC_HS_DSCH_SPS_Information_TDD128_specs_1;
extern asn_TYPE_member_t asn_MBR_HS_DSCH_SPS_Information_TDD128_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _HS_DSCH_SPS_Information_TDD128_H_ */
#include <asn_internal.h>
