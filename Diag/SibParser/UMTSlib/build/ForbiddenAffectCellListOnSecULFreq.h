/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_ForbiddenAffectCellListOnSecULFreq_H_
#define	_ForbiddenAffectCellListOnSecULFreq_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ForbiddenAffectCellOnSecULFreq;

/* ForbiddenAffectCellListOnSecULFreq */
typedef struct ForbiddenAffectCellListOnSecULFreq {
	A_SEQUENCE_OF(struct ForbiddenAffectCellOnSecULFreq) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ForbiddenAffectCellListOnSecULFreq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ForbiddenAffectCellListOnSecULFreq;
extern asn_SET_OF_specifics_t asn_SPC_ForbiddenAffectCellListOnSecULFreq_specs_1;
extern asn_TYPE_member_t asn_MBR_ForbiddenAffectCellListOnSecULFreq_1[1];
extern asn_per_constraints_t asn_PER_type_ForbiddenAffectCellListOnSecULFreq_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ForbiddenAffectCellOnSecULFreq.h"

#endif	/* _ForbiddenAffectCellListOnSecULFreq_H_ */
#include <asn_internal.h>
