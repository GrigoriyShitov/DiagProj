/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasGapConfigPerCC_List_r14_H_
#define	_MeasGapConfigPerCC_List_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasGapConfigPerCC_List_r14_PR {
	MeasGapConfigPerCC_List_r14_PR_NOTHING,	/* No components present */
	MeasGapConfigPerCC_List_r14_PR_release,
	MeasGapConfigPerCC_List_r14_PR_setup
} MeasGapConfigPerCC_List_r14_PR;

/* Forward declarations */
struct MeasGapConfigToRemoveList_r14;
struct MeasGapConfigToAddModList_r14;

/* MeasGapConfigPerCC-List-r14 */
typedef struct MeasGapConfigPerCC_List_r14 {
	MeasGapConfigPerCC_List_r14_PR present;
	union MeasGapConfigPerCC_List_r14_u {
		NULL_t	 release;
		struct MeasGapConfigPerCC_List_r14__setup {
			struct MeasGapConfigToRemoveList_r14	*measGapConfigToRemoveList_r14	/* OPTIONAL */;
			struct MeasGapConfigToAddModList_r14	*measGapConfigToAddModList_r14	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasGapConfigPerCC_List_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasGapConfigPerCC_List_r14;
extern asn_CHOICE_specifics_t asn_SPC_MeasGapConfigPerCC_List_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasGapConfigPerCC_List_r14_1[2];
extern asn_per_constraints_t asn_PER_type_MeasGapConfigPerCC_List_r14_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasGapConfigToRemoveList-r14.h"
#include "MeasGapConfigToAddModList-r14.h"

#endif	/* _MeasGapConfigPerCC_List_r14_H_ */
#include <asn_internal.h>
