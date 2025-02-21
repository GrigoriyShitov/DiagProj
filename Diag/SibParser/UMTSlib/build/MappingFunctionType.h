/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MappingFunctionType_H_
#define	_MappingFunctionType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MappingFunctionType {
	MappingFunctionType_linear	= 0,
	MappingFunctionType_functionType2	= 1,
	MappingFunctionType_functionType3	= 2,
	MappingFunctionType_functionType4	= 3
} e_MappingFunctionType;

/* MappingFunctionType */
typedef long	 MappingFunctionType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MappingFunctionType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MappingFunctionType;
extern const asn_INTEGER_specifics_t asn_SPC_MappingFunctionType_specs_1;
asn_struct_free_f MappingFunctionType_free;
asn_struct_print_f MappingFunctionType_print;
asn_constr_check_f MappingFunctionType_constraint;
ber_type_decoder_f MappingFunctionType_decode_ber;
der_type_encoder_f MappingFunctionType_encode_der;
xer_type_decoder_f MappingFunctionType_decode_xer;
xer_type_encoder_f MappingFunctionType_encode_xer;
oer_type_decoder_f MappingFunctionType_decode_oer;
oer_type_encoder_f MappingFunctionType_encode_oer;
per_type_decoder_f MappingFunctionType_decode_uper;
per_type_encoder_f MappingFunctionType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MappingFunctionType_H_ */
#include <asn_internal.h>
