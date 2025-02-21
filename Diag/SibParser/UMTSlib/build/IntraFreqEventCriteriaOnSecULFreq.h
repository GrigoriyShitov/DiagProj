/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_IntraFreqEventCriteriaOnSecULFreq_H_
#define	_IntraFreqEventCriteriaOnSecULFreq_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFreqEventOnSecULFreq.h"
#include "Hysteresis.h"
#include "TimeToTrigger.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReportingCellStatus;

/* IntraFreqEventCriteriaOnSecULFreq */
typedef struct IntraFreqEventCriteriaOnSecULFreq {
	IntraFreqEventOnSecULFreq_t	 event;
	Hysteresis_t	 hysteresis;
	TimeToTrigger_t	 timeToTrigger;
	struct ReportingCellStatus	*reportingCellStatus	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqEventCriteriaOnSecULFreq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqEventCriteriaOnSecULFreq;
extern asn_SEQUENCE_specifics_t asn_SPC_IntraFreqEventCriteriaOnSecULFreq_specs_1;
extern asn_TYPE_member_t asn_MBR_IntraFreqEventCriteriaOnSecULFreq_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReportingCellStatus.h"

#endif	/* _IntraFreqEventCriteriaOnSecULFreq_H_ */
#include <asn_internal.h>
