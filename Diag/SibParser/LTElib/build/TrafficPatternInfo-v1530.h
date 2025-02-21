/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_TrafficPatternInfo_v1530_H_
#define	_TrafficPatternInfo_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-DestinationIdentity-r12.h"
#include "SL-Reliability-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TrafficPatternInfo-v1530 */
typedef struct TrafficPatternInfo_v1530 {
	SL_DestinationIdentity_r12_t	*trafficDestination_r15	/* OPTIONAL */;
	SL_Reliability_r15_t	*reliabilityInfoSL_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficPatternInfo_v1530_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficPatternInfo_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_TrafficPatternInfo_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_TrafficPatternInfo_v1530_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TrafficPatternInfo_v1530_H_ */
#include <asn_internal.h>
