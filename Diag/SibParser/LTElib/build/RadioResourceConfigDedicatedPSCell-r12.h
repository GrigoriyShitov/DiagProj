/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RadioResourceConfigDedicatedPSCell_r12_H_
#define	_RadioResourceConfigDedicatedPSCell_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhysicalConfigDedicated;
struct SPS_Config;
struct NAICS_AssistanceInfo_r12;
struct NeighCellsCRS_Info_r13;
struct SPS_Config_v1430;
struct SPS_Config_v1530;
struct NeighCellsCRS_Info_r15;
struct SPS_Config_v1540;

/* RadioResourceConfigDedicatedPSCell-r12 */
typedef struct RadioResourceConfigDedicatedPSCell_r12 {
	struct PhysicalConfigDedicated	*physicalConfigDedicatedPSCell_r12	/* OPTIONAL */;
	struct SPS_Config	*sps_Config_r12	/* OPTIONAL */;
	struct NAICS_AssistanceInfo_r12	*naics_Info_r12	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NeighCellsCRS_Info_r13	*neighCellsCRS_InfoPSCell_r13	/* OPTIONAL */;
	struct SPS_Config_v1430	*sps_Config_v1430	/* OPTIONAL */;
	struct SPS_Config_v1530	*sps_Config_v1530	/* OPTIONAL */;
	BOOLEAN_t	*crs_IntfMitigEnabled_r15	/* OPTIONAL */;
	struct NeighCellsCRS_Info_r15	*neighCellsCRS_Info_r15	/* OPTIONAL */;
	struct SPS_Config_v1540	*sps_Config_v1540	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigDedicatedPSCell_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicatedPSCell_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigDedicatedPSCell_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioResourceConfigDedicatedPSCell_r12_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhysicalConfigDedicated.h"
#include "SPS-Config.h"
#include "NAICS-AssistanceInfo-r12.h"
#include "NeighCellsCRS-Info-r13.h"
#include "SPS-Config-v1430.h"
#include "SPS-Config-v1530.h"
#include "NeighCellsCRS-Info-r15.h"
#include "SPS-Config-v1540.h"

#endif	/* _RadioResourceConfigDedicatedPSCell_r12_H_ */
#include <asn_internal.h>
