/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_Positioning_MeasuredResults_v770ext_H_
#define	_UE_Positioning_MeasuredResults_v770ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_PositionEstimateInfo_v770ext;
struct UE_Positioning_GPS_MeasurementResults_v770ext;
struct UE_Positioning_Error_r7;
struct UE_Positioning_GANSS_MeasuredResults;

/* UE-Positioning-MeasuredResults-v770ext */
typedef struct UE_Positioning_MeasuredResults_v770ext {
	struct UE_Positioning_PositionEstimateInfo_v770ext	*ue_positioning_PositionEstimateInfo	/* OPTIONAL */;
	struct UE_Positioning_GPS_MeasurementResults_v770ext	*ue_positioning_GPS_Measurement	/* OPTIONAL */;
	struct UE_Positioning_Error_r7	*ue_positioning_Error	/* OPTIONAL */;
	struct UE_Positioning_GANSS_MeasuredResults	*ue_positioning_Ganss_MeasuredResults	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_MeasuredResults_v770ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_MeasuredResults_v770ext;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_MeasuredResults_v770ext_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_Positioning_MeasuredResults_v770ext_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-PositionEstimateInfo-v770ext.h"
#include "UE-Positioning-GPS-MeasurementResults-v770ext.h"
#include "UE-Positioning-Error-r7.h"
#include "UE-Positioning-GANSS-MeasuredResults.h"

#endif	/* _UE_Positioning_MeasuredResults_v770ext_H_ */
#include <asn_internal.h>
