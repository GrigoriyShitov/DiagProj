/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SysInfoType13_4_H_
#define	_SysInfoType13_4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ANSI-41-GlobalServiceRedirectInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SysInfoType13-4 */
typedef struct SysInfoType13_4 {
	ANSI_41_GlobalServiceRedirectInfo_t	 ansi_41_GlobalServiceRedirectInfo;
	struct SysInfoType13_4__nonCriticalExtensions {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType13_4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType13_4;

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoType13_4_H_ */
#include <asn_internal.h>
