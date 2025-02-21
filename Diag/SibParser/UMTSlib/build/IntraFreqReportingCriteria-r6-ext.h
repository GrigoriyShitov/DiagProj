/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_IntraFreqReportingCriteria_r6_ext_H_
#define	_IntraFreqReportingCriteria_r6_ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Event1j-r6.h"
#include "Hysteresis.h"
#include "TimeToTrigger.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReportingCellStatus;

/* IntraFreqReportingCriteria-r6-ext */
typedef struct IntraFreqReportingCriteria_r6_ext {
	Event1j_r6_t	 event;
	Hysteresis_t	 hysteresis;
	TimeToTrigger_t	 timeToTrigger;
	struct ReportingCellStatus	*reportingCellStatus	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqReportingCriteria_r6_ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqReportingCriteria_r6_ext;
extern asn_SEQUENCE_specifics_t asn_SPC_IntraFreqReportingCriteria_r6_ext_specs_1;
extern asn_TYPE_member_t asn_MBR_IntraFreqReportingCriteria_r6_ext_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReportingCellStatus.h"

#endif	/* _IntraFreqReportingCriteria_r6_ext_H_ */
#include <asn_internal.h>
