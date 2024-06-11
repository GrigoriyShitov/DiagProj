/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_UE_Positioning_OTDOA_ReferenceCellInfo_UEB_H_
#define	_UE_Positioning_OTDOA_ReferenceCellInfo_UEB_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "PrimaryCPICH-Info.h"
#include <constr_SEQUENCE.h>
#include "CellAndChannelIdentity.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_Positioning_OTDOA_ReferenceCellInfo_UEB__modeSpecificInfo_PR {
	UE_Positioning_OTDOA_ReferenceCellInfo_UEB__modeSpecificInfo_PR_NOTHING,	/* No components present */
	UE_Positioning_OTDOA_ReferenceCellInfo_UEB__modeSpecificInfo_PR_fdd,
	UE_Positioning_OTDOA_ReferenceCellInfo_UEB__modeSpecificInfo_PR_tdd
} UE_Positioning_OTDOA_ReferenceCellInfo_UEB__modeSpecificInfo_PR;

/* Forward declarations */
struct FrequencyInfo;
struct ReferenceCellPosition;
struct UE_Positioning_IPDL_Parameters;

/* UE-Positioning-OTDOA-ReferenceCellInfo-UEB */
typedef struct UE_Positioning_OTDOA_ReferenceCellInfo_UEB {
	long	*sfn	/* OPTIONAL */;
	struct UE_Positioning_OTDOA_ReferenceCellInfo_UEB__modeSpecificInfo {
		UE_Positioning_OTDOA_ReferenceCellInfo_UEB__modeSpecificInfo_PR present;
		union UE_Positioning_OTDOA_ReferenceCellInfo_UEB__modeSpecificInfo_u {
			struct UE_Positioning_OTDOA_ReferenceCellInfo_UEB__modeSpecificInfo__fdd {
				PrimaryCPICH_Info_t	 primaryCPICH_Info;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct UE_Positioning_OTDOA_ReferenceCellInfo_UEB__modeSpecificInfo__tdd {
				CellAndChannelIdentity_t	 cellAndChannelIdentity;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	struct ReferenceCellPosition	*cellPosition	/* OPTIONAL */;
	long	*roundTripTime	/* OPTIONAL */;
	struct UE_Positioning_IPDL_Parameters	*ue_positioning_IPDL_Paremeters	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_OTDOA_ReferenceCellInfo_UEB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo_UEB;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_OTDOA_ReferenceCellInfo_UEB_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_Positioning_OTDOA_ReferenceCellInfo_UEB_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FrequencyInfo.h"
#include "ReferenceCellPosition.h"
#include "UE-Positioning-IPDL-Parameters.h"

#endif	/* _UE_Positioning_OTDOA_ReferenceCellInfo_UEB_H_ */
#include <asn_internal.h>
