/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SL_SyncTxControl_r12_H_
#define	_SL_SyncTxControl_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_SyncTxControl_r12__networkControlledSyncTx_r12 {
	SL_SyncTxControl_r12__networkControlledSyncTx_r12_on	= 0,
	SL_SyncTxControl_r12__networkControlledSyncTx_r12_off	= 1
} e_SL_SyncTxControl_r12__networkControlledSyncTx_r12;

/* SL-SyncTxControl-r12 */
typedef struct SL_SyncTxControl_r12 {
	long	*networkControlledSyncTx_r12	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_SyncTxControl_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_networkControlledSyncTx_r12_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_SyncTxControl_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_SyncTxControl_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_SyncTxControl_r12_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_SyncTxControl_r12_H_ */
#include <asn_internal.h>
