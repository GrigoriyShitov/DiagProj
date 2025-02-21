/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_EUTRA_CarrierList_r15_H_
#define	_EUTRA_CarrierList_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasIdleCarrierEUTRA_r15;

/* EUTRA-CarrierList-r15 */
typedef struct EUTRA_CarrierList_r15 {
	A_SEQUENCE_OF(struct MeasIdleCarrierEUTRA_r15) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_CarrierList_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_CarrierList_r15;
extern asn_SET_OF_specifics_t asn_SPC_EUTRA_CarrierList_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_EUTRA_CarrierList_r15_1[1];
extern asn_per_constraints_t asn_PER_type_EUTRA_CarrierList_r15_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasIdleCarrierEUTRA-r15.h"

#endif	/* _EUTRA_CarrierList_r15_H_ */
#include <asn_internal.h>
