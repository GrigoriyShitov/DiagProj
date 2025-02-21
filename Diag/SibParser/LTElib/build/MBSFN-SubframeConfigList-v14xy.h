/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names -pdu=all -no-gen-example`
 */

#ifndef	_MBSFN_SubframeConfigList_v14xy_H_
#define	_MBSFN_SubframeConfigList_v14xy_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBSFN_SubframeConfig_v14xy;

/* MBSFN-SubframeConfigList-v14xy */
typedef struct MBSFN_SubframeConfigList_v14xy {
	A_SEQUENCE_OF(struct MBSFN_SubframeConfig_v14xy) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFN_SubframeConfigList_v14xy_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBSFN_SubframeConfigList_v14xy;
extern asn_SET_OF_specifics_t asn_SPC_MBSFN_SubframeConfigList_v14xy_specs_1;
extern asn_TYPE_member_t asn_MBR_MBSFN_SubframeConfigList_v14xy_1[1];
extern asn_per_constraints_t asn_PER_type_MBSFN_SubframeConfigList_v14xy_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBSFN-SubframeConfig-v14xy.h"

#endif	/* _MBSFN_SubframeConfigList_v14xy_H_ */
#include <asn_internal.h>
