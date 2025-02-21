/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_ALM_GlonassAlmanacSet_H_
#define	_ALM_GlonassAlmanacSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GANSS-SAT-Info-Almanac-GLOkpList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ALM-GlonassAlmanacSet */
typedef struct ALM_GlonassAlmanacSet {
	GANSS_SAT_Info_Almanac_GLOkpList_t	 sat_info_GLOkpList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ALM_GlonassAlmanacSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ALM_GlonassAlmanacSet;
extern asn_SEQUENCE_specifics_t asn_SPC_ALM_GlonassAlmanacSet_specs_1;
extern asn_TYPE_member_t asn_MBR_ALM_GlonassAlmanacSet_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _ALM_GlonassAlmanacSet_H_ */
#include <asn_internal.h>
