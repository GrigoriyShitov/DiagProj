/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SignalledGainFactors_H_
#define	_SignalledGainFactors_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GainFactor.h"
#include "ReferenceTFC-ID.h"
#include <NULL.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SignalledGainFactors__modeSpecificInfo_PR {
	SignalledGainFactors__modeSpecificInfo_PR_NOTHING,	/* No components present */
	SignalledGainFactors__modeSpecificInfo_PR_fdd,
	SignalledGainFactors__modeSpecificInfo_PR_tdd
} SignalledGainFactors__modeSpecificInfo_PR;

/* SignalledGainFactors */
typedef struct SignalledGainFactors {
	struct SignalledGainFactors__modeSpecificInfo {
		SignalledGainFactors__modeSpecificInfo_PR present;
		union SignalledGainFactors__modeSpecificInfo_u {
			struct SignalledGainFactors__modeSpecificInfo__fdd {
				GainFactor_t	 gainFactorBetaC;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			NULL_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	GainFactor_t	 gainFactorBetaD;
	ReferenceTFC_ID_t	*referenceTFC_ID	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SignalledGainFactors_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SignalledGainFactors;
extern asn_SEQUENCE_specifics_t asn_SPC_SignalledGainFactors_specs_1;
extern asn_TYPE_member_t asn_MBR_SignalledGainFactors_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SignalledGainFactors_H_ */
#include <asn_internal.h>
