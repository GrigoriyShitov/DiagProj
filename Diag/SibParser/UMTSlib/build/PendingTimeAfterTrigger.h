/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PendingTimeAfterTrigger_H_
#define	_PendingTimeAfterTrigger_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PendingTimeAfterTrigger {
	PendingTimeAfterTrigger_ptat0_25	= 0,
	PendingTimeAfterTrigger_ptat0_5	= 1,
	PendingTimeAfterTrigger_ptat1	= 2,
	PendingTimeAfterTrigger_ptat2	= 3,
	PendingTimeAfterTrigger_ptat4	= 4,
	PendingTimeAfterTrigger_ptat8	= 5,
	PendingTimeAfterTrigger_ptat16	= 6
} e_PendingTimeAfterTrigger;

/* PendingTimeAfterTrigger */
typedef long	 PendingTimeAfterTrigger_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PendingTimeAfterTrigger_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PendingTimeAfterTrigger;
extern const asn_INTEGER_specifics_t asn_SPC_PendingTimeAfterTrigger_specs_1;
asn_struct_free_f PendingTimeAfterTrigger_free;
asn_struct_print_f PendingTimeAfterTrigger_print;
asn_constr_check_f PendingTimeAfterTrigger_constraint;
ber_type_decoder_f PendingTimeAfterTrigger_decode_ber;
der_type_encoder_f PendingTimeAfterTrigger_encode_der;
xer_type_decoder_f PendingTimeAfterTrigger_decode_xer;
xer_type_encoder_f PendingTimeAfterTrigger_encode_xer;
oer_type_decoder_f PendingTimeAfterTrigger_decode_oer;
oer_type_encoder_f PendingTimeAfterTrigger_encode_oer;
per_type_decoder_f PendingTimeAfterTrigger_decode_uper;
per_type_encoder_f PendingTimeAfterTrigger_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PendingTimeAfterTrigger_H_ */
#include <asn_internal.h>
