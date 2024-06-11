/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRCConnectionReestablishmentComplete_v1130_IEs_H_
#define	_RRCConnectionReestablishmentComplete_v1130_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReestablishmentComplete_v1130_IEs__connEstFailInfoAvailable_r11 {
	RRCConnectionReestablishmentComplete_v1130_IEs__connEstFailInfoAvailable_r11_true	= 0
} e_RRCConnectionReestablishmentComplete_v1130_IEs__connEstFailInfoAvailable_r11;

/* Forward declarations */
struct RRCConnectionReestablishmentComplete_v1250_IEs;

/* RRCConnectionReestablishmentComplete-v1130-IEs */
typedef struct RRCConnectionReestablishmentComplete_v1130_IEs {
	long	*connEstFailInfoAvailable_r11	/* OPTIONAL */;
	struct RRCConnectionReestablishmentComplete_v1250_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReestablishmentComplete_v1130_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_connEstFailInfoAvailable_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishmentComplete_v1130_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReestablishmentComplete_v1130_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReestablishmentComplete_v1130_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCConnectionReestablishmentComplete-v1250-IEs.h"

#endif	/* _RRCConnectionReestablishmentComplete_v1130_IEs_H_ */
#include <asn_internal.h>
