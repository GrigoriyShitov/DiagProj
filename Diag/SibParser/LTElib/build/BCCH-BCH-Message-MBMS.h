/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_BCCH_BCH_Message_MBMS_H_
#define	_BCCH_BCH_Message_MBMS_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BCCH-BCH-MessageType-MBMS-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BCCH-BCH-Message-MBMS */
typedef struct BCCH_BCH_Message_MBMS {
	BCCH_BCH_MessageType_MBMS_r14_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BCCH_BCH_Message_MBMS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BCCH_BCH_Message_MBMS;

#ifdef __cplusplus
}
#endif

#endif	/* _BCCH_BCH_Message_MBMS_H_ */
#include <asn_internal.h>
