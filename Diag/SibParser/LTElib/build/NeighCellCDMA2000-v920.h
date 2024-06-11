/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_NeighCellCDMA2000_v920_H_
#define	_NeighCellCDMA2000_v920_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NeighCellsPerBandclassListCDMA2000-v920.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NeighCellCDMA2000-v920 */
typedef struct NeighCellCDMA2000_v920 {
	NeighCellsPerBandclassListCDMA2000_v920_t	 neighCellsPerFreqList_v920;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighCellCDMA2000_v920_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NeighCellCDMA2000_v920;
extern asn_SEQUENCE_specifics_t asn_SPC_NeighCellCDMA2000_v920_specs_1;
extern asn_TYPE_member_t asn_MBR_NeighCellCDMA2000_v920_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NeighCellCDMA2000_v920_H_ */
#include <asn_internal.h>
