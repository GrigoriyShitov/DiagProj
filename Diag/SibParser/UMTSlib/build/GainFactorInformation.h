/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_GainFactorInformation_H_
#define	_GainFactorInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SignalledGainFactors.h"
#include "ReferenceTFC-ID.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GainFactorInformation_PR {
	GainFactorInformation_PR_NOTHING,	/* No components present */
	GainFactorInformation_PR_signalledGainFactors,
	GainFactorInformation_PR_computedGainFactors
} GainFactorInformation_PR;

/* GainFactorInformation */
typedef struct GainFactorInformation {
	GainFactorInformation_PR present;
	union GainFactorInformation_u {
		SignalledGainFactors_t	 signalledGainFactors;
		ReferenceTFC_ID_t	 computedGainFactors;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GainFactorInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GainFactorInformation;
extern asn_CHOICE_specifics_t asn_SPC_GainFactorInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_GainFactorInformation_1[2];
extern asn_per_constraints_t asn_PER_type_GainFactorInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _GainFactorInformation_H_ */
#include <asn_internal.h>
