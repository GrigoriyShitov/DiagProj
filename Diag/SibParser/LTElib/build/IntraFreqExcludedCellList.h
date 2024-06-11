/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_IntraFreqExcludedCellList_H_
#define	_IntraFreqExcludedCellList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhysCellIdRange;

/* IntraFreqExcludedCellList */
typedef struct IntraFreqExcludedCellList {
	A_SEQUENCE_OF(struct PhysCellIdRange) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqExcludedCellList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqExcludedCellList;
extern asn_SET_OF_specifics_t asn_SPC_IntraFreqExcludedCellList_specs_1;
extern asn_TYPE_member_t asn_MBR_IntraFreqExcludedCellList_1[1];
extern asn_per_constraints_t asn_PER_type_IntraFreqExcludedCellList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhysCellIdRange.h"

#endif	/* _IntraFreqExcludedCellList_H_ */
#include <asn_internal.h>
