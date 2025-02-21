/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_T1_ReleaseTimer_H_
#define	_T1_ReleaseTimer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum T1_ReleaseTimer {
	T1_ReleaseTimer_rt10	= 0,
	T1_ReleaseTimer_rt20	= 1,
	T1_ReleaseTimer_rt30	= 2,
	T1_ReleaseTimer_rt40	= 3,
	T1_ReleaseTimer_rt50	= 4,
	T1_ReleaseTimer_rt60	= 5,
	T1_ReleaseTimer_rt70	= 6,
	T1_ReleaseTimer_rt80	= 7,
	T1_ReleaseTimer_rt90	= 8,
	T1_ReleaseTimer_rt100	= 9,
	T1_ReleaseTimer_rt120	= 10,
	T1_ReleaseTimer_rt140	= 11,
	T1_ReleaseTimer_rt160	= 12,
	T1_ReleaseTimer_rt200	= 13,
	T1_ReleaseTimer_rt300	= 14,
	T1_ReleaseTimer_rt400	= 15
} e_T1_ReleaseTimer;

/* T1-ReleaseTimer */
typedef long	 T1_ReleaseTimer_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_T1_ReleaseTimer_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_T1_ReleaseTimer;
extern const asn_INTEGER_specifics_t asn_SPC_T1_ReleaseTimer_specs_1;
asn_struct_free_f T1_ReleaseTimer_free;
asn_struct_print_f T1_ReleaseTimer_print;
asn_constr_check_f T1_ReleaseTimer_constraint;
ber_type_decoder_f T1_ReleaseTimer_decode_ber;
der_type_encoder_f T1_ReleaseTimer_encode_der;
xer_type_decoder_f T1_ReleaseTimer_decode_xer;
xer_type_encoder_f T1_ReleaseTimer_encode_xer;
oer_type_decoder_f T1_ReleaseTimer_decode_oer;
oer_type_encoder_f T1_ReleaseTimer_encode_oer;
per_type_decoder_f T1_ReleaseTimer_decode_uper;
per_type_encoder_f T1_ReleaseTimer_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _T1_ReleaseTimer_H_ */
#include <asn_internal.h>
