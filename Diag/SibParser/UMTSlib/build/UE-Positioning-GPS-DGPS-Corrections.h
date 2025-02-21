/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_Positioning_GPS_DGPS_Corrections_H_
#define	_UE_Positioning_GPS_DGPS_Corrections_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GPS-TOW-1sec.h"
#include "DiffCorrectionStatus.h"
#include "DGPS-CorrectionSatInfoList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-Positioning-GPS-DGPS-Corrections */
typedef struct UE_Positioning_GPS_DGPS_Corrections {
	GPS_TOW_1sec_t	 gps_TOW;
	DiffCorrectionStatus_t	 statusHealth;
	DGPS_CorrectionSatInfoList_t	 dgps_CorrectionSatInfoList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GPS_DGPS_Corrections_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GPS_DGPS_Corrections;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_GPS_DGPS_Corrections_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_Positioning_GPS_DGPS_Corrections_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Positioning_GPS_DGPS_Corrections_H_ */
#include <asn_internal.h>
