/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_Frequency_Band_H_
#define	_Frequency_Band_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Frequency_Band {
	Frequency_Band_dcs1800BandUsed	= 0,
	Frequency_Band_pcs1900BandUsed	= 1
} e_Frequency_Band;

/* Frequency-Band */
typedef long	 Frequency_Band_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Frequency_Band_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Frequency_Band;
extern const asn_INTEGER_specifics_t asn_SPC_Frequency_Band_specs_1;
asn_struct_free_f Frequency_Band_free;
asn_struct_print_f Frequency_Band_print;
asn_constr_check_f Frequency_Band_constraint;
ber_type_decoder_f Frequency_Band_decode_ber;
der_type_encoder_f Frequency_Band_encode_der;
xer_type_decoder_f Frequency_Band_decode_xer;
xer_type_encoder_f Frequency_Band_encode_xer;
oer_type_decoder_f Frequency_Band_decode_oer;
oer_type_encoder_f Frequency_Band_encode_oer;
per_type_decoder_f Frequency_Band_decode_uper;
per_type_encoder_f Frequency_Band_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Frequency_Band_H_ */
#include <asn_internal.h>
