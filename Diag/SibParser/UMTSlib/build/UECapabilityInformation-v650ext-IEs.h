/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UECapabilityInformation_v650ext_IEs_H_
#define	_UECapabilityInformation_v650ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-RadioAccessCapability-v650ext.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UECapabilityInformation-v650ext-IEs */
typedef struct UECapabilityInformation_v650ext_IEs {
	UE_RadioAccessCapability_v650ext_t	 ue_RadioAccessCapability_v650ext;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityInformation_v650ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityInformation_v650ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UECapabilityInformation_v650ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UECapabilityInformation_v650ext_IEs_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _UECapabilityInformation_v650ext_IEs_H_ */
#include <asn_internal.h>
