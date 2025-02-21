/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_TransportFormatCombinationControlFailure_H_
#define	_TransportFormatCombinationControlFailure_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "FailureCauseWithProtErr.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TransportFormatCombinationControlFailure */
typedef struct TransportFormatCombinationControlFailure {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	FailureCauseWithProtErr_t	 failureCause;
	struct TransportFormatCombinationControlFailure__laterNonCriticalExtensions {
		BIT_STRING_t	*transportFormatCombinationControlFailure_r3_add_ext	/* OPTIONAL */;
		struct TransportFormatCombinationControlFailure__laterNonCriticalExtensions__nonCriticalExtensions {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *laterNonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TransportFormatCombinationControlFailure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TransportFormatCombinationControlFailure;
extern asn_SEQUENCE_specifics_t asn_SPC_TransportFormatCombinationControlFailure_specs_1;
extern asn_TYPE_member_t asn_MBR_TransportFormatCombinationControlFailure_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _TransportFormatCombinationControlFailure_H_ */
#include <asn_internal.h>
