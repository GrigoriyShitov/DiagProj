/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_InternalReportCriteria_r14_H_
#define	_UE_InternalReportCriteria_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-InternalReportingCriteria-r14.h"
#include "PeriodicalReportingCriteria.h"
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_InternalReportCriteria_r14_PR {
	UE_InternalReportCriteria_r14_PR_NOTHING,	/* No components present */
	UE_InternalReportCriteria_r14_PR_ue_InternalReportingCriteria,
	UE_InternalReportCriteria_r14_PR_periodicalReportingCriteria,
	UE_InternalReportCriteria_r14_PR_noReporting
} UE_InternalReportCriteria_r14_PR;

/* UE-InternalReportCriteria-r14 */
typedef struct UE_InternalReportCriteria_r14 {
	UE_InternalReportCriteria_r14_PR present;
	union UE_InternalReportCriteria_r14_u {
		UE_InternalReportingCriteria_r14_t	 ue_InternalReportingCriteria;
		PeriodicalReportingCriteria_t	 periodicalReportingCriteria;
		NULL_t	 noReporting;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_InternalReportCriteria_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_InternalReportCriteria_r14;
extern asn_CHOICE_specifics_t asn_SPC_UE_InternalReportCriteria_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_InternalReportCriteria_r14_1[3];
extern asn_per_constraints_t asn_PER_type_UE_InternalReportCriteria_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_InternalReportCriteria_r14_H_ */
#include <asn_internal.h>
