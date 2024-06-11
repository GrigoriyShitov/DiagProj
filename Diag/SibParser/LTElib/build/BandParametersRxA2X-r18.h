/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_BandParametersRxA2X_r18_H_
#define	_BandParametersRxA2X_r18_H_


#include <asn_application.h>

/* Including external dependencies */
#include "V2X-BandwidthClassSL-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BandParametersRxA2X-r18 */
typedef struct BandParametersRxA2X_r18 {
	V2X_BandwidthClassSL_r14_t	 a2x_BandwidthClassRxSL_r18;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandParametersRxA2X_r18_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandParametersRxA2X_r18;
extern asn_SEQUENCE_specifics_t asn_SPC_BandParametersRxA2X_r18_specs_1;
extern asn_TYPE_member_t asn_MBR_BandParametersRxA2X_r18_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _BandParametersRxA2X_r18_H_ */
#include <asn_internal.h>
