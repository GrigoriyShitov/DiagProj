/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasParameters_v1700_H_
#define	_MeasParameters_v1700_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SharedSpectrumMeasNR_r17;

/* MeasParameters-v1700 */
typedef struct MeasParameters_v1700 {
	struct MeasParameters_v1700__sharedSpectrumMeasNR_EN_DC_r17 {
		A_SEQUENCE_OF(struct SharedSpectrumMeasNR_r17) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sharedSpectrumMeasNR_EN_DC_r17;
	struct MeasParameters_v1700__sharedSpectrumMeasNR_SA_r17 {
		A_SEQUENCE_OF(struct SharedSpectrumMeasNR_r17) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sharedSpectrumMeasNR_SA_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasParameters_v1700_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasParameters_v1700;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasParameters_v1700_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasParameters_v1700_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SharedSpectrumMeasNR-r17.h"

#endif	/* _MeasParameters_v1700_H_ */
#include <asn_internal.h>
