/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UEAssistanceInformation_v1530_IEs_H_
#define	_UEAssistanceInformation_v1530_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TrafficPatternInfoList-v1530.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UEAssistanceInformation_v1610_IEs;

/* UEAssistanceInformation-v1530-IEs */
typedef struct UEAssistanceInformation_v1530_IEs {
	struct UEAssistanceInformation_v1530_IEs__sps_AssistanceInformation_v1530 {
		TrafficPatternInfoList_v1530_t	 trafficPatternInfoListSL_v1530;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sps_AssistanceInformation_v1530;
	struct UEAssistanceInformation_v1610_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEAssistanceInformation_v1530_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEAssistanceInformation_v1530_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UEAssistanceInformation_v1530_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UEAssistanceInformation_v1530_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UEAssistanceInformation-v1610-IEs.h"

#endif	/* _UEAssistanceInformation_v1530_IEs_H_ */
#include <asn_internal.h>
