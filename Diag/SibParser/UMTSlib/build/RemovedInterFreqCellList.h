/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_RemovedInterFreqCellList_H_
#define	_RemovedInterFreqCellList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "InterFreqCellID.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RemovedInterFreqCellList_PR {
	RemovedInterFreqCellList_PR_NOTHING,	/* No components present */
	RemovedInterFreqCellList_PR_removeAllInterFreqCells,
	RemovedInterFreqCellList_PR_removeSomeInterFreqCells,
	RemovedInterFreqCellList_PR_removeNoInterFreqCells
} RemovedInterFreqCellList_PR;

/* RemovedInterFreqCellList */
typedef struct RemovedInterFreqCellList {
	RemovedInterFreqCellList_PR present;
	union RemovedInterFreqCellList_u {
		NULL_t	 removeAllInterFreqCells;
		struct RemovedInterFreqCellList__removeSomeInterFreqCells {
			A_SEQUENCE_OF(InterFreqCellID_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} removeSomeInterFreqCells;
		NULL_t	 removeNoInterFreqCells;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RemovedInterFreqCellList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RemovedInterFreqCellList;
extern asn_CHOICE_specifics_t asn_SPC_RemovedInterFreqCellList_specs_1;
extern asn_TYPE_member_t asn_MBR_RemovedInterFreqCellList_1[3];
extern asn_per_constraints_t asn_PER_type_RemovedInterFreqCellList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RemovedInterFreqCellList_H_ */
#include <asn_internal.h>
