/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRCConnectionSetup_r3_IEs_H_
#define	_RRCConnectionSetup_r3_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InitialUE-Identity.h"
#include "RRC-TransactionIdentifier.h"
#include "ActivationTime.h"
#include "U-RNTI.h"
#include "C-RNTI.h"
#include "RRC-StateIndicator.h"
#include "UTRAN-DRX-CycleLengthCoefficient.h"
#include "SRB-InformationSetupList2.h"
#include "UL-AddReconfTransChInfoList.h"
#include "DL-AddReconfTransChInfoList.h"
#include "MaxAllowedUL-TX-Power.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CapabilityUpdateRequirement;
struct UL_CommonTransChInfo;
struct DL_CommonTransChInfo;
struct FrequencyInfo;
struct UL_ChannelRequirement;
struct DL_CommonInformation;
struct DL_InformationPerRL_List;

/* RRCConnectionSetup-r3-IEs */
typedef struct RRCConnectionSetup_r3_IEs {
	InitialUE_Identity_t	 initialUE_Identity;
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	U_RNTI_t	 new_U_RNTI;
	C_RNTI_t	*new_c_RNTI	/* OPTIONAL */;
	RRC_StateIndicator_t	 rrc_StateIndicator;
	UTRAN_DRX_CycleLengthCoefficient_t	 utran_DRX_CycleLengthCoeff;
	struct CapabilityUpdateRequirement	*capabilityUpdateRequirement	/* OPTIONAL */;
	SRB_InformationSetupList2_t	 srb_InformationSetupList;
	struct UL_CommonTransChInfo	*ul_CommonTransChInfo	/* OPTIONAL */;
	UL_AddReconfTransChInfoList_t	 ul_AddReconfTransChInfoList;
	struct DL_CommonTransChInfo	*dl_CommonTransChInfo	/* OPTIONAL */;
	DL_AddReconfTransChInfoList_t	 dl_AddReconfTransChInfoList;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	MaxAllowedUL_TX_Power_t	*maxAllowedUL_TX_Power	/* OPTIONAL */;
	struct UL_ChannelRequirement	*ul_ChannelRequirement	/* OPTIONAL */;
	struct DL_CommonInformation	*dl_CommonInformation	/* OPTIONAL */;
	struct DL_InformationPerRL_List	*dl_InformationPerRL_List	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetup_r3_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetup_r3_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetup_r3_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionSetup_r3_IEs_1[18];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CapabilityUpdateRequirement.h"
#include "UL-CommonTransChInfo.h"
#include "DL-CommonTransChInfo.h"
#include "FrequencyInfo.h"
#include "UL-ChannelRequirement.h"
#include "DL-CommonInformation.h"
#include "DL-InformationPerRL-List.h"

#endif	/* _RRCConnectionSetup_r3_IEs_H_ */
#include <asn_internal.h>
