/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_ToTargetRNC_Container_H_
#define	_ToTargetRNC_Container_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterRATHandoverInfoWithInterRATCapabilities-r3.h"
#include "SRNC-RelocationInfo-r3.h"
#include "RFC3095-ContextInfo-r5.h"
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ToTargetRNC_Container_PR {
	ToTargetRNC_Container_PR_NOTHING,	/* No components present */
	ToTargetRNC_Container_PR_interRATHandoverInfo,
	ToTargetRNC_Container_PR_srncRelocation,
	ToTargetRNC_Container_PR_rfc3095_ContextInfo,
	ToTargetRNC_Container_PR_extension
} ToTargetRNC_Container_PR;

/* ToTargetRNC-Container */
typedef struct ToTargetRNC_Container {
	ToTargetRNC_Container_PR present;
	union ToTargetRNC_Container_u {
		InterRATHandoverInfoWithInterRATCapabilities_r3_t	 interRATHandoverInfo;
		SRNC_RelocationInfo_r3_t	 srncRelocation;
		RFC3095_ContextInfo_r5_t	 rfc3095_ContextInfo;
		NULL_t	 extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ToTargetRNC_Container_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ToTargetRNC_Container;

#ifdef __cplusplus
}
#endif

#endif	/* _ToTargetRNC_Container_H_ */
#include <asn_internal.h>
