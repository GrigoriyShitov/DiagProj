/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CA_BandwidthClass_r10_H_
#define	_CA_BandwidthClass_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CA_BandwidthClass_r10 {
	CA_BandwidthClass_r10_a	= 0,
	CA_BandwidthClass_r10_b	= 1,
	CA_BandwidthClass_r10_c	= 2,
	CA_BandwidthClass_r10_d	= 3,
	CA_BandwidthClass_r10_e	= 4,
	CA_BandwidthClass_r10_f	= 5
	/*
	 * Enumeration is extensible
	 */
} e_CA_BandwidthClass_r10;

/* CA-BandwidthClass-r10 */
typedef long	 CA_BandwidthClass_r10_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CA_BandwidthClass_r10_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CA_BandwidthClass_r10;
extern const asn_INTEGER_specifics_t asn_SPC_CA_BandwidthClass_r10_specs_1;
asn_struct_free_f CA_BandwidthClass_r10_free;
asn_struct_print_f CA_BandwidthClass_r10_print;
asn_constr_check_f CA_BandwidthClass_r10_constraint;
ber_type_decoder_f CA_BandwidthClass_r10_decode_ber;
der_type_encoder_f CA_BandwidthClass_r10_encode_der;
xer_type_decoder_f CA_BandwidthClass_r10_decode_xer;
xer_type_encoder_f CA_BandwidthClass_r10_encode_xer;
oer_type_decoder_f CA_BandwidthClass_r10_decode_oer;
oer_type_encoder_f CA_BandwidthClass_r10_encode_oer;
per_type_decoder_f CA_BandwidthClass_r10_decode_uper;
per_type_encoder_f CA_BandwidthClass_r10_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CA_BandwidthClass_r10_H_ */
#include <asn_internal.h>
