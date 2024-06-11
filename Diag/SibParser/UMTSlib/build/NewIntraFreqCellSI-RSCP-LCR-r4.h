/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_NewIntraFreqCellSI_RSCP_LCR_r4_H_
#define	_NewIntraFreqCellSI_RSCP_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFreqCellID.h"
#include "CellInfoSI-RSCP-LCR-r4.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NewIntraFreqCellSI-RSCP-LCR-r4 */
typedef struct NewIntraFreqCellSI_RSCP_LCR_r4 {
	IntraFreqCellID_t	*intraFreqCellID	/* OPTIONAL */;
	CellInfoSI_RSCP_LCR_r4_t	 cellInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NewIntraFreqCellSI_RSCP_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NewIntraFreqCellSI_RSCP_LCR_r4;
extern asn_SEQUENCE_specifics_t asn_SPC_NewIntraFreqCellSI_RSCP_LCR_r4_specs_1;
extern asn_TYPE_member_t asn_MBR_NewIntraFreqCellSI_RSCP_LCR_r4_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NewIntraFreqCellSI_RSCP_LCR_r4_H_ */
#include <asn_internal.h>
