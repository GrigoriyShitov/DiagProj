/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_TimerOSD_r6_H_
#define	_TimerOSD_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TimerOSD_r6 {
	TimerOSD_r6_ms40	= 0,
	TimerOSD_r6_ms80	= 1,
	TimerOSD_r6_ms120	= 2,
	TimerOSD_r6_ms160	= 3,
	TimerOSD_r6_ms240	= 4,
	TimerOSD_r6_ms320	= 5,
	TimerOSD_r6_ms480	= 6,
	TimerOSD_r6_ms640	= 7,
	TimerOSD_r6_ms960	= 8,
	TimerOSD_r6_ms1280	= 9,
	TimerOSD_r6_ms1920	= 10,
	TimerOSD_r6_ms2560	= 11,
	TimerOSD_r6_ms3840	= 12,
	TimerOSD_r6_ms5120	= 13
} e_TimerOSD_r6;

/* TimerOSD-r6 */
typedef long	 TimerOSD_r6_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TimerOSD_r6_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TimerOSD_r6;
extern const asn_INTEGER_specifics_t asn_SPC_TimerOSD_r6_specs_1;
asn_struct_free_f TimerOSD_r6_free;
asn_struct_print_f TimerOSD_r6_print;
asn_constr_check_f TimerOSD_r6_constraint;
ber_type_decoder_f TimerOSD_r6_decode_ber;
der_type_encoder_f TimerOSD_r6_encode_der;
xer_type_decoder_f TimerOSD_r6_decode_xer;
xer_type_encoder_f TimerOSD_r6_encode_xer;
oer_type_decoder_f TimerOSD_r6_decode_oer;
oer_type_encoder_f TimerOSD_r6_encode_oer;
per_type_decoder_f TimerOSD_r6_decode_uper;
per_type_encoder_f TimerOSD_r6_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimerOSD_r6_H_ */
#include <asn_internal.h>
