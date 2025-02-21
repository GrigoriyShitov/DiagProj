/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SL_PPPP_TxConfigIndex_r14_H_
#define	_SL_PPPP_TxConfigIndex_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-Priority-r13.h"
#include <NativeInteger.h>
#include "Tx-ConfigIndex-r14.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SL-PPPP-TxConfigIndex-r14 */
typedef struct SL_PPPP_TxConfigIndex_r14 {
	SL_Priority_r13_t	 priorityThreshold_r14;
	long	 defaultTxConfigIndex_r14;
	long	 cbr_ConfigIndex_r14;
	struct SL_PPPP_TxConfigIndex_r14__tx_ConfigIndexList_r14 {
		A_SEQUENCE_OF(Tx_ConfigIndex_r14_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} tx_ConfigIndexList_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_PPPP_TxConfigIndex_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_PPPP_TxConfigIndex_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_PPPP_TxConfigIndex_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_PPPP_TxConfigIndex_r14_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_PPPP_TxConfigIndex_r14_H_ */
#include <asn_internal.h>
