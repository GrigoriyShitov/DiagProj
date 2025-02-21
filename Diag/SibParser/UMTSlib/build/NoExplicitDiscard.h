/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_NoExplicitDiscard_H_
#define	_NoExplicitDiscard_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NoExplicitDiscard {
	NoExplicitDiscard_dt10	= 0,
	NoExplicitDiscard_dt20	= 1,
	NoExplicitDiscard_dt30	= 2,
	NoExplicitDiscard_dt40	= 3,
	NoExplicitDiscard_dt50	= 4,
	NoExplicitDiscard_dt60	= 5,
	NoExplicitDiscard_dt70	= 6,
	NoExplicitDiscard_dt80	= 7,
	NoExplicitDiscard_dt90	= 8,
	NoExplicitDiscard_dt100	= 9
} e_NoExplicitDiscard;

/* NoExplicitDiscard */
typedef long	 NoExplicitDiscard_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NoExplicitDiscard_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NoExplicitDiscard;
extern const asn_INTEGER_specifics_t asn_SPC_NoExplicitDiscard_specs_1;
asn_struct_free_f NoExplicitDiscard_free;
asn_struct_print_f NoExplicitDiscard_print;
asn_constr_check_f NoExplicitDiscard_constraint;
ber_type_decoder_f NoExplicitDiscard_decode_ber;
der_type_encoder_f NoExplicitDiscard_encode_der;
xer_type_decoder_f NoExplicitDiscard_decode_xer;
xer_type_encoder_f NoExplicitDiscard_encode_xer;
oer_type_decoder_f NoExplicitDiscard_decode_oer;
oer_type_encoder_f NoExplicitDiscard_encode_oer;
per_type_decoder_f NoExplicitDiscard_decode_uper;
per_type_encoder_f NoExplicitDiscard_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _NoExplicitDiscard_H_ */
#include <asn_internal.h>
