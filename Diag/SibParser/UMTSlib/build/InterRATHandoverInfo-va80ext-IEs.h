/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_InterRATHandoverInfo_va80ext_IEs_H_
#define	_InterRATHandoverInfo_va80ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_RadioAccessCapability_va80ext;

/* InterRATHandoverInfo-va80ext-IEs */
typedef struct InterRATHandoverInfo_va80ext_IEs {
	struct UE_RadioAccessCapability_va80ext	*ue_RadioAccessCapabilityInfo_va80ext	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRATHandoverInfo_va80ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRATHandoverInfo_va80ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_InterRATHandoverInfo_va80ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_InterRATHandoverInfo_va80ext_IEs_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-RadioAccessCapability-va80ext.h"

#endif	/* _InterRATHandoverInfo_va80ext_IEs_H_ */
#include <asn_internal.h>
