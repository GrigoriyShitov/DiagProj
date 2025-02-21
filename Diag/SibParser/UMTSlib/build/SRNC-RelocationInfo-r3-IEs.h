/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SRNC_RelocationInfo_r3_IEs_H_
#define	_SRNC_RelocationInfo_r3_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "StateOfRRC.h"
#include "StateOfRRC-Procedure.h"
#include "CipheringStatus.h"
#include "IntegrityProtectionStatus.h"
#include "SRB-SpecificIntegrityProtInfoList.h"
#include "ImplementationSpecificParams.h"
#include "U-RNTI.h"
#include "C-RNTI.h"
#include "UE-RadioAccessCapability.h"
#include "URA-Identity.h"
#include "NAS-SystemInformationGSM-MAP.h"
#include "PredefinedConfigStatusList.h"
#include "SRB-InformationSetupList.h"
#include <NULL.h>
#include "CPCH-SetID.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRNC_RelocationInfo_r3_IEs__modeSpecificInfo_PR {
	SRNC_RelocationInfo_r3_IEs__modeSpecificInfo_PR_NOTHING,	/* No components present */
	SRNC_RelocationInfo_r3_IEs__modeSpecificInfo_PR_fdd,
	SRNC_RelocationInfo_r3_IEs__modeSpecificInfo_PR_tdd
} SRNC_RelocationInfo_r3_IEs__modeSpecificInfo_PR;

/* Forward declarations */
struct CalculationTimeForCiphering;
struct CipheringInfoPerRB_List;
struct COUNT_C_List;
struct UE_Positioning_LastKnownPos;
struct InterRAT_UE_RadioAccessCapabilityList;
struct CN_DomainInformationList;
struct OngoingMeasRepList;
struct RAB_InformationSetupList;
struct UL_CommonTransChInfo;
struct UL_AddReconfTransChInfoList;
struct DL_CommonTransChInfo;
struct DL_AddReconfTransChInfoList;
struct MeasurementReport;
struct DRAC_StaticInformationList;

/* SRNC-RelocationInfo-r3-IEs */
typedef struct SRNC_RelocationInfo_r3_IEs {
	StateOfRRC_t	 stateOfRRC;
	StateOfRRC_Procedure_t	 stateOfRRC_Procedure;
	CipheringStatus_t	 cipheringStatus;
	struct CalculationTimeForCiphering	*calculationTimeForCiphering	/* OPTIONAL */;
	struct CipheringInfoPerRB_List	*cipheringInfoPerRB_List	/* OPTIONAL */;
	struct COUNT_C_List	*count_C_List	/* OPTIONAL */;
	IntegrityProtectionStatus_t	 integrityProtectionStatus;
	SRB_SpecificIntegrityProtInfoList_t	 srb_SpecificIntegrityProtInfo;
	ImplementationSpecificParams_t	*implementationSpecificParams	/* OPTIONAL */;
	U_RNTI_t	 u_RNTI;
	C_RNTI_t	*c_RNTI	/* OPTIONAL */;
	UE_RadioAccessCapability_t	 ue_RadioAccessCapability;
	struct UE_Positioning_LastKnownPos	*ue_Positioning_LastKnownPos	/* OPTIONAL */;
	struct InterRAT_UE_RadioAccessCapabilityList	*ue_RATSpecificCapability	/* OPTIONAL */;
	URA_Identity_t	*ura_Identity	/* OPTIONAL */;
	NAS_SystemInformationGSM_MAP_t	 cn_CommonGSM_MAP_NAS_SysInfo;
	struct CN_DomainInformationList	*cn_DomainInformationList	/* OPTIONAL */;
	struct OngoingMeasRepList	*ongoingMeasRepList	/* OPTIONAL */;
	PredefinedConfigStatusList_t	 predefinedConfigStatusList;
	SRB_InformationSetupList_t	 srb_InformationList;
	struct RAB_InformationSetupList	*rab_InformationList	/* OPTIONAL */;
	struct UL_CommonTransChInfo	*ul_CommonTransChInfo	/* OPTIONAL */;
	struct UL_AddReconfTransChInfoList	*ul_TransChInfoList	/* OPTIONAL */;
	struct SRNC_RelocationInfo_r3_IEs__modeSpecificInfo {
		SRNC_RelocationInfo_r3_IEs__modeSpecificInfo_PR present;
		union SRNC_RelocationInfo_r3_IEs__modeSpecificInfo_u {
			struct SRNC_RelocationInfo_r3_IEs__modeSpecificInfo__fdd {
				CPCH_SetID_t	*dummy	/* OPTIONAL */;
				struct DRAC_StaticInformationList	*dummy2	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			NULL_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	struct DL_CommonTransChInfo	*dl_CommonTransChInfo	/* OPTIONAL */;
	struct DL_AddReconfTransChInfoList	*dl_TransChInfoList	/* OPTIONAL */;
	struct MeasurementReport	*measurementReport	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRNC_RelocationInfo_r3_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRNC_RelocationInfo_r3_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SRNC_RelocationInfo_r3_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SRNC_RelocationInfo_r3_IEs_1[27];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CalculationTimeForCiphering.h"
#include "CipheringInfoPerRB-List.h"
#include "COUNT-C-List.h"
#include "UE-Positioning-LastKnownPos.h"
#include "InterRAT-UE-RadioAccessCapabilityList.h"
#include "CN-DomainInformationList.h"
#include "OngoingMeasRepList.h"
#include "RAB-InformationSetupList.h"
#include "UL-CommonTransChInfo.h"
#include "UL-AddReconfTransChInfoList.h"
#include "DL-CommonTransChInfo.h"
#include "DL-AddReconfTransChInfoList.h"
#include "MeasurementReport.h"
#include "DRAC-StaticInformationList.h"

#endif	/* _SRNC_RelocationInfo_r3_IEs_H_ */
#include <asn_internal.h>
