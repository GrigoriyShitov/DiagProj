/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CellInfo_LCR_r8_ext_H_
#define	_CellInfo_LCR_r8_ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellSelectReselectInfoMC_RSCP;

/* CellInfo-LCR-r8-ext */
typedef struct CellInfo_LCR_r8_ext {
	struct CellSelectReselectInfoMC_RSCP	*cellSelectionReselectionInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellInfo_LCR_r8_ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellInfo_LCR_r8_ext;
extern asn_SEQUENCE_specifics_t asn_SPC_CellInfo_LCR_r8_ext_specs_1;
extern asn_TYPE_member_t asn_MBR_CellInfo_LCR_r8_ext_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellSelectReselectInfoMC-RSCP.h"

#endif	/* _CellInfo_LCR_r8_ext_H_ */
#include <asn_internal.h>
