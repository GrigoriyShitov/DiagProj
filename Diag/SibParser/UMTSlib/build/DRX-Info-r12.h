/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_DRX_Info_r12_H_
#define	_DRX_Info_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-DRX-Cycle.h"
#include "UE-DRX-Cycle2.h"
#include "UE-DRX-Cycle-InactivityThreshold.h"
#include "UE-GrantMonitoring-InactivityThreshold.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DRX-Info-r12 */
typedef struct DRX_Info_r12 {
	UE_DRX_Cycle_t	 ue_drx_Cycle;
	UE_DRX_Cycle2_t	*ue_drx_Cycle2	/* OPTIONAL */;
	UE_DRX_Cycle_InactivityThreshold_t	 ue_drx_Cycle_InactivityThreshold;
	UE_DRX_Cycle_InactivityThreshold_t	*ue_drx_Cycle2_InactivityThreshold	/* OPTIONAL */;
	UE_GrantMonitoring_InactivityThreshold_t	 ue_GrantMonitoring_InactivityThreshold;
	BOOLEAN_t	 ue_drx_GrantMonitoring;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRX_Info_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRX_Info_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_DRX_Info_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_DRX_Info_r12_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _DRX_Info_r12_H_ */
#include <asn_internal.h>
