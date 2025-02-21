/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SysInfoType15_H_
#define	_SysInfoType15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ReferenceLocation.h"
#include "UE-Positioning-GPS-ReferenceTime.h"
#include "SysInfoType15-v4b0ext-IEs.h"
#include "SysInfoType15-v770ext-IEs.h"
#include "SysInfoType15-va40ext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_CipherParameters;
struct BadSatList;

/* SysInfoType15 */
typedef struct SysInfoType15 {
	struct UE_Positioning_CipherParameters	*ue_positioning_GPS_CipherParameters	/* OPTIONAL */;
	ReferenceLocation_t	 ue_positioning_GPS_ReferenceLocation;
	UE_Positioning_GPS_ReferenceTime_t	 ue_positioning_GPS_ReferenceTime;
	struct BadSatList	*ue_positioning_GPS_Real_timeIntegrity	/* OPTIONAL */;
	struct SysInfoType15__v4b0NonCriticalExtensions {
		SysInfoType15_v4b0ext_IEs_t	 sysInfoType15_v4b0ext;
		struct SysInfoType15__v4b0NonCriticalExtensions__v770NonCriticalExtensions {
			SysInfoType15_v770ext_IEs_t	 sysInfoType15_v770ext;
			struct SysInfoType15__v4b0NonCriticalExtensions__v770NonCriticalExtensions__va40NonCriticalExtensions {
				SysInfoType15_va40ext_IEs_t	 sysInfoType15_va40ext;
				struct SysInfoType15__v4b0NonCriticalExtensions__v770NonCriticalExtensions__va40NonCriticalExtensions__nonCriticalExtensions {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *nonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *va40NonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v770NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *v4b0NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType15;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-CipherParameters.h"
#include "BadSatList.h"

#endif	/* _SysInfoType15_H_ */
#include <asn_internal.h>
