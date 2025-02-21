/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MBMS_Qoffset_H_
#define	_MBMS_Qoffset_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_Qoffset {
	MBMS_Qoffset_q4	= 0,
	MBMS_Qoffset_q8	= 1,
	MBMS_Qoffset_q12	= 2,
	MBMS_Qoffset_q16	= 3,
	MBMS_Qoffset_q20	= 4,
	MBMS_Qoffset_q30	= 5,
	MBMS_Qoffset_q40	= 6,
	MBMS_Qoffset_qInfinity	= 7
} e_MBMS_Qoffset;

/* MBMS-Qoffset */
typedef long	 MBMS_Qoffset_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MBMS_Qoffset_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MBMS_Qoffset;
extern const asn_INTEGER_specifics_t asn_SPC_MBMS_Qoffset_specs_1;
asn_struct_free_f MBMS_Qoffset_free;
asn_struct_print_f MBMS_Qoffset_print;
asn_constr_check_f MBMS_Qoffset_constraint;
ber_type_decoder_f MBMS_Qoffset_decode_ber;
der_type_encoder_f MBMS_Qoffset_encode_der;
xer_type_decoder_f MBMS_Qoffset_decode_xer;
xer_type_encoder_f MBMS_Qoffset_encode_xer;
oer_type_decoder_f MBMS_Qoffset_decode_oer;
oer_type_encoder_f MBMS_Qoffset_encode_oer;
per_type_decoder_f MBMS_Qoffset_decode_uper;
per_type_encoder_f MBMS_Qoffset_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_Qoffset_H_ */
#include <asn_internal.h>
