/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SysInfoTypeSB1_H_
#define	_SysInfoTypeSB1_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SIB-ReferenceList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SysInfoTypeSB1 */
typedef struct SysInfoTypeSB1 {
	SIB_ReferenceList_t	 sib_ReferenceList;
	struct SysInfoTypeSB1__nonCriticalExtensions {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoTypeSB1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoTypeSB1;

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoTypeSB1_H_ */
#include <asn_internal.h>
