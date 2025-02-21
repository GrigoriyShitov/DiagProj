/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SatelliteInfoList_r17_H_
#define	_SatelliteInfoList_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SatelliteInfo_r17;

/* SatelliteInfoList-r17 */
typedef struct SatelliteInfoList_r17 {
	A_SEQUENCE_OF(struct SatelliteInfo_r17) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SatelliteInfoList_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SatelliteInfoList_r17;
extern asn_SET_OF_specifics_t asn_SPC_SatelliteInfoList_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_SatelliteInfoList_r17_1[1];
extern asn_per_constraints_t asn_PER_type_SatelliteInfoList_r17_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SatelliteInfo-r17.h"

#endif	/* _SatelliteInfoList_r17_H_ */
#include <asn_internal.h>
