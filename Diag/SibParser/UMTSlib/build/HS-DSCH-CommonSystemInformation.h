/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_HS_DSCH_CommonSystemInformation_H_
#define	_HS_DSCH_CommonSystemInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CommonRBMappingInfo.h"
#include "Common-MAC-ehs-ReorderingQueueList.h"
#include "HS-SCCH-SystemInfo.h"
#include "HARQ-Info.h"
#include "H-RNTI.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CommonRBMappingInfo;

/* HS-DSCH-CommonSystemInformation */
typedef struct HS_DSCH_CommonSystemInformation {
	CommonRBMappingInfo_t	 ccch_MappingInfo;
	struct CommonRBMappingInfo	*srb1_MappingInfo	/* OPTIONAL */;
	Common_MAC_ehs_ReorderingQueueList_t	 common_MAC_ehs_ReorderingQueueList;
	HS_SCCH_SystemInfo_t	 hs_scch_SystemInfo;
	HARQ_Info_t	 harq_SystemInfo;
	struct HS_DSCH_CommonSystemInformation__common_H_RNTI_information {
		A_SEQUENCE_OF(H_RNTI_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} common_H_RNTI_information;
	H_RNTI_t	 bcchSpecific_H_RNTI;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HS_DSCH_CommonSystemInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HS_DSCH_CommonSystemInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_HS_DSCH_CommonSystemInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_HS_DSCH_CommonSystemInformation_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CommonRBMappingInfo.h"

#endif	/* _HS_DSCH_CommonSystemInformation_H_ */
#include <asn_internal.h>
