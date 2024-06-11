/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PRACH_ConfigSIB_H_
#define	_PRACH_ConfigSIB_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "PRACH-ConfigInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PRACH-ConfigSIB */
typedef struct PRACH_ConfigSIB {
	long	 rootSequenceIndex;
	PRACH_ConfigInfo_t	 prach_ConfigInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_ConfigSIB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_ConfigSIB;
extern asn_SEQUENCE_specifics_t asn_SPC_PRACH_ConfigSIB_specs_1;
extern asn_TYPE_member_t asn_MBR_PRACH_ConfigSIB_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PRACH_ConfigSIB_H_ */
#include <asn_internal.h>
