/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_ACDC_Parameters_H_
#define	_ACDC_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ACDC-ParametersPerPLMN-List.h"
#include "ACDC-ParametersForAll.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ACDC_Parameters__barringRepresentation_PR {
	ACDC_Parameters__barringRepresentation_PR_NOTHING,	/* No components present */
	ACDC_Parameters__barringRepresentation_PR_acdc_ParametersPerPLMN_List,
	ACDC_Parameters__barringRepresentation_PR_acdc_ParametersForAll
} ACDC_Parameters__barringRepresentation_PR;

/* ACDC-Parameters */
typedef struct ACDC_Parameters {
	struct ACDC_Parameters__barringRepresentation {
		ACDC_Parameters__barringRepresentation_PR present;
		union ACDC_Parameters__barringRepresentation_u {
			ACDC_ParametersPerPLMN_List_t	 acdc_ParametersPerPLMN_List;
			ACDC_ParametersForAll_t	 acdc_ParametersForAll;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} barringRepresentation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ACDC_Parameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ACDC_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_ACDC_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_ACDC_Parameters_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _ACDC_Parameters_H_ */
#include <asn_internal.h>
