/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PHICH_Config_H_
#define	_PHICH_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PHICH_Config__phich_Duration {
	PHICH_Config__phich_Duration_normal	= 0,
	PHICH_Config__phich_Duration_extended	= 1
} e_PHICH_Config__phich_Duration;
typedef enum PHICH_Config__phich_Resource {
	PHICH_Config__phich_Resource_oneSixth	= 0,
	PHICH_Config__phich_Resource_half	= 1,
	PHICH_Config__phich_Resource_one	= 2,
	PHICH_Config__phich_Resource_two	= 3
} e_PHICH_Config__phich_Resource;

/* PHICH-Config */
typedef struct PHICH_Config {
	long	 phich_Duration;
	long	 phich_Resource;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PHICH_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_phich_Duration_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_phich_Resource_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PHICH_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_PHICH_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_PHICH_Config_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PHICH_Config_H_ */
#include <asn_internal.h>
