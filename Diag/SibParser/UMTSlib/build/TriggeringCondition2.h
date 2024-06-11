/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_TriggeringCondition2_H_
#define	_TriggeringCondition2_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TriggeringCondition2 {
	TriggeringCondition2_activeSetCellsOnly	= 0,
	TriggeringCondition2_monitoredSetCellsOnly	= 1,
	TriggeringCondition2_activeSetAndMonitoredSetCells	= 2,
	TriggeringCondition2_detectedSetCellsOnly	= 3,
	TriggeringCondition2_detectedSetAndMonitoredSetCells	= 4
} e_TriggeringCondition2;

/* TriggeringCondition2 */
typedef long	 TriggeringCondition2_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TriggeringCondition2_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TriggeringCondition2;
extern const asn_INTEGER_specifics_t asn_SPC_TriggeringCondition2_specs_1;
asn_struct_free_f TriggeringCondition2_free;
asn_struct_print_f TriggeringCondition2_print;
asn_constr_check_f TriggeringCondition2_constraint;
ber_type_decoder_f TriggeringCondition2_decode_ber;
der_type_encoder_f TriggeringCondition2_encode_der;
xer_type_decoder_f TriggeringCondition2_decode_xer;
xer_type_encoder_f TriggeringCondition2_encode_xer;
oer_type_decoder_f TriggeringCondition2_decode_oer;
oer_type_encoder_f TriggeringCondition2_encode_oer;
per_type_decoder_f TriggeringCondition2_decode_uper;
per_type_encoder_f TriggeringCondition2_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TriggeringCondition2_H_ */
#include <asn_internal.h>
