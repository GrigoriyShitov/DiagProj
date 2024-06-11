/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UEInformationResponse_v1800_IEs_H_
#define	_UEInformationResponse_v1800_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RACH_ReportNR_r18;

/* UEInformationResponse-v1800-IEs */
typedef struct UEInformationResponse_v1800_IEs {
	struct RACH_ReportNR_r18	*rach_ReportNR_r18	/* OPTIONAL */;
	struct UEInformationResponse_v1800_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEInformationResponse_v1800_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEInformationResponse_v1800_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UEInformationResponse_v1800_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UEInformationResponse_v1800_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RACH-ReportNR-r18.h"

#endif	/* _UEInformationResponse_v1800_IEs_H_ */
#include <asn_internal.h>
