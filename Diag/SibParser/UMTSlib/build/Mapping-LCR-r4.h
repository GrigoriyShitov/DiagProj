/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_Mapping_LCR_r4_H_
#define	_Mapping_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MappingFunctionParameterList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Mapping-LCR-r4 */
typedef struct Mapping_LCR_r4 {
	MappingFunctionParameterList_t	 mappingFunctionParameterList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Mapping_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Mapping_LCR_r4;
extern asn_SEQUENCE_specifics_t asn_SPC_Mapping_LCR_r4_specs_1;
extern asn_TYPE_member_t asn_MBR_Mapping_LCR_r4_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _Mapping_LCR_r4_H_ */
#include <asn_internal.h>
