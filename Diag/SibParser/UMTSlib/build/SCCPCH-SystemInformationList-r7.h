/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SCCPCH_SystemInformationList_r7_H_
#define	_SCCPCH_SystemInformationList_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SCCPCH_SystemInformation_r7;

/* SCCPCH-SystemInformationList-r7 */
typedef struct SCCPCH_SystemInformationList_r7 {
	A_SEQUENCE_OF(struct SCCPCH_SystemInformation_r7) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCCPCH_SystemInformationList_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCCPCH_SystemInformationList_r7;
extern asn_SET_OF_specifics_t asn_SPC_SCCPCH_SystemInformationList_r7_specs_1;
extern asn_TYPE_member_t asn_MBR_SCCPCH_SystemInformationList_r7_1[1];
extern asn_per_constraints_t asn_PER_type_SCCPCH_SystemInformationList_r7_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SCCPCH-SystemInformation-r7.h"

#endif	/* _SCCPCH_SystemInformationList_r7_H_ */
#include <asn_internal.h>
