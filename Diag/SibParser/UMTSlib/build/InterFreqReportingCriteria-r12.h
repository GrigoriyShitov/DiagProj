/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_InterFreqReportingCriteria_r12_H_
#define	_InterFreqReportingCriteria_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqEventList_r12;
struct InterFreqExclude_listedCellsList_r12;

/* InterFreqReportingCriteria-r12 */
typedef struct InterFreqReportingCriteria_r12 {
	struct InterFreqEventList_r12	*interFreqEventList	/* OPTIONAL */;
	struct InterFreqExclude_listedCellsList_r12	*interFreqExclude_listedCellsList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqReportingCriteria_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqReportingCriteria_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFreqReportingCriteria_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqReportingCriteria_r12_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqEventList-r12.h"
#include "InterFreqExclude-listedCellsList-r12.h"

#endif	/* _InterFreqReportingCriteria_r12_H_ */
#include <asn_internal.h>
