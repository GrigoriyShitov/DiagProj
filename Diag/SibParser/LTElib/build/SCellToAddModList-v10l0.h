/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SCellToAddModList_v10l0_H_
#define	_SCellToAddModList_v10l0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SCellToAddMod_v10l0;

/* SCellToAddModList-v10l0 */
typedef struct SCellToAddModList_v10l0 {
	A_SEQUENCE_OF(struct SCellToAddMod_v10l0) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCellToAddModList_v10l0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCellToAddModList_v10l0;
extern asn_SET_OF_specifics_t asn_SPC_SCellToAddModList_v10l0_specs_1;
extern asn_TYPE_member_t asn_MBR_SCellToAddModList_v10l0_1[1];
extern asn_per_constraints_t asn_PER_type_SCellToAddModList_v10l0_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SCellToAddMod-v10l0.h"

#endif	/* _SCellToAddModList_v10l0_H_ */
#include <asn_internal.h>
