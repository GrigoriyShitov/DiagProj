/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MBMS_NotificationConfig_v1430_H_
#define	_MBMS_NotificationConfig_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MBMS-NotificationConfig-v1430 */
typedef struct MBMS_NotificationConfig_v1430 {
	long	 notificationSF_Index_v1430;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_NotificationConfig_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_NotificationConfig_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_MBMS_NotificationConfig_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_MBMS_NotificationConfig_v1430_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_NotificationConfig_v1430_H_ */
#include <asn_internal.h>
