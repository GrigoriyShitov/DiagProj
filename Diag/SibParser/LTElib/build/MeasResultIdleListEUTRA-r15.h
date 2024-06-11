/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasResultIdleListEUTRA_r15_H_
#define	_MeasResultIdleListEUTRA_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasResultIdleEUTRA_r15;

/* MeasResultIdleListEUTRA-r15 */
typedef struct MeasResultIdleListEUTRA_r15 {
	A_SEQUENCE_OF(struct MeasResultIdleEUTRA_r15) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultIdleListEUTRA_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultIdleListEUTRA_r15;
extern asn_SET_OF_specifics_t asn_SPC_MeasResultIdleListEUTRA_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultIdleListEUTRA_r15_1[1];
extern asn_per_constraints_t asn_PER_type_MeasResultIdleListEUTRA_r15_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResultIdleEUTRA-r15.h"

#endif	/* _MeasResultIdleListEUTRA_r15_H_ */
#include <asn_internal.h>
