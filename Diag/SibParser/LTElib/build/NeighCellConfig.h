/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_NeighCellConfig_H_
#define	_NeighCellConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NeighCellConfig */
typedef BIT_STRING_t	 NeighCellConfig_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NeighCellConfig_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NeighCellConfig;
asn_struct_free_f NeighCellConfig_free;
asn_struct_print_f NeighCellConfig_print;
asn_constr_check_f NeighCellConfig_constraint;
ber_type_decoder_f NeighCellConfig_decode_ber;
der_type_encoder_f NeighCellConfig_encode_der;
xer_type_decoder_f NeighCellConfig_decode_xer;
xer_type_encoder_f NeighCellConfig_encode_xer;
oer_type_decoder_f NeighCellConfig_decode_oer;
oer_type_encoder_f NeighCellConfig_encode_oer;
per_type_decoder_f NeighCellConfig_decode_uper;
per_type_encoder_f NeighCellConfig_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _NeighCellConfig_H_ */
#include <asn_internal.h>
