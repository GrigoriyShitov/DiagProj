/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_VarianceOfRLC_BufferPayload_H_
#define	_VarianceOfRLC_BufferPayload_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VarianceOfRLC_BufferPayload {
	VarianceOfRLC_BufferPayload_plv0	= 0,
	VarianceOfRLC_BufferPayload_plv4	= 1,
	VarianceOfRLC_BufferPayload_plv8	= 2,
	VarianceOfRLC_BufferPayload_plv16	= 3,
	VarianceOfRLC_BufferPayload_plv32	= 4,
	VarianceOfRLC_BufferPayload_plv64	= 5,
	VarianceOfRLC_BufferPayload_plv128	= 6,
	VarianceOfRLC_BufferPayload_plv256	= 7,
	VarianceOfRLC_BufferPayload_plv512	= 8,
	VarianceOfRLC_BufferPayload_plv1024	= 9,
	VarianceOfRLC_BufferPayload_plv2k	= 10,
	VarianceOfRLC_BufferPayload_plv4k	= 11,
	VarianceOfRLC_BufferPayload_plv8k	= 12,
	VarianceOfRLC_BufferPayload_plv16k	= 13,
	VarianceOfRLC_BufferPayload_spare2	= 14,
	VarianceOfRLC_BufferPayload_spare1	= 15
} e_VarianceOfRLC_BufferPayload;

/* VarianceOfRLC-BufferPayload */
typedef long	 VarianceOfRLC_BufferPayload_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_VarianceOfRLC_BufferPayload_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_VarianceOfRLC_BufferPayload;
extern const asn_INTEGER_specifics_t asn_SPC_VarianceOfRLC_BufferPayload_specs_1;
asn_struct_free_f VarianceOfRLC_BufferPayload_free;
asn_struct_print_f VarianceOfRLC_BufferPayload_print;
asn_constr_check_f VarianceOfRLC_BufferPayload_constraint;
ber_type_decoder_f VarianceOfRLC_BufferPayload_decode_ber;
der_type_encoder_f VarianceOfRLC_BufferPayload_encode_der;
xer_type_decoder_f VarianceOfRLC_BufferPayload_decode_xer;
xer_type_encoder_f VarianceOfRLC_BufferPayload_encode_xer;
oer_type_decoder_f VarianceOfRLC_BufferPayload_decode_oer;
oer_type_encoder_f VarianceOfRLC_BufferPayload_encode_oer;
per_type_decoder_f VarianceOfRLC_BufferPayload_decode_uper;
per_type_encoder_f VarianceOfRLC_BufferPayload_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _VarianceOfRLC_BufferPayload_H_ */
#include <asn_internal.h>
