/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SysInfoType15_1_H_
#define	_SysInfoType15_1_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-Positioning-GPS-DGPS-Corrections.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SysInfoType15-1 */
typedef struct SysInfoType15_1 {
	UE_Positioning_GPS_DGPS_Corrections_t	 ue_positioning_GPS_DGPS_Corrections;
	struct SysInfoType15_1__nonCriticalExtensions {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType15_1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType15_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoType15_1_H_ */
#include <asn_internal.h>
