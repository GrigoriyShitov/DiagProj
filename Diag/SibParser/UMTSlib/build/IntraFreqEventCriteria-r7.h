/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_IntraFreqEventCriteria_r7_H_
#define	_IntraFreqEventCriteria_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFreqEvent-r7.h"
#include "Hysteresis.h"
#include "TimeToTrigger.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReportingCellStatus;

/* IntraFreqEventCriteria-r7 */
typedef struct IntraFreqEventCriteria_r7 {
	IntraFreqEvent_r7_t	 event;
	Hysteresis_t	 hysteresis;
	TimeToTrigger_t	 timeToTrigger;
	struct ReportingCellStatus	*reportingCellStatus	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqEventCriteria_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqEventCriteria_r7;
extern asn_SEQUENCE_specifics_t asn_SPC_IntraFreqEventCriteria_r7_specs_1;
extern asn_TYPE_member_t asn_MBR_IntraFreqEventCriteria_r7_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReportingCellStatus.h"

#endif	/* _IntraFreqEventCriteria_r7_H_ */
#include <asn_internal.h>
