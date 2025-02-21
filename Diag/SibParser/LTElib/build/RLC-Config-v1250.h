/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RLC_Config_v1250_H_
#define	_RLC_Config_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RLC-Config-v1250 */
typedef struct RLC_Config_v1250 {
	BOOLEAN_t	 ul_extended_RLC_LI_Field_r12;
	BOOLEAN_t	 dl_extended_RLC_LI_Field_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Config_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Config_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_RLC_Config_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_RLC_Config_v1250_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_Config_v1250_H_ */
#include <asn_internal.h>
