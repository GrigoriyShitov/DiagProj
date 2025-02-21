/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_RadioAccessCapabBandFDD6_H_
#define	_UE_RadioAccessCapabBandFDD6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioFrequencyBandFDD.h"
#include "RadioFrequencyBandFDD2.h"
#include "RadioFrequencyBandFDD3.h"
#include <NativeEnumerated.h>
#include "MeasurementCapabilityExt5.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_RadioAccessCapabBandFDD6__additionalSecondaryCells2 {
	UE_RadioAccessCapabBandFDD6__additionalSecondaryCells2_a3	= 0,
	UE_RadioAccessCapabBandFDD6__additionalSecondaryCells2_a4	= 1,
	UE_RadioAccessCapabBandFDD6__additionalSecondaryCells2_a5	= 2,
	UE_RadioAccessCapabBandFDD6__additionalSecondaryCells2_a6	= 3
} e_UE_RadioAccessCapabBandFDD6__additionalSecondaryCells2;
typedef enum UE_RadioAccessCapabBandFDD6__supportOfULCLTD {
	UE_RadioAccessCapabBandFDD6__supportOfULCLTD_true	= 0
} e_UE_RadioAccessCapabBandFDD6__supportOfULCLTD;
typedef enum UE_RadioAccessCapabBandFDD6__mimo4x4CapabilityBand {
	UE_RadioAccessCapabBandFDD6__mimo4x4CapabilityBand_true	= 0
} e_UE_RadioAccessCapabBandFDD6__mimo4x4CapabilityBand;
typedef enum UE_RadioAccessCapabBandFDD6__supportOfULMIMO {
	UE_RadioAccessCapabBandFDD6__supportOfULMIMO_true	= 0
} e_UE_RadioAccessCapabBandFDD6__supportOfULMIMO;
typedef enum UE_RadioAccessCapabBandFDD6__freqSpecificCompressedModeForNonContiguous {
	UE_RadioAccessCapabBandFDD6__freqSpecificCompressedModeForNonContiguous_true	= 0
} e_UE_RadioAccessCapabBandFDD6__freqSpecificCompressedModeForNonContiguous;

/* Forward declarations */
struct MultiflowPerBandCapability;

/* UE-RadioAccessCapabBandFDD6 */
typedef struct UE_RadioAccessCapabBandFDD6 {
	RadioFrequencyBandFDD_t	*radioFrequencyBandFDD	/* OPTIONAL */;
	RadioFrequencyBandFDD2_t	*radioFrequencyBandFDD2	/* OPTIONAL */;
	RadioFrequencyBandFDD3_t	*radioFrequencyBandFDD3	/* OPTIONAL */;
	long	*additionalSecondaryCells2	/* OPTIONAL */;
	long	*supportOfULCLTD	/* OPTIONAL */;
	struct MultiflowPerBandCapability	*multiflowCapability	/* OPTIONAL */;
	long	*mimo4x4CapabilityBand	/* OPTIONAL */;
	long	*supportOfULMIMO	/* OPTIONAL */;
	MeasurementCapabilityExt5_t	 measurementCapability5;
	long	*freqSpecificCompressedModeForNonContiguous	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_RadioAccessCapabBandFDD6_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_additionalSecondaryCells2_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfULCLTD_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mimo4x4CapabilityBand_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfULMIMO_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_freqSpecificCompressedModeForNonContiguous_18;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapabBandFDD6;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_RadioAccessCapabBandFDD6_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_RadioAccessCapabBandFDD6_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MultiflowPerBandCapability.h"

#endif	/* _UE_RadioAccessCapabBandFDD6_H_ */
#include <asn_internal.h>
