/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_DRX_Cycle_H_
#define	_UE_DRX_Cycle_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_DRX_Cycle {
	UE_DRX_Cycle_sub_frames_4	= 0,
	UE_DRX_Cycle_sub_frames_5	= 1,
	UE_DRX_Cycle_sub_frames_8	= 2,
	UE_DRX_Cycle_sub_frames_10	= 3,
	UE_DRX_Cycle_sub_frames_16	= 4,
	UE_DRX_Cycle_sub_frames_20	= 5,
	UE_DRX_Cycle_spare2	= 6,
	UE_DRX_Cycle_spare1	= 7
} e_UE_DRX_Cycle;

/* UE-DRX-Cycle */
typedef long	 UE_DRX_Cycle_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_UE_DRX_Cycle_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_UE_DRX_Cycle;
extern const asn_INTEGER_specifics_t asn_SPC_UE_DRX_Cycle_specs_1;
asn_struct_free_f UE_DRX_Cycle_free;
asn_struct_print_f UE_DRX_Cycle_print;
asn_constr_check_f UE_DRX_Cycle_constraint;
ber_type_decoder_f UE_DRX_Cycle_decode_ber;
der_type_encoder_f UE_DRX_Cycle_encode_der;
xer_type_decoder_f UE_DRX_Cycle_decode_xer;
xer_type_encoder_f UE_DRX_Cycle_encode_xer;
oer_type_decoder_f UE_DRX_Cycle_decode_oer;
oer_type_encoder_f UE_DRX_Cycle_encode_oer;
per_type_decoder_f UE_DRX_Cycle_decode_uper;
per_type_encoder_f UE_DRX_Cycle_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_DRX_Cycle_H_ */
#include <asn_internal.h>
