/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MultiModeRAT_Capability_vb50ext_H_
#define	_MultiModeRAT_Capability_vb50ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MultiModeRAT_Capability_vb50ext__supportOfEUTRAFDDMeasurementReportingInCELLFACH {
	MultiModeRAT_Capability_vb50ext__supportOfEUTRAFDDMeasurementReportingInCELLFACH_doesSupportOfEUTRAFDDMeasurementReportingInCELLFACH	= 0
} e_MultiModeRAT_Capability_vb50ext__supportOfEUTRAFDDMeasurementReportingInCELLFACH;
typedef enum MultiModeRAT_Capability_vb50ext__supportOfEUTRATDDMeasurementReportingInCELLFACH {
	MultiModeRAT_Capability_vb50ext__supportOfEUTRATDDMeasurementReportingInCELLFACH_doesSupportOfEUTRATDDMeasurementReportingInCELLFACH	= 0
} e_MultiModeRAT_Capability_vb50ext__supportOfEUTRATDDMeasurementReportingInCELLFACH;

/* MultiModeRAT-Capability-vb50ext */
typedef struct MultiModeRAT_Capability_vb50ext {
	long	*supportOfEUTRAFDDMeasurementReportingInCELLFACH	/* OPTIONAL */;
	long	*supportOfEUTRATDDMeasurementReportingInCELLFACH	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MultiModeRAT_Capability_vb50ext_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfEUTRAFDDMeasurementReportingInCELLFACH_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfEUTRATDDMeasurementReportingInCELLFACH_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MultiModeRAT_Capability_vb50ext;
extern asn_SEQUENCE_specifics_t asn_SPC_MultiModeRAT_Capability_vb50ext_specs_1;
extern asn_TYPE_member_t asn_MBR_MultiModeRAT_Capability_vb50ext_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MultiModeRAT_Capability_vb50ext_H_ */
#include <asn_internal.h>
