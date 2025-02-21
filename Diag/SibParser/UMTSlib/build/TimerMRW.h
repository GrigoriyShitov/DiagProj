/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_TimerMRW_H_
#define	_TimerMRW_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TimerMRW {
	TimerMRW_te50	= 0,
	TimerMRW_te60	= 1,
	TimerMRW_te70	= 2,
	TimerMRW_te80	= 3,
	TimerMRW_te90	= 4,
	TimerMRW_te100	= 5,
	TimerMRW_te120	= 6,
	TimerMRW_te140	= 7,
	TimerMRW_te160	= 8,
	TimerMRW_te180	= 9,
	TimerMRW_te200	= 10,
	TimerMRW_te300	= 11,
	TimerMRW_te400	= 12,
	TimerMRW_te500	= 13,
	TimerMRW_te700	= 14,
	TimerMRW_te900	= 15
} e_TimerMRW;

/* TimerMRW */
typedef long	 TimerMRW_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TimerMRW_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TimerMRW;
extern const asn_INTEGER_specifics_t asn_SPC_TimerMRW_specs_1;
asn_struct_free_f TimerMRW_free;
asn_struct_print_f TimerMRW_print;
asn_constr_check_f TimerMRW_constraint;
ber_type_decoder_f TimerMRW_decode_ber;
der_type_encoder_f TimerMRW_encode_der;
xer_type_decoder_f TimerMRW_decode_xer;
xer_type_encoder_f TimerMRW_encode_xer;
oer_type_decoder_f TimerMRW_decode_oer;
oer_type_encoder_f TimerMRW_encode_oer;
per_type_decoder_f TimerMRW_decode_uper;
per_type_encoder_f TimerMRW_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimerMRW_H_ */
#include <asn_internal.h>
