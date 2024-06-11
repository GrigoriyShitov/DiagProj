/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_InterFreqCarrierFreqListExt_v1800_H_
#define	_InterFreqCarrierFreqListExt_v1800_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqCarrierFreqInfo_v1800;

/* InterFreqCarrierFreqListExt-v1800 */
typedef struct InterFreqCarrierFreqListExt_v1800 {
	A_SEQUENCE_OF(struct InterFreqCarrierFreqInfo_v1800) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqListExt_v1800_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqListExt_v1800;
extern asn_SET_OF_specifics_t asn_SPC_InterFreqCarrierFreqListExt_v1800_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqListExt_v1800_1[1];
extern asn_per_constraints_t asn_PER_type_InterFreqCarrierFreqListExt_v1800_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqCarrierFreqInfo-v1800.h"

#endif	/* _InterFreqCarrierFreqListExt_v1800_H_ */
#include <asn_internal.h>
