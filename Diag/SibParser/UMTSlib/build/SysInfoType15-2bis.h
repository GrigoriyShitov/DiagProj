/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SysInfoType15_2bis_H_
#define	_SysInfoType15_2bis_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-Positioning-GANSS-NavigationModel.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SysInfoType15-2bis */
typedef struct SysInfoType15_2bis {
	UE_Positioning_GANSS_NavigationModel_t	 ue_positioning_GANSS_navigationModel;
	struct SysInfoType15_2bis__nonCriticalExtensions {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType15_2bis_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType15_2bis;

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoType15_2bis_H_ */
#include <asn_internal.h>
