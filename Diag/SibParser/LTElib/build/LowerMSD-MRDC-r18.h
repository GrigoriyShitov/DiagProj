/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_LowerMSD_MRDC_r18_H_
#define	_LowerMSD_MRDC_r18_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicatorNR-r15.h"
#include "FreqBandIndicator-r11.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MSD_Information_r18;

/* LowerMSD-MRDC-r18 */
typedef struct LowerMSD_MRDC_r18 {
	FreqBandIndicatorNR_r15_t	 aggressorband1_r18;
	FreqBandIndicator_r11_t	*aggressorband2_r18	/* OPTIONAL */;
	struct LowerMSD_MRDC_r18__msd_Information_r18 {
		A_SEQUENCE_OF(struct MSD_Information_r18) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} msd_Information_r18;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LowerMSD_MRDC_r18_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LowerMSD_MRDC_r18;
extern asn_SEQUENCE_specifics_t asn_SPC_LowerMSD_MRDC_r18_specs_1;
extern asn_TYPE_member_t asn_MBR_LowerMSD_MRDC_r18_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MSD-Information-r18.h"

#endif	/* _LowerMSD_MRDC_r18_H_ */
#include <asn_internal.h>
