/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_AvailableSubChannelNumbers_H_
#define	_AvailableSubChannelNumbers_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AvailableSubChannelNumbers {
	AvailableSubChannelNumbers_subCh11	= 0,
	AvailableSubChannelNumbers_subCh10	= 1,
	AvailableSubChannelNumbers_subCh9	= 2,
	AvailableSubChannelNumbers_subCh8	= 3,
	AvailableSubChannelNumbers_subCh7	= 4,
	AvailableSubChannelNumbers_subCh6	= 5,
	AvailableSubChannelNumbers_subCh5	= 6,
	AvailableSubChannelNumbers_subCh4	= 7,
	AvailableSubChannelNumbers_subCh3	= 8,
	AvailableSubChannelNumbers_subCh2	= 9,
	AvailableSubChannelNumbers_subCh1	= 10,
	AvailableSubChannelNumbers_subCh0	= 11
} e_AvailableSubChannelNumbers;

/* AvailableSubChannelNumbers */
typedef BIT_STRING_t	 AvailableSubChannelNumbers_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AvailableSubChannelNumbers_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AvailableSubChannelNumbers;
asn_struct_free_f AvailableSubChannelNumbers_free;
asn_struct_print_f AvailableSubChannelNumbers_print;
asn_constr_check_f AvailableSubChannelNumbers_constraint;
ber_type_decoder_f AvailableSubChannelNumbers_decode_ber;
der_type_encoder_f AvailableSubChannelNumbers_encode_der;
xer_type_decoder_f AvailableSubChannelNumbers_decode_xer;
xer_type_encoder_f AvailableSubChannelNumbers_encode_xer;
oer_type_decoder_f AvailableSubChannelNumbers_decode_oer;
oer_type_encoder_f AvailableSubChannelNumbers_encode_oer;
per_type_decoder_f AvailableSubChannelNumbers_decode_uper;
per_type_encoder_f AvailableSubChannelNumbers_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _AvailableSubChannelNumbers_H_ */
#include <asn_internal.h>
