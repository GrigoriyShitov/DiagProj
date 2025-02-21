/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_PowerClassExt_H_
#define	_UE_PowerClassExt_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_PowerClassExt {
	UE_PowerClassExt_class1	= 0,
	UE_PowerClassExt_class2	= 1,
	UE_PowerClassExt_class3	= 2,
	UE_PowerClassExt_class4	= 3,
	UE_PowerClassExt_spare4	= 4,
	UE_PowerClassExt_spare3	= 5,
	UE_PowerClassExt_spare2	= 6,
	UE_PowerClassExt_spare1	= 7
} e_UE_PowerClassExt;

/* UE-PowerClassExt */
typedef long	 UE_PowerClassExt_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_UE_PowerClassExt_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_UE_PowerClassExt;
extern const asn_INTEGER_specifics_t asn_SPC_UE_PowerClassExt_specs_1;
asn_struct_free_f UE_PowerClassExt_free;
asn_struct_print_f UE_PowerClassExt_print;
asn_constr_check_f UE_PowerClassExt_constraint;
ber_type_decoder_f UE_PowerClassExt_decode_ber;
der_type_encoder_f UE_PowerClassExt_encode_der;
xer_type_decoder_f UE_PowerClassExt_decode_xer;
xer_type_encoder_f UE_PowerClassExt_encode_xer;
oer_type_decoder_f UE_PowerClassExt_decode_oer;
oer_type_encoder_f UE_PowerClassExt_encode_oer;
per_type_decoder_f UE_PowerClassExt_decode_uper;
per_type_encoder_f UE_PowerClassExt_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_PowerClassExt_H_ */
#include <asn_internal.h>
