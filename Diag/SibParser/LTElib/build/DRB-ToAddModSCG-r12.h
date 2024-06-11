/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_DRB_ToAddModSCG_r12_H_
#define	_DRB_ToAddModSCG_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DRB-Identity.h"
#include <NativeInteger.h>
#include <NULL.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DRB_ToAddModSCG_r12__drb_Type_r12_PR {
	DRB_ToAddModSCG_r12__drb_Type_r12_PR_NOTHING,	/* No components present */
	DRB_ToAddModSCG_r12__drb_Type_r12_PR_split_r12,
	DRB_ToAddModSCG_r12__drb_Type_r12_PR_scg_r12
} DRB_ToAddModSCG_r12__drb_Type_r12_PR;

/* Forward declarations */
struct RLC_Config;
struct RLC_Config_v1250;
struct LogicalChannelConfig;
struct RLC_Config_v1430;
struct RLC_Config_v1530;
struct RLC_BearerConfig_r15;
struct RLC_Config_v1510;
struct PDCP_Config;

/* DRB-ToAddModSCG-r12 */
typedef struct DRB_ToAddModSCG_r12 {
	DRB_Identity_t	 drb_Identity_r12;
	struct DRB_ToAddModSCG_r12__drb_Type_r12 {
		DRB_ToAddModSCG_r12__drb_Type_r12_PR present;
		union DRB_ToAddModSCG_r12__drb_Type_r12_u {
			NULL_t	 split_r12;
			struct DRB_ToAddModSCG_r12__drb_Type_r12__scg_r12 {
				long	*eps_BearerIdentity_r12	/* OPTIONAL */;
				struct PDCP_Config	*pdcp_Config_r12	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} scg_r12;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *drb_Type_r12;
	struct RLC_Config	*rlc_ConfigSCG_r12	/* OPTIONAL */;
	struct RLC_Config_v1250	*rlc_Config_v1250	/* OPTIONAL */;
	long	*logicalChannelIdentitySCG_r12	/* OPTIONAL */;
	struct LogicalChannelConfig	*logicalChannelConfigSCG_r12	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RLC_Config_v1430	*rlc_Config_v1430	/* OPTIONAL */;
	long	*logicalChannelIdentitySCG_r15	/* OPTIONAL */;
	struct RLC_Config_v1530	*rlc_Config_v1530	/* OPTIONAL */;
	struct RLC_BearerConfig_r15	*rlc_BearerConfigSecondary_r15	/* OPTIONAL */;
	struct RLC_Config_v1510	*rlc_Config_v1560	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRB_ToAddModSCG_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRB_ToAddModSCG_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_DRB_ToAddModSCG_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_DRB_ToAddModSCG_r12_1[11];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RLC-Config.h"
#include "RLC-Config-v1250.h"
#include "LogicalChannelConfig.h"
#include "RLC-Config-v1430.h"
#include "RLC-Config-v1530.h"
#include "RLC-BearerConfig-r15.h"
#include "RLC-Config-v1510.h"
#include "PDCP-Config.h"

#endif	/* _DRB_ToAddModSCG_r12_H_ */
#include <asn_internal.h>
