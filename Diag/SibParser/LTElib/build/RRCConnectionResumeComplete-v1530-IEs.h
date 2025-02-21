/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRCConnectionResumeComplete_v1530_IEs_H_
#define	_RRCConnectionResumeComplete_v1530_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionResumeComplete_v1530_IEs__logMeasAvailableBT_r15 {
	RRCConnectionResumeComplete_v1530_IEs__logMeasAvailableBT_r15_true	= 0
} e_RRCConnectionResumeComplete_v1530_IEs__logMeasAvailableBT_r15;
typedef enum RRCConnectionResumeComplete_v1530_IEs__logMeasAvailableWLAN_r15 {
	RRCConnectionResumeComplete_v1530_IEs__logMeasAvailableWLAN_r15_true	= 0
} e_RRCConnectionResumeComplete_v1530_IEs__logMeasAvailableWLAN_r15;
typedef enum RRCConnectionResumeComplete_v1530_IEs__idleMeasAvailable_r15 {
	RRCConnectionResumeComplete_v1530_IEs__idleMeasAvailable_r15_true	= 0
} e_RRCConnectionResumeComplete_v1530_IEs__idleMeasAvailable_r15;
typedef enum RRCConnectionResumeComplete_v1530_IEs__flightPathInfoAvailable_r15 {
	RRCConnectionResumeComplete_v1530_IEs__flightPathInfoAvailable_r15_true	= 0
} e_RRCConnectionResumeComplete_v1530_IEs__flightPathInfoAvailable_r15;

/* Forward declarations */
struct RRCConnectionResumeComplete_v1610_IEs;

/* RRCConnectionResumeComplete-v1530-IEs */
typedef struct RRCConnectionResumeComplete_v1530_IEs {
	long	*logMeasAvailableBT_r15	/* OPTIONAL */;
	long	*logMeasAvailableWLAN_r15	/* OPTIONAL */;
	long	*idleMeasAvailable_r15	/* OPTIONAL */;
	long	*flightPathInfoAvailable_r15	/* OPTIONAL */;
	struct RRCConnectionResumeComplete_v1610_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResumeComplete_v1530_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_logMeasAvailableBT_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_logMeasAvailableWLAN_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_idleMeasAvailable_r15_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_flightPathInfoAvailable_r15_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResumeComplete_v1530_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResumeComplete_v1530_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionResumeComplete_v1530_IEs_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCConnectionResumeComplete-v1610-IEs.h"

#endif	/* _RRCConnectionResumeComplete_v1530_IEs_H_ */
#include <asn_internal.h>
