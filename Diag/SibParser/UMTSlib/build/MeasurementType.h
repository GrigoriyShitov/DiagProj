/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasurementType_H_
#define	_MeasurementType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFrequencyMeasurement.h"
#include "InterFrequencyMeasurement.h"
#include "InterRATMeasurement.h"
#include "UE-Positioning-Measurement.h"
#include "TrafficVolumeMeasurement.h"
#include "QualityMeasurement.h"
#include "UE-InternalMeasurement.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasurementType_PR {
	MeasurementType_PR_NOTHING,	/* No components present */
	MeasurementType_PR_intraFrequencyMeasurement,
	MeasurementType_PR_interFrequencyMeasurement,
	MeasurementType_PR_interRATMeasurement,
	MeasurementType_PR_ue_positioning_Measurement,
	MeasurementType_PR_trafficVolumeMeasurement,
	MeasurementType_PR_qualityMeasurement,
	MeasurementType_PR_ue_InternalMeasurement
} MeasurementType_PR;

/* MeasurementType */
typedef struct MeasurementType {
	MeasurementType_PR present;
	union MeasurementType_u {
		IntraFrequencyMeasurement_t	 intraFrequencyMeasurement;
		InterFrequencyMeasurement_t	 interFrequencyMeasurement;
		InterRATMeasurement_t	 interRATMeasurement;
		UE_Positioning_Measurement_t	 ue_positioning_Measurement;
		TrafficVolumeMeasurement_t	 trafficVolumeMeasurement;
		QualityMeasurement_t	 qualityMeasurement;
		UE_InternalMeasurement_t	 ue_InternalMeasurement;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementType;
extern asn_CHOICE_specifics_t asn_SPC_MeasurementType_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementType_1[7];
extern asn_per_constraints_t asn_PER_type_MeasurementType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementType_H_ */
#include <asn_internal.h>
