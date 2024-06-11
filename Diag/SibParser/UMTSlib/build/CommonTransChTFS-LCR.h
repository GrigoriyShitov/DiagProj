/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_CommonTransChTFS_LCR_H_
#define	_CommonTransChTFS_LCR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SemistaticTF-Information.h"
#include "CommonDynamicTF-InfoList.h"
#include "CommonDynamicTF-InfoList-DynamicTTI.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CommonTransChTFS_LCR__tti_PR {
	CommonTransChTFS_LCR__tti_PR_NOTHING,	/* No components present */
	CommonTransChTFS_LCR__tti_PR_tti5,
	CommonTransChTFS_LCR__tti_PR_tti10,
	CommonTransChTFS_LCR__tti_PR_tti20,
	CommonTransChTFS_LCR__tti_PR_tti40,
	CommonTransChTFS_LCR__tti_PR_tti80,
	CommonTransChTFS_LCR__tti_PR_dynamic
} CommonTransChTFS_LCR__tti_PR;

/* CommonTransChTFS-LCR */
typedef struct CommonTransChTFS_LCR {
	struct CommonTransChTFS_LCR__tti {
		CommonTransChTFS_LCR__tti_PR present;
		union CommonTransChTFS_LCR__tti_u {
			CommonDynamicTF_InfoList_t	 tti5;
			CommonDynamicTF_InfoList_t	 tti10;
			CommonDynamicTF_InfoList_t	 tti20;
			CommonDynamicTF_InfoList_t	 tti40;
			CommonDynamicTF_InfoList_t	 tti80;
			CommonDynamicTF_InfoList_DynamicTTI_t	 dynamic;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} tti;
	SemistaticTF_Information_t	 semistaticTF_Information;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CommonTransChTFS_LCR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CommonTransChTFS_LCR;
extern asn_SEQUENCE_specifics_t asn_SPC_CommonTransChTFS_LCR_specs_1;
extern asn_TYPE_member_t asn_MBR_CommonTransChTFS_LCR_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CommonTransChTFS_LCR_H_ */
#include <asn_internal.h>
