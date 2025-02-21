/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_EUTRA_CapabilityAddXDD_Mode_v1250_H_
#define	_UE_EUTRA_CapabilityAddXDD_Mode_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters_v1250;
struct MeasParameters_v1250;

/* UE-EUTRA-CapabilityAddXDD-Mode-v1250 */
typedef struct UE_EUTRA_CapabilityAddXDD_Mode_v1250 {
	struct PhyLayerParameters_v1250	*phyLayerParameters_v1250	/* OPTIONAL */;
	struct MeasParameters_v1250	*measParameters_v1250	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_CapabilityAddXDD_Mode_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1250_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhyLayerParameters-v1250.h"
#include "MeasParameters-v1250.h"

#endif	/* _UE_EUTRA_CapabilityAddXDD_Mode_v1250_H_ */
#include <asn_internal.h>
