/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SL_AllowedCarrierFreqList_r15_H_
#define	_SL_AllowedCarrierFreqList_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-r9.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SL-AllowedCarrierFreqList-r15 */
typedef struct SL_AllowedCarrierFreqList_r15 {
	struct SL_AllowedCarrierFreqList_r15__allowedCarrierFreqSet1 {
		A_SEQUENCE_OF(ARFCN_ValueEUTRA_r9_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} allowedCarrierFreqSet1;
	struct SL_AllowedCarrierFreqList_r15__allowedCarrierFreqSet2 {
		A_SEQUENCE_OF(ARFCN_ValueEUTRA_r9_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} allowedCarrierFreqSet2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_AllowedCarrierFreqList_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_AllowedCarrierFreqList_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_AllowedCarrierFreqList_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_AllowedCarrierFreqList_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_AllowedCarrierFreqList_r15_H_ */
#include <asn_internal.h>
