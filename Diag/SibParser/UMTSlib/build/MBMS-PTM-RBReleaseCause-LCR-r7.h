/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MBMS_PTM_RBReleaseCause_LCR_r7_H_
#define	_MBMS_PTM_RBReleaseCause_LCR_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_PTM_RBReleaseCause_LCR_r7 {
	MBMS_PTM_RBReleaseCause_LCR_r7_normalRelease	= 0,
	MBMS_PTM_RBReleaseCause_LCR_r7_outOfMBMSServiceCoverageInRAN	= 1,
	MBMS_PTM_RBReleaseCause_LCR_r7_networkAbnormalRelease	= 2,
	MBMS_PTM_RBReleaseCause_LCR_r7_spare5	= 3,
	MBMS_PTM_RBReleaseCause_LCR_r7_spare4	= 4,
	MBMS_PTM_RBReleaseCause_LCR_r7_spare3	= 5,
	MBMS_PTM_RBReleaseCause_LCR_r7_spare2	= 6,
	MBMS_PTM_RBReleaseCause_LCR_r7_spare1	= 7
} e_MBMS_PTM_RBReleaseCause_LCR_r7;

/* MBMS-PTM-RBReleaseCause-LCR-r7 */
typedef long	 MBMS_PTM_RBReleaseCause_LCR_r7_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MBMS_PTM_RBReleaseCause_LCR_r7_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MBMS_PTM_RBReleaseCause_LCR_r7;
extern const asn_INTEGER_specifics_t asn_SPC_MBMS_PTM_RBReleaseCause_LCR_r7_specs_1;
asn_struct_free_f MBMS_PTM_RBReleaseCause_LCR_r7_free;
asn_struct_print_f MBMS_PTM_RBReleaseCause_LCR_r7_print;
asn_constr_check_f MBMS_PTM_RBReleaseCause_LCR_r7_constraint;
ber_type_decoder_f MBMS_PTM_RBReleaseCause_LCR_r7_decode_ber;
der_type_encoder_f MBMS_PTM_RBReleaseCause_LCR_r7_encode_der;
xer_type_decoder_f MBMS_PTM_RBReleaseCause_LCR_r7_decode_xer;
xer_type_encoder_f MBMS_PTM_RBReleaseCause_LCR_r7_encode_xer;
oer_type_decoder_f MBMS_PTM_RBReleaseCause_LCR_r7_decode_oer;
oer_type_encoder_f MBMS_PTM_RBReleaseCause_LCR_r7_encode_oer;
per_type_decoder_f MBMS_PTM_RBReleaseCause_LCR_r7_decode_uper;
per_type_encoder_f MBMS_PTM_RBReleaseCause_LCR_r7_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_PTM_RBReleaseCause_LCR_r7_H_ */
#include <asn_internal.h>
