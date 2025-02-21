/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_TrafficVolumeEventType_H_
#define	_TrafficVolumeEventType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TrafficVolumeEventType {
	TrafficVolumeEventType_e4a	= 0,
	TrafficVolumeEventType_e4b	= 1
} e_TrafficVolumeEventType;

/* TrafficVolumeEventType */
typedef long	 TrafficVolumeEventType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TrafficVolumeEventType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TrafficVolumeEventType;
extern const asn_INTEGER_specifics_t asn_SPC_TrafficVolumeEventType_specs_1;
asn_struct_free_f TrafficVolumeEventType_free;
asn_struct_print_f TrafficVolumeEventType_print;
asn_constr_check_f TrafficVolumeEventType_constraint;
ber_type_decoder_f TrafficVolumeEventType_decode_ber;
der_type_encoder_f TrafficVolumeEventType_encode_der;
xer_type_decoder_f TrafficVolumeEventType_decode_xer;
xer_type_encoder_f TrafficVolumeEventType_encode_xer;
oer_type_decoder_f TrafficVolumeEventType_decode_oer;
oer_type_encoder_f TrafficVolumeEventType_encode_oer;
per_type_decoder_f TrafficVolumeEventType_decode_uper;
per_type_encoder_f TrafficVolumeEventType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TrafficVolumeEventType_H_ */
#include <asn_internal.h>
