/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_TrafficVolumeReportingQuantity_H_
#define	_TrafficVolumeReportingQuantity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TrafficVolumeReportingQuantity */
typedef struct TrafficVolumeReportingQuantity {
	BOOLEAN_t	 rlc_RB_BufferPayload;
	BOOLEAN_t	 rlc_RB_BufferPayloadAverage;
	BOOLEAN_t	 rlc_RB_BufferPayloadVariance;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficVolumeReportingQuantity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficVolumeReportingQuantity;
extern asn_SEQUENCE_specifics_t asn_SPC_TrafficVolumeReportingQuantity_specs_1;
extern asn_TYPE_member_t asn_MBR_TrafficVolumeReportingQuantity_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _TrafficVolumeReportingQuantity_H_ */
#include <asn_internal.h>
