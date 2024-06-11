/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasResultWLAN_r13_H_
#define	_MeasResultWLAN_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "WLAN-Identifiers-r12.h"
#include "WLAN-BandIndicator-r13.h"
#include "WLAN-RSSI-Range-r13.h"
#include <NativeInteger.h>
#include "WLAN-backhaulRate-r12.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasResultWLAN_r13__connectedWLAN_r13 {
	MeasResultWLAN_r13__connectedWLAN_r13_true	= 0
} e_MeasResultWLAN_r13__connectedWLAN_r13;

/* Forward declarations */
struct WLAN_CarrierInfo_r13;

/* MeasResultWLAN-r13 */
typedef struct MeasResultWLAN_r13 {
	WLAN_Identifiers_r12_t	 wlan_Identifiers_r13;
	struct WLAN_CarrierInfo_r13	*carrierInfoWLAN_r13	/* OPTIONAL */;
	WLAN_BandIndicator_r13_t	*bandWLAN_r13	/* OPTIONAL */;
	WLAN_RSSI_Range_r13_t	 rssiWLAN_r13;
	long	*availableAdmissionCapacityWLAN_r13	/* OPTIONAL */;
	WLAN_backhaulRate_r12_t	*backhaulDL_BandwidthWLAN_r13	/* OPTIONAL */;
	WLAN_backhaulRate_r12_t	*backhaulUL_BandwidthWLAN_r13	/* OPTIONAL */;
	long	*channelUtilizationWLAN_r13	/* OPTIONAL */;
	long	*stationCountWLAN_r13	/* OPTIONAL */;
	long	*connectedWLAN_r13	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultWLAN_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_connectedWLAN_r13_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultWLAN_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultWLAN_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultWLAN_r13_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "WLAN-CarrierInfo-r13.h"

#endif	/* _MeasResultWLAN_r13_H_ */
#include <asn_internal.h>
