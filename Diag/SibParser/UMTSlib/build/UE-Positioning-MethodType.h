/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_Positioning_MethodType_H_
#define	_UE_Positioning_MethodType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_Positioning_MethodType {
	UE_Positioning_MethodType_ue_Assisted	= 0,
	UE_Positioning_MethodType_ue_Based	= 1,
	UE_Positioning_MethodType_ue_BasedPreferred	= 2,
	UE_Positioning_MethodType_ue_AssistedPreferred	= 3
} e_UE_Positioning_MethodType;

/* UE-Positioning-MethodType */
typedef long	 UE_Positioning_MethodType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_UE_Positioning_MethodType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_MethodType;
extern const asn_INTEGER_specifics_t asn_SPC_UE_Positioning_MethodType_specs_1;
asn_struct_free_f UE_Positioning_MethodType_free;
asn_struct_print_f UE_Positioning_MethodType_print;
asn_constr_check_f UE_Positioning_MethodType_constraint;
ber_type_decoder_f UE_Positioning_MethodType_decode_ber;
der_type_encoder_f UE_Positioning_MethodType_encode_der;
xer_type_decoder_f UE_Positioning_MethodType_decode_xer;
xer_type_encoder_f UE_Positioning_MethodType_encode_xer;
oer_type_decoder_f UE_Positioning_MethodType_decode_oer;
oer_type_encoder_f UE_Positioning_MethodType_encode_oer;
per_type_decoder_f UE_Positioning_MethodType_decode_uper;
per_type_encoder_f UE_Positioning_MethodType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Positioning_MethodType_H_ */
#include <asn_internal.h>
