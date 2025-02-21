/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SysInfoType5_NonCriticalExtensions_ve30_IEs_H_
#define	_SysInfoType5_NonCriticalExtensions_ve30_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SysInfoType5-ve30ext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SysInfoType5-NonCriticalExtensions-ve30-IEs */
typedef struct SysInfoType5_NonCriticalExtensions_ve30_IEs {
	SysInfoType5_ve30ext_IEs_t	 sysInfoType5_ve30ext;
	struct SysInfoType5_NonCriticalExtensions_ve30_IEs__nonCriticalExtensions {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType5_NonCriticalExtensions_ve30_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType5_NonCriticalExtensions_ve30_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SysInfoType5_NonCriticalExtensions_ve30_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SysInfoType5_NonCriticalExtensions_ve30_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoType5_NonCriticalExtensions_ve30_IEs_H_ */
#include <asn_internal.h>
