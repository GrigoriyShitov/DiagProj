/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SystemInformationBlockType21_r14_H_
#define	_SystemInformationBlockType21_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_V2X_ConfigCommon_r14;
struct SL_NR_AnchorCarrierFreqList_r16;
struct SL_A2X_ConfigCommon_r18;

/* SystemInformationBlockType21-r14 */
typedef struct SystemInformationBlockType21_r14 {
	struct SL_V2X_ConfigCommon_r14	*sl_V2X_ConfigCommon_r14	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SL_NR_AnchorCarrierFreqList_r16	*anchorCarrierFreqListNR_r16	/* OPTIONAL */;
	struct SL_A2X_ConfigCommon_r18	*sl_A2X_ConfigCommon_r18	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType21_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType21_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType21_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType21_r14_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-V2X-ConfigCommon-r14.h"
#include "SL-NR-AnchorCarrierFreqList-r16.h"
#include "SL-A2X-ConfigCommon-r18.h"

#endif	/* _SystemInformationBlockType21_r14_H_ */
#include <asn_internal.h>
