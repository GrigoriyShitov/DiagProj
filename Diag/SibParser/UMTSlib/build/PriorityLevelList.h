/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PriorityLevelList_H_
#define	_PriorityLevelList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PriorityLevel;

/* PriorityLevelList */
typedef struct PriorityLevelList {
	A_SEQUENCE_OF(struct PriorityLevel) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PriorityLevelList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PriorityLevelList;
extern asn_SET_OF_specifics_t asn_SPC_PriorityLevelList_specs_1;
extern asn_TYPE_member_t asn_MBR_PriorityLevelList_1[1];
extern asn_per_constraints_t asn_PER_type_PriorityLevelList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PriorityLevel.h"

#endif	/* _PriorityLevelList_H_ */
#include <asn_internal.h>
