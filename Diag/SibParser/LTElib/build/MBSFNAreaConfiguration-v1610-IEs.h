/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MBSFNAreaConfiguration_v1610_IEs_H_
#define	_MBSFNAreaConfiguration_v1610_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CommonSF_AllocPatternList_v1610;

/* MBSFNAreaConfiguration-v1610-IEs */
typedef struct MBSFNAreaConfiguration_v1610_IEs {
	struct CommonSF_AllocPatternList_v1610	*commonSF_Alloc_v1610	/* OPTIONAL */;
	struct MBSFNAreaConfiguration_v1610_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFNAreaConfiguration_v1610_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBSFNAreaConfiguration_v1610_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_MBSFNAreaConfiguration_v1610_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_MBSFNAreaConfiguration_v1610_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CommonSF-AllocPatternList-v1610.h"

#endif	/* _MBSFNAreaConfiguration_v1610_IEs_H_ */
#include <asn_internal.h>
