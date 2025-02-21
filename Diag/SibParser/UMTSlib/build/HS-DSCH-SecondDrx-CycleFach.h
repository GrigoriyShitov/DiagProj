/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_HS_DSCH_SecondDrx_CycleFach_H_
#define	_HS_DSCH_SecondDrx_CycleFach_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HS_DSCH_SecondDrx_CycleFach {
	HS_DSCH_SecondDrx_CycleFach_f4	= 0,
	HS_DSCH_SecondDrx_CycleFach_f8	= 1,
	HS_DSCH_SecondDrx_CycleFach_f16	= 2,
	HS_DSCH_SecondDrx_CycleFach_f32	= 3,
	HS_DSCH_SecondDrx_CycleFach_f64	= 4,
	HS_DSCH_SecondDrx_CycleFach_f128	= 5,
	HS_DSCH_SecondDrx_CycleFach_f256	= 6,
	HS_DSCH_SecondDrx_CycleFach_f512	= 7
} e_HS_DSCH_SecondDrx_CycleFach;

/* HS-DSCH-SecondDrx-CycleFach */
typedef long	 HS_DSCH_SecondDrx_CycleFach_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_HS_DSCH_SecondDrx_CycleFach_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_HS_DSCH_SecondDrx_CycleFach;
extern const asn_INTEGER_specifics_t asn_SPC_HS_DSCH_SecondDrx_CycleFach_specs_1;
asn_struct_free_f HS_DSCH_SecondDrx_CycleFach_free;
asn_struct_print_f HS_DSCH_SecondDrx_CycleFach_print;
asn_constr_check_f HS_DSCH_SecondDrx_CycleFach_constraint;
ber_type_decoder_f HS_DSCH_SecondDrx_CycleFach_decode_ber;
der_type_encoder_f HS_DSCH_SecondDrx_CycleFach_encode_der;
xer_type_decoder_f HS_DSCH_SecondDrx_CycleFach_decode_xer;
xer_type_encoder_f HS_DSCH_SecondDrx_CycleFach_encode_xer;
oer_type_decoder_f HS_DSCH_SecondDrx_CycleFach_decode_oer;
oer_type_encoder_f HS_DSCH_SecondDrx_CycleFach_encode_oer;
per_type_decoder_f HS_DSCH_SecondDrx_CycleFach_decode_uper;
per_type_encoder_f HS_DSCH_SecondDrx_CycleFach_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _HS_DSCH_SecondDrx_CycleFach_H_ */
#include <asn_internal.h>
