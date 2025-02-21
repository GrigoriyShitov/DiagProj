/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_RadioAccessCapability_v860ext_IEs_H_
#define	_UE_RadioAccessCapability_v860ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysicalChannelCapability-v860ext.h"
#include "MultiModeRAT-Capability-v860ext.h"
#include "UE-PositioningCapability-v860ext.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_RadioAccessCapability_v860ext_IEs__supportOfCommonEDCH {
	UE_RadioAccessCapability_v860ext_IEs__supportOfCommonEDCH_true	= 0
} e_UE_RadioAccessCapability_v860ext_IEs__supportOfCommonEDCH;
typedef enum UE_RadioAccessCapability_v860ext_IEs__supportOfMACiis {
	UE_RadioAccessCapability_v860ext_IEs__supportOfMACiis_true	= 0
} e_UE_RadioAccessCapability_v860ext_IEs__supportOfMACiis;
typedef enum UE_RadioAccessCapability_v860ext_IEs__supportOfSPSOperation {
	UE_RadioAccessCapability_v860ext_IEs__supportOfSPSOperation_true	= 0
} e_UE_RadioAccessCapability_v860ext_IEs__supportOfSPSOperation;
typedef enum UE_RadioAccessCapability_v860ext_IEs__supportOfControlChannelDRXOperation {
	UE_RadioAccessCapability_v860ext_IEs__supportOfControlChannelDRXOperation_true	= 0
} e_UE_RadioAccessCapability_v860ext_IEs__supportOfControlChannelDRXOperation;
typedef enum UE_RadioAccessCapability_v860ext_IEs__supportOfCSG {
	UE_RadioAccessCapability_v860ext_IEs__supportOfCSG_true	= 0
} e_UE_RadioAccessCapability_v860ext_IEs__supportOfCSG;

/* Forward declarations */
struct RF_Capability_v860ext;
struct MeasurementCapability_v860ext;
struct MeasurementCapabilityTDD;
struct UE_RadioAccessCapabBandFDDList3;

/* UE-RadioAccessCapability-v860ext-IEs */
typedef struct UE_RadioAccessCapability_v860ext_IEs {
	struct RF_Capability_v860ext	*rf_Capability	/* OPTIONAL */;
	PhysicalChannelCapability_v860ext_t	 physicalChannelCapability;
	MultiModeRAT_Capability_v860ext_t	 multiModeRAT_Capability;
	UE_PositioningCapability_v860ext_t	 ue_PositioningCapability;
	struct MeasurementCapability_v860ext	*measurementCapability	/* OPTIONAL */;
	struct MeasurementCapabilityTDD	*measurementCapabilityTDD	/* OPTIONAL */;
	long	*supportOfCommonEDCH	/* OPTIONAL */;
	long	*supportOfMACiis	/* OPTIONAL */;
	long	*supportOfSPSOperation	/* OPTIONAL */;
	long	*supportOfControlChannelDRXOperation	/* OPTIONAL */;
	long	*supportOfCSG	/* OPTIONAL */;
	struct UE_RadioAccessCapabBandFDDList3	*ue_RadioAccessCapabBandFDDList3	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_RadioAccessCapability_v860ext_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfCommonEDCH_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfMACiis_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfSPSOperation_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfControlChannelDRXOperation_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfCSG_16;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapability_v860ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_RadioAccessCapability_v860ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_RadioAccessCapability_v860ext_IEs_1[12];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RF-Capability-v860ext.h"
#include "MeasurementCapability-v860ext.h"
#include "MeasurementCapabilityTDD.h"
#include "UE-RadioAccessCapabBandFDDList3.h"

#endif	/* _UE_RadioAccessCapability_v860ext_IEs_H_ */
#include <asn_internal.h>
