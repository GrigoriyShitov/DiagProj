/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasResultListUTRA_H_
#define	_MeasResultListUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasResultUTRA;

/* MeasResultListUTRA */
typedef struct MeasResultListUTRA {
	A_SEQUENCE_OF(struct MeasResultUTRA) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultListUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultListUTRA;
extern asn_SET_OF_specifics_t asn_SPC_MeasResultListUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultListUTRA_1[1];
extern asn_per_constraints_t asn_PER_type_MeasResultListUTRA_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResultUTRA.h"

#endif	/* _MeasResultListUTRA_H_ */
#include <asn_internal.h>
