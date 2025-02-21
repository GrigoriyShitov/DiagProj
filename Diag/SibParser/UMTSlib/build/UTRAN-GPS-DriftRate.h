/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UTRAN_GPS_DriftRate_H_
#define	_UTRAN_GPS_DriftRate_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UTRAN_GPS_DriftRate {
	UTRAN_GPS_DriftRate_utran_GPSDrift0	= 0,
	UTRAN_GPS_DriftRate_utran_GPSDrift1	= 1,
	UTRAN_GPS_DriftRate_utran_GPSDrift2	= 2,
	UTRAN_GPS_DriftRate_utran_GPSDrift5	= 3,
	UTRAN_GPS_DriftRate_utran_GPSDrift10	= 4,
	UTRAN_GPS_DriftRate_utran_GPSDrift15	= 5,
	UTRAN_GPS_DriftRate_utran_GPSDrift25	= 6,
	UTRAN_GPS_DriftRate_utran_GPSDrift50	= 7,
	UTRAN_GPS_DriftRate_utran_GPSDrift_1	= 8,
	UTRAN_GPS_DriftRate_utran_GPSDrift_2	= 9,
	UTRAN_GPS_DriftRate_utran_GPSDrift_5	= 10,
	UTRAN_GPS_DriftRate_utran_GPSDrift_10	= 11,
	UTRAN_GPS_DriftRate_utran_GPSDrift_15	= 12,
	UTRAN_GPS_DriftRate_utran_GPSDrift_25	= 13,
	UTRAN_GPS_DriftRate_utran_GPSDrift_50	= 14
} e_UTRAN_GPS_DriftRate;

/* UTRAN-GPS-DriftRate */
typedef long	 UTRAN_GPS_DriftRate_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_UTRAN_GPS_DriftRate_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_UTRAN_GPS_DriftRate;
extern const asn_INTEGER_specifics_t asn_SPC_UTRAN_GPS_DriftRate_specs_1;
asn_struct_free_f UTRAN_GPS_DriftRate_free;
asn_struct_print_f UTRAN_GPS_DriftRate_print;
asn_constr_check_f UTRAN_GPS_DriftRate_constraint;
ber_type_decoder_f UTRAN_GPS_DriftRate_decode_ber;
der_type_encoder_f UTRAN_GPS_DriftRate_encode_der;
xer_type_decoder_f UTRAN_GPS_DriftRate_decode_xer;
xer_type_encoder_f UTRAN_GPS_DriftRate_encode_xer;
oer_type_decoder_f UTRAN_GPS_DriftRate_decode_oer;
oer_type_encoder_f UTRAN_GPS_DriftRate_encode_oer;
per_type_decoder_f UTRAN_GPS_DriftRate_decode_uper;
per_type_encoder_f UTRAN_GPS_DriftRate_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UTRAN_GPS_DriftRate_H_ */
#include <asn_internal.h>
