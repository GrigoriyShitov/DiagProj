/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SCGFailureInformation_r12_H_
#define	_SCGFailureInformation_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SCGFailureInformation-r12-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SCGFailureInformation_r12__criticalExtensions_PR {
	SCGFailureInformation_r12__criticalExtensions_PR_NOTHING,	/* No components present */
	SCGFailureInformation_r12__criticalExtensions_PR_c1,
	SCGFailureInformation_r12__criticalExtensions_PR_criticalExtensionsFuture
} SCGFailureInformation_r12__criticalExtensions_PR;
typedef enum SCGFailureInformation_r12__criticalExtensions__c1_PR {
	SCGFailureInformation_r12__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	SCGFailureInformation_r12__criticalExtensions__c1_PR_scgFailureInformation_r12,
	SCGFailureInformation_r12__criticalExtensions__c1_PR_spare3,
	SCGFailureInformation_r12__criticalExtensions__c1_PR_spare2,
	SCGFailureInformation_r12__criticalExtensions__c1_PR_spare1
} SCGFailureInformation_r12__criticalExtensions__c1_PR;

/* SCGFailureInformation-r12 */
typedef struct SCGFailureInformation_r12 {
	struct SCGFailureInformation_r12__criticalExtensions {
		SCGFailureInformation_r12__criticalExtensions_PR present;
		union SCGFailureInformation_r12__criticalExtensions_u {
			struct SCGFailureInformation_r12__criticalExtensions__c1 {
				SCGFailureInformation_r12__criticalExtensions__c1_PR present;
				union SCGFailureInformation_r12__criticalExtensions__c1_u {
					SCGFailureInformation_r12_IEs_t	 scgFailureInformation_r12;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct SCGFailureInformation_r12__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCGFailureInformation_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCGFailureInformation_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SCGFailureInformation_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SCGFailureInformation_r12_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SCGFailureInformation_r12_H_ */
#include <asn_internal.h>
