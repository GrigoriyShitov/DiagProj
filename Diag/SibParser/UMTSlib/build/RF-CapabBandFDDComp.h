/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RF_CapabBandFDDComp_H_
#define	_RF_CapabBandFDDComp_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RF_CapabBandFDDComp {
	RF_CapabBandFDDComp_notSupported	= 0,
	RF_CapabBandFDDComp_default_TxRx_separation	= 1,
	RF_CapabBandFDDComp_spare2	= 2,
	RF_CapabBandFDDComp_spare1	= 3
} e_RF_CapabBandFDDComp;

/* RF-CapabBandFDDComp */
typedef long	 RF_CapabBandFDDComp_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RF_CapabBandFDDComp_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RF_CapabBandFDDComp;
extern const asn_INTEGER_specifics_t asn_SPC_RF_CapabBandFDDComp_specs_1;
asn_struct_free_f RF_CapabBandFDDComp_free;
asn_struct_print_f RF_CapabBandFDDComp_print;
asn_constr_check_f RF_CapabBandFDDComp_constraint;
ber_type_decoder_f RF_CapabBandFDDComp_decode_ber;
der_type_encoder_f RF_CapabBandFDDComp_encode_der;
xer_type_decoder_f RF_CapabBandFDDComp_decode_xer;
xer_type_encoder_f RF_CapabBandFDDComp_encode_xer;
oer_type_decoder_f RF_CapabBandFDDComp_decode_oer;
oer_type_encoder_f RF_CapabBandFDDComp_encode_oer;
per_type_decoder_f RF_CapabBandFDDComp_decode_uper;
per_type_encoder_f RF_CapabBandFDDComp_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RF_CapabBandFDDComp_H_ */
#include <asn_internal.h>
