/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RadioBearerSetup_LaterCriticalExtensions_r15_IEs_H_
#define	_RadioBearerSetup_LaterCriticalExtensions_r15_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioBearerSetup-r15-IEs.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RadioBearerSetup-LaterCriticalExtensions-r15-IEs */
typedef struct RadioBearerSetup_LaterCriticalExtensions_r15_IEs {
	struct RadioBearerSetup_LaterCriticalExtensions_r15_IEs__r15 {
		RadioBearerSetup_r15_IEs_t	 radioBearerSetup_r15;
		BIT_STRING_t	*radioBearerSetup_r15_add_ext	/* OPTIONAL */;
		struct RadioBearerSetup_LaterCriticalExtensions_r15_IEs__r15__nonCriticalExtensions {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} r15;
	struct RadioBearerSetup_LaterCriticalExtensions_r15_IEs__criticalExtensions {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerSetup_LaterCriticalExtensions_r15_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerSetup_LaterCriticalExtensions_r15_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioBearerSetup_LaterCriticalExtensions_r15_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioBearerSetup_LaterCriticalExtensions_r15_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RadioBearerSetup_LaterCriticalExtensions_r15_IEs_H_ */
#include <asn_internal.h>
