/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_EventResults_H_
#define	_EventResults_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFreqEventResults.h"
#include "InterFreqEventResults.h"
#include "InterRATEventResults.h"
#include "TrafficVolumeEventResults.h"
#include "QualityEventResults.h"
#include "UE-InternalEventResults.h"
#include "UE-Positioning-MeasurementEventResults.h"
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EventResults_PR {
	EventResults_PR_NOTHING,	/* No components present */
	EventResults_PR_intraFreqEventResults,
	EventResults_PR_interFreqEventResults,
	EventResults_PR_interRATEventResults,
	EventResults_PR_trafficVolumeEventResults,
	EventResults_PR_qualityEventResults,
	EventResults_PR_ue_InternalEventResults,
	EventResults_PR_ue_positioning_MeasurementEventResults,
	EventResults_PR_spare
} EventResults_PR;

/* EventResults */
typedef struct EventResults {
	EventResults_PR present;
	union EventResults_u {
		IntraFreqEventResults_t	 intraFreqEventResults;
		InterFreqEventResults_t	 interFreqEventResults;
		InterRATEventResults_t	 interRATEventResults;
		TrafficVolumeEventResults_t	 trafficVolumeEventResults;
		QualityEventResults_t	 qualityEventResults;
		UE_InternalEventResults_t	 ue_InternalEventResults;
		UE_Positioning_MeasurementEventResults_t	 ue_positioning_MeasurementEventResults;
		NULL_t	 spare;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EventResults_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EventResults;
extern asn_CHOICE_specifics_t asn_SPC_EventResults_specs_1;
extern asn_TYPE_member_t asn_MBR_EventResults_1[8];
extern asn_per_constraints_t asn_PER_type_EventResults_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _EventResults_H_ */
#include <asn_internal.h>
