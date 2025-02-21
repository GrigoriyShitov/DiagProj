/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_EAB_ConfigPLMN_r11_H_
#define	_EAB_ConfigPLMN_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EAB_Config_r11;

/* EAB-ConfigPLMN-r11 */
typedef struct EAB_ConfigPLMN_r11 {
	struct EAB_Config_r11	*eab_Config_r11	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EAB_ConfigPLMN_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EAB_ConfigPLMN_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_EAB_ConfigPLMN_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_EAB_ConfigPLMN_r11_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EAB-Config-r11.h"

#endif	/* _EAB_ConfigPLMN_r11_H_ */
#include <asn_internal.h>
