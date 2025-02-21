/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PhysicalChannelCapability_v920ext_H_
#define	_PhysicalChannelCapability_v920ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-PhysChCapabilityFDD-v920ext.h"
#include "UL-PhysChCapabilityFDD-v920ext.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PhysicalChannelCapability-v920ext */
typedef struct PhysicalChannelCapability_v920ext {
	struct PhysicalChannelCapability_v920ext__fddPhysChCapability {
		DL_PhysChCapabilityFDD_v920ext_t	 downlinkPhysChCapability;
		UL_PhysChCapabilityFDD_v920ext_t	 uplinkPhysChCapability;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *fddPhysChCapability;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalChannelCapability_v920ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalChannelCapability_v920ext;
extern asn_SEQUENCE_specifics_t asn_SPC_PhysicalChannelCapability_v920ext_specs_1;
extern asn_TYPE_member_t asn_MBR_PhysicalChannelCapability_v920ext_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PhysicalChannelCapability_v920ext_H_ */
#include <asn_internal.h>
