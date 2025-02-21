/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CellSelectionInfoCE_r13_H_
#define	_CellSelectionInfoCE_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Q-RxLevMin.h"
#include "Q-QualMin-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellSelectionInfoCE-r13 */
typedef struct CellSelectionInfoCE_r13 {
	Q_RxLevMin_t	 q_RxLevMinCE_r13;
	Q_QualMin_r9_t	*q_QualMinRSRQ_CE_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellSelectionInfoCE_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellSelectionInfoCE_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_CellSelectionInfoCE_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_CellSelectionInfoCE_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CellSelectionInfoCE_r13_H_ */
#include <asn_internal.h>
