/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SFN_SFN_ObsTimeDifference_H_
#define	_SFN_SFN_ObsTimeDifference_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SFN-SFN-ObsTimeDifference1.h"
#include "SFN-SFN-ObsTimeDifference2.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SFN_SFN_ObsTimeDifference_PR {
	SFN_SFN_ObsTimeDifference_PR_NOTHING,	/* No components present */
	SFN_SFN_ObsTimeDifference_PR_type1,
	SFN_SFN_ObsTimeDifference_PR_type2
} SFN_SFN_ObsTimeDifference_PR;

/* SFN-SFN-ObsTimeDifference */
typedef struct SFN_SFN_ObsTimeDifference {
	SFN_SFN_ObsTimeDifference_PR present;
	union SFN_SFN_ObsTimeDifference_u {
		SFN_SFN_ObsTimeDifference1_t	 type1;
		SFN_SFN_ObsTimeDifference2_t	 type2;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SFN_SFN_ObsTimeDifference_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SFN_SFN_ObsTimeDifference;
extern asn_CHOICE_specifics_t asn_SPC_SFN_SFN_ObsTimeDifference_specs_1;
extern asn_TYPE_member_t asn_MBR_SFN_SFN_ObsTimeDifference_1[2];
extern asn_per_constraints_t asn_PER_type_SFN_SFN_ObsTimeDifference_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SFN_SFN_ObsTimeDifference_H_ */
#include <asn_internal.h>
