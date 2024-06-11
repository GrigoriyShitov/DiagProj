/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RF_Parameters_v1570_H_
#define	_RF_Parameters_v1570_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RF_Parameters_v1570__dl_1024QAM_ScalingFactor_r15 {
	RF_Parameters_v1570__dl_1024QAM_ScalingFactor_r15_v1	= 0,
	RF_Parameters_v1570__dl_1024QAM_ScalingFactor_r15_v1dot2	= 1,
	RF_Parameters_v1570__dl_1024QAM_ScalingFactor_r15_v1dot25	= 2
} e_RF_Parameters_v1570__dl_1024QAM_ScalingFactor_r15;

/* RF-Parameters-v1570 */
typedef struct RF_Parameters_v1570 {
	long	 dl_1024QAM_ScalingFactor_r15;
	long	 dl_1024QAM_TotalWeightedLayers_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_v1570_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_1024QAM_ScalingFactor_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1570;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v1570_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Parameters_v1570_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RF_Parameters_v1570_H_ */
#include <asn_internal.h>
