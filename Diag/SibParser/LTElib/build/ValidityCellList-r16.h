/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_ValidityCellList_r16_H_
#define	_ValidityCellList_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhysCellIdRange;

/* ValidityCellList-r16 */
typedef struct ValidityCellList_r16 {
	A_SEQUENCE_OF(struct PhysCellIdRange) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ValidityCellList_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ValidityCellList_r16;
extern asn_SET_OF_specifics_t asn_SPC_ValidityCellList_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_ValidityCellList_r16_1[1];
extern asn_per_constraints_t asn_PER_type_ValidityCellList_r16_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhysCellIdRange.h"

#endif	/* _ValidityCellList_r16_H_ */
#include <asn_internal.h>
