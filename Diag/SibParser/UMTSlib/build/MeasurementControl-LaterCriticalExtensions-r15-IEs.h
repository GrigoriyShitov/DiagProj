/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasurementControl_LaterCriticalExtensions_r15_IEs_H_
#define	_MeasurementControl_LaterCriticalExtensions_r15_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementControl-r15-IEs.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasurementControl_LaterCriticalExtensions_r15_IEs__criticalExtensions_PR {
	MeasurementControl_LaterCriticalExtensions_r15_IEs__criticalExtensions_PR_NOTHING,	/* No components present */
	MeasurementControl_LaterCriticalExtensions_r15_IEs__criticalExtensions_PR_r15,
	MeasurementControl_LaterCriticalExtensions_r15_IEs__criticalExtensions_PR_criticalExtensions
} MeasurementControl_LaterCriticalExtensions_r15_IEs__criticalExtensions_PR;

/* MeasurementControl-LaterCriticalExtensions-r15-IEs */
typedef struct MeasurementControl_LaterCriticalExtensions_r15_IEs {
	struct MeasurementControl_LaterCriticalExtensions_r15_IEs__criticalExtensions {
		MeasurementControl_LaterCriticalExtensions_r15_IEs__criticalExtensions_PR present;
		union MeasurementControl_LaterCriticalExtensions_r15_IEs__criticalExtensions_u {
			struct MeasurementControl_LaterCriticalExtensions_r15_IEs__criticalExtensions__r15 {
				MeasurementControl_r15_IEs_t	 measurementControl_r15;
				BIT_STRING_t	*measurementControl_r15_add_ext	/* OPTIONAL */;
				struct MeasurementControl_LaterCriticalExtensions_r15_IEs__criticalExtensions__r15__nonCriticalExtensions {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *nonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} r15;
			struct MeasurementControl_LaterCriticalExtensions_r15_IEs__criticalExtensions__criticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensions;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementControl_LaterCriticalExtensions_r15_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementControl_LaterCriticalExtensions_r15_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasurementControl_LaterCriticalExtensions_r15_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementControl_LaterCriticalExtensions_r15_IEs_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementControl_LaterCriticalExtensions_r15_IEs_H_ */
#include <asn_internal.h>
