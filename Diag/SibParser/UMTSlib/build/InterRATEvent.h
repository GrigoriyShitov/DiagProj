/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_InterRATEvent_H_
#define	_InterRATEvent_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Event3a.h"
#include "Event3b.h"
#include "Event3c.h"
#include "Event3d.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InterRATEvent_PR {
	InterRATEvent_PR_NOTHING,	/* No components present */
	InterRATEvent_PR_event3a,
	InterRATEvent_PR_event3b,
	InterRATEvent_PR_event3c,
	InterRATEvent_PR_event3d
} InterRATEvent_PR;

/* InterRATEvent */
typedef struct InterRATEvent {
	InterRATEvent_PR present;
	union InterRATEvent_u {
		Event3a_t	 event3a;
		Event3b_t	 event3b;
		Event3c_t	 event3c;
		Event3d_t	 event3d;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRATEvent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRATEvent;
extern asn_CHOICE_specifics_t asn_SPC_InterRATEvent_specs_1;
extern asn_TYPE_member_t asn_MBR_InterRATEvent_1[4];
extern asn_per_constraints_t asn_PER_type_InterRATEvent_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _InterRATEvent_H_ */
#include <asn_internal.h>
