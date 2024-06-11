/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PUSCH_ConfigDedicated_v1020_H_
#define	_PUSCH_ConfigDedicated_v1020_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUSCH_ConfigDedicated_v1020__groupHoppingDisabled_r10 {
	PUSCH_ConfigDedicated_v1020__groupHoppingDisabled_r10_true	= 0
} e_PUSCH_ConfigDedicated_v1020__groupHoppingDisabled_r10;
typedef enum PUSCH_ConfigDedicated_v1020__dmrs_WithOCC_Activated_r10 {
	PUSCH_ConfigDedicated_v1020__dmrs_WithOCC_Activated_r10_true	= 0
} e_PUSCH_ConfigDedicated_v1020__dmrs_WithOCC_Activated_r10;

/* PUSCH-ConfigDedicated-v1020 */
typedef struct PUSCH_ConfigDedicated_v1020 {
	struct PUSCH_ConfigDedicated_v1020__betaOffsetMC_r10 {
		long	 betaOffset_ACK_Index_MC_r10;
		long	 betaOffset_RI_Index_MC_r10;
		long	 betaOffset_CQI_Index_MC_r10;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *betaOffsetMC_r10;
	long	*groupHoppingDisabled_r10	/* OPTIONAL */;
	long	*dmrs_WithOCC_Activated_r10	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_ConfigDedicated_v1020_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_groupHoppingDisabled_r10_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dmrs_WithOCC_Activated_r10_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigDedicated_v1020;
extern asn_SEQUENCE_specifics_t asn_SPC_PUSCH_ConfigDedicated_v1020_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_ConfigDedicated_v1020_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PUSCH_ConfigDedicated_v1020_H_ */
#include <asn_internal.h>
