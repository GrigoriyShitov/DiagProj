/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRCConnectionResumeComplete_r13_IEs_H_
#define	_RRCConnectionResumeComplete_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "DedicatedInfoNAS.h"
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionResumeComplete_r13_IEs__rlf_InfoAvailable_r13 {
	RRCConnectionResumeComplete_r13_IEs__rlf_InfoAvailable_r13_true	= 0
} e_RRCConnectionResumeComplete_r13_IEs__rlf_InfoAvailable_r13;
typedef enum RRCConnectionResumeComplete_r13_IEs__logMeasAvailable_r13 {
	RRCConnectionResumeComplete_r13_IEs__logMeasAvailable_r13_true	= 0
} e_RRCConnectionResumeComplete_r13_IEs__logMeasAvailable_r13;
typedef enum RRCConnectionResumeComplete_r13_IEs__connEstFailInfoAvailable_r13 {
	RRCConnectionResumeComplete_r13_IEs__connEstFailInfoAvailable_r13_true	= 0
} e_RRCConnectionResumeComplete_r13_IEs__connEstFailInfoAvailable_r13;
typedef enum RRCConnectionResumeComplete_r13_IEs__mobilityState_r13 {
	RRCConnectionResumeComplete_r13_IEs__mobilityState_r13_normal	= 0,
	RRCConnectionResumeComplete_r13_IEs__mobilityState_r13_medium	= 1,
	RRCConnectionResumeComplete_r13_IEs__mobilityState_r13_high	= 2,
	RRCConnectionResumeComplete_r13_IEs__mobilityState_r13_spare	= 3
} e_RRCConnectionResumeComplete_r13_IEs__mobilityState_r13;
typedef enum RRCConnectionResumeComplete_r13_IEs__mobilityHistoryAvail_r13 {
	RRCConnectionResumeComplete_r13_IEs__mobilityHistoryAvail_r13_true	= 0
} e_RRCConnectionResumeComplete_r13_IEs__mobilityHistoryAvail_r13;
typedef enum RRCConnectionResumeComplete_r13_IEs__logMeasAvailableMBSFN_r13 {
	RRCConnectionResumeComplete_r13_IEs__logMeasAvailableMBSFN_r13_true	= 0
} e_RRCConnectionResumeComplete_r13_IEs__logMeasAvailableMBSFN_r13;

/* Forward declarations */
struct RRCConnectionResumeComplete_v1530_IEs;

/* RRCConnectionResumeComplete-r13-IEs */
typedef struct RRCConnectionResumeComplete_r13_IEs {
	long	*selectedPLMN_Identity_r13	/* OPTIONAL */;
	DedicatedInfoNAS_t	*dedicatedInfoNAS_r13	/* OPTIONAL */;
	long	*rlf_InfoAvailable_r13	/* OPTIONAL */;
	long	*logMeasAvailable_r13	/* OPTIONAL */;
	long	*connEstFailInfoAvailable_r13	/* OPTIONAL */;
	long	*mobilityState_r13	/* OPTIONAL */;
	long	*mobilityHistoryAvail_r13	/* OPTIONAL */;
	long	*logMeasAvailableMBSFN_r13	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct RRCConnectionResumeComplete_v1530_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResumeComplete_r13_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rlf_InfoAvailable_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_logMeasAvailable_r13_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_connEstFailInfoAvailable_r13_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mobilityState_r13_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mobilityHistoryAvail_r13_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_logMeasAvailableMBSFN_r13_17;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResumeComplete_r13_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResumeComplete_r13_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionResumeComplete_r13_IEs_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCConnectionResumeComplete-v1530-IEs.h"

#endif	/* _RRCConnectionResumeComplete_r13_IEs_H_ */
#include <asn_internal.h>
