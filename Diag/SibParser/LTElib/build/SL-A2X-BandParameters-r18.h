/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SL_A2X_BandParameters_r18_H_
#define	_SL_A2X_BandParameters_r18_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicator-r11.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_A2X_BandParameters_r18__sl_A2X_Service_r18 {
	SL_A2X_BandParameters_r18__sl_A2X_Service_r18_brid	= 0,
	SL_A2X_BandParameters_r18__sl_A2X_Service_r18_daa	= 1,
	SL_A2X_BandParameters_r18__sl_A2X_Service_r18_bridAndDAA	= 2
} e_SL_A2X_BandParameters_r18__sl_A2X_Service_r18;

/* Forward declarations */
struct BandParametersTxA2X_r18;
struct BandParametersRxA2X_r18;

/* SL-A2X-BandParameters-r18 */
typedef struct SL_A2X_BandParameters_r18 {
	FreqBandIndicator_r11_t	 a2x_FreqBandEUTRA_r18;
	struct BandParametersTxA2X_r18	*a2x_BandParametersTxSL_r18	/* OPTIONAL */;
	struct BandParametersRxA2X_r18	*a2x_BandParametersRxSL_r18	/* OPTIONAL */;
	long	*sl_A2X_Service_r18	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_A2X_BandParameters_r18_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sl_A2X_Service_r18_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_A2X_BandParameters_r18;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_A2X_BandParameters_r18_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_A2X_BandParameters_r18_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandParametersTxA2X-r18.h"
#include "BandParametersRxA2X-r18.h"

#endif	/* _SL_A2X_BandParameters_r18_H_ */
#include <asn_internal.h>
