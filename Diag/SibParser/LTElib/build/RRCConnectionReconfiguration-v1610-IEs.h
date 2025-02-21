/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRCConnectionReconfiguration_v1610_IEs_H_
#define	_RRCConnectionReconfiguration_v1610_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReconfiguration_v1610_IEs__daps_SourceRelease_r16 {
	RRCConnectionReconfiguration_v1610_IEs__daps_SourceRelease_r16_true	= 0
} e_RRCConnectionReconfiguration_v1610_IEs__daps_SourceRelease_r16;

/* Forward declarations */
struct ConditionalReconfiguration_r16;
struct TDM_PatternConfig_r15;
struct RRCConnectionReconfiguration_v1700_IEs;

/* RRCConnectionReconfiguration-v1610-IEs */
typedef struct RRCConnectionReconfiguration_v1610_IEs {
	struct ConditionalReconfiguration_r16	*conditionalReconfiguration_r16	/* OPTIONAL */;
	long	*daps_SourceRelease_r16	/* OPTIONAL */;
	struct TDM_PatternConfig_r15	*tdm_PatternConfig2_r16	/* OPTIONAL */;
	OCTET_STRING_t	*sl_ConfigDedicatedForNR_r16	/* OPTIONAL */;
	long	*sl_SSB_PriorityEUTRA_r16	/* OPTIONAL */;
	struct RRCConnectionReconfiguration_v1700_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfiguration_v1610_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_daps_SourceRelease_r16_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_v1610_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfiguration_v1610_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReconfiguration_v1610_IEs_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ConditionalReconfiguration-r16.h"
#include "TDM-PatternConfig-r15.h"
#include "RRCConnectionReconfiguration-v1700-IEs.h"

#endif	/* _RRCConnectionReconfiguration_v1610_IEs_H_ */
#include <asn_internal.h>
