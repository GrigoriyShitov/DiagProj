/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_WLAN_Name_r15_H_
#define	_WLAN_Name_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* WLAN-Name-r15 */
typedef OCTET_STRING_t	 WLAN_Name_r15_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_WLAN_Name_r15_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_WLAN_Name_r15;
asn_struct_free_f WLAN_Name_r15_free;
asn_struct_print_f WLAN_Name_r15_print;
asn_constr_check_f WLAN_Name_r15_constraint;
ber_type_decoder_f WLAN_Name_r15_decode_ber;
der_type_encoder_f WLAN_Name_r15_encode_der;
xer_type_decoder_f WLAN_Name_r15_decode_xer;
xer_type_encoder_f WLAN_Name_r15_encode_xer;
oer_type_decoder_f WLAN_Name_r15_decode_oer;
oer_type_encoder_f WLAN_Name_r15_encode_oer;
per_type_decoder_f WLAN_Name_r15_decode_uper;
per_type_encoder_f WLAN_Name_r15_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _WLAN_Name_r15_H_ */
#include <asn_internal.h>
