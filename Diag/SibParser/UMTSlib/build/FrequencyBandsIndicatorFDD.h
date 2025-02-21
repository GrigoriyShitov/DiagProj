/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_FrequencyBandsIndicatorFDD_H_
#define	_FrequencyBandsIndicatorFDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioFrequencyBandFDD.h"
#include "RadioFrequencyBandFDD2.h"
#include "RadioFrequencyBandFDD3.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FrequencyBandsIndicatorFDD_PR {
	FrequencyBandsIndicatorFDD_PR_NOTHING,	/* No components present */
	FrequencyBandsIndicatorFDD_PR_frequencyBandsIndicator1,
	FrequencyBandsIndicatorFDD_PR_frequencyBandsIndicator2,
	FrequencyBandsIndicatorFDD_PR_frequencyBandsIndicator3
} FrequencyBandsIndicatorFDD_PR;

/* FrequencyBandsIndicatorFDD */
typedef struct FrequencyBandsIndicatorFDD {
	FrequencyBandsIndicatorFDD_PR present;
	union FrequencyBandsIndicatorFDD_u {
		RadioFrequencyBandFDD_t	 frequencyBandsIndicator1;
		RadioFrequencyBandFDD2_t	 frequencyBandsIndicator2;
		RadioFrequencyBandFDD3_t	 frequencyBandsIndicator3;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FrequencyBandsIndicatorFDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FrequencyBandsIndicatorFDD;
extern asn_CHOICE_specifics_t asn_SPC_FrequencyBandsIndicatorFDD_specs_1;
extern asn_TYPE_member_t asn_MBR_FrequencyBandsIndicatorFDD_1[3];
extern asn_per_constraints_t asn_PER_type_FrequencyBandsIndicatorFDD_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _FrequencyBandsIndicatorFDD_H_ */
#include <asn_internal.h>
