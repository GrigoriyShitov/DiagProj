/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_CellBarred_H_
#define	_CellBarred_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "AllowedIndicator.h"
#include "T-Barred.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellBarred_PR {
	CellBarred_PR_NOTHING,	/* No components present */
	CellBarred_PR_barred,
	CellBarred_PR_notBarred
} CellBarred_PR;

/* CellBarred */
typedef struct CellBarred {
	CellBarred_PR present;
	union CellBarred_u {
		struct CellBarred__barred {
			AllowedIndicator_t	 intraFreqCellReselectionInd;
			T_Barred_t	 t_Barred;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} barred;
		NULL_t	 notBarred;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellBarred_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellBarred;
extern asn_CHOICE_specifics_t asn_SPC_CellBarred_specs_1;
extern asn_TYPE_member_t asn_MBR_CellBarred_1[2];
extern asn_per_constraints_t asn_PER_type_CellBarred_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CellBarred_H_ */
#include <asn_internal.h>
