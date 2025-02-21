/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_EUTRA_CapabilityAddXDD_Mode_v1060_H_
#define	_UE_EUTRA_CapabilityAddXDD_Mode_v1060_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters_v1020;
struct IRAT_ParametersCDMA2000_1XRTT_v1020;
struct IRAT_ParametersUTRA_TDD_v1020;
struct OTDOA_PositioningCapabilities_r10;

/* UE-EUTRA-CapabilityAddXDD-Mode-v1060 */
typedef struct UE_EUTRA_CapabilityAddXDD_Mode_v1060 {
	struct PhyLayerParameters_v1020	*phyLayerParameters_v1060	/* OPTIONAL */;
	BIT_STRING_t	*featureGroupIndRel10_v1060	/* OPTIONAL */;
	struct IRAT_ParametersCDMA2000_1XRTT_v1020	*interRAT_ParametersCDMA2000_v1060	/* OPTIONAL */;
	struct IRAT_ParametersUTRA_TDD_v1020	*interRAT_ParametersUTRA_TDD_v1060	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct OTDOA_PositioningCapabilities_r10	*otdoa_PositioningCapabilities_r10	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_CapabilityAddXDD_Mode_v1060_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1060;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1060_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1060_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhyLayerParameters-v1020.h"
#include "IRAT-ParametersCDMA2000-1XRTT-v1020.h"
#include "IRAT-ParametersUTRA-TDD-v1020.h"
#include "OTDOA-PositioningCapabilities-r10.h"

#endif	/* _UE_EUTRA_CapabilityAddXDD_Mode_v1060_H_ */
#include <asn_internal.h>
