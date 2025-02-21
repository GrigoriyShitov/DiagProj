/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRCConnectionReject_H_
#define	_RRCConnectionReject_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRCConnectionReject-r3-IEs.h"
#include <BIT_STRING.h>
#include "RRCConnectionReject-v690ext-IEs.h"
#include "RRCConnectionReject-v6f0ext-IEs.h"
#include "RRCConnectionReject-v860ext-IEs.h"
#include "RRCConnectionReject-va40ext-IEs.h"
#include "RRCConnectionReject-vb50ext-IEs.h"
#include <constr_SEQUENCE.h>
#include "InitialUE-Identity.h"
#include "RRC-TransactionIdentifier.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReject_PR {
	RRCConnectionReject_PR_NOTHING,	/* No components present */
	RRCConnectionReject_PR_r3,
	RRCConnectionReject_PR_later_than_r3
} RRCConnectionReject_PR;

/* RRCConnectionReject */
typedef struct RRCConnectionReject {
	RRCConnectionReject_PR present;
	union RRCConnectionReject_u {
		struct RRCConnectionReject__r3 {
			RRCConnectionReject_r3_IEs_t	 rrcConnectionReject_r3;
			struct RRCConnectionReject__r3__laterNonCriticalExtensions {
				BIT_STRING_t	*rrcConnectionReject_r3_add_ext	/* OPTIONAL */;
				struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions {
					RRCConnectionReject_v690ext_IEs_t	 rrcConnectionReject_v690ext;
					struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions {
						RRCConnectionReject_v6f0ext_IEs_t	 rrcConnectionReject_v6f0ext;
						struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions__v860NonCriticalExtensions {
							RRCConnectionReject_v860ext_IEs_t	 rrcConnectionReject_v860ext;
							struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions {
								RRCConnectionReject_va40ext_IEs_t	 rrcConnectionReject_va40ext;
								struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions__vb50NonCriticalExtensions {
									RRCConnectionReject_vb50ext_IEs_t	 rrcConnectionReject_vb50ext;
									struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions__vb50NonCriticalExtensions__nonCriticalExtensions {
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *nonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *vb50NonCriticalExtensions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *va40NonCriticalExtensions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *v860NonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *v6f0NonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *v690NonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *laterNonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r3;
		struct RRCConnectionReject__later_than_r3 {
			InitialUE_Identity_t	 initialUE_Identity;
			RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
			struct RRCConnectionReject__later_than_r3__criticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} later_than_r3;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReject_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReject;
extern asn_CHOICE_specifics_t asn_SPC_RRCConnectionReject_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReject_1[2];
extern asn_per_constraints_t asn_PER_type_RRCConnectionReject_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReject_H_ */
#include <asn_internal.h>
