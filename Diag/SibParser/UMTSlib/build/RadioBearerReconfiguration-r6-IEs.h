/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RadioBearerReconfiguration_r6_IEs_H_
#define	_RadioBearerReconfiguration_r6_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ActivationTime.h"
#include "DelayRestrictionFlag.h"
#include "C-RNTI.h"
#include "DSCH-RNTI.h"
#include "H-RNTI.h"
#include "E-RNTI.h"
#include "RRC-StateIndicator.h"
#include "UTRAN-DRX-CycleLengthCoefficient.h"
#include "URA-Identity.h"
#include "MaxAllowedUL-TX-Power.h"
#include "MBMS-PL-ServiceRestrictInfo-r6.h"
#include "PDCP-ROHC-TargetMode.h"
#include <constr_SEQUENCE.h>
#include "PredefinedConfigIdentity.h"
#include "DefaultConfigMode.h"
#include "DefaultConfigIdentity-r6.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioBearerReconfiguration_r6_IEs__specificationMode_PR {
	RadioBearerReconfiguration_r6_IEs__specificationMode_PR_NOTHING,	/* No components present */
	RadioBearerReconfiguration_r6_IEs__specificationMode_PR_complete,
	RadioBearerReconfiguration_r6_IEs__specificationMode_PR_preconfiguration
} RadioBearerReconfiguration_r6_IEs__specificationMode_PR;
typedef enum RadioBearerReconfiguration_r6_IEs__specificationMode__preconfiguration__preConfigMode_PR {
	RadioBearerReconfiguration_r6_IEs__specificationMode__preconfiguration__preConfigMode_PR_NOTHING,	/* No components present */
	RadioBearerReconfiguration_r6_IEs__specificationMode__preconfiguration__preConfigMode_PR_predefinedConfigIdentity,
	RadioBearerReconfiguration_r6_IEs__specificationMode__preconfiguration__preConfigMode_PR_defaultConfig
} RadioBearerReconfiguration_r6_IEs__specificationMode__preconfiguration__preConfigMode_PR;

/* Forward declarations */
struct IntegrityProtectionModeInfo;
struct CipheringModeInfo;
struct U_RNTI;
struct CN_InformationInfo_r6;
struct FrequencyInfo;
struct UL_DPCH_Info_r6;
struct UL_EDCH_Information_r6;
struct DL_HSPDSCH_Information_r6;
struct DL_CommonInformation_r6;
struct DL_InformationPerRL_List_r6;
struct RAB_InformationReconfigList;
struct RB_InformationReconfigList_r6;
struct RB_InformationAffectedList_r6;
struct RB_PDCPContextRelocationList;
struct UL_CommonTransChInfo_r4;
struct UL_DeletedTransChInfoList_r6;
struct UL_AddReconfTransChInfoList_r6;
struct DL_CommonTransChInfo_r4;
struct DL_DeletedTransChInfoList_r5;
struct DL_AddReconfTransChInfoList_r5;

