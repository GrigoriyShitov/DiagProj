/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MAC_ehs_AddReconfReordQ_List_TDD128_v9c0ext_H_
#define	_MAC_ehs_AddReconfReordQ_List_TDD128_v9c0ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MAC_ehs_AddReconfReordQ_TDD128_v9c0ext;

/* MAC-ehs-AddReconfReordQ-List-TDD128-v9c0ext */
typedef struct MAC_ehs_AddReconfReordQ_List_TDD128_v9c0ext {
	A_SEQUENCE_OF(struct MAC_ehs_AddReconfReordQ_TDD128_v9c0ext) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_ehs_AddReconfReordQ_List_TDD128_v9c0ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAC_ehs_AddReconfReordQ_List_TDD128_v9c0ext;
extern asn_SET_OF_specifics_t asn_SPC_MAC_ehs_AddReconfReordQ_List_TDD128_v9c0ext_specs_1;
extern asn_TYPE_member_t asn_MBR_MAC_ehs_AddReconfReordQ_List_TDD128_v9c0ext_1[1];
extern asn_per_constraints_t asn_PER_type_MAC_ehs_AddReconfReordQ_List_TDD128_v9c0ext_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MAC-ehs-AddReconfReordQ-TDD128-v9c0ext.h"

#endif	/* _MAC_ehs_AddReconfReordQ_List_TDD128_v9c0ext_H_ */
#include <asn_internal.h>
