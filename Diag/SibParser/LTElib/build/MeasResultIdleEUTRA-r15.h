/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasResultIdleEUTRA_r15_H_
#define	_MeasResultIdleEUTRA_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-r9.h"
#include "PhysCellId.h"
#include "RSRP-Range.h"
#include "RSRQ-Range-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultIdleEUTRA-r15 */
typedef struct MeasResultIdleEUTRA_r15 {
	ARFCN_ValueEUTRA_r9_t	 carrierFreq_r15;
	PhysCellId_t	 physCellId_r15;
	struct MeasResultIdleEUTRA_r15__measResult_r15 {
		RSRP_Range_t	 rsrpResult_r15;
		RSRQ_Range_r13_t	 rsrqResult_r15;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResult_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultIdleEUTRA_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultIdleEUTRA_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultIdleEUTRA_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultIdleEUTRA_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultIdleEUTRA_r15_H_ */
#include <asn_internal.h>
