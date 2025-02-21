/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_WLANIdentifier_H_
#define	_WLANIdentifier_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* WLANIdentifier */
typedef struct WLANIdentifier {
	OCTET_STRING_t	*ssid	/* OPTIONAL */;
	OCTET_STRING_t	*bssid	/* OPTIONAL */;
	OCTET_STRING_t	*hessid	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WLANIdentifier_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WLANIdentifier;
extern asn_SEQUENCE_specifics_t asn_SPC_WLANIdentifier_specs_1;
extern asn_TYPE_member_t asn_MBR_WLANIdentifier_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _WLANIdentifier_H_ */
#include <asn_internal.h>
