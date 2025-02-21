/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CompressedModeMeasCapabEUTRAList_H_
#define	_CompressedModeMeasCapabEUTRAList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CompressedModeMeasCapabEUTRA;

/* CompressedModeMeasCapabEUTRAList */
typedef struct CompressedModeMeasCapabEUTRAList {
	A_SEQUENCE_OF(struct CompressedModeMeasCapabEUTRA) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CompressedModeMeasCapabEUTRAList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CompressedModeMeasCapabEUTRAList;
extern asn_SET_OF_specifics_t asn_SPC_CompressedModeMeasCapabEUTRAList_specs_1;
extern asn_TYPE_member_t asn_MBR_CompressedModeMeasCapabEUTRAList_1[1];
extern asn_per_constraints_t asn_PER_type_CompressedModeMeasCapabEUTRAList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CompressedModeMeasCapabEUTRA.h"

#endif	/* _CompressedModeMeasCapabEUTRAList_H_ */
#include <asn_internal.h>
