/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SatelliteStatus_H_
#define	_SatelliteStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SatelliteStatus {
	SatelliteStatus_ns_NN_U	= 0,
	SatelliteStatus_es_SN	= 1,
	SatelliteStatus_es_NN_U	= 2,
	SatelliteStatus_rev2	= 3,
	SatelliteStatus_rev	= 4
} e_SatelliteStatus;

/* SatelliteStatus */
typedef long	 SatelliteStatus_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SatelliteStatus_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SatelliteStatus;
extern const asn_INTEGER_specifics_t asn_SPC_SatelliteStatus_specs_1;
asn_struct_free_f SatelliteStatus_free;
asn_struct_print_f SatelliteStatus_print;
asn_constr_check_f SatelliteStatus_constraint;
ber_type_decoder_f SatelliteStatus_decode_ber;
der_type_encoder_f SatelliteStatus_encode_der;
xer_type_decoder_f SatelliteStatus_decode_xer;
xer_type_encoder_f SatelliteStatus_encode_xer;
oer_type_decoder_f SatelliteStatus_decode_oer;
oer_type_encoder_f SatelliteStatus_encode_oer;
per_type_decoder_f SatelliteStatus_decode_uper;
per_type_encoder_f SatelliteStatus_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SatelliteStatus_H_ */
#include <asn_internal.h>
