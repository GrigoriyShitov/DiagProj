/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_ReplacementActivationThreshold_H_
#define	_ReplacementActivationThreshold_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReplacementActivationThreshold {
	ReplacementActivationThreshold_notApplicable	= 0,
	ReplacementActivationThreshold_t1	= 1,
	ReplacementActivationThreshold_t2	= 2,
	ReplacementActivationThreshold_t3	= 3,
	ReplacementActivationThreshold_t4	= 4,
	ReplacementActivationThreshold_t5	= 5,
	ReplacementActivationThreshold_t6	= 6,
	ReplacementActivationThreshold_t7	= 7
} e_ReplacementActivationThreshold;

/* ReplacementActivationThreshold */
typedef long	 ReplacementActivationThreshold_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ReplacementActivationThreshold_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ReplacementActivationThreshold;
extern const asn_INTEGER_specifics_t asn_SPC_ReplacementActivationThreshold_specs_1;
asn_struct_free_f ReplacementActivationThreshold_free;
asn_struct_print_f ReplacementActivationThreshold_print;
asn_constr_check_f ReplacementActivationThreshold_constraint;
ber_type_decoder_f ReplacementActivationThreshold_decode_ber;
der_type_encoder_f ReplacementActivationThreshold_encode_der;
xer_type_decoder_f ReplacementActivationThreshold_decode_xer;
xer_type_encoder_f ReplacementActivationThreshold_encode_xer;
oer_type_decoder_f ReplacementActivationThreshold_decode_oer;
oer_type_encoder_f ReplacementActivationThreshold_encode_oer;
per_type_decoder_f ReplacementActivationThreshold_decode_uper;
per_type_encoder_f ReplacementActivationThreshold_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ReplacementActivationThreshold_H_ */
#include <asn_internal.h>
