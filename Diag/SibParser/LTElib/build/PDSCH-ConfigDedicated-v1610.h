/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PDSCH_ConfigDedicated_v1610_H_
#define	_PDSCH_ConfigDedicated_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SetupRelease.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PDSCH-ConfigDedicated-v1610 */
typedef struct PDSCH_ConfigDedicated_v1610 {
	SetupRelease_4114P5_t	 ce_PDSCH_MultiTB_Config_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_ConfigDedicated_v1610_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_ConfigDedicated_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_PDSCH_ConfigDedicated_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_PDSCH_ConfigDedicated_v1610_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PDSCH_ConfigDedicated_v1610_H_ */
#include <asn_internal.h>
