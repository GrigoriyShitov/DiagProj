/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CA_MIMO_ParametersUL_r15_H_
#define	_CA_MIMO_ParametersUL_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MIMO-CapabilityUL-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CA-MIMO-ParametersUL-r15 */
typedef struct CA_MIMO_ParametersUL_r15 {
	MIMO_CapabilityUL_r10_t	*supportedMIMO_CapabilityUL_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CA_MIMO_ParametersUL_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CA_MIMO_ParametersUL_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_CA_MIMO_ParametersUL_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_CA_MIMO_ParametersUL_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CA_MIMO_ParametersUL_r15_H_ */
#include <asn_internal.h>
