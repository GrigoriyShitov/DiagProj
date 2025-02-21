/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasIdleCarrierNR_r16_H_
#define	_MeasIdleCarrierNR_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueNR-r15.h"
#include <NativeEnumerated.h>
#include "RSRP-RangeNR-r15.h"
#include "RSRQ-RangeNR-r15.h"
#include <constr_SEQUENCE.h>
#include "MaxRS-IndexCellQualNR-r15.h"
#include <BOOLEAN.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasIdleCarrierNR_r16__subcarrierSpacingSSB_r16 {
	MeasIdleCarrierNR_r16__subcarrierSpacingSSB_r16_kHz15	= 0,
	MeasIdleCarrierNR_r16__subcarrierSpacingSSB_r16_kHz30	= 1,
	MeasIdleCarrierNR_r16__subcarrierSpacingSSB_r16_kHz120	= 2,
	MeasIdleCarrierNR_r16__subcarrierSpacingSSB_r16_kHz240	= 3
} e_MeasIdleCarrierNR_r16__subcarrierSpacingSSB_r16;
typedef enum MeasIdleCarrierNR_r16__reportQuantitiesNR_r16 {
	MeasIdleCarrierNR_r16__reportQuantitiesNR_r16_rsrp	= 0,
	MeasIdleCarrierNR_r16__reportQuantitiesNR_r16_rsrq	= 1,
	MeasIdleCarrierNR_r16__reportQuantitiesNR_r16_both	= 2
} e_MeasIdleCarrierNR_r16__reportQuantitiesNR_r16;
typedef enum MeasIdleCarrierNR_r16__subcarrierSpacingSSB_r17 {
	MeasIdleCarrierNR_r16__subcarrierSpacingSSB_r17_kHz480	= 0,
	MeasIdleCarrierNR_r16__subcarrierSpacingSSB_r17_spare1	= 1
} e_MeasIdleCarrierNR_r16__subcarrierSpacingSSB_r17;

/* Forward declarations */
struct MultiFrequencyBandListNR_r15;
struct CellListNR_r16;
struct BeamMeasConfigIdleNR_r16;
struct ThresholdListNR_r15;
struct MTC_SSB_NR_r15;
struct SSB_ToMeasure_r15;
struct SS_RSSI_Measurement_r15;

/* MeasIdleCarrierNR-r16 */
typedef struct MeasIdleCarrierNR_r16 {
	ARFCN_ValueNR_r15_t	 carrierFreqNR_r16;
	long	 subcarrierSpacingSSB_r16;
	struct MultiFrequencyBandListNR_r15	*frequencyBandList	/* OPTIONAL */;
	struct CellListNR_r16	*measCellListNR_r16	/* OPTIONAL */;
	long	 reportQuantitiesNR_r16;
	struct MeasIdleCarrierNR_r16__qualityThresholdNR_r16 {
		RSRP_RangeNR_r15_t	*idleRSRP_ThresholdNR_r16	/* OPTIONAL */;
		RSRQ_RangeNR_r15_t	*idleRSRQ_ThresholdNR_r16	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *qualityThresholdNR_r16;
	struct MeasIdleCarrierNR_r16__ssb_MeasConfig_r16 {
		MaxRS_IndexCellQualNR_r15_t	*maxRS_IndexCellQual_r16	/* OPTIONAL */;
		struct ThresholdListNR_r15	*threshRS_Index_r16	/* OPTIONAL */;
		struct MTC_SSB_NR_r15	*measTimingConfig_r16	/* OPTIONAL */;
		struct SSB_ToMeasure_r15	*ssb_ToMeasure_r16	/* OPTIONAL */;
		BOOLEAN_t	 deriveSSB_IndexFromCell_r16;
		struct SS_RSSI_Measurement_r15	*ss_RSSI_Measurement_r16	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ssb_MeasConfig_r16;
	struct BeamMeasConfigIdleNR_r16	*beamMeasConfigIdle_r16	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*subcarrierSpacingSSB_r17	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasIdleCarrierNR_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_subcarrierSpacingSSB_r16_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_reportQuantitiesNR_r16_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_subcarrierSpacingSSB_r17_26;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasIdleCarrierNR_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasIdleCarrierNR_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasIdleCarrierNR_r16_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MultiFrequencyBandListNR-r15.h"
#include "CellListNR-r16.h"
#include "BeamMeasConfigIdleNR-r16.h"
#include "ThresholdListNR-r15.h"
#include "MTC-SSB-NR-r15.h"
#include "SSB-ToMeasure-r15.h"
#include "SS-RSSI-Measurement-r15.h"

#endif	/* _MeasIdleCarrierNR_r16_H_ */
#include <asn_internal.h>