/* RadioBearerReconfiguration-r6-IEs */
typedef struct RadioBearerReconfiguration_r6_IEs {
	struct IntegrityProtectionModeInfo	*integrityProtectionModeInfo	/* OPTIONAL */;
	struct CipheringModeInfo	*cipheringModeInfo	/* OPTIONAL */;
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	DelayRestrictionFlag_t	*delayRestrictionFlag	/* OPTIONAL */;
	struct U_RNTI	*new_U_RNTI	/* OPTIONAL */;
	C_RNTI_t	*new_C_RNTI	/* OPTIONAL */;
	DSCH_RNTI_t	*new_DSCH_RNTI	/* OPTIONAL */;
	H_RNTI_t	*new_H_RNTI	/* OPTIONAL */;
	E_RNTI_t	*newPrimary_E_RNTI	/* OPTIONAL */;
	E_RNTI_t	*newSecondary_E_RNTI	/* OPTIONAL */;
	RRC_StateIndicator_t	 rrc_StateIndicator;
	UTRAN_DRX_CycleLengthCoefficient_t	*utran_DRX_CycleLengthCoeff	/* OPTIONAL */;
	struct CN_InformationInfo_r6	*cn_InformationInfo	/* OPTIONAL */;
	URA_Identity_t	*ura_Identity	/* OPTIONAL */;
	struct RadioBearerReconfiguration_r6_IEs__specificationMode {
		RadioBearerReconfiguration_r6_IEs__specificationMode_PR present;
		union RadioBearerReconfiguration_r6_IEs__specificationMode_u {
			struct RadioBearerReconfiguration_r6_IEs__specificationMode__complete {
				struct RAB_InformationReconfigList	*rab_InformationReconfigList	/* OPTIONAL */;
				struct RB_InformationReconfigList_r6	*rb_InformationReconfigList	/* OPTIONAL */;
				struct RB_InformationAffectedList_r6	*rb_InformationAffectedList	/* OPTIONAL */;
				struct RB_PDCPContextRelocationList	*rb_PDCPContextRelocationList	/* OPTIONAL */;
				PDCP_ROHC_TargetMode_t	*pdcp_ROHC_TargetMode	/* OPTIONAL */;
				struct UL_CommonTransChInfo_r4	*ul_CommonTransChInfo	/* OPTIONAL */;
				struct UL_DeletedTransChInfoList_r6	*ul_deletedTransChInfoList	/* OPTIONAL */;
				struct UL_AddReconfTransChInfoList_r6	*ul_AddReconfTransChInfoList	/* OPTIONAL */;
				struct DL_CommonTransChInfo_r4	*dl_CommonTransChInfo	/* OPTIONAL */;
				struct DL_DeletedTransChInfoList_r5	*dl_DeletedTransChInfoList	/* OPTIONAL */;
				struct DL_AddReconfTransChInfoList_r5	*dl_AddReconfTransChInfoList	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} complete;
			struct RadioBearerReconfiguration_r6_IEs__specificationMode__preconfiguration {
				struct RadioBearerReconfiguration_r6_IEs__specificationMode__preconfiguration__preConfigMode {
					RadioBearerReconfiguration_r6_IEs__specificationMode__preconfiguration__preConfigMode_PR present;
					union RadioBearerReconfiguration_r6_IEs__specificationMode__preconfiguration__preConfigMode_u {
						PredefinedConfigIdentity_t	 predefinedConfigIdentity;
						struct RadioBearerReconfiguration_r6_IEs__specificationMode__preconfiguration__preConfigMode__defaultConfig {
							DefaultConfigMode_t	 defaultConfigMode;
							DefaultConfigIdentity_r6_t	 defaultConfigIdentity;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} defaultConfig;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} preConfigMode;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} preconfiguration;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} specificationMode;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	MaxAllowedUL_TX_Power_t	*maxAllowedUL_TX_Power	/* OPTIONAL */;
	struct UL_DPCH_Info_r6	*ul_DPCH_Info	/* OPTIONAL */;
	struct UL_EDCH_Information_r6	*ul_EDCH_Information	/* OPTIONAL */;
	struct DL_HSPDSCH_Information_r6	*dl_HSPDSCH_Information	/* OPTIONAL */;
	struct DL_CommonInformation_r6	*dl_CommonInformation	/* OPTIONAL */;
	struct DL_InformationPerRL_List_r6	*dl_InformationPerRL_List	/* OPTIONAL */;
	MBMS_PL_ServiceRestrictInfo_r6_t	*mbms_PL_ServiceRestrictInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerReconfiguration_r6_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerReconfiguration_r6_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioBearerReconfiguration_r6_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioBearerReconfiguration_r6_IEs_1[23];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntegrityProtectionModeInfo.h"
#include "CipheringModeInfo.h"
#include "U-RNTI.h"
#include "CN-InformationInfo-r6.h"
#include "FrequencyInfo.h"
#include "UL-DPCH-Info-r6.h"
#include "UL-EDCH-Information-r6.h"
#include "DL-HSPDSCH-Information-r6.h"
#include "DL-CommonInformation-r6.h"
#include "DL-InformationPerRL-List-r6.h"
#include "RAB-InformationReconfigList.h"
#include "RB-InformationReconfigList-r6.h"
#include "RB-InformationAffectedList-r6.h"
#include "RB-PDCPContextRelocationList.h"
#include "UL-CommonTransChInfo-r4.h"
#include "UL-DeletedTransChInfoList-r6.h"
#include "UL-AddReconfTransChInfoList-r6.h"
#include "DL-CommonTransChInfo-r4.h"
#include "DL-DeletedTransChInfoList-r5.h"
#include "DL-AddReconfTransChInfoList-r5.h"

#endif	/* _RadioBearerReconfiguration_r6_IEs_H_ */
#include <asn_internal.h>
