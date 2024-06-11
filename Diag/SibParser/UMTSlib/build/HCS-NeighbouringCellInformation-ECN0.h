/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_HCS_NeighbouringCellInformation_ECN0_H_
#define	_HCS_NeighbouringCellInformation_ECN0_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HCS-PRIO.h"
#include "Q-HCS.h"
#include "HCS-CellReselectInformation-ECN0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HCS-NeighbouringCellInformation-ECN0 */
typedef struct HCS_NeighbouringCellInformation_ECN0 {
	HCS_PRIO_t	 hcs_PRIO	/* DEFAULT 0 */;
	Q_HCS_t	 q_HCS	/* DEFAULT 0 */;
	HCS_CellReselectInformation_ECN0_t	 hcs_CellReselectInformation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HCS_NeighbouringCellInformation_ECN0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HCS_NeighbouringCellInformation_ECN0;
extern asn_SEQUENCE_specifics_t asn_SPC_HCS_NeighbouringCellInformation_ECN0_specs_1;
extern asn_TYPE_member_t asn_MBR_HCS_NeighbouringCellInformation_ECN0_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _HCS_NeighbouringCellInformation_ECN0_H_ */
#include <asn_internal.h>
