/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_DedicatedDynamicTF_InfoList_DynamicTTI_H_
#define	_DedicatedDynamicTF_InfoList_DynamicTTI_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DedicatedDynamicTF_Info_DynamicTTI;

/* DedicatedDynamicTF-InfoList-DynamicTTI */
typedef struct DedicatedDynamicTF_InfoList_DynamicTTI {
	A_SEQUENCE_OF(struct DedicatedDynamicTF_Info_DynamicTTI) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DedicatedDynamicTF_InfoList_DynamicTTI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DedicatedDynamicTF_InfoList_DynamicTTI;
extern asn_SET_OF_specifics_t asn_SPC_DedicatedDynamicTF_InfoList_DynamicTTI_specs_1;
extern asn_TYPE_member_t asn_MBR_DedicatedDynamicTF_InfoList_DynamicTTI_1[1];
extern asn_per_constraints_t asn_PER_type_DedicatedDynamicTF_InfoList_DynamicTTI_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DedicatedDynamicTF-Info-DynamicTTI.h"

#endif	/* _DedicatedDynamicTF_InfoList_DynamicTTI_H_ */
#include <asn_internal.h>
