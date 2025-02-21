/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_EUTRA_Capability_v1350_IEs_H_
#define	_UE_EUTRA_Capability_v1350_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "CE-Parameters-v1350.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_EUTRA_Capability_v1350_IEs__ue_CategoryDL_v1350 {
	UE_EUTRA_Capability_v1350_IEs__ue_CategoryDL_v1350_oneBis	= 0
} e_UE_EUTRA_Capability_v1350_IEs__ue_CategoryDL_v1350;
typedef enum UE_EUTRA_Capability_v1350_IEs__ue_CategoryUL_v1350 {
	UE_EUTRA_Capability_v1350_IEs__ue_CategoryUL_v1350_oneBis	= 0
} e_UE_EUTRA_Capability_v1350_IEs__ue_CategoryUL_v1350;

/* Forward declarations */
struct UE_EUTRA_Capability_v1360_IEs;

/* UE-EUTRA-Capability-v1350-IEs */
typedef struct UE_EUTRA_Capability_v1350_IEs {
	long	*ue_CategoryDL_v1350	/* OPTIONAL */;
	long	*ue_CategoryUL_v1350	/* OPTIONAL */;
	CE_Parameters_v1350_t	 ce_Parameters_v1350;
	struct UE_EUTRA_Capability_v1360_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1350_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_CategoryDL_v1350_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_CategoryUL_v1350_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1350_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1350_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1350_IEs_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-EUTRA-Capability-v1360-IEs.h"

#endif	/* _UE_EUTRA_Capability_v1350_IEs_H_ */
#include <asn_internal.h>
