/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_InternalReportingCriteria_H_
#define	_UE_InternalReportingCriteria_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_InternalEventParamList;

/* UE-InternalReportingCriteria */
typedef struct UE_InternalReportingCriteria {
	struct UE_InternalEventParamList	*ue_InternalEventParamList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_InternalReportingCriteria_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_InternalReportingCriteria;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_InternalReportingCriteria_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_InternalReportingCriteria_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-InternalEventParamList.h"

#endif	/* _UE_InternalReportingCriteria_H_ */
#include <asn_internal.h>
