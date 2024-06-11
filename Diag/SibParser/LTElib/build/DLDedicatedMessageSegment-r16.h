/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_DLDedicatedMessageSegment_r16_H_
#define	_DLDedicatedMessageSegment_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DLDedicatedMessageSegment-r16-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DLDedicatedMessageSegment_r16__criticalExtensions_PR {
	DLDedicatedMessageSegment_r16__criticalExtensions_PR_NOTHING,	/* No components present */
	DLDedicatedMessageSegment_r16__criticalExtensions_PR_dlDedicatedMessageSegment_r16,
	DLDedicatedMessageSegment_r16__criticalExtensions_PR_criticalExtensionsFuture
} DLDedicatedMessageSegment_r16__criticalExtensions_PR;

/* DLDedicatedMessageSegment-r16 */
typedef struct DLDedicatedMessageSegment_r16 {
	struct DLDedicatedMessageSegment_r16__criticalExtensions {
		DLDedicatedMessageSegment_r16__criticalExtensions_PR present;
		union DLDedicatedMessageSegment_r16__criticalExtensions_u {
			DLDedicatedMessageSegment_r16_IEs_t	 dlDedicatedMessageSegment_r16;
			struct DLDedicatedMessageSegment_r16__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DLDedicatedMessageSegment_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DLDedicatedMessageSegment_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_DLDedicatedMessageSegment_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_DLDedicatedMessageSegment_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _DLDedicatedMessageSegment_r16_H_ */
#include <asn_internal.h>
