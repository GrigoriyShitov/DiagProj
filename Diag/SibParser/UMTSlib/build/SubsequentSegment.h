/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SubsequentSegment_H_
#define	_SubsequentSegment_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SIB-Type.h"
#include "SegmentIndex.h"
#include "SIB-Data-fixed.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SubsequentSegment */
typedef struct SubsequentSegment {
	SIB_Type_t	 sib_Type;
	SegmentIndex_t	 segmentIndex;
	SIB_Data_fixed_t	 sib_Data_fixed;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SubsequentSegment_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SubsequentSegment;
extern asn_SEQUENCE_specifics_t asn_SPC_SubsequentSegment_specs_1;
extern asn_TYPE_member_t asn_MBR_SubsequentSegment_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SubsequentSegment_H_ */
#include <asn_internal.h>
