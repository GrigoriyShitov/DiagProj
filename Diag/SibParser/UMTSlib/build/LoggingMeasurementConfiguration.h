/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_LoggingMeasurementConfiguration_H_
#define	_LoggingMeasurementConfiguration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "LoggingMeasurementConfiguration-r10-IEs.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include "LoggingMeasurementConfiguration-r11-IEs.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LoggingMeasurementConfiguration__criticalExtensions_PR {
	LoggingMeasurementConfiguration__criticalExtensions_PR_NOTHING,	/* No components present */
	LoggingMeasurementConfiguration__criticalExtensions_PR_r10,
	LoggingMeasurementConfiguration__criticalExtensions_PR_criticalExtensions
} LoggingMeasurementConfiguration__criticalExtensions_PR;
typedef enum LoggingMeasurementConfiguration__criticalExtensions__criticalExtensions_PR {
	LoggingMeasurementConfiguration__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	LoggingMeasurementConfiguration__criticalExtensions__criticalExtensions_PR_r11,
	LoggingMeasurementConfiguration__criticalExtensions__criticalExtensions_PR_criticalExtensions
} LoggingMeasurementConfiguration__criticalExtensions__criticalExtensions_PR;

/* LoggingMeasurementConfiguration */
typedef struct LoggingMeasurementConfiguration {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct LoggingMeasurementConfiguration__criticalExtensions {
		LoggingMeasurementConfiguration__criticalExtensions_PR present;
		union LoggingMeasurementConfiguration__criticalExtensions_u {
			struct LoggingMeasurementConfiguration__criticalExtensions__r10 {
				LoggingMeasurementConfiguration_r10_IEs_t	 loggingMeasurementConfiguration_r10_IEs;
				BIT_STRING_t	*loggingMeasurementConfiguration_r10_add_ext	/* OPTIONAL */;
				struct LoggingMeasurementConfiguration__criticalExtensions__r10__nonCriticalExtensions {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *nonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} r10;
			struct LoggingMeasurementConfiguration__criticalExtensions__criticalExtensions {
				LoggingMeasurementConfiguration__criticalExtensions__criticalExtensions_PR present;
				union LoggingMeasurementConfiguration__criticalExtensions__criticalExtensions_u {
					struct LoggingMeasurementConfiguration__criticalExtensions__criticalExtensions__r11 {
						LoggingMeasurementConfiguration_r11_IEs_t	 loggingMeasurementConfiguration_r11_IEs;
						BIT_STRING_t	*loggingMeasurementConfiguration_r11_add_ext	/* OPTIONAL */;
						struct LoggingMeasurementConfiguration__criticalExtensions__criticalExtensions__r11__nonCriticalExtensions {
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *nonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} r11;
					struct LoggingMeasurementConfiguration__criticalExtensions__criticalExtensions__criticalExtensions {
						
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
} LoggingMeasurementConfiguration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LoggingMeasurementConfiguration;
extern asn_SEQUENCE_specifics_t asn_SPC_LoggingMeasurementConfiguration_specs_1;
extern asn_TYPE_member_t asn_MBR_LoggingMeasurementConfiguration_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LoggingMeasurementConfiguration_H_ */
#include <asn_internal.h>
