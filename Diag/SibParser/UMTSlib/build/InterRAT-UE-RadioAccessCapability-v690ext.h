/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_InterRAT_UE_RadioAccessCapability_v690ext_H_
#define	_InterRAT_UE_RadioAccessCapability_v690ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "GSM-MS-RadioAccessCapability.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InterRAT_UE_RadioAccessCapability_v690ext__supportOfInter_RAT_PS_Handover {
	InterRAT_UE_RadioAccessCapability_v690ext__supportOfInter_RAT_PS_Handover_doesSupporInter_RAT_PS_Handover	= 0
} e_InterRAT_UE_RadioAccessCapability_v690ext__supportOfInter_RAT_PS_Handover;

/* InterRAT-UE-RadioAccessCapability-v690ext */
typedef struct InterRAT_UE_RadioAccessCapability_v690ext {
	long	*supportOfInter_RAT_PS_Handover	/* OPTIONAL */;
	GSM_MS_RadioAccessCapability_t	 gsm_MS_RadioAccessCapability;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRAT_UE_RadioAccessCapability_v690ext_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfInter_RAT_PS_Handover_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_InterRAT_UE_RadioAccessCapability_v690ext;
extern asn_SEQUENCE_specifics_t asn_SPC_InterRAT_UE_RadioAccessCapability_v690ext_specs_1;
extern asn_TYPE_member_t asn_MBR_InterRAT_UE_RadioAccessCapability_v690ext_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _InterRAT_UE_RadioAccessCapability_v690ext_H_ */
#include <asn_internal.h>
