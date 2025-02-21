/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRCStatus_H_
#define	_RRCStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolErrorMoreInformation.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRCStatus */
typedef struct RRCStatus {
	ProtocolErrorMoreInformation_t	 protocolErrorInformation;
	struct RRCStatus__laterNonCriticalExtensions {
		BIT_STRING_t	*rrcStatus_r3_add_ext	/* OPTIONAL */;
		struct RRCStatus__laterNonCriticalExtensions__nonCriticalExtensions {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *laterNonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCStatus;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCStatus_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCStatus_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCStatus_H_ */
#include <asn_internal.h>
