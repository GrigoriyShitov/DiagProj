/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UplinkPowerControlDedicated_v1250_H_
#define	_UplinkPowerControlDedicated_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include "Alpha-r12.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UplinkPowerControlDedicated_v1250__set2PowerControlParameter_PR {
	UplinkPowerControlDedicated_v1250__set2PowerControlParameter_PR_NOTHING,	/* No components present */
	UplinkPowerControlDedicated_v1250__set2PowerControlParameter_PR_release,
	UplinkPowerControlDedicated_v1250__set2PowerControlParameter_PR_setup
} UplinkPowerControlDedicated_v1250__set2PowerControlParameter_PR;

/* UplinkPowerControlDedicated-v1250 */
typedef struct UplinkPowerControlDedicated_v1250 {
	struct UplinkPowerControlDedicated_v1250__set2PowerControlParameter {
		UplinkPowerControlDedicated_v1250__set2PowerControlParameter_PR present;
		union UplinkPowerControlDedicated_v1250__set2PowerControlParameter_u {
			NULL_t	 release;
			struct UplinkPowerControlDedicated_v1250__set2PowerControlParameter__setup {
				BIT_STRING_t	 tpc_SubframeSet_r12;
				long	 p0_NominalPUSCH_SubframeSet2_r12;
				Alpha_r12_t	 alpha_SubframeSet2_r12;
				long	 p0_UE_PUSCH_SubframeSet2_r12;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} set2PowerControlParameter;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkPowerControlDedicated_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlDedicated_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlDedicated_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_UplinkPowerControlDedicated_v1250_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkPowerControlDedicated_v1250_H_ */
#include <asn_internal.h>
