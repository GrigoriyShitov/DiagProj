/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CarrierFreqNR_r15_H_
#define	_CarrierFreqNR_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueNR-r15.h"
#include <NativeEnumerated.h>
#include "CellReselectionPriority.h"
#include "CellReselectionSubPriority-r13.h"
#include "ReselectionThreshold.h"
#include <NativeInteger.h>
#include "P-MaxNR-r15.h"
#include <BOOLEAN.h>
#include "MaxRS-IndexCellQualNR-r15.h"
#include "ReselectionThresholdQ-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CarrierFreqNR_r15__subcarrierSpacingSSB_r15 {
	CarrierFreqNR_r15__subcarrierSpacingSSB_r15_kHz15	= 0,
	CarrierFreqNR_r15__subcarrierSpacingSSB_r15_kHz30	= 1,
	CarrierFreqNR_r15__subcarrierSpacingSSB_r15_kHz120	= 2,
	CarrierFreqNR_r15__subcarrierSpacingSSB_r15_kHz240	= 3
} e_CarrierFreqNR_r15__subcarrierSpacingSSB_r15;

/* Forward declarations */
struct MultiFrequencyBandListNR_r15;
struct MTC_SSB_NR_r15;
struct SS_RSSI_Measurement_r15;
struct NS_PmaxListNR_r15;
struct ThresholdListNR_r15;
struct MultiBandNsPmaxListNR_1_v1550;
struct MultiBandNsPmaxListNR_v1550;
struct SSB_ToMeasure_r15;
struct NS_PmaxListNR_v1760;
struct MultiBandNsPmaxListNR_1_v1760;
struct MultiBandNsPmaxListNR_v1760;
struct NS_PmaxListNR_Aerial_r18;
struct MultiBandNsPmaxListNR_Aerial_1_r18;

/* CarrierFreqNR-r15 */
typedef struct CarrierFreqNR_r15 {
	ARFCN_ValueNR_r15_t	 carrierFreq_r15;
	struct MultiFrequencyBandListNR_r15	*multiBandInfoList_r15	/* OPTIONAL */;
	struct MultiFrequencyBandListNR_r15	*multiBandInfoListSUL_r15	/* OPTIONAL */;
	struct MTC_SSB_NR_r15	*measTimingConfig_r15	/* OPTIONAL */;
	long	 subcarrierSpacingSSB_r15;
	struct SS_RSSI_Measurement_r15	*ss_RSSI_Measurement_r15	/* OPTIONAL */;
	CellReselectionPriority_t	*cellReselectionPriority_r15	/* OPTIONAL */;
	CellReselectionSubPriority_r13_t	*cellReselectionSubPriority_r15	/* OPTIONAL */;
	ReselectionThreshold_t	 threshX_High_r15;
	ReselectionThreshold_t	 threshX_Low_r15;
	struct CarrierFreqNR_r15__threshX_Q_r15 {
		ReselectionThresholdQ_r9_t	 threshX_HighQ_r15;
		ReselectionThresholdQ_r9_t	 threshX_LowQ_r15;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *threshX_Q_r15;
	long	 q_RxLevMin_r15;
	long	*q_RxLevMinSUL_r15	/* OPTIONAL */;
	P_MaxNR_r15_t	 p_MaxNR_r15;
	struct NS_PmaxListNR_r15	*ns_PmaxListNR_r15	/* OPTIONAL */;
	long	*q_QualMin_r15	/* OPTIONAL */;
	BOOLEAN_t	 deriveSSB_IndexFromCell_r15;
	MaxRS_IndexCellQualNR_r15_t	*maxRS_IndexCellQual_r15	/* OPTIONAL */;
	struct ThresholdListNR_r15	*threshRS_Index_r15	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MultiBandNsPmaxListNR_1_v1550	*multiBandNsPmaxListNR_v1550	/* OPTIONAL */;
	struct MultiBandNsPmaxListNR_v1550	*multiBandNsPmaxListNR_SUL_v1550	/* OPTIONAL */;
	struct SSB_ToMeasure_r15	*ssb_ToMeasure_r15	/* OPTIONAL */;
	struct NS_PmaxListNR_v1760	*ns_PmaxListNR_v1760	/* OPTIONAL */;
	struct MultiBandNsPmaxListNR_1_v1760	*multiBandNsPmaxListNR_v1760	/* OPTIONAL */;
	struct MultiBandNsPmaxListNR_v1760	*multiBandNsPmaxListNR_SUL_v1760	/* OPTIONAL */;
	struct MultiFrequencyBandListNR_r15	*multiBandInfoListAerial_r18	/* OPTIONAL */;
	struct NS_PmaxListNR_Aerial_r18	*ns_PmaxListNR_Aerial_r18	/* OPTIONAL */;
	struct MultiBandNsPmaxListNR_Aerial_1_r18	*multiBandNsPmaxListNR_Aerial_r18	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqNR_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_subcarrierSpacingSSB_r15_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqNR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqNR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_CarrierFreqNR_r15_1[28];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MultiFrequencyBandListNR-r15.h"
#include "MTC-SSB-NR-r15.h"
#include "SS-RSSI-Measurement-r15.h"
#include "NS-PmaxListNR-r15.h"
#include "ThresholdListNR-r15.h"
#include "MultiBandNsPmaxListNR-1-v1550.h"
#include "MultiBandNsPmaxListNR-v1550.h"
#include "SSB-ToMeasure-r15.h"
#include "NS-PmaxListNR-v1760.h"
#include "MultiBandNsPmaxListNR-1-v1760.h"
#include "MultiBandNsPmaxListNR-v1760.h"
#include "NS-PmaxListNR-Aerial-r18.h"
#include "MultiBandNsPmaxListNR-Aerial-1-r18.h"

#endif	/* _CarrierFreqNR_r15_H_ */
#include <asn_internal.h>
