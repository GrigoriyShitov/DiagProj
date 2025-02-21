/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PhyLayerParameters_v1330_H_
#define	_PhyLayerParameters_v1330_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhyLayerParameters_v1330__cch_InterfMitigation_RefRecTypeA_r13 {
	PhyLayerParameters_v1330__cch_InterfMitigation_RefRecTypeA_r13_supported	= 0
} e_PhyLayerParameters_v1330__cch_InterfMitigation_RefRecTypeA_r13;
typedef enum PhyLayerParameters_v1330__cch_InterfMitigation_RefRecTypeB_r13 {
	PhyLayerParameters_v1330__cch_InterfMitigation_RefRecTypeB_r13_supported	= 0
} e_PhyLayerParameters_v1330__cch_InterfMitigation_RefRecTypeB_r13;

/* PhyLayerParameters-v1330 */
typedef struct PhyLayerParameters_v1330 {
	long	*cch_InterfMitigation_RefRecTypeA_r13	/* OPTIONAL */;
	long	*cch_InterfMitigation_RefRecTypeB_r13	/* OPTIONAL */;
	long	*cch_InterfMitigation_MaxNumCCs_r13	/* OPTIONAL */;
	long	*crs_InterfMitigationTM1toTM9_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhyLayerParameters_v1330_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cch_InterfMitigation_RefRecTypeA_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cch_InterfMitigation_RefRecTypeB_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_v1330;
extern asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_v1330_specs_1;
extern asn_TYPE_member_t asn_MBR_PhyLayerParameters_v1330_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _PhyLayerParameters_v1330_H_ */
#include <asn_internal.h>
