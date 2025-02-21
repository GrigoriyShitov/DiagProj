/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_InterRATHandoverInfo_v950ext_IEs_H_
#define	_InterRATHandoverInfo_v950ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDCP_Capability_r4_ext;

/* InterRATHandoverInfo-v950ext-IEs */
typedef struct InterRATHandoverInfo_v950ext_IEs {
	struct PDCP_Capability_r4_ext	*pdcp_Capability	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRATHandoverInfo_v950ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRATHandoverInfo_v950ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_InterRATHandoverInfo_v950ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_InterRATHandoverInfo_v950ext_IEs_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PDCP-Capability-r4-ext.h"

#endif	/* _InterRATHandoverInfo_v950ext_IEs_H_ */
#include <asn_internal.h>
