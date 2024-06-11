/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SL_CommTxPoolToAddMod_r12_H_
#define	_SL_CommTxPoolToAddMod_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-TxPoolIdentity-r12.h"
#include "SL-CommResourcePool-r12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SL-CommTxPoolToAddMod-r12 */
typedef struct SL_CommTxPoolToAddMod_r12 {
	SL_TxPoolIdentity_r12_t	 poolIdentity_r12;
	SL_CommResourcePool_r12_t	 pool_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_CommTxPoolToAddMod_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_CommTxPoolToAddMod_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_CommTxPoolToAddMod_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_CommTxPoolToAddMod_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_CommTxPoolToAddMod_r12_H_ */
#include <asn_internal.h>
