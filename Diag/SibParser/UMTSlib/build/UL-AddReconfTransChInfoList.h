/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_UL_AddReconfTransChInfoList_H_
#define	_UL_AddReconfTransChInfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UL_AddReconfTransChInformation;

/* UL-AddReconfTransChInfoList */
typedef struct UL_AddReconfTransChInfoList {
	A_SEQUENCE_OF(struct UL_AddReconfTransChInformation) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_AddReconfTransChInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_AddReconfTransChInfoList;
extern asn_SET_OF_specifics_t asn_SPC_UL_AddReconfTransChInfoList_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_AddReconfTransChInfoList_1[1];
extern asn_per_constraints_t asn_PER_type_UL_AddReconfTransChInfoList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UL-AddReconfTransChInformation.h"

#endif	/* _UL_AddReconfTransChInfoList_H_ */
#include <asn_internal.h>
