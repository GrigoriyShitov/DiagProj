/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PUSCH_ConfigDedicatedSCell_v1430_H_
#define	_PUSCH_ConfigDedicatedSCell_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Enable256QAM_r14;

/* PUSCH-ConfigDedicatedSCell-v1430 */
typedef struct PUSCH_ConfigDedicatedSCell_v1430 {
	struct Enable256QAM_r14	*enable256QAM_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_ConfigDedicatedSCell_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigDedicatedSCell_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_PUSCH_ConfigDedicatedSCell_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_ConfigDedicatedSCell_v1430_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Enable256QAM-r14.h"

#endif	/* _PUSCH_ConfigDedicatedSCell_v1430_H_ */
#include <asn_internal.h>
