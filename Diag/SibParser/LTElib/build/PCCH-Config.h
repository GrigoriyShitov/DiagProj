/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PCCH_Config_H_
#define	_PCCH_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PCCH_Config__defaultPagingCycle {
	PCCH_Config__defaultPagingCycle_rf32	= 0,
	PCCH_Config__defaultPagingCycle_rf64	= 1,
	PCCH_Config__defaultPagingCycle_rf128	= 2,
	PCCH_Config__defaultPagingCycle_rf256	= 3
} e_PCCH_Config__defaultPagingCycle;
typedef enum PCCH_Config__nB {
	PCCH_Config__nB_fourT	= 0,
	PCCH_Config__nB_twoT	= 1,
	PCCH_Config__nB_oneT	= 2,
	PCCH_Config__nB_halfT	= 3,
	PCCH_Config__nB_quarterT	= 4,
	PCCH_Config__nB_oneEighthT	= 5,
	PCCH_Config__nB_oneSixteenthT	= 6,
	PCCH_Config__nB_oneThirtySecondT	= 7
} e_PCCH_Config__nB;

/* PCCH-Config */
typedef struct PCCH_Config {
	long	 defaultPagingCycle;
	long	 nB;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PCCH_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_defaultPagingCycle_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nB_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PCCH_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_PCCH_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_PCCH_Config_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PCCH_Config_H_ */
#include <asn_internal.h>
