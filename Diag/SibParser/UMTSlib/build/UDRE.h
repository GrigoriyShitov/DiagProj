/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UDRE_H_
#define	_UDRE_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UDRE {
	UDRE_lessThan1	= 0,
	UDRE_between1_and_4	= 1,
	UDRE_between4_and_8	= 2,
	UDRE_over8	= 3
} e_UDRE;

/* UDRE */
typedef long	 UDRE_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_UDRE_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_UDRE;
extern const asn_INTEGER_specifics_t asn_SPC_UDRE_specs_1;
asn_struct_free_f UDRE_free;
asn_struct_print_f UDRE_print;
asn_constr_check_f UDRE_constraint;
ber_type_decoder_f UDRE_decode_ber;
der_type_encoder_f UDRE_encode_der;
xer_type_decoder_f UDRE_decode_xer;
xer_type_encoder_f UDRE_encode_xer;
oer_type_decoder_f UDRE_decode_oer;
oer_type_encoder_f UDRE_encode_oer;
per_type_decoder_f UDRE_decode_uper;
per_type_encoder_f UDRE_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UDRE_H_ */
#include <asn_internal.h>
