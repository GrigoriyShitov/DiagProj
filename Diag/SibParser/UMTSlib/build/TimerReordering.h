/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_TimerReordering_H_
#define	_TimerReordering_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TimerReordering {
	TimerReordering_tr50	= 0,
	TimerReordering_tr100	= 1,
	TimerReordering_tr150	= 2,
	TimerReordering_tr200	= 3,
	TimerReordering_tr400	= 4,
	TimerReordering_tr600	= 5,
	TimerReordering_tr800	= 6,
	TimerReordering_tr1000	= 7
} e_TimerReordering;

/* TimerReordering */
typedef long	 TimerReordering_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TimerReordering_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TimerReordering;
extern const asn_INTEGER_specifics_t asn_SPC_TimerReordering_specs_1;
asn_struct_free_f TimerReordering_free;
asn_struct_print_f TimerReordering_print;
asn_constr_check_f TimerReordering_constraint;
ber_type_decoder_f TimerReordering_decode_ber;
der_type_encoder_f TimerReordering_encode_der;
xer_type_decoder_f TimerReordering_decode_xer;
xer_type_encoder_f TimerReordering_encode_xer;
oer_type_decoder_f TimerReordering_decode_oer;
oer_type_encoder_f TimerReordering_encode_oer;
per_type_decoder_f TimerReordering_decode_uper;
per_type_encoder_f TimerReordering_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimerReordering_H_ */
#include <asn_internal.h>
