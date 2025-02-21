/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_Feedback_cycle_r7_H_
#define	_Feedback_cycle_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Feedback_cycle_r7 {
	Feedback_cycle_r7_fc0	= 0,
	Feedback_cycle_r7_fc2	= 1,
	Feedback_cycle_r7_fc4	= 2,
	Feedback_cycle_r7_fc8	= 3,
	Feedback_cycle_r7_fc10	= 4,
	Feedback_cycle_r7_fc20	= 5,
	Feedback_cycle_r7_fc40	= 6,
	Feedback_cycle_r7_fc80	= 7,
	Feedback_cycle_r7_fc160	= 8,
	Feedback_cycle_r7_fc16	= 9,
	Feedback_cycle_r7_fc32	= 10,
	Feedback_cycle_r7_fc64	= 11,
	Feedback_cycle_r7_spare4	= 12,
	Feedback_cycle_r7_spare3	= 13,
	Feedback_cycle_r7_spare2	= 14,
	Feedback_cycle_r7_spare1	= 15
} e_Feedback_cycle_r7;

/* Feedback-cycle-r7 */
typedef long	 Feedback_cycle_r7_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Feedback_cycle_r7_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Feedback_cycle_r7;
extern const asn_INTEGER_specifics_t asn_SPC_Feedback_cycle_r7_specs_1;
asn_struct_free_f Feedback_cycle_r7_free;
asn_struct_print_f Feedback_cycle_r7_print;
asn_constr_check_f Feedback_cycle_r7_constraint;
ber_type_decoder_f Feedback_cycle_r7_decode_ber;
der_type_encoder_f Feedback_cycle_r7_encode_der;
xer_type_decoder_f Feedback_cycle_r7_decode_xer;
xer_type_encoder_f Feedback_cycle_r7_encode_xer;
oer_type_decoder_f Feedback_cycle_r7_decode_oer;
oer_type_encoder_f Feedback_cycle_r7_encode_oer;
per_type_decoder_f Feedback_cycle_r7_decode_uper;
per_type_encoder_f Feedback_cycle_r7_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Feedback_cycle_r7_H_ */
#include <asn_internal.h>
