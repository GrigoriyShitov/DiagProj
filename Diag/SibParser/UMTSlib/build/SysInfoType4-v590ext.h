/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SysInfoType4_v590ext_H_
#define	_SysInfoType4_v590ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellSelectReselectInfo_v590ext;

/* SysInfoType4-v590ext */
typedef struct SysInfoType4_v590ext {
	struct CellSelectReselectInfo_v590ext	*cellSelectReselectInfo_v590ext	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType4_v590ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType4_v590ext;
extern asn_SEQUENCE_specifics_t asn_SPC_SysInfoType4_v590ext_specs_1;
extern asn_TYPE_member_t asn_MBR_SysInfoType4_v590ext_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellSelectReselectInfo-v590ext.h"

#endif	/* _SysInfoType4_v590ext_H_ */
#include <asn_internal.h>
