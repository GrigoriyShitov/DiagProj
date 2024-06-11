/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PUR_Parameters_r16_H_
#define	_PUR_Parameters_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUR_Parameters_r16__pur_CP_5GC_CE_ModeA_r16 {
	PUR_Parameters_r16__pur_CP_5GC_CE_ModeA_r16_supported	= 0
} e_PUR_Parameters_r16__pur_CP_5GC_CE_ModeA_r16;
typedef enum PUR_Parameters_r16__pur_CP_5GC_CE_ModeB_r16 {
	PUR_Parameters_r16__pur_CP_5GC_CE_ModeB_r16_supported	= 0
} e_PUR_Parameters_r16__pur_CP_5GC_CE_ModeB_r16;
typedef enum PUR_Parameters_r16__pur_UP_5GC_CE_ModeA_r16 {
	PUR_Parameters_r16__pur_UP_5GC_CE_ModeA_r16_supported	= 0
} e_PUR_Parameters_r16__pur_UP_5GC_CE_ModeA_r16;
typedef enum PUR_Parameters_r16__pur_UP_5GC_CE_ModeB_r16 {
	PUR_Parameters_r16__pur_UP_5GC_CE_ModeB_r16_supported	= 0
} e_PUR_Parameters_r16__pur_UP_5GC_CE_ModeB_r16;
typedef enum PUR_Parameters_r16__pur_CP_EPC_CE_ModeA_r16 {
	PUR_Parameters_r16__pur_CP_EPC_CE_ModeA_r16_supported	= 0
} e_PUR_Parameters_r16__pur_CP_EPC_CE_ModeA_r16;
typedef enum PUR_Parameters_r16__pur_CP_EPC_CE_ModeB_r16 {
	PUR_Parameters_r16__pur_CP_EPC_CE_ModeB_r16_supported	= 0
} e_PUR_Parameters_r16__pur_CP_EPC_CE_ModeB_r16;
typedef enum PUR_Parameters_r16__pur_UP_EPC_CE_ModeA_r16 {
	PUR_Parameters_r16__pur_UP_EPC_CE_ModeA_r16_supported	= 0
} e_PUR_Parameters_r16__pur_UP_EPC_CE_ModeA_r16;
typedef enum PUR_Parameters_r16__pur_UP_EPC_CE_ModeB_r16 {
	PUR_Parameters_r16__pur_UP_EPC_CE_ModeB_r16_supported	= 0
} e_PUR_Parameters_r16__pur_UP_EPC_CE_ModeB_r16;
typedef enum PUR_Parameters_r16__pur_CP_L1Ack_r16 {
	PUR_Parameters_r16__pur_CP_L1Ack_r16_supported	= 0
} e_PUR_Parameters_r16__pur_CP_L1Ack_r16;
typedef enum PUR_Parameters_r16__pur_FrequencyHopping_r16 {
	PUR_Parameters_r16__pur_FrequencyHopping_r16_supported	= 0
} e_PUR_Parameters_r16__pur_FrequencyHopping_r16;
typedef enum PUR_Parameters_r16__pur_PUSCH_NB_MaxTBS_r16 {
	PUR_Parameters_r16__pur_PUSCH_NB_MaxTBS_r16_supported	= 0
} e_PUR_Parameters_r16__pur_PUSCH_NB_MaxTBS_r16;
typedef enum PUR_Parameters_r16__pur_RSRP_Validation_r16 {
	PUR_Parameters_r16__pur_RSRP_Validation_r16_supported	= 0
} e_PUR_Parameters_r16__pur_RSRP_Validation_r16;
typedef enum PUR_Parameters_r16__pur_SubPRB_CE_ModeA_r16 {
	PUR_Parameters_r16__pur_SubPRB_CE_ModeA_r16_supported	= 0
} e_PUR_Parameters_r16__pur_SubPRB_CE_ModeA_r16;
typedef enum PUR_Parameters_r16__pur_SubPRB_CE_ModeB_r16 {
	PUR_Parameters_r16__pur_SubPRB_CE_ModeB_r16_supported	= 0
} e_PUR_Parameters_r16__pur_SubPRB_CE_ModeB_r16;

/* PUR-Parameters-r16 */
typedef struct PUR_Parameters_r16 {
	long	*pur_CP_5GC_CE_ModeA_r16	/* OPTIONAL */;
	long	*pur_CP_5GC_CE_ModeB_r16	/* OPTIONAL */;
	long	*pur_UP_5GC_CE_ModeA_r16	/* OPTIONAL */;
	long	*pur_UP_5GC_CE_ModeB_r16	/* OPTIONAL */;
	long	*pur_CP_EPC_CE_ModeA_r16	/* OPTIONAL */;
	long	*pur_CP_EPC_CE_ModeB_r16	/* OPTIONAL */;
	long	*pur_UP_EPC_CE_ModeA_r16	/* OPTIONAL */;
	long	*pur_UP_EPC_CE_ModeB_r16	/* OPTIONAL */;
	long	*pur_CP_L1Ack_r16	/* OPTIONAL */;
	long	*pur_FrequencyHopping_r16	/* OPTIONAL */;
	long	*pur_PUSCH_NB_MaxTBS_r16	/* OPTIONAL */;
	long	*pur_RSRP_Validation_r16	/* OPTIONAL */;
	long	*pur_SubPRB_CE_ModeA_r16	/* OPTIONAL */;
	long	*pur_SubPRB_CE_ModeB_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUR_Parameters_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_pur_CP_5GC_CE_ModeA_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pur_CP_5GC_CE_ModeB_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pur_UP_5GC_CE_ModeA_r16_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pur_UP_5GC_CE_ModeB_r16_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pur_CP_EPC_CE_ModeA_r16_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pur_CP_EPC_CE_ModeB_r16_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pur_UP_EPC_CE_ModeA_r16_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pur_UP_EPC_CE_ModeB_r16_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pur_CP_L1Ack_r16_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pur_FrequencyHopping_r16_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pur_PUSCH_NB_MaxTBS_r16_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pur_RSRP_Validation_r16_24;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pur_SubPRB_CE_ModeA_r16_26;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pur_SubPRB_CE_ModeB_r16_28;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUR_Parameters_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_PUR_Parameters_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_PUR_Parameters_r16_1[14];

#ifdef __cplusplus
}
#endif

#endif	/* _PUR_Parameters_r16_H_ */
#include <asn_internal.h>
