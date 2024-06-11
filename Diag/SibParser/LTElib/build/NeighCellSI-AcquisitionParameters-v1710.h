/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_NeighCellSI_AcquisitionParameters_v1710_H_
#define	_NeighCellSI_AcquisitionParameters_v1710_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NeighCellSI_AcquisitionParameters_v1710__gNB_ID_Length_Reporting_NR_EN_DC_r17 {
	NeighCellSI_AcquisitionParameters_v1710__gNB_ID_Length_Reporting_NR_EN_DC_r17_supported	= 0
} e_NeighCellSI_AcquisitionParameters_v1710__gNB_ID_Length_Reporting_NR_EN_DC_r17;
typedef enum NeighCellSI_AcquisitionParameters_v1710__gNB_ID_Length_Reporting_NR_NoEN_DC_r17 {
	NeighCellSI_AcquisitionParameters_v1710__gNB_ID_Length_Reporting_NR_NoEN_DC_r17_supported	= 0
} e_NeighCellSI_AcquisitionParameters_v1710__gNB_ID_Length_Reporting_NR_NoEN_DC_r17;

/* NeighCellSI-AcquisitionParameters-v1710 */
typedef struct NeighCellSI_AcquisitionParameters_v1710 {
	long	*gNB_ID_Length_Reporting_NR_EN_DC_r17	/* OPTIONAL */;
	long	*gNB_ID_Length_Reporting_NR_NoEN_DC_r17	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighCellSI_AcquisitionParameters_v1710_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_gNB_ID_Length_Reporting_NR_EN_DC_r17_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_gNB_ID_Length_Reporting_NR_NoEN_DC_r17_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NeighCellSI_AcquisitionParameters_v1710;
extern asn_SEQUENCE_specifics_t asn_SPC_NeighCellSI_AcquisitionParameters_v1710_specs_1;
extern asn_TYPE_member_t asn_MBR_NeighCellSI_AcquisitionParameters_v1710_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NeighCellSI_AcquisitionParameters_v1710_H_ */
#include <asn_internal.h>
