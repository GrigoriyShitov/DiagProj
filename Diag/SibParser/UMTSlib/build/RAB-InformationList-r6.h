/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RAB_InformationList_r6_H_
#define	_RAB_InformationList_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RAB_Info_r6;

/* RAB-InformationList-r6 */
typedef struct RAB_InformationList_r6 {
	A_SEQUENCE_OF(struct RAB_Info_r6) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAB_InformationList_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAB_InformationList_r6;
extern asn_SET_OF_specifics_t asn_SPC_RAB_InformationList_r6_specs_1;
extern asn_TYPE_member_t asn_MBR_RAB_InformationList_r6_1[1];
extern asn_per_constraints_t asn_PER_type_RAB_InformationList_r6_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RAB-Info-r6.h"

#endif	/* _RAB_InformationList_r6_H_ */
#include <asn_internal.h>
