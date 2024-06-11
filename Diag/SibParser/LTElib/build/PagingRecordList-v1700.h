/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PagingRecordList_v1700_H_
#define	_PagingRecordList_v1700_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PagingRecord_v1700;

/* PagingRecordList-v1700 */
typedef struct PagingRecordList_v1700 {
	A_SEQUENCE_OF(struct PagingRecord_v1700) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PagingRecordList_v1700_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PagingRecordList_v1700;
extern asn_SET_OF_specifics_t asn_SPC_PagingRecordList_v1700_specs_1;
extern asn_TYPE_member_t asn_MBR_PagingRecordList_v1700_1[1];
extern asn_per_constraints_t asn_PER_type_PagingRecordList_v1700_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PagingRecord-v1700.h"

#endif	/* _PagingRecordList_v1700_H_ */
#include <asn_internal.h>
