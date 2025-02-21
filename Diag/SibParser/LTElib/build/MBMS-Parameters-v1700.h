/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MBMS_Parameters_v1700_H_
#define	_MBMS_Parameters_v1700_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBMS_SupportedBandInfo_v1700;

/* MBMS-Parameters-v1700 */
typedef struct MBMS_Parameters_v1700 {
	struct MBMS_Parameters_v1700__mbms_SupportedBandInfoList_v1700 {
		A_SEQUENCE_OF(struct MBMS_SupportedBandInfo_v1700) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mbms_SupportedBandInfoList_v1700;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_Parameters_v1700_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_Parameters_v1700;
extern asn_SEQUENCE_specifics_t asn_SPC_MBMS_Parameters_v1700_specs_1;
extern asn_TYPE_member_t asn_MBR_MBMS_Parameters_v1700_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBMS-SupportedBandInfo-v1700.h"

#endif	/* _MBMS_Parameters_v1700_H_ */
#include <asn_internal.h>
