/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PhysicalSharedChannelAllocation_v770ext_IEs_H_
#define	_PhysicalSharedChannelAllocation_v770ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UL_TimingAdvanceControl_r7;
struct PUSCH_CapacityAllocationInfo_r7;
struct PDSCH_CapacityAllocationInfo_r7;

/* PhysicalSharedChannelAllocation-v770ext-IEs */
typedef struct PhysicalSharedChannelAllocation_v770ext_IEs {
	struct UL_TimingAdvanceControl_r7	*ul_TimingAdvance	/* OPTIONAL */;
	struct PUSCH_CapacityAllocationInfo_r7	*pusch_CapacityAllocationInfo	/* OPTIONAL */;
	struct PDSCH_CapacityAllocationInfo_r7	*pdsch_CapacityAllocationInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalSharedChannelAllocation_v770ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalSharedChannelAllocation_v770ext_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_PhysicalSharedChannelAllocation_v770ext_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_PhysicalSharedChannelAllocation_v770ext_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UL-TimingAdvanceControl-r7.h"
#include "PUSCH-CapacityAllocationInfo-r7.h"
#include "PDSCH-CapacityAllocationInfo-r7.h"

#endif	/* _PhysicalSharedChannelAllocation_v770ext_IEs_H_ */
#include <asn_internal.h>
