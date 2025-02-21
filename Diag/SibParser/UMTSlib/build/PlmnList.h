/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PlmnList_H_
#define	_PlmnList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_Identity;

/* PlmnList */
typedef struct PlmnList {
	A_SEQUENCE_OF(struct PLMN_Identity) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PlmnList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PlmnList;
extern asn_SET_OF_specifics_t asn_SPC_PlmnList_specs_1;
extern asn_TYPE_member_t asn_MBR_PlmnList_1[1];
extern asn_per_constraints_t asn_PER_type_PlmnList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-Identity.h"

#endif	/* _PlmnList_H_ */
#include <asn_internal.h>
