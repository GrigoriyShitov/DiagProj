/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PUCCH_ConfigDedicated_v1020_H_
#define	_PUCCH_ConfigDedicated_v1020_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "PUCCH-Format3-Conf-r13.h"
#include <NULL.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUCCH_ConfigDedicated_v1020__pucch_Format_r10_PR {
	PUCCH_ConfigDedicated_v1020__pucch_Format_r10_PR_NOTHING,	/* No components present */
	PUCCH_ConfigDedicated_v1020__pucch_Format_r10_PR_format3_r10,
	PUCCH_ConfigDedicated_v1020__pucch_Format_r10_PR_channelSelection_r10
} PUCCH_ConfigDedicated_v1020__pucch_Format_r10_PR;
typedef enum PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10_PR {
	PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10_PR_NOTHING,	/* No components present */
	PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10_PR_release,
	PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10_PR_setup
} PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10_PR;
typedef enum PUCCH_ConfigDedicated_v1020__twoAntennaPortActivatedPUCCH_Format1a1b_r10 {
	PUCCH_ConfigDedicated_v1020__twoAntennaPortActivatedPUCCH_Format1a1b_r10_true	= 0
} e_PUCCH_ConfigDedicated_v1020__twoAntennaPortActivatedPUCCH_Format1a1b_r10;
typedef enum PUCCH_ConfigDedicated_v1020__simultaneousPUCCH_PUSCH_r10 {
	PUCCH_ConfigDedicated_v1020__simultaneousPUCCH_PUSCH_r10_true	= 0
} e_PUCCH_ConfigDedicated_v1020__simultaneousPUCCH_PUSCH_r10;

/* Forward declarations */
struct N1PUCCH_AN_CS_r10;

/* PUCCH-ConfigDedicated-v1020 */
typedef struct PUCCH_ConfigDedicated_v1020 {
	struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10 {
		PUCCH_ConfigDedicated_v1020__pucch_Format_r10_PR present;
		union PUCCH_ConfigDedicated_v1020__pucch_Format_r10_u {
			PUCCH_Format3_Conf_r13_t	 format3_r10;
			struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10 {
				struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10 {
					PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10_PR present;
					union PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10_u {
						NULL_t	 release;
						struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10__setup {
							struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10__setup__n1PUCCH_AN_CS_List_r10 {
								A_SEQUENCE_OF(struct N1PUCCH_AN_CS_r10) list;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} n1PUCCH_AN_CS_List_r10;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} setup;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *n1PUCCH_AN_CS_r10;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} channelSelection_r10;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pucch_Format_r10;
	long	*twoAntennaPortActivatedPUCCH_Format1a1b_r10	/* OPTIONAL */;
	long	*simultaneousPUCCH_PUSCH_r10	/* OPTIONAL */;
	long	*n1PUCCH_AN_RepP1_r10	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_ConfigDedicated_v1020_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_twoAntennaPortActivatedPUCCH_Format1a1b_r10_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_simultaneousPUCCH_PUSCH_r10_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_ConfigDedicated_v1020;
extern asn_SEQUENCE_specifics_t asn_SPC_PUCCH_ConfigDedicated_v1020_specs_1;
extern asn_TYPE_member_t asn_MBR_PUCCH_ConfigDedicated_v1020_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "N1PUCCH-AN-CS-r10.h"

#endif	/* _PUCCH_ConfigDedicated_v1020_H_ */
#include <asn_internal.h>
