/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_MidambleConfigurationBurstType2_VHCR_H_
#define	_MidambleConfigurationBurstType2_VHCR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MidambleConfigurationBurstType2_VHCR {
	MidambleConfigurationBurstType2_VHCR_ms4	= 0,
	MidambleConfigurationBurstType2_VHCR_ms8	= 1
} e_MidambleConfigurationBurstType2_VHCR;

/* MidambleConfigurationBurstType2-VHCR */
typedef long	 MidambleConfigurationBurstType2_VHCR_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MidambleConfigurationBurstType2_VHCR_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MidambleConfigurationBurstType2_VHCR;
extern const asn_INTEGER_specifics_t asn_SPC_MidambleConfigurationBurstType2_VHCR_specs_1;
asn_struct_free_f MidambleConfigurationBurstType2_VHCR_free;
asn_struct_print_f MidambleConfigurationBurstType2_VHCR_print;
asn_constr_check_f MidambleConfigurationBurstType2_VHCR_constraint;
ber_type_decoder_f MidambleConfigurationBurstType2_VHCR_decode_ber;
der_type_encoder_f MidambleConfigurationBurstType2_VHCR_encode_der;
xer_type_decoder_f MidambleConfigurationBurstType2_VHCR_decode_xer;
xer_type_encoder_f MidambleConfigurationBurstType2_VHCR_encode_xer;
oer_type_decoder_f MidambleConfigurationBurstType2_VHCR_decode_oer;
oer_type_encoder_f MidambleConfigurationBurstType2_VHCR_encode_oer;
per_type_decoder_f MidambleConfigurationBurstType2_VHCR_decode_uper;
per_type_encoder_f MidambleConfigurationBurstType2_VHCR_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MidambleConfigurationBurstType2_VHCR_H_ */
#include <asn_internal.h>
