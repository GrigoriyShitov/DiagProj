/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_Fallback_R99_PRACH_info_IEs_H_
#define	_Fallback_R99_PRACH_info_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Fallback-R99-PRACH-info-IEs */
typedef struct Fallback_R99_PRACH_info_IEs {
	BOOLEAN_t	 cCCH_Fallback;
	BOOLEAN_t	 dCCH_Fallback;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Fallback_R99_PRACH_info_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Fallback_R99_PRACH_info_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_Fallback_R99_PRACH_info_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_Fallback_R99_PRACH_info_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Fallback_R99_PRACH_info_IEs_H_ */
#include <asn_internal.h>
