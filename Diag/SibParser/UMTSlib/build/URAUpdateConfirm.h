/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_URAUpdateConfirm_H_
#define	_URAUpdateConfirm_H_


#include <asn_application.h>

/* Including external dependencies */
#include "URAUpdateConfirm-r3-IEs.h"
#include <BIT_STRING.h>
#include "URAUpdateConfirm-v690ext-IEs.h"
#include <constr_SEQUENCE.h>
#include "RRC-TransactionIdentifier.h"
#include "URAUpdateConfirm-r5-IEs.h"
#include "URAUpdateConfirm-r7-IEs.h"
#include "URAUpdateConfirm-v860ext-IEs.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum URAUpdateConfirm_PR {
	URAUpdateConfirm_PR_NOTHING,	/* No components present */
	URAUpdateConfirm_PR_r3,
	URAUpdateConfirm_PR_later_than_r3
} URAUpdateConfirm_PR;
typedef enum URAUpdateConfirm__later_than_r3__criticalExtensions_PR {
	URAUpdateConfirm__later_than_r3__criticalExtensions_PR_NOTHING,	/* No components present */
	URAUpdateConfirm__later_than_r3__criticalExtensions_PR_r5,
	URAUpdateConfirm__later_than_r3__criticalExtensions_PR_criticalExtensions
} URAUpdateConfirm__later_than_r3__criticalExtensions_PR;
typedef enum URAUpdateConfirm__later_than_r3__criticalExtensions__criticalExtensions_PR {
	URAUpdateConfirm__later_than_r3__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	URAUpdateConfirm__later_than_r3__criticalExtensions__criticalExtensions_PR_r7,
	URAUpdateConfirm__later_than_r3__criticalExtensions__criticalExtensions_PR_criticalExtensions
} URAUpdateConfirm__later_than_r3__criticalExtensions__criticalExtensions_PR;

/* URAUpdateConfirm */
typedef struct URAUpdateConfirm {
	URAUpdateConfirm_PR present;
	union URAUpdateConfirm_u {
		struct URAUpdateConfirm__r3 {
			URAUpdateConfirm_r3_IEs_t	 uraUpdateConfirm_r3;
			struct URAUpdateConfirm__r3__laterNonCriticalExtensions {
				BIT_STRING_t	*uraUpdateConfirm_r3_add_ext	/* OPTIONAL */;
				struct URAUpdateConfirm__r3__laterNonCriticalExtensions__v690NonCriticalExtensions {
					URAUpdateConfirm_v690ext_IEs_t	 uraUpdateConfirm_v690ext;
					struct URAUpdateConfirm__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__nonCriticalExtensions {
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *nonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *v690NonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *laterNonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r3;
		struct URAUpdateConfirm__later_than_r3 {
			RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
			struct URAUpdateConfirm__later_than_r3__criticalExtensions {
				URAUpdateConfirm__later_than_r3__criticalExtensions_PR present;
				union URAUpdateConfirm__later_than_r3__criticalExtensions_u {
					struct URAUpdateConfirm__later_than_r3__criticalExtensions__r5 {
						URAUpdateConfirm_r5_IEs_t	 uraUpdateConfirm_r5;
						struct URAUpdateConfirm__later_than_r3__criticalExtensions__r5__v690NonCriticalExtensions {
							URAUpdateConfirm_v690ext_IEs_t	 uraUpdateConfirm_v690ext;
							struct URAUpdateConfirm__later_than_r3__criticalExtensions__r5__v690NonCriticalExtensions__nonCriticalExtensions {
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *nonCriticalExtensions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *v690NonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} r5;
					struct URAUpdateConfirm__later_than_r3__criticalExtensions__criticalExtensions {
						URAUpdateConfirm__later_than_r3__criticalExtensions__criticalExtensions_PR present;
						union URAUpdateConfirm__later_than_r3__criticalExtensions__criticalExtensions_u {
							struct URAUpdateConfirm__later_than_r3__criticalExtensions__criticalExtensions__r7 {
								URAUpdateConfirm_r7_IEs_t	 uraUpdateConfirm_r7;
								BIT_STRING_t	*uraUpdateConfirm_r7_add_ext	/* OPTIONAL */;
								struct URAUpdateConfirm__later_than_r3__criticalExtensions__criticalExtensions__r7__v860NonCriticalExtensions {
									URAUpdateConfirm_v860ext_IEs_t	 uraUpdateConfirm_v860ext;
									struct URAUpdateConfirm__later_than_r3__criticalExtensions__criticalExtensions__r7__v860NonCriticalExtensions__nonCriticalExtensions {
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *nonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *v860NonCriticalExtensions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} r7;
							struct URAUpdateConfirm__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions {
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} criticalExtensions;
						} choice;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} criticalExtensions;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} later_than_r3;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} URAUpdateConfirm_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_URAUpdateConfirm;
extern asn_CHOICE_specifics_t asn_SPC_URAUpdateConfirm_specs_1;
extern asn_TYPE_member_t asn_MBR_URAUpdateConfirm_1[2];
extern asn_per_constraints_t asn_PER_type_URAUpdateConfirm_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _URAUpdateConfirm_H_ */
#include <asn_internal.h>
