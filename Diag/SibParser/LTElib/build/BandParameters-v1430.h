/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_BandParameters_v1430_H_
#define	_BandParameters_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BandParameters_v1430__ul_256QAM_r14 {
	BandParameters_v1430__ul_256QAM_r14_supported	= 0
} e_BandParameters_v1430__ul_256QAM_r14;

/* Forward declarations */
struct MIMO_CA_ParametersPerBoBC_v1430;
struct UL_256QAM_perCC_Info_r14;
struct SRS_CapabilityPerBandPair_r14;

/* BandParameters-v1430 */
typedef struct BandParameters_v1430 {
	struct MIMO_CA_ParametersPerBoBC_v1430	*bandParametersDL_v1430	/* OPTIONAL */;
	long	*ul_256QAM_r14	/* OPTIONAL */;
	struct BandParameters_v1430__ul_256QAM_perCC_InfoList_r14 {
		A_SEQUENCE_OF(struct UL_256QAM_perCC_Info_r14) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ul_256QAM_perCC_InfoList_r14;
	struct BandParameters_v1430__srs_CapabilityPerBandPairList_r14 {
		A_SEQUENCE_OF(struct SRS_CapabilityPerBandPair_r14) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_CapabilityPerBandPairList_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandParameters_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_256QAM_r14_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BandParameters_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_BandParameters_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_BandParameters_v1430_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MIMO-CA-ParametersPerBoBC-v1430.h"
#include "UL-256QAM-perCC-Info-r14.h"
#include "SRS-CapabilityPerBandPair-r14.h"

#endif	/* _BandParameters_v1430_H_ */
#include <asn_internal.h>
