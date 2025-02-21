/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_IntraFreqMeasQuantity_FDD_H_
#define	_IntraFreqMeasQuantity_FDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IntraFreqMeasQuantity_FDD {
	IntraFreqMeasQuantity_FDD_cpich_Ec_N0	= 0,
	IntraFreqMeasQuantity_FDD_cpich_RSCP	= 1,
	IntraFreqMeasQuantity_FDD_pathloss	= 2,
	IntraFreqMeasQuantity_FDD_dummy	= 3
} e_IntraFreqMeasQuantity_FDD;

/* IntraFreqMeasQuantity-FDD */
typedef long	 IntraFreqMeasQuantity_FDD_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_IntraFreqMeasQuantity_FDD_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqMeasQuantity_FDD;
extern const asn_INTEGER_specifics_t asn_SPC_IntraFreqMeasQuantity_FDD_specs_1;
asn_struct_free_f IntraFreqMeasQuantity_FDD_free;
asn_struct_print_f IntraFreqMeasQuantity_FDD_print;
asn_constr_check_f IntraFreqMeasQuantity_FDD_constraint;
ber_type_decoder_f IntraFreqMeasQuantity_FDD_decode_ber;
der_type_encoder_f IntraFreqMeasQuantity_FDD_encode_der;
xer_type_decoder_f IntraFreqMeasQuantity_FDD_decode_xer;
xer_type_encoder_f IntraFreqMeasQuantity_FDD_encode_xer;
oer_type_decoder_f IntraFreqMeasQuantity_FDD_decode_oer;
oer_type_encoder_f IntraFreqMeasQuantity_FDD_encode_oer;
per_type_decoder_f IntraFreqMeasQuantity_FDD_decode_uper;
per_type_encoder_f IntraFreqMeasQuantity_FDD_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _IntraFreqMeasQuantity_FDD_H_ */
#include <asn_internal.h>
