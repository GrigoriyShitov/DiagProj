/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRCConnectionResume_v1430_IEs_H_
#define	_RRCConnectionResume_v1430_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct OtherConfig_r9;
struct RRCConnectionResume_v1510_IEs;

/* RRCConnectionResume-v1430-IEs */
typedef struct RRCConnectionResume_v1430_IEs {
	struct OtherConfig_r9	*otherConfig_r14	/* OPTIONAL */;
	struct RRCConnectionResume_v1510_IEs	*rrcConnectionResume_v1510_IEs	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResume_v1430_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResume_v1430_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResume_v1430_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionResume_v1430_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "OtherConfig-r9.h"
#include "RRCConnectionResume-v1510-IEs.h"

#endif	/* _RRCConnectionResume_v1430_IEs_H_ */
#include <asn_internal.h>
