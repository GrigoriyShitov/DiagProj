/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CQI_ReportBoth_r11_H_
#define	_CQI_ReportBoth_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CSI_IM_ConfigToReleaseList_r11;
struct CSI_IM_ConfigToAddModList_r11;
struct CSI_ProcessToReleaseList_r11;
struct CSI_ProcessToAddModList_r11;

/* CQI-ReportBoth-r11 */
typedef struct CQI_ReportBoth_r11 {
	struct CSI_IM_ConfigToReleaseList_r11	*csi_IM_ConfigToReleaseList_r11	/* OPTIONAL */;
	struct CSI_IM_ConfigToAddModList_r11	*csi_IM_ConfigToAddModList_r11	/* OPTIONAL */;
	struct CSI_ProcessToReleaseList_r11	*csi_ProcessToReleaseList_r11	/* OPTIONAL */;
	struct CSI_ProcessToAddModList_r11	*csi_ProcessToAddModList_r11	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportBoth_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportBoth_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportBoth_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ReportBoth_r11_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CSI-IM-ConfigToReleaseList-r11.h"
#include "CSI-IM-ConfigToAddModList-r11.h"
#include "CSI-ProcessToReleaseList-r11.h"
#include "CSI-ProcessToAddModList-r11.h"

#endif	/* _CQI_ReportBoth_r11_H_ */
#include <asn_internal.h>
