/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_AdditionalPRACH_TF_and_TFCS_CCCH_List_H_
#define	_AdditionalPRACH_TF_and_TFCS_CCCH_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AdditionalPRACH_TF_and_TFCS_CCCH;

/* AdditionalPRACH-TF-and-TFCS-CCCH-List */
typedef struct AdditionalPRACH_TF_and_TFCS_CCCH_List {
	A_SEQUENCE_OF(struct AdditionalPRACH_TF_and_TFCS_CCCH) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AdditionalPRACH_TF_and_TFCS_CCCH_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdditionalPRACH_TF_and_TFCS_CCCH_List;
extern asn_SET_OF_specifics_t asn_SPC_AdditionalPRACH_TF_and_TFCS_CCCH_List_specs_1;
extern asn_TYPE_member_t asn_MBR_AdditionalPRACH_TF_and_TFCS_CCCH_List_1[1];
extern asn_per_constraints_t asn_PER_type_AdditionalPRACH_TF_and_TFCS_CCCH_List_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AdditionalPRACH-TF-and-TFCS-CCCH.h"

#endif	/* _AdditionalPRACH_TF_and_TFCS_CCCH_List_H_ */
#include <asn_internal.h>
