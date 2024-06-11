/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SysInfoType13_H_
#define	_SysInfoType13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CN-DomainSysInfoList.h"
#include "SysInfoType13-v3a0ext-IEs.h"
#include "SysInfoType13-v4b0ext-IEs.h"
#include "SysInfoType13-v7xyext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_IdleTimersAndConstants;
struct CapabilityUpdateRequirement;

/* SysInfoType13 */
typedef struct SysInfoType13 {
	CN_DomainSysInfoList_t	 cn_DomainSysInfoList;
	struct UE_IdleTimersAndConstants	*ue_IdleTimersAndConstants	/* OPTIONAL */;
	struct CapabilityUpdateRequirement	*capabilityUpdateRequirement	/* OPTIONAL */;
	struct SysInfoType13__v3a0NonCriticalExtensions {
		SysInfoType13_v3a0ext_IEs_t	 sysInfoType13_v3a0ext;
		struct SysInfoType13__v3a0NonCriticalExtensions__v4b0NonCriticalExtensions {
			SysInfoType13_v4b0ext_IEs_t	 sysInfoType13_v4b0ext;
			struct SysInfoType13__v3a0NonCriticalExtensions__v4b0NonCriticalExtensions__v7xyNonCriticalExtensions {
				SysInfoType13_v7xyext_IEs_t	 sysInfoType13_v7xyext;
				struct SysInfoType13__v3a0NonCriticalExtensions__v4b0NonCriticalExtensions__v7xyNonCriticalExtensions__nonCriticalExtensions {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *nonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v7xyNonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v4b0NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *v3a0NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-IdleTimersAndConstants.h"
#include "CapabilityUpdateRequirement.h"

#endif	/* _SysInfoType13_H_ */
#include <asn_internal.h>
