/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_RadioAccessCapabilityComp2_vb50ext_H_
#define	_UE_RadioAccessCapabilityComp2_vb50ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HSDSCH-physical-layer-category-ext6.h"
#include "HSDSCH-physical-layer-category-ext7.h"
#include "HSDSCH-physical-layer-category-ext8.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_RadioAccessCapabilityComp2_vb50ext__supportOfHSDPCCHPowerOffsetExtension {
	UE_RadioAccessCapabilityComp2_vb50ext__supportOfHSDPCCHPowerOffsetExtension_true	= 0
} e_UE_RadioAccessCapabilityComp2_vb50ext__supportOfHSDPCCHPowerOffsetExtension;

/* UE-RadioAccessCapabilityComp2-vb50ext */
typedef struct UE_RadioAccessCapabilityComp2_vb50ext {
	HSDSCH_physical_layer_category_ext6_t	*hsdsch_physical_layer_category_ext6	/* OPTIONAL */;
	HSDSCH_physical_layer_category_ext7_t	*hsdsch_physical_layer_category_ext7	/* OPTIONAL */;
	HSDSCH_physical_layer_category_ext8_t	*hsdsch_physical_layer_category_ext8	/* OPTIONAL */;
	long	*edch_PhysicalLayerCategory_extension3	/* OPTIONAL */;
	long	*supportOfHSDPCCHPowerOffsetExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_RadioAccessCapabilityComp2_vb50ext_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfHSDPCCHPowerOffsetExtension_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapabilityComp2_vb50ext;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_RadioAccessCapabilityComp2_vb50ext_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_RadioAccessCapabilityComp2_vb50ext_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_RadioAccessCapabilityComp2_vb50ext_H_ */
#include <asn_internal.h>
