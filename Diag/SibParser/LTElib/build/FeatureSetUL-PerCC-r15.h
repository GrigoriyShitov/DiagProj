/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_FeatureSetUL_PerCC_r15_H_
#define	_FeatureSetUL_PerCC_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MIMO-CapabilityUL-r10.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FeatureSetUL_PerCC_r15__ul_256QAM_r15 {
	FeatureSetUL_PerCC_r15__ul_256QAM_r15_supported	= 0
} e_FeatureSetUL_PerCC_r15__ul_256QAM_r15;

/* FeatureSetUL-PerCC-r15 */
typedef struct FeatureSetUL_PerCC_r15 {
	MIMO_CapabilityUL_r10_t	*supportedMIMO_CapabilityUL_r15	/* OPTIONAL */;
	long	*ul_256QAM_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FeatureSetUL_PerCC_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_256QAM_r15_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FeatureSetUL_PerCC_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_FeatureSetUL_PerCC_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_FeatureSetUL_PerCC_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _FeatureSetUL_PerCC_r15_H_ */
#include <asn_internal.h>
