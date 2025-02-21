/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_StateOfRRC_H_
#define	_StateOfRRC_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum StateOfRRC {
	StateOfRRC_cell_DCH	= 0,
	StateOfRRC_cell_FACH	= 1,
	StateOfRRC_cell_PCH	= 2,
	StateOfRRC_ura_PCH	= 3
} e_StateOfRRC;

/* StateOfRRC */
typedef long	 StateOfRRC_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_StateOfRRC_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_StateOfRRC;
extern const asn_INTEGER_specifics_t asn_SPC_StateOfRRC_specs_1;
asn_struct_free_f StateOfRRC_free;
asn_struct_print_f StateOfRRC_print;
asn_constr_check_f StateOfRRC_constraint;
ber_type_decoder_f StateOfRRC_decode_ber;
der_type_encoder_f StateOfRRC_encode_der;
xer_type_decoder_f StateOfRRC_decode_xer;
xer_type_encoder_f StateOfRRC_encode_xer;
oer_type_decoder_f StateOfRRC_decode_oer;
oer_type_encoder_f StateOfRRC_encode_oer;
per_type_decoder_f StateOfRRC_decode_uper;
per_type_encoder_f StateOfRRC_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _StateOfRRC_H_ */
#include <asn_internal.h>
