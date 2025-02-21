/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CellsToAddModCDMA2000_H_
#define	_CellsToAddModCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "PhysCellIdCDMA2000.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellsToAddModCDMA2000 */
typedef struct CellsToAddModCDMA2000 {
	long	 cellIndex;
	PhysCellIdCDMA2000_t	 physCellId;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellsToAddModCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellsToAddModCDMA2000;
extern asn_SEQUENCE_specifics_t asn_SPC_CellsToAddModCDMA2000_specs_1;
extern asn_TYPE_member_t asn_MBR_CellsToAddModCDMA2000_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CellsToAddModCDMA2000_H_ */
#include <asn_internal.h>
