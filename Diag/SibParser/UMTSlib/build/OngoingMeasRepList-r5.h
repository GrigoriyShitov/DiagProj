/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_OngoingMeasRepList_r5_H_
#define	_OngoingMeasRepList_r5_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct OngoingMeasRep_r5;

/* OngoingMeasRepList-r5 */
typedef struct OngoingMeasRepList_r5 {
	A_SEQUENCE_OF(struct OngoingMeasRep_r5) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OngoingMeasRepList_r5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OngoingMeasRepList_r5;
extern asn_SET_OF_specifics_t asn_SPC_OngoingMeasRepList_r5_specs_1;
extern asn_TYPE_member_t asn_MBR_OngoingMeasRepList_r5_1[1];
extern asn_per_constraints_t asn_PER_type_OngoingMeasRepList_r5_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "OngoingMeasRep-r5.h"

#endif	/* _OngoingMeasRepList_r5_H_ */
#include <asn_internal.h>
