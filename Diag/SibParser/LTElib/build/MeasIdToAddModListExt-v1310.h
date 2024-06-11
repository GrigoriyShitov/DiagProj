/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasIdToAddModListExt_v1310_H_
#define	_MeasIdToAddModListExt_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasIdToAddMod_v1310;

/* MeasIdToAddModListExt-v1310 */
typedef struct MeasIdToAddModListExt_v1310 {
	A_SEQUENCE_OF(struct MeasIdToAddMod_v1310) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasIdToAddModListExt_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasIdToAddModListExt_v1310;
extern asn_SET_OF_specifics_t asn_SPC_MeasIdToAddModListExt_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasIdToAddModListExt_v1310_1[1];
extern asn_per_constraints_t asn_PER_type_MeasIdToAddModListExt_v1310_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasIdToAddMod-v1310.h"

#endif	/* _MeasIdToAddModListExt_v1310_H_ */
#include <asn_internal.h>
