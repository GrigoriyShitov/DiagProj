/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SL_DiscConfigRelayUE_r13_H_
#define	_SL_DiscConfigRelayUE_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RSRP-RangeSL4-r13.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_DiscConfigRelayUE_r13__hystMax_r13 {
	SL_DiscConfigRelayUE_r13__hystMax_r13_dB0	= 0,
	SL_DiscConfigRelayUE_r13__hystMax_r13_dB3	= 1,
	SL_DiscConfigRelayUE_r13__hystMax_r13_dB6	= 2,
	SL_DiscConfigRelayUE_r13__hystMax_r13_dB9	= 3,
	SL_DiscConfigRelayUE_r13__hystMax_r13_dB12	= 4,
	SL_DiscConfigRelayUE_r13__hystMax_r13_dBinf	= 5
} e_SL_DiscConfigRelayUE_r13__hystMax_r13;
typedef enum SL_DiscConfigRelayUE_r13__hystMin_r13 {
	SL_DiscConfigRelayUE_r13__hystMin_r13_dB0	= 0,
	SL_DiscConfigRelayUE_r13__hystMin_r13_dB3	= 1,
	SL_DiscConfigRelayUE_r13__hystMin_r13_dB6	= 2,
	SL_DiscConfigRelayUE_r13__hystMin_r13_dB9	= 3,
	SL_DiscConfigRelayUE_r13__hystMin_r13_dB12	= 4
} e_SL_DiscConfigRelayUE_r13__hystMin_r13;

/* SL-DiscConfigRelayUE-r13 */
typedef struct SL_DiscConfigRelayUE_r13 {
	RSRP_RangeSL4_r13_t	*threshHigh_r13	/* OPTIONAL */;
	RSRP_RangeSL4_r13_t	*threshLow_r13	/* OPTIONAL */;
	long	*hystMax_r13	/* OPTIONAL */;
	long	*hystMin_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_DiscConfigRelayUE_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_hystMax_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_hystMin_r13_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_DiscConfigRelayUE_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_DiscConfigRelayUE_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_DiscConfigRelayUE_r13_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_DiscConfigRelayUE_r13_H_ */
#include <asn_internal.h>
