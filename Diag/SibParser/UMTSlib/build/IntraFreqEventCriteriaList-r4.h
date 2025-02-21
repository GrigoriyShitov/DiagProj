/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_IntraFreqEventCriteriaList_r4_H_
#define	_IntraFreqEventCriteriaList_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntraFreqEventCriteria_r4;

/* IntraFreqEventCriteriaList-r4 */
typedef struct IntraFreqEventCriteriaList_r4 {
	A_SEQUENCE_OF(struct IntraFreqEventCriteria_r4) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqEventCriteriaList_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqEventCriteriaList_r4;
extern asn_SET_OF_specifics_t asn_SPC_IntraFreqEventCriteriaList_r4_specs_1;
extern asn_TYPE_member_t asn_MBR_IntraFreqEventCriteriaList_r4_1[1];
extern asn_per_constraints_t asn_PER_type_IntraFreqEventCriteriaList_r4_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntraFreqEventCriteria-r4.h"

#endif	/* _IntraFreqEventCriteriaList_r4_H_ */
#include <asn_internal.h>
