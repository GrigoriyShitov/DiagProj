/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_IntraFreqMeasQuantity_H_
#define	_IntraFreqMeasQuantity_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FilterCoefficient.h"
#include "IntraFreqMeasQuantity-FDD.h"
#include <constr_SEQUENCE.h>
#include "IntraFreqMeasQuantity-TDDList.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IntraFreqMeasQuantity__modeSpecificInfo_PR {
	IntraFreqMeasQuantity__modeSpecificInfo_PR_NOTHING,	/* No components present */
	IntraFreqMeasQuantity__modeSpecificInfo_PR_fdd,
	IntraFreqMeasQuantity__modeSpecificInfo_PR_tdd
} IntraFreqMeasQuantity__modeSpecificInfo_PR;

/* IntraFreqMeasQuantity */
typedef struct IntraFreqMeasQuantity {
	FilterCoefficient_t	 filterCoefficient	/* DEFAULT 0 */;
	struct IntraFreqMeasQuantity__modeSpecificInfo {
		IntraFreqMeasQuantity__modeSpecificInfo_PR present;
		union IntraFreqMeasQuantity__modeSpecificInfo_u {
			struct IntraFreqMeasQuantity__modeSpecificInfo__fdd {
				IntraFreqMeasQuantity_FDD_t	 intraFreqMeasQuantity_FDD;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct IntraFreqMeasQuantity__modeSpecificInfo__tdd {
				IntraFreqMeasQuantity_TDDList_t	 intraFreqMeasQuantity_TDDList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqMeasQuantity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqMeasQuantity;
extern asn_SEQUENCE_specifics_t asn_SPC_IntraFreqMeasQuantity_specs_1;
extern asn_TYPE_member_t asn_MBR_IntraFreqMeasQuantity_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _IntraFreqMeasQuantity_H_ */
#include <asn_internal.h>
