/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_InterFrequencyMeasurement_r6_H_
#define	_InterFrequencyMeasurement_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterFreqCellInfoList-r4.h"
#include "InterFreqReportCriteria-r6.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqMeasQuantity;
struct InterFreqReportingQuantity;
struct MeasurementValidity;
struct UE_AutonomousUpdateMode;

/* InterFrequencyMeasurement-r6 */
typedef struct InterFrequencyMeasurement_r6 {
	InterFreqCellInfoList_r4_t	 interFreqCellInfoList;
	struct InterFreqMeasQuantity	*interFreqMeasQuantity	/* OPTIONAL */;
	struct InterFreqReportingQuantity	*interFreqReportingQuantity	/* OPTIONAL */;
	struct MeasurementValidity	*measurementValidity	/* OPTIONAL */;
	struct UE_AutonomousUpdateMode	*interFreqSetUpdate	/* OPTIONAL */;
	InterFreqReportCriteria_r6_t	 reportCriteria;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFrequencyMeasurement_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFrequencyMeasurement_r6;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFrequencyMeasurement_r6_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFrequencyMeasurement_r6_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqMeasQuantity.h"
#include "InterFreqReportingQuantity.h"
#include "MeasurementValidity.h"
#include "UE-AutonomousUpdateMode.h"

#endif	/* _InterFrequencyMeasurement_r6_H_ */
#include <asn_internal.h>
