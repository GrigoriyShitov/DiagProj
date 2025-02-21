/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SIBOccurrenceIdentityAndValueTag_H_
#define	_SIBOccurrenceIdentityAndValueTag_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SIBOccurIdentity.h"
#include "SIBOccurValueTag.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SIBOccurrenceIdentityAndValueTag */
typedef struct SIBOccurrenceIdentityAndValueTag {
	SIBOccurIdentity_t	 sibOccurIdentity;
	SIBOccurValueTag_t	 sibOccurValueTag;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIBOccurrenceIdentityAndValueTag_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIBOccurrenceIdentityAndValueTag;
extern asn_SEQUENCE_specifics_t asn_SPC_SIBOccurrenceIdentityAndValueTag_specs_1;
extern asn_TYPE_member_t asn_MBR_SIBOccurrenceIdentityAndValueTag_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SIBOccurrenceIdentityAndValueTag_H_ */
#include <asn_internal.h>
