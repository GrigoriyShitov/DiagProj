/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasResultSensing_r15_H_
#define	_MeasResultSensing_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SensingResult_r15;

/* MeasResultSensing-r15 */
typedef struct MeasResultSensing_r15 {
	long	 sl_SubframeRef_r15;
	struct MeasResultSensing_r15__sensingResult_r15 {
		A_SEQUENCE_OF(struct SensingResult_r15) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} sensingResult_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultSensing_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultSensing_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultSensing_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultSensing_r15_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SensingResult-r15.h"

#endif	/* _MeasResultSensing_r15_H_ */
#include <asn_internal.h>
