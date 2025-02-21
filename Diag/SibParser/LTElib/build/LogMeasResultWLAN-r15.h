/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_LogMeasResultWLAN_r15_H_
#define	_LogMeasResultWLAN_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "WLAN-Identifiers-r12.h"
#include "WLAN-RSSI-Range-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct WLAN_RTT_r15;

/* LogMeasResultWLAN-r15 */
typedef struct LogMeasResultWLAN_r15 {
	WLAN_Identifiers_r12_t	 wlan_Identifiers_r15;
	WLAN_RSSI_Range_r13_t	*rssiWLAN_r15	/* OPTIONAL */;
	struct WLAN_RTT_r15	*rtt_WLAN_r15	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LogMeasResultWLAN_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LogMeasResultWLAN_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LogMeasResultWLAN_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LogMeasResultWLAN_r15_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "WLAN-RTT-r15.h"

#endif	/* _LogMeasResultWLAN_r15_H_ */
#include <asn_internal.h>
