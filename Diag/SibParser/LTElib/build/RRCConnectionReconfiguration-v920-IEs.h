/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRCConnectionReconfiguration_v920_IEs_H_
#define	_RRCConnectionReconfiguration_v920_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReconfiguration_v920_IEs__fullConfig_r9 {
	RRCConnectionReconfiguration_v920_IEs__fullConfig_r9_true	= 0
} e_RRCConnectionReconfiguration_v920_IEs__fullConfig_r9;

/* Forward declarations */
struct OtherConfig_r9;
struct RRCConnectionReconfiguration_v1020_IEs;

/* RRCConnectionReconfiguration-v920-IEs */
typedef struct RRCConnectionReconfiguration_v920_IEs {
	struct OtherConfig_r9	*otherConfig_r9	/* OPTIONAL */;
	long	*fullConfig_r9	/* OPTIONAL */;
	struct RRCConnectionReconfiguration_v1020_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfiguration_v920_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_fullConfig_r9_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_v920_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfiguration_v920_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReconfiguration_v920_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "OtherConfig-r9.h"
#include "RRCConnectionReconfiguration-v1020-IEs.h"

#endif	/* _RRCConnectionReconfiguration_v920_IEs_H_ */
#include <asn_internal.h>
