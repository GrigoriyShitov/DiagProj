/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_QualityReportCriteria_H_
#define	_QualityReportCriteria_H_


#include <asn_application.h>

/* Including external dependencies */
#include "QualityReportingCriteria.h"
#include "PeriodicalReportingCriteria.h"
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum QualityReportCriteria_PR {
	QualityReportCriteria_PR_NOTHING,	/* No components present */
	QualityReportCriteria_PR_qualityReportingCriteria,
	QualityReportCriteria_PR_periodicalReportingCriteria,
	QualityReportCriteria_PR_noReporting
} QualityReportCriteria_PR;

/* QualityReportCriteria */
typedef struct QualityReportCriteria {
	QualityReportCriteria_PR present;
	union QualityReportCriteria_u {
		QualityReportingCriteria_t	 qualityReportingCriteria;
		PeriodicalReportingCriteria_t	 periodicalReportingCriteria;
		NULL_t	 noReporting;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QualityReportCriteria_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QualityReportCriteria;
extern asn_CHOICE_specifics_t asn_SPC_QualityReportCriteria_specs_1;
extern asn_TYPE_member_t asn_MBR_QualityReportCriteria_1[3];
extern asn_per_constraints_t asn_PER_type_QualityReportCriteria_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _QualityReportCriteria_H_ */
#include <asn_internal.h>
