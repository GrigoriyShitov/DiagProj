/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_Positioning_WLANMeasurementList_element_H_
#define	_UE_Positioning_WLANMeasurementList_element_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_Positioning_WLANMeasurementList_element__wlanRTTunits {
	UE_Positioning_WLANMeasurementList_element__wlanRTTunits_microseconds	= 0,
	UE_Positioning_WLANMeasurementList_element__wlanRTTunits_hundredsofnanoseconds	= 1,
	UE_Positioning_WLANMeasurementList_element__wlanRTTunits_tensofnanoseconds	= 2,
	UE_Positioning_WLANMeasurementList_element__wlanRTTunits_nanoseconds	= 3,
	UE_Positioning_WLANMeasurementList_element__wlanRTTunits_tenthsofnanosecond	= 4,
	UE_Positioning_WLANMeasurementList_element__wlanRTTunits_spare3	= 5,
	UE_Positioning_WLANMeasurementList_element__wlanRTTunits_spare2	= 6,
	UE_Positioning_WLANMeasurementList_element__wlanRTTunits_spare1	= 7
} e_UE_Positioning_WLANMeasurementList_element__wlanRTTunits;

/* UE-Positioning-WLANMeasurementList-element */
typedef struct UE_Positioning_WLANMeasurementList_element {
	OCTET_STRING_t	 wlanBSSID;
	OCTET_STRING_t	*wlanSSID	/* OPTIONAL */;
	long	*wlanRSSI	/* OPTIONAL */;
	long	*wlanRTTvalue	/* OPTIONAL */;
	long	*wlanRTTunits	/* OPTIONAL */;
	long	*wlanRTTaccuracy	/* OPTIONAL */;
	long	*wlanAPChannelFrequency	/* OPTIONAL */;
	BOOLEAN_t	*wlanServingFlag	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_WLANMeasurementList_element_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_wlanRTTunits_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_WLANMeasurementList_element;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_WLANMeasurementList_element_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_Positioning_WLANMeasurementList_element_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Positioning_WLANMeasurementList_element_H_ */
#include <asn_internal.h>
