/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SupportOfDedicatedPilotsForChEstimation_H_
#define	_SupportOfDedicatedPilotsForChEstimation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SupportOfDedicatedPilotsForChEstimation {
	SupportOfDedicatedPilotsForChEstimation_true	= 0
} e_SupportOfDedicatedPilotsForChEstimation;

/* SupportOfDedicatedPilotsForChEstimation */
typedef long	 SupportOfDedicatedPilotsForChEstimation_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SupportOfDedicatedPilotsForChEstimation_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SupportOfDedicatedPilotsForChEstimation;
extern const asn_INTEGER_specifics_t asn_SPC_SupportOfDedicatedPilotsForChEstimation_specs_1;
asn_struct_free_f SupportOfDedicatedPilotsForChEstimation_free;
asn_struct_print_f SupportOfDedicatedPilotsForChEstimation_print;
asn_constr_check_f SupportOfDedicatedPilotsForChEstimation_constraint;
ber_type_decoder_f SupportOfDedicatedPilotsForChEstimation_decode_ber;
der_type_encoder_f SupportOfDedicatedPilotsForChEstimation_encode_der;
xer_type_decoder_f SupportOfDedicatedPilotsForChEstimation_decode_xer;
xer_type_encoder_f SupportOfDedicatedPilotsForChEstimation_encode_xer;
oer_type_decoder_f SupportOfDedicatedPilotsForChEstimation_decode_oer;
oer_type_encoder_f SupportOfDedicatedPilotsForChEstimation_encode_oer;
per_type_decoder_f SupportOfDedicatedPilotsForChEstimation_decode_uper;
per_type_encoder_f SupportOfDedicatedPilotsForChEstimation_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SupportOfDedicatedPilotsForChEstimation_H_ */
#include <asn_internal.h>
