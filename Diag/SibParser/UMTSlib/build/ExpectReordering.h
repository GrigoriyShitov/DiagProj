/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_ExpectReordering_H_
#define	_ExpectReordering_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ExpectReordering {
	ExpectReordering_reorderingNotExpected	= 0,
	ExpectReordering_reorderingExpected	= 1
} e_ExpectReordering;

/* ExpectReordering */
typedef long	 ExpectReordering_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ExpectReordering_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ExpectReordering;
extern const asn_INTEGER_specifics_t asn_SPC_ExpectReordering_specs_1;
asn_struct_free_f ExpectReordering_free;
asn_struct_print_f ExpectReordering_print;
asn_constr_check_f ExpectReordering_constraint;
ber_type_decoder_f ExpectReordering_decode_ber;
der_type_encoder_f ExpectReordering_encode_der;
xer_type_decoder_f ExpectReordering_decode_xer;
xer_type_encoder_f ExpectReordering_encode_xer;
oer_type_decoder_f ExpectReordering_decode_oer;
oer_type_encoder_f ExpectReordering_encode_oer;
per_type_decoder_f ExpectReordering_decode_uper;
per_type_encoder_f ExpectReordering_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ExpectReordering_H_ */
#include <asn_internal.h>
