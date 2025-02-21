/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_TrafficVolumeEventParam_H_
#define	_TrafficVolumeEventParam_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TrafficVolumeEventType.h"
#include "TrafficVolumeThreshold.h"
#include "TimeToTrigger.h"
#include "PendingTimeAfterTrigger.h"
#include "TX-InterruptionAfterTrigger.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TrafficVolumeEventParam */
typedef struct TrafficVolumeEventParam {
	TrafficVolumeEventType_t	 eventID;
	TrafficVolumeThreshold_t	 reportingThreshold;
	TimeToTrigger_t	*timeToTrigger	/* OPTIONAL */;
	PendingTimeAfterTrigger_t	*pendingTimeAfterTrigger	/* OPTIONAL */;
	TX_InterruptionAfterTrigger_t	*tx_InterruptionAfterTrigger	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficVolumeEventParam_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficVolumeEventParam;
extern asn_SEQUENCE_specifics_t asn_SPC_TrafficVolumeEventParam_specs_1;
extern asn_TYPE_member_t asn_MBR_TrafficVolumeEventParam_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _TrafficVolumeEventParam_H_ */
#include <asn_internal.h>
