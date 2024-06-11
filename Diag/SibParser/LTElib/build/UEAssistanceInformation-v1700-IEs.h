/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UEAssistanceInformation_v1700_IEs_H_
#define	_UEAssistanceInformation_v1700_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEAssistanceInformation_v1700_IEs__uplinkData_r17 {
	UEAssistanceInformation_v1700_IEs__uplinkData_r17_true	= 0
} e_UEAssistanceInformation_v1700_IEs__uplinkData_r17;
typedef enum UEAssistanceInformation_v1700_IEs__scg_DeactivationPreference_r17 {
	UEAssistanceInformation_v1700_IEs__scg_DeactivationPreference_r17_scgDeactivationPreferred	= 0,
	UEAssistanceInformation_v1700_IEs__scg_DeactivationPreference_r17_noPreference	= 1
} e_UEAssistanceInformation_v1700_IEs__scg_DeactivationPreference_r17;

/* Forward declarations */
struct UEAssistanceInformation_v1710_IEs;

/* UEAssistanceInformation-v1700-IEs */
typedef struct UEAssistanceInformation_v1700_IEs {
	long	*uplinkData_r17	/* OPTIONAL */;
	long	*scg_DeactivationPreference_r17	/* OPTIONAL */;
	struct UEAssistanceInformation_v1710_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEAssistanceInformation_v1700_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_uplinkData_r17_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scg_DeactivationPreference_r17_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UEAssistanceInformation_v1700_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UEAssistanceInformation_v1700_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UEAssistanceInformation_v1700_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UEAssistanceInformation-v1710-IEs.h"

#endif	/* _UEAssistanceInformation_v1700_IEs_H_ */
#include <asn_internal.h>
