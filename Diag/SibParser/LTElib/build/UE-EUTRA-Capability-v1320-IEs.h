/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_EUTRA_Capability_v1320_IEs_H_
#define	_UE_EUTRA_Capability_v1320_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CE_Parameters_v1320;
struct PhyLayerParameters_v1320;
struct RF_Parameters_v1320;
struct UE_EUTRA_CapabilityAddXDD_Mode_v1320;
struct UE_EUTRA_Capability_v1330_IEs;

/* UE-EUTRA-Capability-v1320-IEs */
typedef struct UE_EUTRA_Capability_v1320_IEs {
	struct CE_Parameters_v1320	*ce_Parameters_v1320	/* OPTIONAL */;
	struct PhyLayerParameters_v1320	*phyLayerParameters_v1320	/* OPTIONAL */;
	struct RF_Parameters_v1320	*rf_Parameters_v1320	/* OPTIONAL */;
	struct UE_EUTRA_CapabilityAddXDD_Mode_v1320	*fdd_Add_UE_EUTRA_Capabilities_v1320	/* OPTIONAL */;
	struct UE_EUTRA_CapabilityAddXDD_Mode_v1320	*tdd_Add_UE_EUTRA_Capabilities_v1320	/* OPTIONAL */;
	struct UE_EUTRA_Capability_v1330_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1320_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1320_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1320_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1320_IEs_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CE-Parameters-v1320.h"
#include "PhyLayerParameters-v1320.h"
#include "RF-Parameters-v1320.h"
#include "UE-EUTRA-CapabilityAddXDD-Mode-v1320.h"
#include "UE-EUTRA-Capability-v1330-IEs.h"

#endif	/* _UE_EUTRA_Capability_v1320_IEs_H_ */
#include <asn_internal.h>
