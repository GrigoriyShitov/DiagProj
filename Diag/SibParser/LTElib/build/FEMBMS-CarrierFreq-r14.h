/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-14.2.1.asn1"
 * 	`asn1c -fcompound-names -pdu=all -no-gen-example`
 */

#ifndef	_FEMBMS_CarrierFreq_r14_H_
#define	_FEMBMS_CarrierFreq_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FEMBMS_CarrierFreq_r14__framePeriod_r14 {
	FEMBMS_CarrierFreq_r14__framePeriod_r14_n1	= 0,
	FEMBMS_CarrierFreq_r14__framePeriod_r14_n4	= 1
} e_FEMBMS_CarrierFreq_r14__framePeriod_r14;

/* FEMBMS-CarrierFreq-r14 */
typedef struct FEMBMS_CarrierFreq_r14 {
	long	 frameOffset_r14;
	long	*framePeriod_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FEMBMS_CarrierFreq_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_framePeriod_r14_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FEMBMS_CarrierFreq_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_FEMBMS_CarrierFreq_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_FEMBMS_CarrierFreq_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _FEMBMS_CarrierFreq_r14_H_ */
#include <asn_internal.h>
