/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_RadioAccessCapabilityComp2_vc50ext_H_
#define	_UE_RadioAccessCapabilityComp2_vc50ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_RadioAccessCapabilityComp2_vc50ext__supportofDsacAndPpacInCellDch {
	UE_RadioAccessCapabilityComp2_vc50ext__supportofDsacAndPpacInCellDch_true	= 0
} e_UE_RadioAccessCapabilityComp2_vc50ext__supportofDsacAndPpacInCellDch;
typedef enum UE_RadioAccessCapabilityComp2_vc50ext__supportforDCHEnhancements {
	UE_RadioAccessCapabilityComp2_vc50ext__supportforDCHEnhancements_basic	= 0,
	UE_RadioAccessCapabilityComp2_vc50ext__supportforDCHEnhancements_full	= 1
} e_UE_RadioAccessCapabilityComp2_vc50ext__supportforDCHEnhancements;
typedef enum UE_RadioAccessCapabilityComp2_vc50ext__simultaneousSupportforDCHEnhancementsAndCM {
	UE_RadioAccessCapabilityComp2_vc50ext__simultaneousSupportforDCHEnhancementsAndCM_true	= 0
} e_UE_RadioAccessCapabilityComp2_vc50ext__simultaneousSupportforDCHEnhancementsAndCM;
typedef enum UE_RadioAccessCapabilityComp2_vc50ext__simultaneousSupportforDCHEnhancementsAndDPCCHDiscntTx {
	UE_RadioAccessCapabilityComp2_vc50ext__simultaneousSupportforDCHEnhancementsAndDPCCHDiscntTx_true	= 0
} e_UE_RadioAccessCapabilityComp2_vc50ext__simultaneousSupportforDCHEnhancementsAndDPCCHDiscntTx;

/* UE-RadioAccessCapabilityComp2-vc50ext */
typedef struct UE_RadioAccessCapabilityComp2_vc50ext {
	long	*supportofDsacAndPpacInCellDch	/* OPTIONAL */;
	long	*supportforDCHEnhancements	/* OPTIONAL */;
	long	*simultaneousSupportforDCHEnhancementsAndCM	/* OPTIONAL */;
	long	*simultaneousSupportforDCHEnhancementsAndDPCCHDiscntTx	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_RadioAccessCapabilityComp2_vc50ext_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportofDsacAndPpacInCellDch_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportforDCHEnhancements_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_simultaneousSupportforDCHEnhancementsAndCM_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_simultaneousSupportforDCHEnhancementsAndDPCCHDiscntTx_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapabilityComp2_vc50ext;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_RadioAccessCapabilityComp2_vc50ext_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_RadioAccessCapabilityComp2_vc50ext_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_RadioAccessCapabilityComp2_vc50ext_H_ */
#include <asn_internal.h>
