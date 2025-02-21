/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_T_307_H_
#define	_T_307_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum T_307 {
	T_307_s5	= 0,
	T_307_s10	= 1,
	T_307_s15	= 2,
	T_307_s20	= 3,
	T_307_s30	= 4,
	T_307_s40	= 5,
	T_307_s50	= 6,
	T_307_spare	= 7
} e_T_307;

/* T-307 */
typedef long	 T_307_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_T_307_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_T_307;
extern const asn_INTEGER_specifics_t asn_SPC_T_307_specs_1;
asn_struct_free_f T_307_free;
asn_struct_print_f T_307_print;
asn_constr_check_f T_307_constraint;
ber_type_decoder_f T_307_decode_ber;
der_type_encoder_f T_307_encode_der;
xer_type_decoder_f T_307_decode_xer;
xer_type_encoder_f T_307_encode_xer;
oer_type_decoder_f T_307_decode_oer;
oer_type_encoder_f T_307_encode_oer;
per_type_decoder_f T_307_decode_uper;
per_type_encoder_f T_307_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _T_307_H_ */
#include <asn_internal.h>
