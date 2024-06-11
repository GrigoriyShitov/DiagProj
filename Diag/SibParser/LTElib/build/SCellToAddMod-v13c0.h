/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SCellToAddMod_v13c0_H_
#define	_SCellToAddMod_v13c0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RadioResourceConfigDedicatedSCell_v13c0;

/* SCellToAddMod-v13c0 */
typedef struct SCellToAddMod_v13c0 {
	struct RadioResourceConfigDedicatedSCell_v13c0	*radioResourceConfigDedicatedSCell_v13c0	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCellToAddMod_v13c0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCellToAddMod_v13c0;
extern asn_SEQUENCE_specifics_t asn_SPC_SCellToAddMod_v13c0_specs_1;
extern asn_TYPE_member_t asn_MBR_SCellToAddMod_v13c0_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RadioResourceConfigDedicatedSCell-v13c0.h"

#endif	/* _SCellToAddMod_v13c0_H_ */
#include <asn_internal.h>
