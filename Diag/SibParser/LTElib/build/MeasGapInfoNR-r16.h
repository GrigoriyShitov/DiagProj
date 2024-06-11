/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasGapInfoNR_r16_H_
#define	_MeasGapInfoNR_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterRAT_BandListNR_r16;

/* MeasGapInfoNR-r16 */
typedef struct MeasGapInfoNR_r16 {
	struct InterRAT_BandListNR_r16	*interRAT_BandListNR_EN_DC_r16	/* OPTIONAL */;
	struct InterRAT_BandListNR_r16	*interRAT_BandListNR_SA_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasGapInfoNR_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasGapInfoNR_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasGapInfoNR_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasGapInfoNR_r16_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterRAT-BandListNR-r16.h"

#endif	/* _MeasGapInfoNR_r16_H_ */
#include <asn_internal.h>
