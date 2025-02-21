/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_ThresholdSFN_GPS_TOW_us_H_
#define	_ThresholdSFN_GPS_TOW_us_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ThresholdSFN_GPS_TOW_us {
	ThresholdSFN_GPS_TOW_us_us1	= 0,
	ThresholdSFN_GPS_TOW_us_us2	= 1,
	ThresholdSFN_GPS_TOW_us_us3	= 2,
	ThresholdSFN_GPS_TOW_us_us5	= 3,
	ThresholdSFN_GPS_TOW_us_us10	= 4,
	ThresholdSFN_GPS_TOW_us_us20	= 5,
	ThresholdSFN_GPS_TOW_us_us50	= 6,
	ThresholdSFN_GPS_TOW_us_us100	= 7
} e_ThresholdSFN_GPS_TOW_us;

/* ThresholdSFN-GPS-TOW-us */
typedef long	 ThresholdSFN_GPS_TOW_us_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ThresholdSFN_GPS_TOW_us_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ThresholdSFN_GPS_TOW_us;
extern const asn_INTEGER_specifics_t asn_SPC_ThresholdSFN_GPS_TOW_us_specs_1;
asn_struct_free_f ThresholdSFN_GPS_TOW_us_free;
asn_struct_print_f ThresholdSFN_GPS_TOW_us_print;
asn_constr_check_f ThresholdSFN_GPS_TOW_us_constraint;
ber_type_decoder_f ThresholdSFN_GPS_TOW_us_decode_ber;
der_type_encoder_f ThresholdSFN_GPS_TOW_us_encode_der;
xer_type_decoder_f ThresholdSFN_GPS_TOW_us_decode_xer;
xer_type_encoder_f ThresholdSFN_GPS_TOW_us_encode_xer;
oer_type_decoder_f ThresholdSFN_GPS_TOW_us_decode_oer;
oer_type_encoder_f ThresholdSFN_GPS_TOW_us_encode_oer;
per_type_decoder_f ThresholdSFN_GPS_TOW_us_decode_uper;
per_type_encoder_f ThresholdSFN_GPS_TOW_us_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ThresholdSFN_GPS_TOW_us_H_ */
#include <asn_internal.h>
