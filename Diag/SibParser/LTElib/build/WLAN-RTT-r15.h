/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_WLAN_RTT_r15_H_
#define	_WLAN_RTT_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WLAN_RTT_r15__rttUnits_r15 {
	WLAN_RTT_r15__rttUnits_r15_microseconds	= 0,
	WLAN_RTT_r15__rttUnits_r15_hundredsofnanoseconds	= 1,
	WLAN_RTT_r15__rttUnits_r15_tensofnanoseconds	= 2,
	WLAN_RTT_r15__rttUnits_r15_nanoseconds	= 3,
	WLAN_RTT_r15__rttUnits_r15_tenthsofnanoseconds	= 4
	/*
	 * Enumeration is extensible
	 */
} e_WLAN_RTT_r15__rttUnits_r15;

/* WLAN-RTT-r15 */
typedef struct WLAN_RTT_r15 {
	long	 rttValue_r15;
	long	 rttUnits_r15;
	long	*rttAccuracy_r15	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WLAN_RTT_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rttUnits_r15_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_WLAN_RTT_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_WLAN_RTT_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_WLAN_RTT_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _WLAN_RTT_r15_H_ */
#include <asn_internal.h>
