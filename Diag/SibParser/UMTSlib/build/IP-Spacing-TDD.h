/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_IP_Spacing_TDD_H_
#define	_IP_Spacing_TDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IP_Spacing_TDD {
	IP_Spacing_TDD_e30	= 0,
	IP_Spacing_TDD_e40	= 1,
	IP_Spacing_TDD_e50	= 2,
	IP_Spacing_TDD_e70	= 3,
	IP_Spacing_TDD_e100	= 4
} e_IP_Spacing_TDD;

/* IP-Spacing-TDD */
typedef long	 IP_Spacing_TDD_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_IP_Spacing_TDD_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_IP_Spacing_TDD;
extern const asn_INTEGER_specifics_t asn_SPC_IP_Spacing_TDD_specs_1;
asn_struct_free_f IP_Spacing_TDD_free;
asn_struct_print_f IP_Spacing_TDD_print;
asn_constr_check_f IP_Spacing_TDD_constraint;
ber_type_decoder_f IP_Spacing_TDD_decode_ber;
der_type_encoder_f IP_Spacing_TDD_encode_der;
xer_type_decoder_f IP_Spacing_TDD_decode_xer;
xer_type_encoder_f IP_Spacing_TDD_encode_xer;
oer_type_decoder_f IP_Spacing_TDD_decode_oer;
oer_type_encoder_f IP_Spacing_TDD_encode_oer;
per_type_decoder_f IP_Spacing_TDD_decode_uper;
per_type_encoder_f IP_Spacing_TDD_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _IP_Spacing_TDD_H_ */
#include <asn_internal.h>
