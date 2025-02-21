/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_DL_DPCH_InfoPerRL_r12_H_
#define	_DL_DPCH_InfoPerRL_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PCPICH-UsageForChannelEst.h"
#include "DPCH-FrameOffset.h"
#include "DL-ChannelisationCodeList.h"
#include "TPC-CombinationIndex.h"
#include "PowerOffsetTPC-pdpdch.h"
#include "PowerOffsetPO-SRB.h"
#include "ClosedLoopTimingAdjMode.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_DPCH_InfoPerRL_r12_PR {
	DL_DPCH_InfoPerRL_r12_PR_NOTHING,	/* No components present */
	DL_DPCH_InfoPerRL_r12_PR_fdd,
	DL_DPCH_InfoPerRL_r12_PR_tdd
} DL_DPCH_InfoPerRL_r12_PR;

/* Forward declarations */
struct SecondaryCPICH_Info;
struct DL_CCTrChList_r7;
struct DL_CCTrChListToRemove;

/* DL-DPCH-InfoPerRL-r12 */
typedef struct DL_DPCH_InfoPerRL_r12 {
	DL_DPCH_InfoPerRL_r12_PR present;
	union DL_DPCH_InfoPerRL_r12_u {
		struct DL_DPCH_InfoPerRL_r12__fdd {
			PCPICH_UsageForChannelEst_t	 pCPICH_UsageForChannelEst;
			DPCH_FrameOffset_t	 dpch_FrameOffset;
			struct SecondaryCPICH_Info	*secondaryCPICH_Info	/* OPTIONAL */;
			DL_ChannelisationCodeList_t	 dl_ChannelisationCodeList;
			TPC_CombinationIndex_t	 tpc_CombinationIndex;
			PowerOffsetTPC_pdpdch_t	*powerOffsetTPC_pdpdch	/* OPTIONAL */;
			PowerOffsetPO_SRB_t	*powerOffsetPO_SRB	/* OPTIONAL */;
			ClosedLoopTimingAdjMode_t	*closedLoopTimingAdjMode	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} fdd;
		struct DL_DPCH_InfoPerRL_r12__tdd {
			struct DL_CCTrChList_r7	*dl_CCTrChListToEstablish	/* OPTIONAL */;
			struct DL_CCTrChListToRemove	*dl_CCTrChListToRemove	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} tdd;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_DPCH_InfoPerRL_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_DPCH_InfoPerRL_r12;
extern asn_CHOICE_specifics_t asn_SPC_DL_DPCH_InfoPerRL_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_DPCH_InfoPerRL_r12_1[2];
extern asn_per_constraints_t asn_PER_type_DL_DPCH_InfoPerRL_r12_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SecondaryCPICH-Info.h"
#include "DL-CCTrChList-r7.h"
#include "DL-CCTrChListToRemove.h"

#endif	/* _DL_DPCH_InfoPerRL_r12_H_ */
#include <asn_internal.h>
