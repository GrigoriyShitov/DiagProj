/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RadioBearerSetup_r3_IEs_H_
#define	_RadioBearerSetup_r3_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "ActivationTime.h"
#include "C-RNTI.h"
#include "RRC-StateIndicator.h"
#include "UTRAN-DRX-CycleLengthCoefficient.h"
#include "URA-Identity.h"
#include "MaxAllowedUL-TX-Power.h"
#include <NULL.h>
#include "CPCH-SetID.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioBearerSetup_r3_IEs__dummy_PR {
	RadioBearerSetup_r3_IEs__dummy_PR_NOTHING,	/* No components present */
	RadioBearerSetup_r3_IEs__dummy_PR_fdd,
	RadioBearerSetup_r3_IEs__dummy_PR_tdd
} RadioBearerSetup_r3_IEs__dummy_PR;
typedef enum RadioBearerSetup_r3_IEs__modeSpecificPhysChInfo_PR {
	RadioBearerSetup_r3_IEs__modeSpecificPhysChInfo_PR_NOTHING,	/* No components present */
	RadioBearerSetup_r3_IEs__modeSpecificPhysChInfo_PR_fdd,
	RadioBearerSetup_r3_IEs__modeSpecificPhysChInfo_PR_tdd
} RadioBearerSetup_r3_IEs__modeSpecificPhysChInfo_PR;

/* Forward declarations */
struct IntegrityProtectionModeInfo;
struct CipheringModeInfo;
struct U_RNTI;
struct CN_InformationInfo;
struct SRB_InformationSetupList;
struct RAB_InformationSetupList;
struct RB_InformationAffectedList;
struct DL_CounterSynchronisationInfo;
struct UL_CommonTransChInfo;
struct UL_DeletedTransChInfoList;
struct UL_AddReconfTransChInfoList;
struct DL_CommonTransChInfo;
struct DL_DeletedTransChInfoList;
struct DL_AddReconfTransChInfoList;
struct FrequencyInfo;
struct UL_ChannelRequirement;
struct DL_CommonInformation;
struct DL_InformationPerRL_List;
struct DRAC_StaticInformationList;
struct DL_PDSCH_Information;

/* RadioBearerSetup-r3-IEs */
typedef struct RadioBearerSetup_r3_IEs {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct IntegrityProtectionModeInfo	*integrityProtectionModeInfo	/* OPTIONAL */;
	struct CipheringModeInfo	*cipheringModeInfo	/* OPTIONAL */;
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	struct U_RNTI	*new_U_RNTI	/* OPTIONAL */;
	C_RNTI_t	*new_C_RNTI	/* OPTIONAL */;
	RRC_StateIndicator_t	 rrc_StateIndicator;
	UTRAN_DRX_CycleLengthCoefficient_t	*utran_DRX_CycleLengthCoeff	/* OPTIONAL */;
	URA_Identity_t	*ura_Identity	/* OPTIONAL */;
	struct CN_InformationInfo	*cn_InformationInfo	/* OPTIONAL */;
	struct SRB_InformationSetupList	*srb_InformationSetupList	/* OPTIONAL */;
	struct RAB_InformationSetupList	*rab_InformationSetupList	/* OPTIONAL */;
	struct RB_InformationAffectedList	*rb_InformationAffectedList	/* OPTIONAL */;
	struct DL_CounterSynchronisationInfo	*dl_CounterSynchronisationInfo	/* OPTIONAL */;
	struct UL_CommonTransChInfo	*ul_CommonTransChInfo	/* OPTIONAL */;
	struct UL_DeletedTransChInfoList	*ul_deletedTransChInfoList	/* OPTIONAL */;
	struct UL_AddReconfTransChInfoList	*ul_AddReconfTransChInfoList	/* OPTIONAL */;
	struct RadioBearerSetup_r3_IEs__dummy {
		RadioBearerSetup_r3_IEs__dummy_PR present;
		union RadioBearerSetup_r3_IEs__dummy_u {
			struct RadioBearerSetup_r3_IEs__dummy__fdd {
				CPCH_SetID_t	*dummy1	/* OPTIONAL */;
				struct DRAC_StaticInformationList	*dummy2	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			NULL_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dummy;
	struct DL_CommonTransChInfo	*dl_CommonTransChInfo	/* OPTIONAL */;
	struct DL_DeletedTransChInfoList	*dl_DeletedTransChInfoList	/* OPTIONAL */;
	struct DL_AddReconfTransChInfoList	*dl_AddReconfTransChInfoList	/* OPTIONAL */;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	MaxAllowedUL_TX_Power_t	*maxAllowedUL_TX_Power	/* OPTIONAL */;
	struct UL_ChannelRequirement	*ul_ChannelRequirement	/* OPTIONAL */;
	struct RadioBearerSetup_r3_IEs__modeSpecificPhysChInfo {
		RadioBearerSetup_r3_IEs__modeSpecificPhysChInfo_PR present;
		union RadioBearerSetup_r3_IEs__modeSpecificPhysChInfo_u {
			struct RadioBearerSetup_r3_IEs__modeSpecificPhysChInfo__fdd {
				struct DL_PDSCH_Information	*dummy	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			NULL_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificPhysChInfo;
	struct DL_CommonInformation	*dl_CommonInformation	/* OPTIONAL */;
	struct DL_InformationPerRL_List	*dl_InformationPerRL_List	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerSetup_r3_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerSetup_r3_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioBearerSetup_r3_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioBearerSetup_r3_IEs_1[27];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntegrityProtectionModeInfo.h"
#include "CipheringModeInfo.h"
#include "U-RNTI.h"
#include "CN-InformationInfo.h"
#include "SRB-InformationSetupList.h"
#include "RAB-InformationSetupList.h"
#include "RB-InformationAffectedList.h"
#include "DL-CounterSynchronisationInfo.h"
#include "UL-CommonTransChInfo.h"
#include "UL-DeletedTransChInfoList.h"
#include "UL-AddReconfTransChInfoList.h"
#include "DL-CommonTransChInfo.h"
#include "DL-DeletedTransChInfoList.h"
#include "DL-AddReconfTransChInfoList.h"
#include "FrequencyInfo.h"
#include "UL-ChannelRequirement.h"
#include "DL-CommonInformation.h"
#include "DL-InformationPerRL-List.h"
#include "DRAC-StaticInformationList.h"
#include "DL-PDSCH-Information.h"

#endif	/* _RadioBearerSetup_r3_IEs_H_ */
#include <asn_internal.h>
