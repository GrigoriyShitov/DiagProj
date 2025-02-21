/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SysInfoType15_3bis_va40ext_IEs_H_
#define	_SysInfoType15_3bis_va40ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_GANSS_Almanac_va40ext;
struct UE_Positioning_GANSS_TimeModels_va40ext;

/* SysInfoType15-3bis-va40ext-IEs */
typedef struct SysInfoType15_3bis_va40ext_IEs {
	struct UE_Positioning_GANSS_Almanac_va40ext	*ue_Positioning_GANSS_Almanac	/* OPTIONAL */;
	struct UE_Positioning_GANSS_TimeModels_va40ext	*ue_positioning_GANSS_TimeModels	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType15_3bis_va40ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType15_3bis_va40ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SysInfoType15_3bis_va40ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SysInfoType15_3bis_va40ext_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-GANSS-Almanac-va40ext.h"
#include "UE-Positioning-GANSS-TimeModels-va40ext.h"

#endif	/* _SysInfoType15_3bis_va40ext_IEs_H_ */
#include <asn_internal.h>
