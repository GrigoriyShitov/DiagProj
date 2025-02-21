/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_IntraFreqSIAcquisition_H_
#define	_IntraFreqSIAcquisition_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IntraFreqSIAcquisition__modeSpecificInfo_PR {
	IntraFreqSIAcquisition__modeSpecificInfo_PR_NOTHING,	/* No components present */
	IntraFreqSIAcquisition__modeSpecificInfo_PR_fdd,
	IntraFreqSIAcquisition__modeSpecificInfo_PR_tdd
} IntraFreqSIAcquisition__modeSpecificInfo_PR;

/* Forward declarations */
struct IntraFreqSIAcquisitionInfo;

/* IntraFreqSIAcquisition */
typedef struct IntraFreqSIAcquisition {
	struct IntraFreqSIAcquisition__modeSpecificInfo {
		IntraFreqSIAcquisition__modeSpecificInfo_PR present;
		union IntraFreqSIAcquisition__modeSpecificInfo_u {
			struct IntraFreqSIAcquisition__modeSpecificInfo__fdd {
				struct IntraFreqSIAcquisitionInfo	*intraFreqSIAcquisitionInfo	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			NULL_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqSIAcquisition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqSIAcquisition;
extern asn_SEQUENCE_specifics_t asn_SPC_IntraFreqSIAcquisition_specs_1;
extern asn_TYPE_member_t asn_MBR_IntraFreqSIAcquisition_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntraFreqSIAcquisitionInfo.h"

#endif	/* _IntraFreqSIAcquisition_H_ */
#include <asn_internal.h>
