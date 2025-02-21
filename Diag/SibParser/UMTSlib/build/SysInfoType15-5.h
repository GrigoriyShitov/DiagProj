/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SysInfoType15_5_H_
#define	_SysInfoType15_5_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-Positioning-OTDOA-AssistanceData-UEB.h"
#include "SysInfoType15-5-v3a0ext.h"
#include "SysInfoType15-5-v770ext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SysInfoType15-5 */
typedef struct SysInfoType15_5 {
	UE_Positioning_OTDOA_AssistanceData_UEB_t	 ue_positioning_OTDOA_AssistanceData_UEB;
	struct SysInfoType15_5__v3a0NonCriticalExtensions {
		SysInfoType15_5_v3a0ext_t	 sysInfoType15_5_v3a0ext;
		struct SysInfoType15_5__v3a0NonCriticalExtensions__v770NonCriticalExtensions {
			SysInfoType15_5_v770ext_IEs_t	 sysInfoType15_5_v770ext;
			struct SysInfoType15_5__v3a0NonCriticalExtensions__v770NonCriticalExtensions__nonCriticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *nonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v770NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *v3a0NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType15_5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType15_5;

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoType15_5_H_ */
#include <asn_internal.h>
