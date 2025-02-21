/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_LastSegmentShort_H_
#define	_LastSegmentShort_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SIB-Type.h"
#include "SegmentIndex.h"
#include "SIB-Data-variable.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LastSegmentShort */
typedef struct LastSegmentShort {
	SIB_Type_t	 sib_Type;
	SegmentIndex_t	 segmentIndex;
	SIB_Data_variable_t	 sib_Data_variable;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LastSegmentShort_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LastSegmentShort;
extern asn_SEQUENCE_specifics_t asn_SPC_LastSegmentShort_specs_1;
extern asn_TYPE_member_t asn_MBR_LastSegmentShort_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LastSegmentShort_H_ */
#include <asn_internal.h>
