/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PUSCH_ConfigDedicated_v1800_H_
#define	_PUSCH_ConfigDedicated_v1800_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SetupRelease.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PUSCH-ConfigDedicated-v1800 */
typedef struct PUSCH_ConfigDedicated_v1800 {
	SetupRelease_4114P19_t	 uplinkHARQ_Mode_r18;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_ConfigDedicated_v1800_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigDedicated_v1800;
extern asn_SEQUENCE_specifics_t asn_SPC_PUSCH_ConfigDedicated_v1800_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_ConfigDedicated_v1800_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PUSCH_ConfigDedicated_v1800_H_ */
#include <asn_internal.h>
