/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_LAA_SCellConfiguration_v1430_H_
#define	_LAA_SCellConfiguration_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NULL.h>
#include "CrossCarrierSchedulingConfigLAA-UL-r14.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LAA_SCellConfiguration_v1430__crossCarrierSchedulingConfig_UL_r14_PR {
	LAA_SCellConfiguration_v1430__crossCarrierSchedulingConfig_UL_r14_PR_NOTHING,	/* No components present */
	LAA_SCellConfiguration_v1430__crossCarrierSchedulingConfig_UL_r14_PR_release,
	LAA_SCellConfiguration_v1430__crossCarrierSchedulingConfig_UL_r14_PR_setup
} LAA_SCellConfiguration_v1430__crossCarrierSchedulingConfig_UL_r14_PR;
typedef enum LAA_SCellConfiguration_v1430__absenceOfAnyOtherTechnology_r14 {
	LAA_SCellConfiguration_v1430__absenceOfAnyOtherTechnology_r14_true	= 0
} e_LAA_SCellConfiguration_v1430__absenceOfAnyOtherTechnology_r14;

/* Forward declarations */
struct LBT_Config_r14;
struct PDCCH_ConfigLAA_r14;
struct SoundingRS_UL_ConfigDedicatedAperiodic_v1430;

/* LAA-SCellConfiguration-v1430 */
typedef struct LAA_SCellConfiguration_v1430 {
	struct LAA_SCellConfiguration_v1430__crossCarrierSchedulingConfig_UL_r14 {
		LAA_SCellConfiguration_v1430__crossCarrierSchedulingConfig_UL_r14_PR present;
		union LAA_SCellConfiguration_v1430__crossCarrierSchedulingConfig_UL_r14_u {
			NULL_t	 release;
			struct LAA_SCellConfiguration_v1430__crossCarrierSchedulingConfig_UL_r14__setup {
				CrossCarrierSchedulingConfigLAA_UL_r14_t	 crossCarrierSchedulingConfigLAA_UL_r14;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *crossCarrierSchedulingConfig_UL_r14;
	struct LBT_Config_r14	*lbt_Config_r14	/* OPTIONAL */;
	struct PDCCH_ConfigLAA_r14	*pdcch_ConfigLAA_r14	/* OPTIONAL */;
	long	*absenceOfAnyOtherTechnology_r14	/* OPTIONAL */;
	struct SoundingRS_UL_ConfigDedicatedAperiodic_v1430	*soundingRS_UL_ConfigDedicatedAperiodic_v1430	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LAA_SCellConfiguration_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_absenceOfAnyOtherTechnology_r14_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LAA_SCellConfiguration_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_LAA_SCellConfiguration_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_LAA_SCellConfiguration_v1430_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LBT-Config-r14.h"
#include "PDCCH-ConfigLAA-r14.h"
#include "SoundingRS-UL-ConfigDedicatedAperiodic-v1430.h"

#endif	/* _LAA_SCellConfiguration_v1430_H_ */
#include <asn_internal.h>
