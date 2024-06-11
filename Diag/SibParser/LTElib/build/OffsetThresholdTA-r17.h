/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_OffsetThresholdTA_r17_H_
#define	_OffsetThresholdTA_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum OffsetThresholdTA_r17 {
	OffsetThresholdTA_r17_ms0dot5	= 0,
	OffsetThresholdTA_r17_ms1	= 1,
	OffsetThresholdTA_r17_ms2	= 2,
	OffsetThresholdTA_r17_ms3	= 3,
	OffsetThresholdTA_r17_ms4	= 4,
	OffsetThresholdTA_r17_ms5	= 5,
	OffsetThresholdTA_r17_ms6	= 6,
	OffsetThresholdTA_r17_ms7	= 7,
	OffsetThresholdTA_r17_ms8	= 8,
	OffsetThresholdTA_r17_ms9	= 9,
	OffsetThresholdTA_r17_ms10	= 10,
	OffsetThresholdTA_r17_ms11	= 11,
	OffsetThresholdTA_r17_ms12	= 12,
	OffsetThresholdTA_r17_ms13	= 13,
	OffsetThresholdTA_r17_ms14	= 14,
	OffsetThresholdTA_r17_ms15	= 15
} e_OffsetThresholdTA_r17;

/* OffsetThresholdTA-r17 */
typedef long	 OffsetThresholdTA_r17_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_OffsetThresholdTA_r17_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_OffsetThresholdTA_r17;
extern const asn_INTEGER_specifics_t asn_SPC_OffsetThresholdTA_r17_specs_1;
asn_struct_free_f OffsetThresholdTA_r17_free;
asn_struct_print_f OffsetThresholdTA_r17_print;
asn_constr_check_f OffsetThresholdTA_r17_constraint;
ber_type_decoder_f OffsetThresholdTA_r17_decode_ber;
der_type_encoder_f OffsetThresholdTA_r17_encode_der;
xer_type_decoder_f OffsetThresholdTA_r17_decode_xer;
xer_type_encoder_f OffsetThresholdTA_r17_encode_xer;
oer_type_decoder_f OffsetThresholdTA_r17_decode_oer;
oer_type_encoder_f OffsetThresholdTA_r17_encode_oer;
per_type_decoder_f OffsetThresholdTA_r17_decode_uper;
per_type_encoder_f OffsetThresholdTA_r17_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _OffsetThresholdTA_r17_H_ */
#include <asn_internal.h>
