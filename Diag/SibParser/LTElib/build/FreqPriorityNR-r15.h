/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_FreqPriorityNR_r15_H_
#define	_FreqPriorityNR_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueNR-r15.h"
#include "CellReselectionPriority.h"
#include "CellReselectionSubPriority-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FreqPriorityNR-r15 */
typedef struct FreqPriorityNR_r15 {
	ARFCN_ValueNR_r15_t	 carrierFreq_r15;
	CellReselectionPriority_t	 cellReselectionPriority_r15;
	CellReselectionSubPriority_r13_t	*cellReselectionSubPriority_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FreqPriorityNR_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FreqPriorityNR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_FreqPriorityNR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_FreqPriorityNR_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _FreqPriorityNR_r15_H_ */
#include <asn_internal.h>
