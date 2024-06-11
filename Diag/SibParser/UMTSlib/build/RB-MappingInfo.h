/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_RB_MappingInfo_H_
#define	_RB_MappingInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RB_MappingOption;

/* RB-MappingInfo */
typedef struct RB_MappingInfo {
	A_SEQUENCE_OF(struct RB_MappingOption) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RB_MappingInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RB_MappingInfo;
extern asn_SET_OF_specifics_t asn_SPC_RB_MappingInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_RB_MappingInfo_1[1];
extern asn_per_constraints_t asn_PER_type_RB_MappingInfo_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RB-MappingOption.h"

#endif	/* _RB_MappingInfo_H_ */
#include <asn_internal.h>
