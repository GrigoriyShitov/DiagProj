/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CompressedModeMeasCapabEUTRAList3_H_
#define	_CompressedModeMeasCapabEUTRAList3_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CompressedModeMeasCapabEUTRAExt2;

/* CompressedModeMeasCapabEUTRAList3 */
typedef struct CompressedModeMeasCapabEUTRAList3 {
	A_SEQUENCE_OF(struct CompressedModeMeasCapabEUTRAExt2) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CompressedModeMeasCapabEUTRAList3_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CompressedModeMeasCapabEUTRAList3;
extern asn_SET_OF_specifics_t asn_SPC_CompressedModeMeasCapabEUTRAList3_specs_1;
extern asn_TYPE_member_t asn_MBR_CompressedModeMeasCapabEUTRAList3_1[1];
extern asn_per_constraints_t asn_PER_type_CompressedModeMeasCapabEUTRAList3_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CompressedModeMeasCapabEUTRAExt2.h"

#endif	/* _CompressedModeMeasCapabEUTRAList3_H_ */
#include <asn_internal.h>
