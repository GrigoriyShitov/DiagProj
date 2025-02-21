/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_Positioning_GPS_AssistanceData_v770ext_H_
#define	_UE_Positioning_GPS_AssistanceData_v770ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_GPS_ReferenceTime_v770ext;
struct UE_Positioning_GPS_AcquisitionAssistance_v770ext;

/* UE-Positioning-GPS-AssistanceData-v770ext */
typedef struct UE_Positioning_GPS_AssistanceData_v770ext {
	struct UE_Positioning_GPS_ReferenceTime_v770ext	*ue_positioning_GPS_ReferenceTime	/* OPTIONAL */;
	struct UE_Positioning_GPS_AcquisitionAssistance_v770ext	*ue_positioning_GPS_AcquisitionAssistance	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GPS_AssistanceData_v770ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GPS_AssistanceData_v770ext;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_GPS_AssistanceData_v770ext_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_Positioning_GPS_AssistanceData_v770ext_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-GPS-ReferenceTime-v770ext.h"
#include "UE-Positioning-GPS-AcquisitionAssistance-v770ext.h"

#endif	/* _UE_Positioning_GPS_AssistanceData_v770ext_H_ */
#include <asn_internal.h>
