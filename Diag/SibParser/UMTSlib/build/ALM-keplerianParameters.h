/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_ALM_keplerianParameters_H_
#define	_ALM_keplerianParameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "GANSS-SAT-Info-Almanac-KpList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ALM-keplerianParameters */
typedef struct ALM_keplerianParameters {
	long	 t_oa;
	long	 iod_a;
	GANSS_SAT_Info_Almanac_KpList_t	 sat_info_kpList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ALM_keplerianParameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ALM_keplerianParameters;
extern asn_SEQUENCE_specifics_t asn_SPC_ALM_keplerianParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_ALM_keplerianParameters_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ALM_keplerianParameters_H_ */
#include <asn_internal.h>
