/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SysInfoType1_v860ext_IEs_H_
#define	_SysInfoType1_v860ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-ConnTimersAndConstants-v860ext.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SysInfoType1-v860ext-IEs */
typedef struct SysInfoType1_v860ext_IEs {
	UE_ConnTimersAndConstants_v860ext_t	 ue_ConnTimersAndConstants;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType1_v860ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType1_v860ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SysInfoType1_v860ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SysInfoType1_v860ext_IEs_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoType1_v860ext_IEs_H_ */
#include <asn_internal.h>
