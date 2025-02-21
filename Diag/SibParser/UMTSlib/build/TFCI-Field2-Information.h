/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_TFCI_Field2_Information_H_
#define	_TFCI_Field2_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TFCI-RangeList.h"
#include "ExplicitTFCS-Configuration.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TFCI_Field2_Information_PR {
	TFCI_Field2_Information_PR_NOTHING,	/* No components present */
	TFCI_Field2_Information_PR_tfci_Range,
	TFCI_Field2_Information_PR_explicit_config
} TFCI_Field2_Information_PR;

/* TFCI-Field2-Information */
typedef struct TFCI_Field2_Information {
	TFCI_Field2_Information_PR present;
	union TFCI_Field2_Information_u {
		TFCI_RangeList_t	 tfci_Range;
		ExplicitTFCS_Configuration_t	 explicit_config;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TFCI_Field2_Information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TFCI_Field2_Information;
extern asn_CHOICE_specifics_t asn_SPC_TFCI_Field2_Information_specs_1;
extern asn_TYPE_member_t asn_MBR_TFCI_Field2_Information_1[2];
extern asn_per_constraints_t asn_PER_type_TFCI_Field2_Information_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _TFCI_Field2_Information_H_ */
#include <asn_internal.h>
