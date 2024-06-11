/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_TimeToTrigger_H_
#define	_TimeToTrigger_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TimeToTrigger {
	TimeToTrigger_ttt0	= 0,
	TimeToTrigger_ttt10	= 1,
	TimeToTrigger_ttt20	= 2,
	TimeToTrigger_ttt40	= 3,
	TimeToTrigger_ttt60	= 4,
	TimeToTrigger_ttt80	= 5,
	TimeToTrigger_ttt100	= 6,
	TimeToTrigger_ttt120	= 7,
	TimeToTrigger_ttt160	= 8,
	TimeToTrigger_ttt200	= 9,
	TimeToTrigger_ttt240	= 10,
	TimeToTrigger_tt320	= 11,
	TimeToTrigger_ttt640	= 12,
	TimeToTrigger_ttt1280	= 13,
	TimeToTrigger_ttt2560	= 14,
	TimeToTrigger_ttt5000	= 15
} e_TimeToTrigger;

/* TimeToTrigger */
typedef long	 TimeToTrigger_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TimeToTrigger_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TimeToTrigger;
extern const asn_INTEGER_specifics_t asn_SPC_TimeToTrigger_specs_1;
asn_struct_free_f TimeToTrigger_free;
asn_struct_print_f TimeToTrigger_print;
asn_constr_check_f TimeToTrigger_constraint;
ber_type_decoder_f TimeToTrigger_decode_ber;
der_type_encoder_f TimeToTrigger_encode_der;
xer_type_decoder_f TimeToTrigger_decode_xer;
xer_type_encoder_f TimeToTrigger_encode_xer;
oer_type_decoder_f TimeToTrigger_decode_oer;
oer_type_encoder_f TimeToTrigger_encode_oer;
per_type_decoder_f TimeToTrigger_decode_uper;
per_type_encoder_f TimeToTrigger_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimeToTrigger_H_ */
#include <asn_internal.h>
