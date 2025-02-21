/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_DTX_Cycle2_2ms_H_
#define	_UE_DTX_Cycle2_2ms_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_DTX_Cycle2_2ms {
	UE_DTX_Cycle2_2ms_sub_frames_4	= 0,
	UE_DTX_Cycle2_2ms_sub_frames_5	= 1,
	UE_DTX_Cycle2_2ms_sub_frames_8	= 2,
	UE_DTX_Cycle2_2ms_sub_frames_10	= 3,
	UE_DTX_Cycle2_2ms_sub_frames_16	= 4,
	UE_DTX_Cycle2_2ms_sub_frames_20	= 5,
	UE_DTX_Cycle2_2ms_sub_frames_32	= 6,
	UE_DTX_Cycle2_2ms_sub_frames_40	= 7,
	UE_DTX_Cycle2_2ms_sub_frames_64	= 8,
	UE_DTX_Cycle2_2ms_sub_frames_80	= 9,
	UE_DTX_Cycle2_2ms_sub_frames_128	= 10,
	UE_DTX_Cycle2_2ms_sub_frames_160	= 11,
	UE_DTX_Cycle2_2ms_spare4	= 12,
	UE_DTX_Cycle2_2ms_spare3	= 13,
	UE_DTX_Cycle2_2ms_spare2	= 14,
	UE_DTX_Cycle2_2ms_spare1	= 15
} e_UE_DTX_Cycle2_2ms;

/* UE-DTX-Cycle2-2ms */
typedef long	 UE_DTX_Cycle2_2ms_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_UE_DTX_Cycle2_2ms_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_UE_DTX_Cycle2_2ms;
extern const asn_INTEGER_specifics_t asn_SPC_UE_DTX_Cycle2_2ms_specs_1;
asn_struct_free_f UE_DTX_Cycle2_2ms_free;
asn_struct_print_f UE_DTX_Cycle2_2ms_print;
asn_constr_check_f UE_DTX_Cycle2_2ms_constraint;
ber_type_decoder_f UE_DTX_Cycle2_2ms_decode_ber;
der_type_encoder_f UE_DTX_Cycle2_2ms_encode_der;
xer_type_decoder_f UE_DTX_Cycle2_2ms_decode_xer;
xer_type_encoder_f UE_DTX_Cycle2_2ms_encode_xer;
oer_type_decoder_f UE_DTX_Cycle2_2ms_decode_oer;
oer_type_encoder_f UE_DTX_Cycle2_2ms_encode_oer;
per_type_decoder_f UE_DTX_Cycle2_2ms_decode_uper;
per_type_encoder_f UE_DTX_Cycle2_2ms_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_DTX_Cycle2_2ms_H_ */
#include <asn_internal.h>
