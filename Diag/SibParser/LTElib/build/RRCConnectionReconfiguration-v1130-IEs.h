/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRCConnectionReconfiguration_v1130_IEs_H_
#define	_RRCConnectionReconfiguration_v1130_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRCConnectionReconfiguration_v1250_IEs;

/* RRCConnectionReconfiguration-v1130-IEs */
typedef struct RRCConnectionReconfiguration_v1130_IEs {
	OCTET_STRING_t	*systemInformationBlockType1Dedicated_r11	/* OPTIONAL */;
	struct RRCConnectionReconfiguration_v1250_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfiguration_v1130_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_v1130_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfiguration_v1130_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReconfiguration_v1130_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCConnectionReconfiguration-v1250-IEs.h"

#endif	/* _RRCConnectionReconfiguration_v1130_IEs_H_ */
#include <asn_internal.h>
