/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PhyLayerParameters_v920_H_
#define	_PhyLayerParameters_v920_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhyLayerParameters_v920__enhancedDualLayerFDD_r9 {
	PhyLayerParameters_v920__enhancedDualLayerFDD_r9_supported	= 0
} e_PhyLayerParameters_v920__enhancedDualLayerFDD_r9;
typedef enum PhyLayerParameters_v920__enhancedDualLayerTDD_r9 {
	PhyLayerParameters_v920__enhancedDualLayerTDD_r9_supported	= 0
} e_PhyLayerParameters_v920__enhancedDualLayerTDD_r9;

/* PhyLayerParameters-v920 */
typedef struct PhyLayerParameters_v920 {
	long	*enhancedDualLayerFDD_r9	/* OPTIONAL */;
	long	*enhancedDualLayerTDD_r9	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhyLayerParameters_v920_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_enhancedDualLayerFDD_r9_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_enhancedDualLayerTDD_r9_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_v920;
extern asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_v920_specs_1;
extern asn_TYPE_member_t asn_MBR_PhyLayerParameters_v920_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PhyLayerParameters_v920_H_ */
#include <asn_internal.h>
