/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRCConnectionReestablishmentReject_r8_IEs_H_
#define	_RRCConnectionReestablishmentReject_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRCConnectionReestablishmentReject_v8a0_IEs;

/* RRCConnectionReestablishmentReject-r8-IEs */
typedef struct RRCConnectionReestablishmentReject_r8_IEs {
	struct RRCConnectionReestablishmentReject_v8a0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReestablishmentReject_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishmentReject_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReestablishmentReject_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReestablishmentReject_r8_IEs_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCConnectionReestablishmentReject-v8a0-IEs.h"

#endif	/* _RRCConnectionReestablishmentReject_r8_IEs_H_ */
#include <asn_internal.h>
