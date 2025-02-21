/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UEInformationResponse_r9_IEs_H_
#define	_UEInformationResponse_r9_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RACH_Report_r16;
struct RLF_Report_r9;
struct UEInformationResponse_v930_IEs;

/* UEInformationResponse-r9-IEs */
typedef struct UEInformationResponse_r9_IEs {
	struct RACH_Report_r16	*rach_Report_r9	/* OPTIONAL */;
	struct RLF_Report_r9	*rlf_Report_r9	/* OPTIONAL */;
	struct UEInformationResponse_v930_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEInformationResponse_r9_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEInformationResponse_r9_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UEInformationResponse_r9_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UEInformationResponse_r9_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RACH-Report-r16.h"
#include "RLF-Report-r9.h"
#include "UEInformationResponse-v930-IEs.h"

#endif	/* _UEInformationResponse_r9_IEs_H_ */
#include <asn_internal.h>
