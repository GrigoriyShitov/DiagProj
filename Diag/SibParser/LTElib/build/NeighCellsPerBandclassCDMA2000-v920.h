/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_NeighCellsPerBandclassCDMA2000_v920_H_
#define	_NeighCellsPerBandclassCDMA2000_v920_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellIdListCDMA2000-v920.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NeighCellsPerBandclassCDMA2000-v920 */
typedef struct NeighCellsPerBandclassCDMA2000_v920 {
	PhysCellIdListCDMA2000_v920_t	 physCellIdList_v920;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighCellsPerBandclassCDMA2000_v920_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NeighCellsPerBandclassCDMA2000_v920;
extern asn_SEQUENCE_specifics_t asn_SPC_NeighCellsPerBandclassCDMA2000_v920_specs_1;
extern asn_TYPE_member_t asn_MBR_NeighCellsPerBandclassCDMA2000_v920_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NeighCellsPerBandclassCDMA2000_v920_H_ */
#include <asn_internal.h>
