/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SFN_TimeInfo_H_
#define	_SFN_TimeInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "DurationTimeInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SFN-TimeInfo */
typedef struct SFN_TimeInfo {
	long	 activationTimeSFN;
	DurationTimeInfo_t	 physChDuration;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SFN_TimeInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SFN_TimeInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_SFN_TimeInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_SFN_TimeInfo_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SFN_TimeInfo_H_ */
#include <asn_internal.h>
