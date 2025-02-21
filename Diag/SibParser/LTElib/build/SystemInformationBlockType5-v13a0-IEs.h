/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SystemInformationBlockType5_v13a0_IEs_H_
#define	_SystemInformationBlockType5_v13a0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqCarrierFreqList_v13a0;

/* SystemInformationBlockType5-v13a0-IEs */
typedef struct SystemInformationBlockType5_v13a0_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct InterFreqCarrierFreqList_v13a0	*interFreqCarrierFreqList_v13a0	/* OPTIONAL */;
	struct SystemInformationBlockType5_v13a0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType5_v13a0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType5_v13a0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType5_v13a0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType5_v13a0_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqCarrierFreqList-v13a0.h"

#endif	/* _SystemInformationBlockType5_v13a0_IEs_H_ */
#include <asn_internal.h>
