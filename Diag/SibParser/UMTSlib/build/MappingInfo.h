/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_MappingInfo_H_
#define	_MappingInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Mapping;

/* MappingInfo */
typedef struct MappingInfo {
	A_SEQUENCE_OF(struct Mapping) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MappingInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MappingInfo;
extern asn_SET_OF_specifics_t asn_SPC_MappingInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_MappingInfo_1[1];
extern asn_per_constraints_t asn_PER_type_MappingInfo_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Mapping.h"

#endif	/* _MappingInfo_H_ */
#include <asn_internal.h>
