/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRC_FailureInfo_H_
#define	_RRC_FailureInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-FailureInfo-r3-IEs.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_FailureInfo_PR {
	RRC_FailureInfo_PR_NOTHING,	/* No components present */
	RRC_FailureInfo_PR_r3,
	RRC_FailureInfo_PR_criticalExtensions
} RRC_FailureInfo_PR;

/* RRC-FailureInfo */
typedef struct RRC_FailureInfo {
	RRC_FailureInfo_PR present;
	union RRC_FailureInfo_u {
		struct RRC_FailureInfo__r3 {
			RRC_FailureInfo_r3_IEs_t	 rRC_FailureInfo_r3;
			struct RRC_FailureInfo__r3__laterNonCriticalExtensions {
				BIT_STRING_t	*rrc_FailureInfo_r3_add_ext	/* OPTIONAL */;
				struct RRC_FailureInfo__r3__laterNonCriticalExtensions__nonCriticalExtensions {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *nonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *laterNonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r3;
		struct RRC_FailureInfo__criticalExtensions {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} criticalExtensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_FailureInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_FailureInfo;
extern asn_CHOICE_specifics_t asn_SPC_RRC_FailureInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_FailureInfo_1[2];
extern asn_per_constraints_t asn_PER_type_RRC_FailureInfo_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_FailureInfo_H_ */
#include <asn_internal.h>
