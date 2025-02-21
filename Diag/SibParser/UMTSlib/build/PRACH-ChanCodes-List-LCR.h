/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PRACH_ChanCodes_List_LCR_H_
#define	_PRACH_ChanCodes_List_LCR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TDD-PRACH-CCode-LCR-r4.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PRACH-ChanCodes-List-LCR */
typedef struct PRACH_ChanCodes_List_LCR {
	A_SEQUENCE_OF(TDD_PRACH_CCode_LCR_r4_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_ChanCodes_List_LCR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_ChanCodes_List_LCR;
extern asn_SET_OF_specifics_t asn_SPC_PRACH_ChanCodes_List_LCR_specs_1;
extern asn_TYPE_member_t asn_MBR_PRACH_ChanCodes_List_LCR_1[1];
extern asn_per_constraints_t asn_PER_type_PRACH_ChanCodes_List_LCR_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _PRACH_ChanCodes_List_LCR_H_ */
#include <asn_internal.h>
