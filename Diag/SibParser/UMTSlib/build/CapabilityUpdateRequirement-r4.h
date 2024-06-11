/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_CapabilityUpdateRequirement_r4_H_
#define	_CapabilityUpdateRequirement_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SystemSpecificCapUpdateReqList;

/* CapabilityUpdateRequirement-r4 */
typedef struct CapabilityUpdateRequirement_r4 {
	BOOLEAN_t	 ue_RadioCapabilityFDDUpdateRequirement_FDD;
	BOOLEAN_t	 ue_RadioCapabilityTDDUpdateRequirement_TDD384;
	BOOLEAN_t	 ue_RadioCapabilityTDDUpdateRequirement_TDD128;
	struct SystemSpecificCapUpdateReqList	*systemSpecificCapUpdateReqList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CapabilityUpdateRequirement_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CapabilityUpdateRequirement_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SystemSpecificCapUpdateReqList.h"

#endif	/* _CapabilityUpdateRequirement_r4_H_ */
#include <asn_internal.h>
