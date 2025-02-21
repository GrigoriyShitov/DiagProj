/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PollByte_H_
#define	_PollByte_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PollByte {
	PollByte_kB25	= 0,
	PollByte_kB50	= 1,
	PollByte_kB75	= 2,
	PollByte_kB100	= 3,
	PollByte_kB125	= 4,
	PollByte_kB250	= 5,
	PollByte_kB375	= 6,
	PollByte_kB500	= 7,
	PollByte_kB750	= 8,
	PollByte_kB1000	= 9,
	PollByte_kB1250	= 10,
	PollByte_kB1500	= 11,
	PollByte_kB2000	= 12,
	PollByte_kB3000	= 13,
	PollByte_kBinfinity	= 14,
	PollByte_spare1	= 15
} e_PollByte;

/* PollByte */
typedef long	 PollByte_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PollByte_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PollByte;
extern const asn_INTEGER_specifics_t asn_SPC_PollByte_specs_1;
asn_struct_free_f PollByte_free;
asn_struct_print_f PollByte_print;
asn_constr_check_f PollByte_constraint;
ber_type_decoder_f PollByte_decode_ber;
der_type_encoder_f PollByte_encode_der;
xer_type_decoder_f PollByte_decode_xer;
xer_type_encoder_f PollByte_encode_xer;
oer_type_decoder_f PollByte_decode_oer;
oer_type_encoder_f PollByte_encode_oer;
per_type_decoder_f PollByte_decode_uper;
per_type_encoder_f PollByte_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PollByte_H_ */
#include <asn_internal.h>
