/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_TimeslotList_r4_H_
#define	_TimeslotList_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TimeslotNumber.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "TimeslotNumber-LCR-r4.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TimeslotList_r4_PR {
	TimeslotList_r4_PR_NOTHING,	/* No components present */
	TimeslotList_r4_PR_tdd384,
	TimeslotList_r4_PR_tdd128
} TimeslotList_r4_PR;

/* TimeslotList-r4 */
typedef struct TimeslotList_r4 {
	TimeslotList_r4_PR present;
	union TimeslotList_r4_u {
		struct TimeslotList_r4__tdd384 {
			A_SEQUENCE_OF(TimeslotNumber_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} tdd384;
		struct TimeslotList_r4__tdd128 {
			A_SEQUENCE_OF(TimeslotNumber_LCR_r4_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} tdd128;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TimeslotList_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimeslotList_r4;
extern asn_CHOICE_specifics_t asn_SPC_TimeslotList_r4_specs_1;
extern asn_TYPE_member_t asn_MBR_TimeslotList_r4_1[2];
extern asn_per_constraints_t asn_PER_type_TimeslotList_r4_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _TimeslotList_r4_H_ */
#include <asn_internal.h>
