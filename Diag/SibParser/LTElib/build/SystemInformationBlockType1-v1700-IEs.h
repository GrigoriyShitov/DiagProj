/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SystemInformationBlockType1_v1700_IEs_H_
#define	_SystemInformationBlockType1_v1700_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType1_v1700_IEs__cellAccessRelatedInfo_NTN_r17__cellBarred_NTN_r17 {
	SystemInformationBlockType1_v1700_IEs__cellAccessRelatedInfo_NTN_r17__cellBarred_NTN_r17_barred	= 0,
	SystemInformationBlockType1_v1700_IEs__cellAccessRelatedInfo_NTN_r17__cellBarred_NTN_r17_notBarred	= 1
} e_SystemInformationBlockType1_v1700_IEs__cellAccessRelatedInfo_NTN_r17__cellBarred_NTN_r17;

/* Forward declarations */
struct SystemInformationBlockType1_v1800_IEs;
struct PLMN_IdentityList_v1700;

/* SystemInformationBlockType1-v1700-IEs */
typedef struct SystemInformationBlockType1_v1700_IEs {
	struct SystemInformationBlockType1_v1700_IEs__cellAccessRelatedInfo_NTN_r17 {
		long	 cellBarred_NTN_r17;
		struct PLMN_IdentityList_v1700	*plmn_IdentityList_v1700	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cellAccessRelatedInfo_NTN_r17;
	struct SystemInformationBlockType1_v1800_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_v1700_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cellBarred_NTN_r17_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v1700_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_v1700_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_v1700_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SystemInformationBlockType1-v1800-IEs.h"
#include "PLMN-IdentityList-v1700.h"

#endif	/* _SystemInformationBlockType1_v1700_IEs_H_ */
#include <asn_internal.h>
