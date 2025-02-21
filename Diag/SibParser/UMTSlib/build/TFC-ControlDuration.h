/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_TFC_ControlDuration_H_
#define	_TFC_ControlDuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TFC_ControlDuration {
	TFC_ControlDuration_tfc_cd1	= 0,
	TFC_ControlDuration_tfc_cd2	= 1,
	TFC_ControlDuration_tfc_cd4	= 2,
	TFC_ControlDuration_tfc_cd8	= 3,
	TFC_ControlDuration_tfc_cd16	= 4,
	TFC_ControlDuration_tfc_cd24	= 5,
	TFC_ControlDuration_tfc_cd32	= 6,
	TFC_ControlDuration_tfc_cd48	= 7,
	TFC_ControlDuration_tfc_cd64	= 8,
	TFC_ControlDuration_tfc_cd128	= 9,
	TFC_ControlDuration_tfc_cd192	= 10,
	TFC_ControlDuration_tfc_cd256	= 11,
	TFC_ControlDuration_tfc_cd512	= 12
} e_TFC_ControlDuration;

/* TFC-ControlDuration */
typedef long	 TFC_ControlDuration_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TFC_ControlDuration_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TFC_ControlDuration;
extern const asn_INTEGER_specifics_t asn_SPC_TFC_ControlDuration_specs_1;
asn_struct_free_f TFC_ControlDuration_free;
asn_struct_print_f TFC_ControlDuration_print;
asn_constr_check_f TFC_ControlDuration_constraint;
ber_type_decoder_f TFC_ControlDuration_decode_ber;
der_type_encoder_f TFC_ControlDuration_encode_der;
xer_type_decoder_f TFC_ControlDuration_decode_xer;
xer_type_encoder_f TFC_ControlDuration_encode_xer;
oer_type_decoder_f TFC_ControlDuration_decode_oer;
oer_type_encoder_f TFC_ControlDuration_encode_oer;
per_type_decoder_f TFC_ControlDuration_decode_uper;
per_type_encoder_f TFC_ControlDuration_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TFC_ControlDuration_H_ */
#include <asn_internal.h>
