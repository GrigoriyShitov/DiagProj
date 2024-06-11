/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_RAT_TDD_InfoList_H_
#define	_RAT_TDD_InfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RAT_TDD_Info;

/* RAT-TDD-InfoList */
typedef struct RAT_TDD_InfoList {
	A_SEQUENCE_OF(struct RAT_TDD_Info) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAT_TDD_InfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAT_TDD_InfoList;
extern asn_SET_OF_specifics_t asn_SPC_RAT_TDD_InfoList_specs_1;
extern asn_TYPE_member_t asn_MBR_RAT_TDD_InfoList_1[1];
extern asn_per_constraints_t asn_PER_type_RAT_TDD_InfoList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RAT-TDD-Info.h"

#endif	/* _RAT_TDD_InfoList_H_ */
#include <asn_internal.h>
