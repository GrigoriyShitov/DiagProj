/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MIMO_CA_ParametersPerBoBC_v1470_H_
#define	_MIMO_CA_ParametersPerBoBC_v1470_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MIMO-CA-ParametersPerBoBCPerTM-v1470.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MIMO-CA-ParametersPerBoBC-v1470 */
typedef struct MIMO_CA_ParametersPerBoBC_v1470 {
	MIMO_CA_ParametersPerBoBCPerTM_v1470_t	 parametersTM9_v1470;
	MIMO_CA_ParametersPerBoBCPerTM_v1470_t	 parametersTM10_v1470;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MIMO_CA_ParametersPerBoBC_v1470_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MIMO_CA_ParametersPerBoBC_v1470;
extern asn_SEQUENCE_specifics_t asn_SPC_MIMO_CA_ParametersPerBoBC_v1470_specs_1;
extern asn_TYPE_member_t asn_MBR_MIMO_CA_ParametersPerBoBC_v1470_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MIMO_CA_ParametersPerBoBC_v1470_H_ */
#include <asn_internal.h>
