/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PMCH_Config_r9_H_
#define	_PMCH_Config_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PMCH_Config_r9__mch_SchedulingPeriod_r9 {
	PMCH_Config_r9__mch_SchedulingPeriod_r9_rf8	= 0,
	PMCH_Config_r9__mch_SchedulingPeriod_r9_rf16	= 1,
	PMCH_Config_r9__mch_SchedulingPeriod_r9_rf32	= 2,
	PMCH_Config_r9__mch_SchedulingPeriod_r9_rf64	= 3,
	PMCH_Config_r9__mch_SchedulingPeriod_r9_rf128	= 4,
	PMCH_Config_r9__mch_SchedulingPeriod_r9_rf256	= 5,
	PMCH_Config_r9__mch_SchedulingPeriod_r9_rf512	= 6,
	PMCH_Config_r9__mch_SchedulingPeriod_r9_rf1024	= 7
} e_PMCH_Config_r9__mch_SchedulingPeriod_r9;

/* PMCH-Config-r9 */
typedef struct PMCH_Config_r9 {
	long	 sf_AllocEnd_r9;
	long	 dataMCS_r9;
	long	 mch_SchedulingPeriod_r9;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PMCH_Config_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mch_SchedulingPeriod_r9_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PMCH_Config_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_PMCH_Config_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_PMCH_Config_r9_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PMCH_Config_r9_H_ */
#include <asn_internal.h>
