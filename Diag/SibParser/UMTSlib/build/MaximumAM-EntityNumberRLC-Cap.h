/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MaximumAM_EntityNumberRLC_Cap_H_
#define	_MaximumAM_EntityNumberRLC_Cap_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MaximumAM_EntityNumberRLC_Cap {
	MaximumAM_EntityNumberRLC_Cap_dummy	= 0,
	MaximumAM_EntityNumberRLC_Cap_am4	= 1,
	MaximumAM_EntityNumberRLC_Cap_am5	= 2,
	MaximumAM_EntityNumberRLC_Cap_am6	= 3,
	MaximumAM_EntityNumberRLC_Cap_am8	= 4,
	MaximumAM_EntityNumberRLC_Cap_am16	= 5,
	MaximumAM_EntityNumberRLC_Cap_am30	= 6
} e_MaximumAM_EntityNumberRLC_Cap;

/* MaximumAM-EntityNumberRLC-Cap */
typedef long	 MaximumAM_EntityNumberRLC_Cap_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MaximumAM_EntityNumberRLC_Cap_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MaximumAM_EntityNumberRLC_Cap;
extern const asn_INTEGER_specifics_t asn_SPC_MaximumAM_EntityNumberRLC_Cap_specs_1;
asn_struct_free_f MaximumAM_EntityNumberRLC_Cap_free;
asn_struct_print_f MaximumAM_EntityNumberRLC_Cap_print;
asn_constr_check_f MaximumAM_EntityNumberRLC_Cap_constraint;
ber_type_decoder_f MaximumAM_EntityNumberRLC_Cap_decode_ber;
der_type_encoder_f MaximumAM_EntityNumberRLC_Cap_encode_der;
xer_type_decoder_f MaximumAM_EntityNumberRLC_Cap_decode_xer;
xer_type_encoder_f MaximumAM_EntityNumberRLC_Cap_encode_xer;
oer_type_decoder_f MaximumAM_EntityNumberRLC_Cap_decode_oer;
oer_type_encoder_f MaximumAM_EntityNumberRLC_Cap_encode_oer;
per_type_decoder_f MaximumAM_EntityNumberRLC_Cap_decode_uper;
per_type_encoder_f MaximumAM_EntityNumberRLC_Cap_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MaximumAM_EntityNumberRLC_Cap_H_ */
#include <asn_internal.h>
