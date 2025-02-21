/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_BandParameters_v1610_H_
#define	_BandParameters_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BandParameters_v1610__intraFreqDAPS_r16__intraFreqAsyncDAPS_r16 {
	BandParameters_v1610__intraFreqDAPS_r16__intraFreqAsyncDAPS_r16_supported	= 0
} e_BandParameters_v1610__intraFreqDAPS_r16__intraFreqAsyncDAPS_r16;
typedef enum BandParameters_v1610__intraFreqDAPS_r16__dummy {
	BandParameters_v1610__intraFreqDAPS_r16__dummy_supported	= 0
} e_BandParameters_v1610__intraFreqDAPS_r16__dummy;
typedef enum BandParameters_v1610__intraFreqDAPS_r16__intraFreqTwoTAGs_DAPS_r16 {
	BandParameters_v1610__intraFreqDAPS_r16__intraFreqTwoTAGs_DAPS_r16_supported	= 0
} e_BandParameters_v1610__intraFreqDAPS_r16__intraFreqTwoTAGs_DAPS_r16;
typedef enum BandParameters_v1610__addSRS_FrequencyHopping_r16 {
	BandParameters_v1610__addSRS_FrequencyHopping_r16_supported	= 0
} e_BandParameters_v1610__addSRS_FrequencyHopping_r16;
typedef enum BandParameters_v1610__addSRS_AntennaSwitching_r16__addSRS_1T2R_r16 {
	BandParameters_v1610__addSRS_AntennaSwitching_r16__addSRS_1T2R_r16_supported	= 0
} e_BandParameters_v1610__addSRS_AntennaSwitching_r16__addSRS_1T2R_r16;
typedef enum BandParameters_v1610__addSRS_AntennaSwitching_r16__addSRS_1T4R_r16 {
	BandParameters_v1610__addSRS_AntennaSwitching_r16__addSRS_1T4R_r16_supported	= 0
} e_BandParameters_v1610__addSRS_AntennaSwitching_r16__addSRS_1T4R_r16;
typedef enum BandParameters_v1610__addSRS_AntennaSwitching_r16__addSRS_2T4R_2pairs_r16 {
	BandParameters_v1610__addSRS_AntennaSwitching_r16__addSRS_2T4R_2pairs_r16_supported	= 0
} e_BandParameters_v1610__addSRS_AntennaSwitching_r16__addSRS_2T4R_2pairs_r16;
typedef enum BandParameters_v1610__addSRS_AntennaSwitching_r16__addSRS_2T4R_3pairs_r16 {
	BandParameters_v1610__addSRS_AntennaSwitching_r16__addSRS_2T4R_3pairs_r16_supported	= 0
} e_BandParameters_v1610__addSRS_AntennaSwitching_r16__addSRS_2T4R_3pairs_r16;

/* Forward declarations */
struct SRS_CapabilityPerBandPair_v1610;

/* BandParameters-v1610 */
typedef struct BandParameters_v1610 {
	struct BandParameters_v1610__intraFreqDAPS_r16 {
		long	*intraFreqAsyncDAPS_r16	/* OPTIONAL */;
		long	*dummy	/* OPTIONAL */;
		long	*intraFreqTwoTAGs_DAPS_r16	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *intraFreqDAPS_r16;
	long	*addSRS_FrequencyHopping_r16	/* OPTIONAL */;
	struct BandParameters_v1610__addSRS_AntennaSwitching_r16 {
		long	*addSRS_1T2R_r16	/* OPTIONAL */;
		long	*addSRS_1T4R_r16	/* OPTIONAL */;
		long	*addSRS_2T4R_2pairs_r16	/* OPTIONAL */;
		long	*addSRS_2T4R_3pairs_r16	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *addSRS_AntennaSwitching_r16;
	struct BandParameters_v1610__srs_CapabilityPerBandPairList_v1610 {
		A_SEQUENCE_OF(struct SRS_CapabilityPerBandPair_v1610) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_CapabilityPerBandPairList_v1610;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandParameters_v1610_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_intraFreqAsyncDAPS_r16_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dummy_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_intraFreqTwoTAGs_DAPS_r16_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_addSRS_FrequencyHopping_r16_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_addSRS_1T2R_r16_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_addSRS_1T4R_r16_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_addSRS_2T4R_2pairs_r16_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_addSRS_2T4R_3pairs_r16_18;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BandParameters_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_BandParameters_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_BandParameters_v1610_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SRS-CapabilityPerBandPair-v1610.h"

#endif	/* _BandParameters_v1610_H_ */
#include <asn_internal.h>
