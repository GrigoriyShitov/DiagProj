/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_EUTRA_Capability_v1610_IEs_H_
#define	_UE_EUTRA_Capability_v1610_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "MMTEL-Parameters-v1610.h"
#include "UE-BasedNetwPerfMeasParameters-v1610.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_EUTRA_Capability_v1610_IEs__dl_DedicatedMessageSegmentation_r16 {
	UE_EUTRA_Capability_v1610_IEs__dl_DedicatedMessageSegmentation_r16_supported	= 0
} e_UE_EUTRA_Capability_v1610_IEs__dl_DedicatedMessageSegmentation_r16;

/* Forward declarations */
struct HighSpeedEnhParameters_v1610;
struct NeighCellSI_AcquisitionParameters_v1610;
struct MBMS_Parameters_v1610;
struct PDCP_Parameters_v1610;
struct MAC_Parameters_v1610;
struct PhyLayerParameters_v1610;
struct MeasParameters_v1610;
struct PUR_Parameters_r16;
struct EUTRA_5GC_Parameters_v1610;
struct Other_Parameters_v1610;
struct IRAT_ParametersNR_v1610;
struct RF_Parameters_v1610;
struct MobilityParameters_v1610;
struct SL_Parameters_v1610;
struct UE_EUTRA_CapabilityAddXDD_Mode_v1610;
struct UE_EUTRA_Capability_v1630_IEs;

/* UE-EUTRA-Capability-v1610-IEs */
typedef struct UE_EUTRA_Capability_v1610_IEs {
	struct HighSpeedEnhParameters_v1610	*highSpeedEnhParameters_v1610	/* OPTIONAL */;
	struct NeighCellSI_AcquisitionParameters_v1610	*neighCellSI_AcquisitionParameters_v1610	/* OPTIONAL */;
	struct MBMS_Parameters_v1610	*mbms_Parameters_v1610	/* OPTIONAL */;
	struct PDCP_Parameters_v1610	*pdcp_Parameters_v1610	/* OPTIONAL */;
	struct MAC_Parameters_v1610	*mac_Parameters_v1610	/* OPTIONAL */;
	struct PhyLayerParameters_v1610	*phyLayerParameters_v1610	/* OPTIONAL */;
	struct MeasParameters_v1610	*measParameters_v1610	/* OPTIONAL */;
	struct PUR_Parameters_r16	*pur_Parameters_r16	/* OPTIONAL */;
	struct EUTRA_5GC_Parameters_v1610	*eutra_5GC_Parameters_v1610	/* OPTIONAL */;
	struct Other_Parameters_v1610	*otherParameters_v1610	/* OPTIONAL */;
	long	*dl_DedicatedMessageSegmentation_r16	/* OPTIONAL */;
	MMTEL_Parameters_v1610_t	 mmtel_Parameters_v1610;
	struct IRAT_ParametersNR_v1610	*irat_ParametersNR_v1610	/* OPTIONAL */;
	struct RF_Parameters_v1610	*rf_Parameters_v1610	/* OPTIONAL */;
	struct MobilityParameters_v1610	*mobilityParameters_v1610	/* OPTIONAL */;
	UE_BasedNetwPerfMeasParameters_v1610_t	 ue_BasedNetwPerfMeasParameters_v1610;
	struct SL_Parameters_v1610	*sl_Parameters_v1610	/* OPTIONAL */;
	struct UE_EUTRA_CapabilityAddXDD_Mode_v1610	*fdd_Add_UE_EUTRA_Capabilities_v1610	/* OPTIONAL */;
	struct UE_EUTRA_CapabilityAddXDD_Mode_v1610	*tdd_Add_UE_EUTRA_Capabilities_v1610	/* OPTIONAL */;
	struct UE_EUTRA_Capability_v1630_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1610_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_DedicatedMessageSegmentation_r16_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1610_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1610_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1610_IEs_1[20];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "HighSpeedEnhParameters-v1610.h"
#include "NeighCellSI-AcquisitionParameters-v1610.h"
#include "MBMS-Parameters-v1610.h"
#include "PDCP-Parameters-v1610.h"
#include "MAC-Parameters-v1610.h"
#include "PhyLayerParameters-v1610.h"
#include "MeasParameters-v1610.h"
#include "PUR-Parameters-r16.h"
#include "EUTRA-5GC-Parameters-v1610.h"
#include "Other-Parameters-v1610.h"
#include "IRAT-ParametersNR-v1610.h"
#include "RF-Parameters-v1610.h"
#include "MobilityParameters-v1610.h"
#include "SL-Parameters-v1610.h"
#include "UE-EUTRA-CapabilityAddXDD-Mode-v1610.h"
#include "UE-EUTRA-Capability-v1630-IEs.h"

#endif	/* _UE_EUTRA_Capability_v1610_IEs_H_ */
#include <asn_internal.h>
