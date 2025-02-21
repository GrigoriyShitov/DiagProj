/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_DL_InformationPerRL_H_
#define	_DL_InformationPerRL_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PrimaryCCPCH-Info.h"
#include "PrimaryCPICH-Info.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_InformationPerRL__modeSpecificInfo_PR {
	DL_InformationPerRL__modeSpecificInfo_PR_NOTHING,	/* No components present */
	DL_InformationPerRL__modeSpecificInfo_PR_fdd,
	DL_InformationPerRL__modeSpecificInfo_PR_tdd
} DL_InformationPerRL__modeSpecificInfo_PR;

/* Forward declarations */
struct DL_DPCH_InfoPerRL;
struct SCCPCH_InfoForFACH;
struct PDSCH_SHO_DCH_Info;
struct PDSCH_CodeMapping;

/* DL-InformationPerRL */
typedef struct DL_InformationPerRL {
	struct DL_InformationPerRL__modeSpecificInfo {
		DL_InformationPerRL__modeSpecificInfo_PR present;
		union DL_InformationPerRL__modeSpecificInfo_u {
			struct DL_InformationPerRL__modeSpecificInfo__fdd {
				PrimaryCPICH_Info_t	 primaryCPICH_Info;
				struct PDSCH_SHO_DCH_Info	*dummy1	/* OPTIONAL */;
				struct PDSCH_CodeMapping	*dummy2	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			PrimaryCCPCH_Info_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	struct DL_DPCH_InfoPerRL	*dl_DPCH_InfoPerRL	/* OPTIONAL */;
	struct SCCPCH_InfoForFACH	*dummy	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_InformationPerRL_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_InformationPerRL;
extern asn_SEQUENCE_specifics_t asn_SPC_DL_InformationPerRL_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_InformationPerRL_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DL-DPCH-InfoPerRL.h"
#include "SCCPCH-InfoForFACH.h"
#include "PDSCH-SHO-DCH-Info.h"
#include "PDSCH-CodeMapping.h"

#endif	/* _DL_InformationPerRL_H_ */
#include <asn_internal.h>
