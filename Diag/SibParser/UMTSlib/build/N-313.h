/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_N_313_H_
#define	_N_313_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum N_313 {
	N_313_s1	= 0,
	N_313_s2	= 1,
	N_313_s4	= 2,
	N_313_s10	= 3,
	N_313_s20	= 4,
	N_313_s50	= 5,
	N_313_s100	= 6,
	N_313_s200	= 7
} e_N_313;

/* N-313 */
typedef long	 N_313_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_N_313_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_N_313;
extern const asn_INTEGER_specifics_t asn_SPC_N_313_specs_1;
asn_struct_free_f N_313_free;
asn_struct_print_f N_313_print;
asn_constr_check_f N_313_constraint;
ber_type_decoder_f N_313_decode_ber;
der_type_encoder_f N_313_encode_der;
xer_type_decoder_f N_313_decode_xer;
xer_type_encoder_f N_313_encode_xer;
oer_type_decoder_f N_313_decode_oer;
oer_type_encoder_f N_313_encode_oer;
per_type_decoder_f N_313_decode_uper;
per_type_encoder_f N_313_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _N_313_H_ */
#include <asn_internal.h>
