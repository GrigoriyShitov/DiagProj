/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CSG_MemberPLMNList_H_
#define	_CSG_MemberPLMNList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_Identity;

/* CSG-MemberPLMNList */
typedef struct CSG_MemberPLMNList {
	A_SEQUENCE_OF(struct PLMN_Identity) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSG_MemberPLMNList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSG_MemberPLMNList;
extern asn_SET_OF_specifics_t asn_SPC_CSG_MemberPLMNList_specs_1;
extern asn_TYPE_member_t asn_MBR_CSG_MemberPLMNList_1[1];
extern asn_per_constraints_t asn_PER_type_CSG_MemberPLMNList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-Identity.h"

#endif	/* _CSG_MemberPLMNList_H_ */
#include <asn_internal.h>
