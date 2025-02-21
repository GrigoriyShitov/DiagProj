/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PollByte_r14_H_
#define	_PollByte_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PollByte_r14 {
	PollByte_r14_kB1	= 0,
	PollByte_r14_kB2	= 1,
	PollByte_r14_kB5	= 2,
	PollByte_r14_kB8	= 3,
	PollByte_r14_kB10	= 4,
	PollByte_r14_kB15	= 5,
	PollByte_r14_kB3500	= 6,
	PollByte_r14_kB4000	= 7,
	PollByte_r14_kB4500	= 8,
	PollByte_r14_kB5000	= 9,
	PollByte_r14_kB5500	= 10,
	PollByte_r14_kB6000	= 11,
	PollByte_r14_kB6500	= 12,
	PollByte_r14_kB7000	= 13,
	PollByte_r14_kB7500	= 14,
	PollByte_r14_kB8000	= 15,
	PollByte_r14_kB9000	= 16,
	PollByte_r14_kB10000	= 17,
	PollByte_r14_kB11000	= 18,
	PollByte_r14_kB12000	= 19,
	PollByte_r14_kB13000	= 20,
	PollByte_r14_kB14000	= 21,
	PollByte_r14_kB15000	= 22,
	PollByte_r14_kB16000	= 23,
	PollByte_r14_kB17000	= 24,
	PollByte_r14_kB18000	= 25,
	PollByte_r14_kB19000	= 26,
	PollByte_r14_kB20000	= 27,
	PollByte_r14_kB25000	= 28,
	PollByte_r14_kB30000	= 29,
	PollByte_r14_kB35000	= 30,
	PollByte_r14_kB40000	= 31
} e_PollByte_r14;

/* PollByte-r14 */
typedef long	 PollByte_r14_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PollByte_r14_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PollByte_r14;
extern const asn_INTEGER_specifics_t asn_SPC_PollByte_r14_specs_1;
asn_struct_free_f PollByte_r14_free;
asn_struct_print_f PollByte_r14_print;
asn_constr_check_f PollByte_r14_constraint;
ber_type_decoder_f PollByte_r14_decode_ber;
der_type_encoder_f PollByte_r14_encode_der;
xer_type_decoder_f PollByte_r14_decode_xer;
xer_type_encoder_f PollByte_r14_encode_xer;
oer_type_decoder_f PollByte_r14_decode_oer;
oer_type_encoder_f PollByte_r14_encode_oer;
per_type_decoder_f PollByte_r14_decode_uper;
per_type_encoder_f PollByte_r14_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PollByte_r14_H_ */
#include <asn_internal.h>
