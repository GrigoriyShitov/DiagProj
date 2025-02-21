/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_E_DCH_ReconfigurationInfo_H_
#define	_E_DCH_ReconfigurationInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E_DCH_RL_InfoNewServingCell;
struct E_DCH_RL_InfoOtherCell;

/* E-DCH-ReconfigurationInfo */
typedef struct E_DCH_ReconfigurationInfo {
	struct E_DCH_RL_InfoNewServingCell	*e_DCH_RL_InfoNewServingCell	/* OPTIONAL */;
	struct E_DCH_ReconfigurationInfo__e_DCH_RL_InfoOtherCellList {
		A_SEQUENCE_OF(struct E_DCH_RL_InfoOtherCell) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *e_DCH_RL_InfoOtherCellList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_DCH_ReconfigurationInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_DCH_ReconfigurationInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_E_DCH_ReconfigurationInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_E_DCH_ReconfigurationInfo_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "E-DCH-RL-InfoNewServingCell.h"
#include "E-DCH-RL-InfoOtherCell.h"

#endif	/* _E_DCH_ReconfigurationInfo_H_ */
#include <asn_internal.h>
