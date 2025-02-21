/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UECapabilityEnquiry_v1710_IEs_H_
#define	_UECapabilityEnquiry_v1710_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UECapabilityEnquiry_v1710_IEs__sidelinkRequest_r17 {
	UECapabilityEnquiry_v1710_IEs__sidelinkRequest_r17_true	= 0
} e_UECapabilityEnquiry_v1710_IEs__sidelinkRequest_r17;

/* UECapabilityEnquiry-v1710-IEs */
typedef struct UECapabilityEnquiry_v1710_IEs {
	long	*sidelinkRequest_r17	/* OPTIONAL */;
	struct UECapabilityEnquiry_v1710_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityEnquiry_v1710_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sidelinkRequest_r17_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityEnquiry_v1710_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UECapabilityEnquiry_v1710_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UECapabilityEnquiry_v1710_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UECapabilityEnquiry_v1710_IEs_H_ */
#include <asn_internal.h>
