/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_InterRATCellInfoList_r6_H_
#define	_InterRATCellInfoList_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RemovedInterRATCellList.h"
#include "InterRATCellInfoIndication.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NewInterRATCellList;
struct CellsForInterRATMeasList;

/* InterRATCellInfoList-r6 */
typedef struct InterRATCellInfoList_r6 {
	RemovedInterRATCellList_t	 removedInterRATCellList;
	struct NewInterRATCellList	*newInterRATCellList	/* OPTIONAL */;
	struct CellsForInterRATMeasList	*cellsForInterRATMeasList	/* OPTIONAL */;
	InterRATCellInfoIndication_t	*interRATCellInfoIndication_r6	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRATCellInfoList_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRATCellInfoList_r6;
extern asn_SEQUENCE_specifics_t asn_SPC_InterRATCellInfoList_r6_specs_1;
extern asn_TYPE_member_t asn_MBR_InterRATCellInfoList_r6_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NewInterRATCellList.h"
#include "CellsForInterRATMeasList.h"

#endif	/* _InterRATCellInfoList_r6_H_ */
#include <asn_internal.h>
