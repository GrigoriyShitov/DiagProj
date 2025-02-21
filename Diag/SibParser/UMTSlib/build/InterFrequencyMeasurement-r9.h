/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_InterFrequencyMeasurement_r9_H_
#define	_InterFrequencyMeasurement_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterFreqCellInfoList-r9.h"
#include <NativeInteger.h>
#include "InterFreqReportCriteria-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqMeasQuantity;
struct InterFreqReportingQuantity;
struct MeasurementValidity;
struct UE_AutonomousUpdateMode;

/* InterFrequencyMeasurement-r9 */
typedef struct InterFrequencyMeasurement_r9 {
	InterFreqCellInfoList_r9_t	 interFreqCellInfoList;
	struct InterFreqMeasQuantity	*interFreqMeasQuantity	/* OPTIONAL */;
	struct InterFreqReportingQuantity	*interFreqReportingQuantity	/* OPTIONAL */;
	struct MeasurementValidity	*measurementValidity	/* OPTIONAL */;
	struct UE_AutonomousUpdateMode	*interFreqSetUpdate	/* OPTIONAL */;
	long	*adjacentFrequencyIndex	/* OPTIONAL */;
	long	*interBandFrequencyIndex	/* OPTIONAL */;
	InterFreqReportCriteria_r9_t	 reportCriteria;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFrequencyMeasurement_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFrequencyMeasurement_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFrequencyMeasurement_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFrequencyMeasurement_r9_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqMeasQuantity.h"
#include "InterFreqReportingQuantity.h"
#include "MeasurementValidity.h"
#include "UE-AutonomousUpdateMode.h"

#endif	/* _InterFrequencyMeasurement_r9_H_ */
#include <asn_internal.h>
