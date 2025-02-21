/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PhysicalChannelCapability_vf10ext_H_
#define	_PhysicalChannelCapability_vf10ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DL_PhysChCapabilityFDD_vf10ext;

/* PhysicalChannelCapability-vf10ext */
typedef struct PhysicalChannelCapability_vf10ext {
	struct PhysicalChannelCapability_vf10ext__fddPhysChCapability {
		struct DL_PhysChCapabilityFDD_vf10ext	*downlinkPhysChCapability	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} fddPhysChCapability;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalChannelCapability_vf10ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalChannelCapability_vf10ext;
extern asn_SEQUENCE_specifics_t asn_SPC_PhysicalChannelCapability_vf10ext_specs_1;
extern asn_TYPE_member_t asn_MBR_PhysicalChannelCapability_vf10ext_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DL-PhysChCapabilityFDD-vf10ext.h"

#endif	/* _PhysicalChannelCapability_vf10ext_H_ */
#include <asn_internal.h>
