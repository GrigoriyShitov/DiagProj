/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_DynamicTFInformationCCCH_H_
#define	_DynamicTFInformationCCCH_H_


#include <asn_application.h>

/* Including external dependencies */
#include "OctetModeRLC-SizeInfoType2.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DynamicTFInformationCCCH */
typedef struct DynamicTFInformationCCCH {
	OctetModeRLC_SizeInfoType2_t	 octetModeRLC_SizeInfoType2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DynamicTFInformationCCCH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DynamicTFInformationCCCH;
extern asn_SEQUENCE_specifics_t asn_SPC_DynamicTFInformationCCCH_specs_1;
extern asn_TYPE_member_t asn_MBR_DynamicTFInformationCCCH_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _DynamicTFInformationCCCH_H_ */
#include <asn_internal.h>
