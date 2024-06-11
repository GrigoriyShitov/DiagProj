/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_ExplicitTFCS_Configuration_H_
#define	_ExplicitTFCS_Configuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TFCS-ReconfAdd.h"
#include "TFCS-RemovalList.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ExplicitTFCS_Configuration_PR {
	ExplicitTFCS_Configuration_PR_NOTHING,	/* No components present */
	ExplicitTFCS_Configuration_PR_complete,
	ExplicitTFCS_Configuration_PR_addition,
	ExplicitTFCS_Configuration_PR_removal,
	ExplicitTFCS_Configuration_PR_replacement
} ExplicitTFCS_Configuration_PR;

/* ExplicitTFCS-Configuration */
typedef struct ExplicitTFCS_Configuration {
	ExplicitTFCS_Configuration_PR present;
	union ExplicitTFCS_Configuration_u {
		TFCS_ReconfAdd_t	 complete;
		TFCS_ReconfAdd_t	 addition;
		TFCS_RemovalList_t	 removal;
		struct ExplicitTFCS_Configuration__replacement {
			TFCS_RemovalList_t	 tfcsRemoval;
			TFCS_ReconfAdd_t	 tfcsAdd;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} replacement;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ExplicitTFCS_Configuration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ExplicitTFCS_Configuration;
extern asn_CHOICE_specifics_t asn_SPC_ExplicitTFCS_Configuration_specs_1;
extern asn_TYPE_member_t asn_MBR_ExplicitTFCS_Configuration_1[4];
extern asn_per_constraints_t asn_PER_type_ExplicitTFCS_Configuration_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ExplicitTFCS_Configuration_H_ */
#include <asn_internal.h>
