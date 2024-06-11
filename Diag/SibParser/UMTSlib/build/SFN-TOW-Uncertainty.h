/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SFN_TOW_Uncertainty_H_
#define	_SFN_TOW_Uncertainty_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SFN_TOW_Uncertainty {
	SFN_TOW_Uncertainty_lessThan10	= 0,
	SFN_TOW_Uncertainty_moreThan10	= 1
} e_SFN_TOW_Uncertainty;

/* SFN-TOW-Uncertainty */
typedef long	 SFN_TOW_Uncertainty_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SFN_TOW_Uncertainty_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SFN_TOW_Uncertainty;
extern const asn_INTEGER_specifics_t asn_SPC_SFN_TOW_Uncertainty_specs_1;
asn_struct_free_f SFN_TOW_Uncertainty_free;
asn_struct_print_f SFN_TOW_Uncertainty_print;
asn_constr_check_f SFN_TOW_Uncertainty_constraint;
ber_type_decoder_f SFN_TOW_Uncertainty_decode_ber;
der_type_encoder_f SFN_TOW_Uncertainty_encode_der;
xer_type_decoder_f SFN_TOW_Uncertainty_decode_xer;
xer_type_encoder_f SFN_TOW_Uncertainty_encode_xer;
oer_type_decoder_f SFN_TOW_Uncertainty_decode_oer;
oer_type_encoder_f SFN_TOW_Uncertainty_encode_oer;
per_type_decoder_f SFN_TOW_Uncertainty_decode_uper;
per_type_encoder_f SFN_TOW_Uncertainty_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SFN_TOW_Uncertainty_H_ */
#include <asn_internal.h>
