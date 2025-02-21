/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_Positioning_Error_r7_H_
#define	_UE_Positioning_Error_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-Positioning-ErrorCause-r7.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_GPS_AdditionalAssistanceDataRequest;
struct UE_Positioning_GANSS_AdditionalAssistanceDataRequest;

/* UE-Positioning-Error-r7 */
typedef struct UE_Positioning_Error_r7 {
	UE_Positioning_ErrorCause_r7_t	 errorReason;
	struct UE_Positioning_GPS_AdditionalAssistanceDataRequest	*ue_positioning_GPS_additionalAssistanceDataRequest	/* OPTIONAL */;
	struct UE_Positioning_GANSS_AdditionalAssistanceDataRequest	*ue_positioning_GANSS_additionalAssistanceDataRequest	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_Error_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_Error_r7;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_Error_r7_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_Positioning_Error_r7_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-GPS-AdditionalAssistanceDataRequest.h"
#include "UE-Positioning-GANSS-AdditionalAssistanceDataRequest.h"

#endif	/* _UE_Positioning_Error_r7_H_ */
#include <asn_internal.h>
