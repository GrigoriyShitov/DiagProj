/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_NS_PmaxValue_v10l0_H_
#define	_NS_PmaxValue_v10l0_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AdditionalSpectrumEmission-v10l0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NS-PmaxValue-v10l0 */
typedef struct NS_PmaxValue_v10l0 {
	AdditionalSpectrumEmission_v10l0_t	*additionalSpectrumEmission_v10l0	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NS_PmaxValue_v10l0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NS_PmaxValue_v10l0;
extern asn_SEQUENCE_specifics_t asn_SPC_NS_PmaxValue_v10l0_specs_1;
extern asn_TYPE_member_t asn_MBR_NS_PmaxValue_v10l0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NS_PmaxValue_v10l0_H_ */
#include <asn_internal.h>
