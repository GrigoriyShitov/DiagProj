/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CSI_RS_ConfigNonPrecoded_r13_H_
#define	_CSI_RS_ConfigNonPrecoded_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "CSI-IM-ConfigId-r13.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSI_RS_ConfigNonPrecoded_r13__codebookConfigN1_r13 {
	CSI_RS_ConfigNonPrecoded_r13__codebookConfigN1_r13_n1	= 0,
	CSI_RS_ConfigNonPrecoded_r13__codebookConfigN1_r13_n2	= 1,
	CSI_RS_ConfigNonPrecoded_r13__codebookConfigN1_r13_n3	= 2,
	CSI_RS_ConfigNonPrecoded_r13__codebookConfigN1_r13_n4	= 3,
	CSI_RS_ConfigNonPrecoded_r13__codebookConfigN1_r13_n8	= 4
} e_CSI_RS_ConfigNonPrecoded_r13__codebookConfigN1_r13;
typedef enum CSI_RS_ConfigNonPrecoded_r13__codebookConfigN2_r13 {
	CSI_RS_ConfigNonPrecoded_r13__codebookConfigN2_r13_n1	= 0,
	CSI_RS_ConfigNonPrecoded_r13__codebookConfigN2_r13_n2	= 1,
	CSI_RS_ConfigNonPrecoded_r13__codebookConfigN2_r13_n3	= 2,
	CSI_RS_ConfigNonPrecoded_r13__codebookConfigN2_r13_n4	= 3,
	CSI_RS_ConfigNonPrecoded_r13__codebookConfigN2_r13_n8	= 4
} e_CSI_RS_ConfigNonPrecoded_r13__codebookConfigN2_r13;
typedef enum CSI_RS_ConfigNonPrecoded_r13__codebookOverSamplingRateConfig_O1_r13 {
	CSI_RS_ConfigNonPrecoded_r13__codebookOverSamplingRateConfig_O1_r13_n4	= 0,
	CSI_RS_ConfigNonPrecoded_r13__codebookOverSamplingRateConfig_O1_r13_n8	= 1
} e_CSI_RS_ConfigNonPrecoded_r13__codebookOverSamplingRateConfig_O1_r13;
typedef enum CSI_RS_ConfigNonPrecoded_r13__codebookOverSamplingRateConfig_O2_r13 {
	CSI_RS_ConfigNonPrecoded_r13__codebookOverSamplingRateConfig_O2_r13_n4	= 0,
	CSI_RS_ConfigNonPrecoded_r13__codebookOverSamplingRateConfig_O2_r13_n8	= 1
} e_CSI_RS_ConfigNonPrecoded_r13__codebookOverSamplingRateConfig_O2_r13;

/* Forward declarations */
struct P_C_AndCBSR_Pair_r13;
struct CSI_RS_ConfigNZP_EMIMO_r13;

/* CSI-RS-ConfigNonPrecoded-r13 */
typedef struct CSI_RS_ConfigNonPrecoded_r13 {
	struct P_C_AndCBSR_Pair_r13	*p_C_AndCBSRList_r13	/* OPTIONAL */;
	long	 codebookConfigN1_r13;
	long	 codebookConfigN2_r13;
	long	*codebookOverSamplingRateConfig_O1_r13	/* OPTIONAL */;
	long	*codebookOverSamplingRateConfig_O2_r13	/* OPTIONAL */;
	long	 codebookConfig_r13;
	struct CSI_RS_ConfigNonPrecoded_r13__csi_IM_ConfigIdList_r13 {
		A_SEQUENCE_OF(CSI_IM_ConfigId_r13_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_IM_ConfigIdList_r13;
	struct CSI_RS_ConfigNZP_EMIMO_r13	*csi_RS_ConfigNZP_EMIMO_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_RS_ConfigNonPrecoded_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_codebookConfigN1_r13_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_codebookConfigN2_r13_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_codebookOverSamplingRateConfig_O1_r13_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_codebookOverSamplingRateConfig_O2_r13_18;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CSI_RS_ConfigNonPrecoded_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_ConfigNonPrecoded_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_RS_ConfigNonPrecoded_r13_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "P-C-AndCBSR-Pair-r13.h"
#include "CSI-RS-ConfigNZP-EMIMO-r13.h"

#endif	/* _CSI_RS_ConfigNonPrecoded_r13_H_ */
#include <asn_internal.h>
