/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_ANSI_41_GlobalServiceRedirectInfo_H_
#define	_ANSI_41_GlobalServiceRedirectInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ANSI-41-NAS-Parameter.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ANSI-41-GlobalServiceRedirectInfo */
typedef ANSI_41_NAS_Parameter_t	 ANSI_41_GlobalServiceRedirectInfo_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ANSI_41_GlobalServiceRedirectInfo_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ANSI_41_GlobalServiceRedirectInfo;
asn_struct_free_f ANSI_41_GlobalServiceRedirectInfo_free;
asn_struct_print_f ANSI_41_GlobalServiceRedirectInfo_print;
asn_constr_check_f ANSI_41_GlobalServiceRedirectInfo_constraint;
ber_type_decoder_f ANSI_41_GlobalServiceRedirectInfo_decode_ber;
der_type_encoder_f ANSI_41_GlobalServiceRedirectInfo_encode_der;
xer_type_decoder_f ANSI_41_GlobalServiceRedirectInfo_decode_xer;
xer_type_encoder_f ANSI_41_GlobalServiceRedirectInfo_encode_xer;
oer_type_decoder_f ANSI_41_GlobalServiceRedirectInfo_decode_oer;
oer_type_encoder_f ANSI_41_GlobalServiceRedirectInfo_encode_oer;
per_type_decoder_f ANSI_41_GlobalServiceRedirectInfo_decode_uper;
per_type_encoder_f ANSI_41_GlobalServiceRedirectInfo_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ANSI_41_GlobalServiceRedirectInfo_H_ */
#include <asn_internal.h>
