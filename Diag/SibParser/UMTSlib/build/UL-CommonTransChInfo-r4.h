/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UL_CommonTransChInfo_r4_H_
#define	_UL_CommonTransChInfo_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TFCS.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_CommonTransChInfo_r4__modeSpecificInfo_PR {
	UL_CommonTransChInfo_r4__modeSpecificInfo_PR_NOTHING,	/* No components present */
	UL_CommonTransChInfo_r4__modeSpecificInfo_PR_fdd,
	UL_CommonTransChInfo_r4__modeSpecificInfo_PR_tdd
} UL_CommonTransChInfo_r4__modeSpecificInfo_PR;

/* Forward declarations */
struct TFC_Subset;
struct TFCS;
struct TFC_SubsetList;
struct IndividualUL_CCTrCH_InfoList;

/* UL-CommonTransChInfo-r4 */
typedef struct UL_CommonTransChInfo_r4 {
	struct TFC_Subset	*tfc_Subset	/* OPTIONAL */;
	struct TFCS	*prach_TFCS	/* OPTIONAL */;
	struct UL_CommonTransChInfo_r4__modeSpecificInfo {
		UL_CommonTransChInfo_r4__modeSpecificInfo_PR present;
		union UL_CommonTransChInfo_r4__modeSpecificInfo_u {
			struct UL_CommonTransChInfo_r4__modeSpecificInfo__fdd {
				TFCS_t	 ul_TFCS;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct UL_CommonTransChInfo_r4__modeSpecificInfo__tdd {
				struct IndividualUL_CCTrCH_InfoList	*individualUL_CCTrCH_InfoList	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *modeSpecificInfo;
	struct TFC_SubsetList	*tfc_SubsetList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_CommonTransChInfo_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_CommonTransChInfo_r4;
extern asn_SEQUENCE_specifics_t asn_SPC_UL_CommonTransChInfo_r4_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_CommonTransChInfo_r4_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TFC-Subset.h"
#include "TFCS.h"
#include "TFC-SubsetList.h"
#include "IndividualUL-CCTrCH-InfoList.h"

#endif	/* _UL_CommonTransChInfo_r4_H_ */
#include <asn_internal.h>
