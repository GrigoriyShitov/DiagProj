/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_ULDedicatedMessageSegment_r16_IEs_H_
#define	_ULDedicatedMessageSegment_r16_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ULDedicatedMessageSegment_r16_IEs__rrc_MessageSegmentType_r16 {
	ULDedicatedMessageSegment_r16_IEs__rrc_MessageSegmentType_r16_notLastSegment	= 0,
	ULDedicatedMessageSegment_r16_IEs__rrc_MessageSegmentType_r16_lastSegment	= 1
} e_ULDedicatedMessageSegment_r16_IEs__rrc_MessageSegmentType_r16;

/* ULDedicatedMessageSegment-r16-IEs */
typedef struct ULDedicatedMessageSegment_r16_IEs {
	long	 segmentNumber_r16;
	OCTET_STRING_t	 rrc_MessageSegmentContainer_r16;
	long	 rrc_MessageSegmentType_r16;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct ULDedicatedMessageSegment_r16_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ULDedicatedMessageSegment_r16_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rrc_MessageSegmentType_r16_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ULDedicatedMessageSegment_r16_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_ULDedicatedMessageSegment_r16_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_ULDedicatedMessageSegment_r16_IEs_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _ULDedicatedMessageSegment_r16_IEs_H_ */
#include <asn_internal.h>
