/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PhyLayerParameters_v1430_H_
#define	_PhyLayerParameters_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhyLayerParameters_v1430__ce_PUSCH_NB_MaxTBS_r14 {
	PhyLayerParameters_v1430__ce_PUSCH_NB_MaxTBS_r14_supported	= 0
} e_PhyLayerParameters_v1430__ce_PUSCH_NB_MaxTBS_r14;
typedef enum PhyLayerParameters_v1430__ce_PDSCH_PUSCH_MaxBandwidth_r14 {
	PhyLayerParameters_v1430__ce_PDSCH_PUSCH_MaxBandwidth_r14_bw5	= 0,
	PhyLayerParameters_v1430__ce_PDSCH_PUSCH_MaxBandwidth_r14_bw20	= 1
} e_PhyLayerParameters_v1430__ce_PDSCH_PUSCH_MaxBandwidth_r14;
typedef enum PhyLayerParameters_v1430__ce_HARQ_AckBundling_r14 {
	PhyLayerParameters_v1430__ce_HARQ_AckBundling_r14_supported	= 0
} e_PhyLayerParameters_v1430__ce_HARQ_AckBundling_r14;
typedef enum PhyLayerParameters_v1430__ce_PDSCH_TenProcesses_r14 {
	PhyLayerParameters_v1430__ce_PDSCH_TenProcesses_r14_supported	= 0
} e_PhyLayerParameters_v1430__ce_PDSCH_TenProcesses_r14;
typedef enum PhyLayerParameters_v1430__ce_RetuningSymbols_r14 {
	PhyLayerParameters_v1430__ce_RetuningSymbols_r14_n0	= 0,
	PhyLayerParameters_v1430__ce_RetuningSymbols_r14_n1	= 1
} e_PhyLayerParameters_v1430__ce_RetuningSymbols_r14;
typedef enum PhyLayerParameters_v1430__ce_PDSCH_PUSCH_Enhancement_r14 {
	PhyLayerParameters_v1430__ce_PDSCH_PUSCH_Enhancement_r14_supported	= 0
} e_PhyLayerParameters_v1430__ce_PDSCH_PUSCH_Enhancement_r14;
typedef enum PhyLayerParameters_v1430__ce_SchedulingEnhancement_r14 {
	PhyLayerParameters_v1430__ce_SchedulingEnhancement_r14_supported	= 0
} e_PhyLayerParameters_v1430__ce_SchedulingEnhancement_r14;
typedef enum PhyLayerParameters_v1430__ce_SRS_Enhancement_r14 {
	PhyLayerParameters_v1430__ce_SRS_Enhancement_r14_supported	= 0
} e_PhyLayerParameters_v1430__ce_SRS_Enhancement_r14;
typedef enum PhyLayerParameters_v1430__ce_PUCCH_Enhancement_r14 {
	PhyLayerParameters_v1430__ce_PUCCH_Enhancement_r14_supported	= 0
} e_PhyLayerParameters_v1430__ce_PUCCH_Enhancement_r14;
typedef enum PhyLayerParameters_v1430__ce_ClosedLoopTxAntennaSelection_r14 {
	PhyLayerParameters_v1430__ce_ClosedLoopTxAntennaSelection_r14_supported	= 0
} e_PhyLayerParameters_v1430__ce_ClosedLoopTxAntennaSelection_r14;
typedef enum PhyLayerParameters_v1430__tdd_SpecialSubframe_r14 {
	PhyLayerParameters_v1430__tdd_SpecialSubframe_r14_supported	= 0
} e_PhyLayerParameters_v1430__tdd_SpecialSubframe_r14;
typedef enum PhyLayerParameters_v1430__tdd_TTI_Bundling_r14 {
	PhyLayerParameters_v1430__tdd_TTI_Bundling_r14_supported	= 0
} e_PhyLayerParameters_v1430__tdd_TTI_Bundling_r14;
typedef enum PhyLayerParameters_v1430__dmrs_LessUpPTS_r14 {
	PhyLayerParameters_v1430__dmrs_LessUpPTS_r14_supported	= 0
} e_PhyLayerParameters_v1430__dmrs_LessUpPTS_r14;
typedef enum PhyLayerParameters_v1430__alternativeTBS_Index_r14 {
	PhyLayerParameters_v1430__alternativeTBS_Index_r14_supported	= 0
} e_PhyLayerParameters_v1430__alternativeTBS_Index_r14;

/* Forward declarations */
struct MIMO_UE_Parameters_v1430;
struct FeMBMS_Unicast_Parameters_r14;

/* PhyLayerParameters-v1430 */
typedef struct PhyLayerParameters_v1430 {
	long	*ce_PUSCH_NB_MaxTBS_r14	/* OPTIONAL */;
	long	*ce_PDSCH_PUSCH_MaxBandwidth_r14	/* OPTIONAL */;
	long	*ce_HARQ_AckBundling_r14	/* OPTIONAL */;
	long	*ce_PDSCH_TenProcesses_r14	/* OPTIONAL */;
	long	*ce_RetuningSymbols_r14	/* OPTIONAL */;
	long	*ce_PDSCH_PUSCH_Enhancement_r14	/* OPTIONAL */;
	long	*ce_SchedulingEnhancement_r14	/* OPTIONAL */;
	long	*ce_SRS_Enhancement_r14	/* OPTIONAL */;
	long	*ce_PUCCH_Enhancement_r14	/* OPTIONAL */;
	long	*ce_ClosedLoopTxAntennaSelection_r14	/* OPTIONAL */;
	long	*tdd_SpecialSubframe_r14	/* OPTIONAL */;
	long	*tdd_TTI_Bundling_r14	/* OPTIONAL */;
	long	*dmrs_LessUpPTS_r14	/* OPTIONAL */;
	struct MIMO_UE_Parameters_v1430	*mimo_UE_Parameters_v1430	/* OPTIONAL */;
	long	*alternativeTBS_Index_r14	/* OPTIONAL */;
	struct FeMBMS_Unicast_Parameters_r14	*feMBMS_Unicast_Parameters_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhyLayerParameters_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_PUSCH_NB_MaxTBS_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_PDSCH_PUSCH_MaxBandwidth_r14_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_HARQ_AckBundling_r14_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_PDSCH_TenProcesses_r14_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_RetuningSymbols_r14_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_PDSCH_PUSCH_Enhancement_r14_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_SchedulingEnhancement_r14_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_SRS_Enhancement_r14_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_PUCCH_Enhancement_r14_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_ClosedLoopTxAntennaSelection_r14_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_tdd_SpecialSubframe_r14_24;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_tdd_TTI_Bundling_r14_26;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dmrs_LessUpPTS_r14_28;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_alternativeTBS_Index_r14_31;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_PhyLayerParameters_v1430_1[16];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MIMO-UE-Parameters-v1430.h"
#include "FeMBMS-Unicast-Parameters-r14.h"

#endif	/* _PhyLayerParameters_v1430_H_ */
#include <asn_internal.h>
