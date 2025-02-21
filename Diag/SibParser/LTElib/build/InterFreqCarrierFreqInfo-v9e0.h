/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_InterFreqCarrierFreqInfo_v9e0_H_
#define	_InterFreqCarrierFreqInfo_v9e0_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-v9e0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MultiBandInfoList_v9e0;

/* InterFreqCarrierFreqInfo-v9e0 */
typedef struct InterFreqCarrierFreqInfo_v9e0 {
	ARFCN_ValueEUTRA_v9e0_t	*dl_CarrierFreq_v9e0	/* OPTIONAL */;
	struct MultiBandInfoList_v9e0	*multiBandInfoList_v9e0	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqInfo_v9e0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo_v9e0;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFreqCarrierFreqInfo_v9e0_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqInfo_v9e0_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MultiBandInfoList-v9e0.h"

#endif	/* _InterFreqCarrierFreqInfo_v9e0_H_ */
#include <asn_internal.h>
