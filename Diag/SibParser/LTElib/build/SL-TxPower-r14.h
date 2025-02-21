/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SL_TxPower_r14_H_
#define	_SL_TxPower_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_TxPower_r14_PR {
	SL_TxPower_r14_PR_NOTHING,	/* No components present */
	SL_TxPower_r14_PR_minusinfinity_r14,
	SL_TxPower_r14_PR_txPower_r14
} SL_TxPower_r14_PR;

/* SL-TxPower-r14 */
typedef struct SL_TxPower_r14 {
	SL_TxPower_r14_PR present;
	union SL_TxPower_r14_u {
		NULL_t	 minusinfinity_r14;
		long	 txPower_r14;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_TxPower_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_TxPower_r14;
extern asn_CHOICE_specifics_t asn_SPC_SL_TxPower_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_TxPower_r14_1[2];
extern asn_per_constraints_t asn_PER_type_SL_TxPower_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_TxPower_r14_H_ */
#include <asn_internal.h>
