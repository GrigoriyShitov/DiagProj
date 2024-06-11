/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_InterFreqCellInfoSI_List_HCS_ECN0_LCR_H_
#define	_InterFreqCellInfoSI_List_HCS_ECN0_LCR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RemovedInterFreqCellList;
struct NewInterFreqCellSI_List_HCS_ECN0_LCR_r4;

/* InterFreqCellInfoSI-List-HCS-ECN0-LCR */
typedef struct InterFreqCellInfoSI_List_HCS_ECN0_LCR {
	struct RemovedInterFreqCellList	*removedInterFreqCellList	/* OPTIONAL */;
	struct NewInterFreqCellSI_List_HCS_ECN0_LCR_r4	*newInterFreqCellList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCellInfoSI_List_HCS_ECN0_LCR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCellInfoSI_List_HCS_ECN0_LCR;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFreqCellInfoSI_List_HCS_ECN0_LCR_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCellInfoSI_List_HCS_ECN0_LCR_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RemovedInterFreqCellList.h"
#include "NewInterFreqCellSI-List-HCS-ECN0-LCR-r4.h"

#endif	/* _InterFreqCellInfoSI_List_HCS_ECN0_LCR_H_ */
#include <asn_internal.h>
