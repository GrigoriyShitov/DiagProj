/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_AdditionalPRACH_TF_and_TFCS_CCCH_H_
#define	_AdditionalPRACH_TF_and_TFCS_CCCH_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AdditionalPRACH_TF_and_TFCS_CCCH_IEs;

/* AdditionalPRACH-TF-and-TFCS-CCCH */
typedef struct AdditionalPRACH_TF_and_TFCS_CCCH {
	struct AdditionalPRACH_TF_and_TFCS_CCCH_IEs	*additionalPRACH_TF_and_TFCS_CCCH_IEs	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AdditionalPRACH_TF_and_TFCS_CCCH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdditionalPRACH_TF_and_TFCS_CCCH;
extern asn_SEQUENCE_specifics_t asn_SPC_AdditionalPRACH_TF_and_TFCS_CCCH_specs_1;
extern asn_TYPE_member_t asn_MBR_AdditionalPRACH_TF_and_TFCS_CCCH_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AdditionalPRACH-TF-and-TFCS-CCCH-IEs.h"

#endif	/* _AdditionalPRACH_TF_and_TFCS_CCCH_H_ */
#include <asn_internal.h>
