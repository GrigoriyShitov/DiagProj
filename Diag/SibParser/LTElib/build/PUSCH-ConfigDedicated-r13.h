/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PUSCH_ConfigDedicated_r13_H_
#define	_PUSCH_ConfigDedicated_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUSCH_ConfigDedicated_r13__groupHoppingDisabled_r13 {
	PUSCH_ConfigDedicated_r13__groupHoppingDisabled_r13_true	= 0
} e_PUSCH_ConfigDedicated_r13__groupHoppingDisabled_r13;
typedef enum PUSCH_ConfigDedicated_r13__dmrs_WithOCC_Activated_r13 {
	PUSCH_ConfigDedicated_r13__dmrs_WithOCC_Activated_r13_true	= 0
} e_PUSCH_ConfigDedicated_r13__dmrs_WithOCC_Activated_r13;
typedef enum PUSCH_ConfigDedicated_r13__pusch_DMRS_r11_PR {
	PUSCH_ConfigDedicated_r13__pusch_DMRS_r11_PR_NOTHING,	/* No components present */
	PUSCH_ConfigDedicated_r13__pusch_DMRS_r11_PR_release,
	PUSCH_ConfigDedicated_r13__pusch_DMRS_r11_PR_setup
} PUSCH_ConfigDedicated_r13__pusch_DMRS_r11_PR;
typedef enum PUSCH_ConfigDedicated_r13__uciOnPUSCH_PR {
	PUSCH_ConfigDedicated_r13__uciOnPUSCH_PR_NOTHING,	/* No components present */
	PUSCH_ConfigDedicated_r13__uciOnPUSCH_PR_release,
	PUSCH_ConfigDedicated_r13__uciOnPUSCH_PR_setup
} PUSCH_ConfigDedicated_r13__uciOnPUSCH_PR;
typedef enum PUSCH_ConfigDedicated_r13__pusch_HoppingConfig_r13 {
	PUSCH_ConfigDedicated_r13__pusch_HoppingConfig_r13_on	= 0
} e_PUSCH_ConfigDedicated_r13__pusch_HoppingConfig_r13;

/* PUSCH-ConfigDedicated-r13 */
typedef struct PUSCH_ConfigDedicated_r13 {
	long	 betaOffset_ACK_Index_r13;
	long	*betaOffset2_ACK_Index_r13	/* OPTIONAL */;
	long	 betaOffset_RI_Index_r13;
	long	 betaOffset_CQI_Index_r13;
	struct PUSCH_ConfigDedicated_r13__betaOffsetMC_r13 {
		long	 betaOffset_ACK_Index_MC_r13;
		long	*betaOffset2_ACK_Index_MC_r13	/* OPTIONAL */;
		long	 betaOffset_RI_Index_MC_r13;
		long	 betaOffset_CQI_Index_MC_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *betaOffsetMC_r13;
	long	*groupHoppingDisabled_r13	/* OPTIONAL */;
	long	*dmrs_WithOCC_Activated_r13	/* OPTIONAL */;
	struct PUSCH_ConfigDedicated_r13__pusch_DMRS_r11 {
		PUSCH_ConfigDedicated_r13__pusch_DMRS_r11_PR present;
		union PUSCH_ConfigDedicated_r13__pusch_DMRS_r11_u {
			NULL_t	 release;
			struct PUSCH_ConfigDedicated_r13__pusch_DMRS_r11__setup {
				long	 nPUSCH_Identity_r13;
				long	 nDMRS_CSH_Identity_r13;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pusch_DMRS_r11;
	struct PUSCH_ConfigDedicated_r13__uciOnPUSCH {
		PUSCH_ConfigDedicated_r13__uciOnPUSCH_PR present;
		union PUSCH_ConfigDedicated_r13__uciOnPUSCH_u {
			NULL_t	 release;
			struct PUSCH_ConfigDedicated_r13__uciOnPUSCH__setup {
				long	 betaOffset_ACK_Index_SubframeSet2_r13;
				long	*betaOffset2_ACK_Index_SubframeSet2_r13	/* OPTIONAL */;
				long	 betaOffset_RI_Index_SubframeSet2_r13;
				long	 betaOffset_CQI_Index_SubframeSet2_r13;
				struct PUSCH_ConfigDedicated_r13__uciOnPUSCH__setup__betaOffsetMC_r12 {
					long	 betaOffset_ACK_Index_MC_SubframeSet2_r13;
					long	*betaOffset2_ACK_Index_MC_SubframeSet2_r13	/* OPTIONAL */;
					long	 betaOffset_RI_Index_MC_SubframeSet2_r13;
					long	 betaOffset_CQI_Index_MC_SubframeSet2_r13;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *betaOffsetMC_r12;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uciOnPUSCH;
	long	*pusch_HoppingConfig_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_ConfigDedicated_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_groupHoppingDisabled_r13_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dmrs_WithOCC_Activated_r13_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pusch_HoppingConfig_r13_32;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigDedicated_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_PUSCH_ConfigDedicated_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_ConfigDedicated_r13_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _PUSCH_ConfigDedicated_r13_H_ */
#include <asn_internal.h>
