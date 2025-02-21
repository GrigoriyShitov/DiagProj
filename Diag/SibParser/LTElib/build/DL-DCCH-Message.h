/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_DL_DCCH_Message_H_
#define	_DL_DCCH_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-DCCH-MessageType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-DCCH-Message */
typedef struct DL_DCCH_Message {
	DL_DCCH_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_DCCH_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_DCCH_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_DCCH_Message_H_ */
#include <asn_internal.h>
