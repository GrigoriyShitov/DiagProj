/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MultipleEUTRAFrequencyBandExtensionInfo_H_
#define	_MultipleEUTRAFrequencyBandExtensionInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MultipleEUTRAFrequencyBandIndicatorExtensionList;

/* MultipleEUTRAFrequencyBandExtensionInfo */
typedef struct MultipleEUTRAFrequencyBandExtensionInfo {
	struct MultipleEUTRAFrequencyBandIndicatorExtensionList	*multipleEUTRAFrequencyBandIndicatorlist	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MultipleEUTRAFrequencyBandExtensionInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MultipleEUTRAFrequencyBandExtensionInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_MultipleEUTRAFrequencyBandExtensionInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_MultipleEUTRAFrequencyBandExtensionInfo_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MultipleEUTRAFrequencyBandIndicatorExtensionList.h"

#endif	/* _MultipleEUTRAFrequencyBandExtensionInfo_H_ */
#include <asn_internal.h>
