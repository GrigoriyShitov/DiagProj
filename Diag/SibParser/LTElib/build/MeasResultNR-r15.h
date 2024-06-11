/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasResultNR_r15_H_
#define	_MeasResultNR_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RSRP-RangeNR-r15.h"
#include "RSRQ-RangeNR-r15.h"
#include "RS-SINR-RangeNR-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultNR-r15 */
typedef struct MeasResultNR_r15 {
	RSRP_RangeNR_r15_t	*rsrpResult_r15	/* OPTIONAL */;
	RSRQ_RangeNR_r15_t	*rsrqResult_r15	/* OPTIONAL */;
	RS_SINR_RangeNR_r15_t	*rs_sinr_Result_r15	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultNR_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultNR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultNR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultNR_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultNR_r15_H_ */
#include <asn_internal.h>
