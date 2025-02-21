/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_Positioning_GANSS_AddOrbitModels_r12_H_
#define	_UE_Positioning_GANSS_AddOrbitModels_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NavModel_NAVKeplerianSet;
struct NavModel_CNAVKeplerianSet;
struct NavModel_GLONASSecef;
struct NavModel_SBASecef;
struct NavModel_BDSKeplerianSet;

/* UE-Positioning-GANSS-AddOrbitModels-r12 */
typedef struct UE_Positioning_GANSS_AddOrbitModels_r12 {
	struct NavModel_NAVKeplerianSet	*navKeplerianSet	/* OPTIONAL */;
	struct NavModel_CNAVKeplerianSet	*cnavKeplerianSet	/* OPTIONAL */;
	struct NavModel_GLONASSecef	*glonassECEF	/* OPTIONAL */;
	struct NavModel_SBASecef	*sbasECEF	/* OPTIONAL */;
	struct NavModel_BDSKeplerianSet	*bdsKeplerianSet	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GANSS_AddOrbitModels_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GANSS_AddOrbitModels_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_GANSS_AddOrbitModels_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_Positioning_GANSS_AddOrbitModels_r12_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NavModel-NAVKeplerianSet.h"
#include "NavModel-CNAVKeplerianSet.h"
#include "NavModel-GLONASSecef.h"
#include "NavModel-SBASecef.h"
#include "NavModel-BDSKeplerianSet.h"

#endif	/* _UE_Positioning_GANSS_AddOrbitModels_r12_H_ */
#include <asn_internal.h>
