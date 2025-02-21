/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CPCH_SetInfo_H_
#define	_CPCH_SetInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CPCH-SetID.h"
#include "TransportFormatSet.h"
#include "TFCS.h"
#include "AP-PreambleScramblingCode.h"
#include "AP-AICH-ChannelisationCode.h"
#include "CD-PreambleScramblingCode.h"
#include "CD-CA-ICH-ChannelisationCode.h"
#include "DeltaPp-m.h"
#include "UL-DPCCH-SlotFormat.h"
#include "N-StartMessage.h"
#include "N-EOT.h"
#include "ChannelAssignmentActive.h"
#include "CPCH-StatusIndicationMode.h"
#include "PCPCH-ChannelInfoList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CD_AccessSlotSubchannelList;
struct CD_SignatureCodeList;

/* CPCH-SetInfo */
typedef struct CPCH_SetInfo {
	CPCH_SetID_t	 cpch_SetID;
	TransportFormatSet_t	 transportFormatSet;
	TFCS_t	 tfcs;
	AP_PreambleScramblingCode_t	 ap_PreambleScramblingCode;
	AP_AICH_ChannelisationCode_t	 ap_AICH_ChannelisationCode;
	CD_PreambleScramblingCode_t	 cd_PreambleScramblingCode;
	CD_CA_ICH_ChannelisationCode_t	 cd_CA_ICH_ChannelisationCode;
	struct CD_AccessSlotSubchannelList	*cd_AccessSlotSubchannelList	/* OPTIONAL */;
	struct CD_SignatureCodeList	*cd_SignatureCodeList	/* OPTIONAL */;
	DeltaPp_m_t	 deltaPp_m;
	UL_DPCCH_SlotFormat_t	 ul_DPCCH_SlotFormat;
	N_StartMessage_t	 n_StartMessage;
	N_EOT_t	 n_EOT;
	ChannelAssignmentActive_t	 channelAssignmentActive;
	CPCH_StatusIndicationMode_t	 cpch_StatusIndicationMode;
	PCPCH_ChannelInfoList_t	 pcpch_ChannelInfoList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CPCH_SetInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CPCH_SetInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_CPCH_SetInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_CPCH_SetInfo_1[16];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CD-AccessSlotSubchannelList.h"
#include "CD-SignatureCodeList.h"

#endif	/* _CPCH_SetInfo_H_ */
#include <asn_internal.h>
