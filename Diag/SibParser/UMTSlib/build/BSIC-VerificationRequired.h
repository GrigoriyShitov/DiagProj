/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_BSIC_VerificationRequired_H_
#define	_BSIC_VerificationRequired_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BSIC_VerificationRequired {
	BSIC_VerificationRequired_required	= 0,
	BSIC_VerificationRequired_notRequired	= 1
} e_BSIC_VerificationRequired;

/* BSIC-VerificationRequired */
typedef long	 BSIC_VerificationRequired_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_BSIC_VerificationRequired_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_BSIC_VerificationRequired;
extern const asn_INTEGER_specifics_t asn_SPC_BSIC_VerificationRequired_specs_1;
asn_struct_free_f BSIC_VerificationRequired_free;
asn_struct_print_f BSIC_VerificationRequired_print;
asn_constr_check_f BSIC_VerificationRequired_constraint;
ber_type_decoder_f BSIC_VerificationRequired_decode_ber;
der_type_encoder_f BSIC_VerificationRequired_encode_der;
xer_type_decoder_f BSIC_VerificationRequired_decode_xer;
xer_type_encoder_f BSIC_VerificationRequired_encode_xer;
oer_type_decoder_f BSIC_VerificationRequired_decode_oer;
oer_type_encoder_f BSIC_VerificationRequired_encode_oer;
per_type_decoder_f BSIC_VerificationRequired_decode_uper;
per_type_encoder_f BSIC_VerificationRequired_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _BSIC_VerificationRequired_H_ */
#include <asn_internal.h>
