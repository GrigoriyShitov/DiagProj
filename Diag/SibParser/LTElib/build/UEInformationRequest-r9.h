/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UEInformationRequest_r9_H_
#define	_UEInformationRequest_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "UEInformationRequest-r9-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEInformationRequest_r9__criticalExtensions_PR {
	UEInformationRequest_r9__criticalExtensions_PR_NOTHING,	/* No components present */
	UEInformationRequest_r9__criticalExtensions_PR_c1,
	UEInformationRequest_r9__criticalExtensions_PR_criticalExtensionsFuture
} UEInformationRequest_r9__criticalExtensions_PR;
typedef enum UEInformationRequest_r9__criticalExtensions__c1_PR {
	UEInformationRequest_r9__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	UEInformationRequest_r9__criticalExtensions__c1_PR_ueInformationRequest_r9,
	UEInformationRequest_r9__criticalExtensions__c1_PR_spare3,
	UEInformationRequest_r9__criticalExtensions__c1_PR_spare2,
	UEInformationRequest_r9__criticalExtensions__c1_PR_spare1
} UEInformationRequest_r9__criticalExtensions__c1_PR;

/* UEInformationRequest-r9 */
typedef struct UEInformationRequest_r9 {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct UEInformationRequest_r9__criticalExtensions {
		UEInformationRequest_r9__criticalExtensions_PR present;
		union UEInformationRequest_r9__criticalExtensions_u {
			struct UEInformationRequest_r9__criticalExtensions__c1 {
				UEInformationRequest_r9__criticalExtensions__c1_PR present;
				union UEInformationRequest_r9__criticalExtensions__c1_u {
					UEInformationRequest_r9_IEs_t	 ueInformationRequest_r9;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct UEInformationRequest_r9__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEInformationRequest_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEInformationRequest_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_UEInformationRequest_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_UEInformationRequest_r9_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UEInformationRequest_r9_H_ */
#include <asn_internal.h>
