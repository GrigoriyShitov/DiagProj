/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SignallingConnectionRelease_H_
#define	_SignallingConnectionRelease_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SignallingConnectionRelease-r3-IEs.h"
#include <BIT_STRING.h>
#include "SignallingConnectionRelease-va40ext-IEs.h"
#include <constr_SEQUENCE.h>
#include "RRC-TransactionIdentifier.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SignallingConnectionRelease_PR {
	SignallingConnectionRelease_PR_NOTHING,	/* No components present */
	SignallingConnectionRelease_PR_r3,
	SignallingConnectionRelease_PR_later_than_r3
} SignallingConnectionRelease_PR;

/* SignallingConnectionRelease */
typedef struct SignallingConnectionRelease {
	SignallingConnectionRelease_PR present;
	union SignallingConnectionRelease_u {
		struct SignallingConnectionRelease__r3 {
			SignallingConnectionRelease_r3_IEs_t	 signallingConnectionRelease_r3;
			struct SignallingConnectionRelease__r3__laterNonCriticalExtensions {
				BIT_STRING_t	*signallingConnectionRelease_r3_add_ext	/* OPTIONAL */;
				struct SignallingConnectionRelease__r3__laterNonCriticalExtensions__va40NonCriticalExtensions {
					SignallingConnectionRelease_va40ext_IEs_t	 signallingConnectionRelease_va40ext;
					struct SignallingConnectionRelease__r3__laterNonCriticalExtensions__va40NonCriticalExtensions__nonCriticalExtensions {
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *nonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *va40NonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *laterNonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r3;
		struct SignallingConnectionRelease__later_than_r3 {
			RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
			struct SignallingConnectionRelease__later_than_r3__criticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} later_than_r3;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SignallingConnectionRelease_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SignallingConnectionRelease;
extern asn_CHOICE_specifics_t asn_SPC_SignallingConnectionRelease_specs_1;
extern asn_TYPE_member_t asn_MBR_SignallingConnectionRelease_1[2];
extern asn_per_constraints_t asn_PER_type_SignallingConnectionRelease_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SignallingConnectionRelease_H_ */
#include <asn_internal.h>
