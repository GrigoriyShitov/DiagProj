/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasCycleSCell_r10_H_
#define	_MeasCycleSCell_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasCycleSCell_r10 {
	MeasCycleSCell_r10_sf160	= 0,
	MeasCycleSCell_r10_sf256	= 1,
	MeasCycleSCell_r10_sf320	= 2,
	MeasCycleSCell_r10_sf512	= 3,
	MeasCycleSCell_r10_sf640	= 4,
	MeasCycleSCell_r10_sf1024	= 5,
	MeasCycleSCell_r10_sf1280	= 6,
	MeasCycleSCell_r10_spare1	= 7
} e_MeasCycleSCell_r10;

/* MeasCycleSCell-r10 */
typedef long	 MeasCycleSCell_r10_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MeasCycleSCell_r10_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MeasCycleSCell_r10;
extern const asn_INTEGER_specifics_t asn_SPC_MeasCycleSCell_r10_specs_1;
asn_struct_free_f MeasCycleSCell_r10_free;
asn_struct_print_f MeasCycleSCell_r10_print;
asn_constr_check_f MeasCycleSCell_r10_constraint;
ber_type_decoder_f MeasCycleSCell_r10_decode_ber;
der_type_encoder_f MeasCycleSCell_r10_encode_der;
xer_type_decoder_f MeasCycleSCell_r10_decode_xer;
xer_type_encoder_f MeasCycleSCell_r10_encode_xer;
oer_type_decoder_f MeasCycleSCell_r10_decode_oer;
oer_type_encoder_f MeasCycleSCell_r10_encode_oer;
per_type_decoder_f MeasCycleSCell_r10_decode_uper;
per_type_encoder_f MeasCycleSCell_r10_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasCycleSCell_r10_H_ */
#include <asn_internal.h>
