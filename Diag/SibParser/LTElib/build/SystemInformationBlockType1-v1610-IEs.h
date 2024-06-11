/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SystemInformationBlockType1_v1610_IEs_H_
#define	_SystemInformationBlockType1_v1610_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType1_v1610_IEs__eDRX_Allowed_5GC_r16 {
	SystemInformationBlockType1_v1610_IEs__eDRX_Allowed_5GC_r16_true	= 0
} e_SystemInformationBlockType1_v1610_IEs__eDRX_Allowed_5GC_r16;
typedef enum SystemInformationBlockType1_v1610_IEs__transmissionInControlChRegion_r16 {
	SystemInformationBlockType1_v1610_IEs__transmissionInControlChRegion_r16_true	= 0
} e_SystemInformationBlockType1_v1610_IEs__transmissionInControlChRegion_r16;
typedef enum SystemInformationBlockType1_v1610_IEs__campingAllowedInCE_r16 {
	SystemInformationBlockType1_v1610_IEs__campingAllowedInCE_r16_true	= 0
} e_SystemInformationBlockType1_v1610_IEs__campingAllowedInCE_r16;

/* Forward declarations */
struct PLMN_IdentityList_v1610;
struct SystemInformationBlockType1_v1700_IEs;

/* SystemInformationBlockType1-v1610-IEs */
typedef struct SystemInformationBlockType1_v1610_IEs {
	long	*eDRX_Allowed_5GC_r16	/* OPTIONAL */;
	long	*transmissionInControlChRegion_r16	/* OPTIONAL */;
	long	*campingAllowedInCE_r16	/* OPTIONAL */;
	struct PLMN_IdentityList_v1610	*plmn_IdentityList_v1610	/* OPTIONAL */;
	struct SystemInformationBlockType1_v1700_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_v1610_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_eDRX_Allowed_5GC_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_transmissionInControlChRegion_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_campingAllowedInCE_r16_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v1610_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_v1610_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_v1610_IEs_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-IdentityList-v1610.h"
#include "SystemInformationBlockType1-v1700-IEs.h"

#endif	/* _SystemInformationBlockType1_v1610_IEs_H_ */
#include <asn_internal.h>
