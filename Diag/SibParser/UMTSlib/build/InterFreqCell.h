/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_InterFreqCell_H_
#define	_InterFreqCell_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FrequencyInfo.h"
#include "CellMeasurementEventResults.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* InterFreqCell */
typedef struct InterFreqCell {
	FrequencyInfo_t	 frequencyInfo;
	CellMeasurementEventResults_t	 nonFreqRelatedEventResults;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCell_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCell;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFreqCell_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCell_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqCell_H_ */
#include <asn_internal.h>
