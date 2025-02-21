/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasResultIdleNR_r16_H_
#define	_MeasResultIdleNR_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueNR-r15.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasResultsPerCellIdleNR_r16;

/* MeasResultIdleNR-r16 */
typedef struct MeasResultIdleNR_r16 {
	ARFCN_ValueNR_r15_t	 carrierFreqNR_r16;
	struct MeasResultIdleNR_r16__measResultsPerCellListIdleNR_r16 {
		A_SEQUENCE_OF(struct MeasResultsPerCellIdleNR_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultsPerCellListIdleNR_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultIdleNR_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultIdleNR_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultIdleNR_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultIdleNR_r16_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResultsPerCellIdleNR-r16.h"

#endif	/* _MeasResultIdleNR_r16_H_ */
#include <asn_internal.h>
