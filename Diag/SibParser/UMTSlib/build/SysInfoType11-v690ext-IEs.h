/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SysInfoType11_v690ext_IEs_H_
#define	_SysInfoType11_v690ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqRACHReportingInfo;

/* SysInfoType11-v690ext-IEs */
typedef struct SysInfoType11_v690ext_IEs {
	struct InterFreqRACHReportingInfo	*interFreqRACHReportingInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType11_v690ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType11_v690ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SysInfoType11_v690ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SysInfoType11_v690ext_IEs_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqRACHReportingInfo.h"

#endif	/* _SysInfoType11_v690ext_IEs_H_ */
#include <asn_internal.h>
