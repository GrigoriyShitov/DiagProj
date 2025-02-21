/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_Treset_ResetTimer_H_
#define	_Treset_ResetTimer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Treset_ResetTimer {
	Treset_ResetTimer_rt1	= 0,
	Treset_ResetTimer_rt2	= 1,
	Treset_ResetTimer_rt3	= 2,
	Treset_ResetTimer_rt4	= 3
} e_Treset_ResetTimer;

/* Treset-ResetTimer */
typedef long	 Treset_ResetTimer_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Treset_ResetTimer_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Treset_ResetTimer;
extern const asn_INTEGER_specifics_t asn_SPC_Treset_ResetTimer_specs_1;
asn_struct_free_f Treset_ResetTimer_free;
asn_struct_print_f Treset_ResetTimer_print;
asn_constr_check_f Treset_ResetTimer_constraint;
ber_type_decoder_f Treset_ResetTimer_decode_ber;
der_type_encoder_f Treset_ResetTimer_encode_der;
xer_type_decoder_f Treset_ResetTimer_decode_xer;
xer_type_encoder_f Treset_ResetTimer_encode_xer;
oer_type_decoder_f Treset_ResetTimer_decode_oer;
oer_type_encoder_f Treset_ResetTimer_encode_oer;
per_type_decoder_f Treset_ResetTimer_decode_uper;
per_type_encoder_f Treset_ResetTimer_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Treset_ResetTimer_H_ */
#include <asn_internal.h>
