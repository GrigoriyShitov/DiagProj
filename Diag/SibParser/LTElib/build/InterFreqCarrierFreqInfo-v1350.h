/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_InterFreqCarrierFreqInfo_v1350_H_
#define	_InterFreqCarrierFreqInfo_v1350_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellSelectionInfoCE1_r13;

/* InterFreqCarrierFreqInfo-v1350 */
typedef struct InterFreqCarrierFreqInfo_v1350 {
	struct CellSelectionInfoCE1_r13	*cellSelectionInfoCE1_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqInfo_v1350_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo_v1350;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFreqCarrierFreqInfo_v1350_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqInfo_v1350_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellSelectionInfoCE1-r13.h"

#endif	/* _InterFreqCarrierFreqInfo_v1350_H_ */
#include <asn_internal.h>
