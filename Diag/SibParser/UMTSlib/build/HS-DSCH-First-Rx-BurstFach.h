/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_HS_DSCH_First_Rx_BurstFach_H_
#define	_HS_DSCH_First_Rx_BurstFach_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HS_DSCH_First_Rx_BurstFach {
	HS_DSCH_First_Rx_BurstFach_f0p4	= 0,
	HS_DSCH_First_Rx_BurstFach_f0p8	= 1
} e_HS_DSCH_First_Rx_BurstFach;

/* HS-DSCH-First-Rx-BurstFach */
typedef long	 HS_DSCH_First_Rx_BurstFach_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_HS_DSCH_First_Rx_BurstFach_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_HS_DSCH_First_Rx_BurstFach;
extern const asn_INTEGER_specifics_t asn_SPC_HS_DSCH_First_Rx_BurstFach_specs_1;
asn_struct_free_f HS_DSCH_First_Rx_BurstFach_free;
asn_struct_print_f HS_DSCH_First_Rx_BurstFach_print;
asn_constr_check_f HS_DSCH_First_Rx_BurstFach_constraint;
ber_type_decoder_f HS_DSCH_First_Rx_BurstFach_decode_ber;
der_type_encoder_f HS_DSCH_First_Rx_BurstFach_encode_der;
xer_type_decoder_f HS_DSCH_First_Rx_BurstFach_decode_xer;
xer_type_encoder_f HS_DSCH_First_Rx_BurstFach_encode_xer;
oer_type_decoder_f HS_DSCH_First_Rx_BurstFach_decode_oer;
oer_type_encoder_f HS_DSCH_First_Rx_BurstFach_encode_oer;
per_type_decoder_f HS_DSCH_First_Rx_BurstFach_decode_uper;
per_type_encoder_f HS_DSCH_First_Rx_BurstFach_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _HS_DSCH_First_Rx_BurstFach_H_ */
#include <asn_internal.h>
