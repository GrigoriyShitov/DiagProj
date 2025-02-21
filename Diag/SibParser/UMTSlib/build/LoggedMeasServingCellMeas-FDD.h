/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_LoggedMeasServingCellMeas_FDD_H_
#define	_LoggedMeasServingCellMeas_FDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellIdentity.h"
#include "CPICH-RSCP.h"
#include "CPICH-Ec-N0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LoggedMeasServingCellMeas-FDD */
typedef struct LoggedMeasServingCellMeas_FDD {
	CellIdentity_t	 cellIdentity;
	CPICH_RSCP_t	 cpich_RSCP;
	CPICH_Ec_N0_t	 cpich_Ec_N0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LoggedMeasServingCellMeas_FDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LoggedMeasServingCellMeas_FDD;
extern asn_SEQUENCE_specifics_t asn_SPC_LoggedMeasServingCellMeas_FDD_specs_1;
extern asn_TYPE_member_t asn_MBR_LoggedMeasServingCellMeas_FDD_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LoggedMeasServingCellMeas_FDD_H_ */
#include <asn_internal.h>
