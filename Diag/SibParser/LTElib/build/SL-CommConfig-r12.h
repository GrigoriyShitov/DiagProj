/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SL_CommConfig_r12_H_
#define	_SL_CommConfig_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <NULL.h>
#include "C-RNTI.h"
#include "MAC-MainConfigSL-r12.h"
#include "SL-CommResourcePool-r12.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include "LogicalChGroupInfoList-r13.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_CommConfig_r12__commTxResources_r12_PR {
	SL_CommConfig_r12__commTxResources_r12_PR_NOTHING,	/* No components present */
	SL_CommConfig_r12__commTxResources_r12_PR_release,
	SL_CommConfig_r12__commTxResources_r12_PR_setup
} SL_CommConfig_r12__commTxResources_r12_PR;
typedef enum SL_CommConfig_r12__commTxResources_r12__setup_PR {
	SL_CommConfig_r12__commTxResources_r12__setup_PR_NOTHING,	/* No components present */
	SL_CommConfig_r12__commTxResources_r12__setup_PR_scheduled_r12,
	SL_CommConfig_r12__commTxResources_r12__setup_PR_ue_Selected_r12
} SL_CommConfig_r12__commTxResources_r12__setup_PR;
typedef enum SL_CommConfig_r12__commTxResources_v1310_PR {
	SL_CommConfig_r12__commTxResources_v1310_PR_NOTHING,	/* No components present */
	SL_CommConfig_r12__commTxResources_v1310_PR_release,
	SL_CommConfig_r12__commTxResources_v1310_PR_setup
} SL_CommConfig_r12__commTxResources_v1310_PR;
typedef enum SL_CommConfig_r12__commTxResources_v1310__setup_PR {
	SL_CommConfig_r12__commTxResources_v1310__setup_PR_NOTHING,	/* No components present */
	SL_CommConfig_r12__commTxResources_v1310__setup_PR_scheduled_v1310,
	SL_CommConfig_r12__commTxResources_v1310__setup_PR_ue_Selected_v1310
} SL_CommConfig_r12__commTxResources_v1310__setup_PR;

/* Forward declarations */
struct SL_TxPoolToReleaseList_r12;
struct SL_CommTxPoolToAddModList_r12;
struct SL_TxPoolToReleaseListExt_r13;
struct SL_CommTxPoolToAddModListExt_r13;

/* SL-CommConfig-r12 */
typedef struct SL_CommConfig_r12 {
	struct SL_CommConfig_r12__commTxResources_r12 {
		SL_CommConfig_r12__commTxResources_r12_PR present;
		union SL_CommConfig_r12__commTxResources_r12_u {
			NULL_t	 release;
			struct SL_CommConfig_r12__commTxResources_r12__setup {
				SL_CommConfig_r12__commTxResources_r12__setup_PR present;
				union SL_CommConfig_r12__commTxResources_r12__setup_u {
					struct SL_CommConfig_r12__commTxResources_r12__setup__scheduled_r12 {
						C_RNTI_t	 sl_RNTI_r12;
						MAC_MainConfigSL_r12_t	 mac_MainConfig_r12;
						SL_CommResourcePool_r12_t	 sc_CommTxConfig_r12;
						long	*mcs_r12	/* OPTIONAL */;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} scheduled_r12;
					struct SL_CommConfig_r12__commTxResources_r12__setup__ue_Selected_r12 {
						struct SL_CommConfig_r12__commTxResources_r12__setup__ue_Selected_r12__commTxPoolNormalDedicated_r12 {
							struct SL_TxPoolToReleaseList_r12	*poolToReleaseList_r12	/* OPTIONAL */;
							struct SL_CommTxPoolToAddModList_r12	*poolToAddModList_r12	/* OPTIONAL */;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} commTxPoolNormalDedicated_r12;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} ue_Selected_r12;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *commTxResources_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SL_CommConfig_r12__commTxResources_v1310 {
		SL_CommConfig_r12__commTxResources_v1310_PR present;
		union SL_CommConfig_r12__commTxResources_v1310_u {
			NULL_t	 release;
			struct SL_CommConfig_r12__commTxResources_v1310__setup {
				SL_CommConfig_r12__commTxResources_v1310__setup_PR present;
				union SL_CommConfig_r12__commTxResources_v1310__setup_u {
					struct SL_CommConfig_r12__commTxResources_v1310__setup__scheduled_v1310 {
						LogicalChGroupInfoList_r13_t	 logicalChGroupInfoList_r13;
						BOOLEAN_t	 multipleTx_r13;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} scheduled_v1310;
					struct SL_CommConfig_r12__commTxResources_v1310__setup__ue_Selected_v1310 {
						struct SL_CommConfig_r12__commTxResources_v1310__setup__ue_Selected_v1310__commTxPoolNormalDedicatedExt_r13 {
							struct SL_TxPoolToReleaseListExt_r13	*poolToReleaseListExt_r13	/* OPTIONAL */;
							struct SL_CommTxPoolToAddModListExt_r13	*poolToAddModListExt_r13	/* OPTIONAL */;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} commTxPoolNormalDedicatedExt_r13;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} ue_Selected_v1310;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *commTxResources_v1310;
	BOOLEAN_t	*commTxAllowRelayDedicated_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_CommConfig_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_CommConfig_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_CommConfig_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_CommConfig_r12_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-TxPoolToReleaseList-r12.h"
#include "SL-CommTxPoolToAddModList-r12.h"
#include "SL-TxPoolToReleaseListExt-r13.h"
#include "SL-CommTxPoolToAddModListExt-r13.h"

#endif	/* _SL_CommConfig_r12_H_ */
#include <asn_internal.h>
