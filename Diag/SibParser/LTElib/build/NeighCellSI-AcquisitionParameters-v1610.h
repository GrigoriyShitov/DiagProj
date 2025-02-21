/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_NeighCellSI_AcquisitionParameters_v1610_H_
#define	_NeighCellSI_AcquisitionParameters_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NeighCellSI_AcquisitionParameters_v1610__eutra_SI_AcquisitionForHO_ENDC_r16 {
	NeighCellSI_AcquisitionParameters_v1610__eutra_SI_AcquisitionForHO_ENDC_r16_supported	= 0
} e_NeighCellSI_AcquisitionParameters_v1610__eutra_SI_AcquisitionForHO_ENDC_r16;
typedef enum NeighCellSI_AcquisitionParameters_v1610__nr_AutonomousGaps_ENDC_FR1_r16 {
	NeighCellSI_AcquisitionParameters_v1610__nr_AutonomousGaps_ENDC_FR1_r16_supported	= 0
} e_NeighCellSI_AcquisitionParameters_v1610__nr_AutonomousGaps_ENDC_FR1_r16;
typedef enum NeighCellSI_AcquisitionParameters_v1610__nr_AutonomousGaps_ENDC_FR2_r16 {
	NeighCellSI_AcquisitionParameters_v1610__nr_AutonomousGaps_ENDC_FR2_r16_supported	= 0
} e_NeighCellSI_AcquisitionParameters_v1610__nr_AutonomousGaps_ENDC_FR2_r16;
typedef enum NeighCellSI_AcquisitionParameters_v1610__nr_AutonomousGaps_FR1_r16 {
	NeighCellSI_AcquisitionParameters_v1610__nr_AutonomousGaps_FR1_r16_supported	= 0
} e_NeighCellSI_AcquisitionParameters_v1610__nr_AutonomousGaps_FR1_r16;
typedef enum NeighCellSI_AcquisitionParameters_v1610__nr_AutonomousGaps_FR2_r16 {
	NeighCellSI_AcquisitionParameters_v1610__nr_AutonomousGaps_FR2_r16_supported	= 0
} e_NeighCellSI_AcquisitionParameters_v1610__nr_AutonomousGaps_FR2_r16;

/* NeighCellSI-AcquisitionParameters-v1610 */
typedef struct NeighCellSI_AcquisitionParameters_v1610 {
	long	*eutra_SI_AcquisitionForHO_ENDC_r16	/* OPTIONAL */;
	long	*nr_AutonomousGaps_ENDC_FR1_r16	/* OPTIONAL */;
	long	*nr_AutonomousGaps_ENDC_FR2_r16	/* OPTIONAL */;
	long	*nr_AutonomousGaps_FR1_r16	/* OPTIONAL */;
	long	*nr_AutonomousGaps_FR2_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighCellSI_AcquisitionParameters_v1610_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_eutra_SI_AcquisitionForHO_ENDC_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nr_AutonomousGaps_ENDC_FR1_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nr_AutonomousGaps_ENDC_FR2_r16_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nr_AutonomousGaps_FR1_r16_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nr_AutonomousGaps_FR2_r16_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NeighCellSI_AcquisitionParameters_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_NeighCellSI_AcquisitionParameters_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_NeighCellSI_AcquisitionParameters_v1610_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _NeighCellSI_AcquisitionParameters_v1610_H_ */
#include <asn_internal.h>
