/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SF_PDSCH_H_
#define	_SF_PDSCH_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SF_PDSCH {
	SF_PDSCH_sfp4	= 0,
	SF_PDSCH_sfp8	= 1,
	SF_PDSCH_sfp16	= 2,
	SF_PDSCH_sfp32	= 3,
	SF_PDSCH_sfp64	= 4,
	SF_PDSCH_sfp128	= 5,
	SF_PDSCH_sfp256	= 6
} e_SF_PDSCH;

/* SF-PDSCH */
typedef long	 SF_PDSCH_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SF_PDSCH_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SF_PDSCH;
extern const asn_INTEGER_specifics_t asn_SPC_SF_PDSCH_specs_1;
asn_struct_free_f SF_PDSCH_free;
asn_struct_print_f SF_PDSCH_print;
asn_constr_check_f SF_PDSCH_constraint;
ber_type_decoder_f SF_PDSCH_decode_ber;
der_type_encoder_f SF_PDSCH_encode_der;
xer_type_decoder_f SF_PDSCH_decode_xer;
xer_type_encoder_f SF_PDSCH_encode_xer;
oer_type_decoder_f SF_PDSCH_decode_oer;
oer_type_encoder_f SF_PDSCH_encode_oer;
per_type_decoder_f SF_PDSCH_decode_uper;
per_type_encoder_f SF_PDSCH_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SF_PDSCH_H_ */
#include <asn_internal.h>
