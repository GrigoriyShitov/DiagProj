/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_Positioning_EventSpecificInfo_r7_H_
#define	_UE_Positioning_EventSpecificInfo_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ThresholdPositionChange.h"
#include "ThresholdSFN-SFN-Change.h"
#include "ThresholdSFN-GPS-TOW-us.h"
#include "ThresholdSFN-GANSS-TOW.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_Positioning_EventSpecificInfo_r7_PR {
	UE_Positioning_EventSpecificInfo_r7_PR_NOTHING,	/* No components present */
	UE_Positioning_EventSpecificInfo_r7_PR_e7a,
	UE_Positioning_EventSpecificInfo_r7_PR_e7b,
	UE_Positioning_EventSpecificInfo_r7_PR_e7c,
	UE_Positioning_EventSpecificInfo_r7_PR_e7d
} UE_Positioning_EventSpecificInfo_r7_PR;

/* UE-Positioning-EventSpecificInfo-r7 */
typedef struct UE_Positioning_EventSpecificInfo_r7 {
	UE_Positioning_EventSpecificInfo_r7_PR present;
	union UE_Positioning_EventSpecificInfo_r7_u {
		ThresholdPositionChange_t	 e7a;
		ThresholdSFN_SFN_Change_t	 e7b;
		ThresholdSFN_GPS_TOW_us_t	 e7c;
		ThresholdSFN_GANSS_TOW_t	 e7d;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_EventSpecificInfo_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_EventSpecificInfo_r7;
extern asn_CHOICE_specifics_t asn_SPC_UE_Positioning_EventSpecificInfo_r7_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_Positioning_EventSpecificInfo_r7_1[4];
extern asn_per_constraints_t asn_PER_type_UE_Positioning_EventSpecificInfo_r7_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Positioning_EventSpecificInfo_r7_H_ */
#include <asn_internal.h>
