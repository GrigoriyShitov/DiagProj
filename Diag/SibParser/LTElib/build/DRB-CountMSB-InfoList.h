/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_DRB_CountMSB_InfoList_H_
#define	_DRB_CountMSB_InfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DRB_CountMSB_Info;

/* DRB-CountMSB-InfoList */
typedef struct DRB_CountMSB_InfoList {
	A_SEQUENCE_OF(struct DRB_CountMSB_Info) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRB_CountMSB_InfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRB_CountMSB_InfoList;
extern asn_SET_OF_specifics_t asn_SPC_DRB_CountMSB_InfoList_specs_1;
extern asn_TYPE_member_t asn_MBR_DRB_CountMSB_InfoList_1[1];
extern asn_per_constraints_t asn_PER_type_DRB_CountMSB_InfoList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DRB-CountMSB-Info.h"

#endif	/* _DRB_CountMSB_InfoList_H_ */
#include <asn_internal.h>
