/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_InternalEventParam_H_
#define	_UE_InternalEventParam_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-6AB-Event.h"
#include "TimeToTrigger.h"
#include "UE-6FG-Event.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_InternalEventParam_PR {
	UE_InternalEventParam_PR_NOTHING,	/* No components present */
	UE_InternalEventParam_PR_event6a,
	UE_InternalEventParam_PR_event6b,
	UE_InternalEventParam_PR_event6c,
	UE_InternalEventParam_PR_event6d,
	UE_InternalEventParam_PR_event6e,
	UE_InternalEventParam_PR_event6f,
	UE_InternalEventParam_PR_event6g
} UE_InternalEventParam_PR;

/* UE-InternalEventParam */
typedef struct UE_InternalEventParam {
	UE_InternalEventParam_PR present;
	union UE_InternalEventParam_u {
		UE_6AB_Event_t	 event6a;
		UE_6AB_Event_t	 event6b;
		TimeToTrigger_t	 event6c;
		TimeToTrigger_t	 event6d;
		TimeToTrigger_t	 event6e;
		UE_6FG_Event_t	 event6f;
		UE_6FG_Event_t	 event6g;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_InternalEventParam_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_InternalEventParam;
extern asn_CHOICE_specifics_t asn_SPC_UE_InternalEventParam_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_InternalEventParam_1[7];
extern asn_per_constraints_t asn_PER_type_UE_InternalEventParam_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_InternalEventParam_H_ */
#include <asn_internal.h>
