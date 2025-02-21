/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UECapabilityEnquiry_H_
#define	_UECapabilityEnquiry_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "UECapabilityEnquiry-r8-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UECapabilityEnquiry__criticalExtensions_PR {
	UECapabilityEnquiry__criticalExtensions_PR_NOTHING,	/* No components present */
	UECapabilityEnquiry__criticalExtensions_PR_c1,
	UECapabilityEnquiry__criticalExtensions_PR_criticalExtensionsFuture
} UECapabilityEnquiry__criticalExtensions_PR;
typedef enum UECapabilityEnquiry__criticalExtensions__c1_PR {
	UECapabilityEnquiry__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	UECapabilityEnquiry__criticalExtensions__c1_PR_ueCapabilityEnquiry_r8,
	UECapabilityEnquiry__criticalExtensions__c1_PR_spare3,
	UECapabilityEnquiry__criticalExtensions__c1_PR_spare2,
	UECapabilityEnquiry__criticalExtensions__c1_PR_spare1
} UECapabilityEnquiry__criticalExtensions__c1_PR;

/* UECapabilityEnquiry */
typedef struct UECapabilityEnquiry {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct UECapabilityEnquiry__criticalExtensions {
		UECapabilityEnquiry__criticalExtensions_PR present;
		union UECapabilityEnquiry__criticalExtensions_u {
			struct UECapabilityEnquiry__criticalExtensions__c1 {
				UECapabilityEnquiry__criticalExtensions__c1_PR present;
				union UECapabilityEnquiry__criticalExtensions__c1_u {
					UECapabilityEnquiry_r8_IEs_t	 ueCapabilityEnquiry_r8;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct UECapabilityEnquiry__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityEnquiry_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityEnquiry;
extern asn_SEQUENCE_specifics_t asn_SPC_UECapabilityEnquiry_specs_1;
extern asn_TYPE_member_t asn_MBR_UECapabilityEnquiry_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UECapabilityEnquiry_H_ */
#include <asn_internal.h>
