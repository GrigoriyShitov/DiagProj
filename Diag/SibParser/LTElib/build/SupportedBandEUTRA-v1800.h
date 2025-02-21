/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SupportedBandEUTRA_v1800_H_
#define	_SupportedBandEUTRA_v1800_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LowerMSD_MRDC_r18;

/* SupportedBandEUTRA-v1800 */
typedef struct SupportedBandEUTRA_v1800 {
	struct SupportedBandEUTRA_v1800__lowerMSD_MRDC_r18 {
		A_SEQUENCE_OF(struct LowerMSD_MRDC_r18) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *lowerMSD_MRDC_r18;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandEUTRA_v1800_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandEUTRA_v1800;
extern asn_SEQUENCE_specifics_t asn_SPC_SupportedBandEUTRA_v1800_specs_1;
extern asn_TYPE_member_t asn_MBR_SupportedBandEUTRA_v1800_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LowerMSD-MRDC-r18.h"

#endif	/* _SupportedBandEUTRA_v1800_H_ */
#include <asn_internal.h>
