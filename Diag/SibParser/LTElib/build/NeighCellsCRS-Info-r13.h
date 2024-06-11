/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_NeighCellsCRS_Info_r13_H_
#define	_NeighCellsCRS_Info_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "CRS-AssistanceInfoList-r13.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NeighCellsCRS_Info_r13_PR {
	NeighCellsCRS_Info_r13_PR_NOTHING,	/* No components present */
	NeighCellsCRS_Info_r13_PR_release,
	NeighCellsCRS_Info_r13_PR_setup
} NeighCellsCRS_Info_r13_PR;

/* NeighCellsCRS-Info-r13 */
typedef struct NeighCellsCRS_Info_r13 {
	NeighCellsCRS_Info_r13_PR present;
	union NeighCellsCRS_Info_r13_u {
		NULL_t	 release;
		CRS_AssistanceInfoList_r13_t	 setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighCellsCRS_Info_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NeighCellsCRS_Info_r13;
extern asn_CHOICE_specifics_t asn_SPC_NeighCellsCRS_Info_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_NeighCellsCRS_Info_r13_1[2];
extern asn_per_constraints_t asn_PER_type_NeighCellsCRS_Info_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NeighCellsCRS_Info_r13_H_ */
#include <asn_internal.h>
