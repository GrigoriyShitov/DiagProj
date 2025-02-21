/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SIBSb_TypeAndTag_H_
#define	_SIBSb_TypeAndTag_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-ValueTag.h"
#include "CellValueTag.h"
#include <NULL.h>
#include "PredefinedConfigIdentityAndValueTag.h"
#include "SIBOccurrenceIdentityAndValueTag.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SIBSb_TypeAndTag_PR {
	SIBSb_TypeAndTag_PR_NOTHING,	/* No components present */
	SIBSb_TypeAndTag_PR_sysInfoType1,
	SIBSb_TypeAndTag_PR_sysInfoType2,
	SIBSb_TypeAndTag_PR_sysInfoType3,
	SIBSb_TypeAndTag_PR_sysInfoType4,
	SIBSb_TypeAndTag_PR_sysInfoType5,
	SIBSb_TypeAndTag_PR_sysInfoType6,
	SIBSb_TypeAndTag_PR_sysInfoType7,
	SIBSb_TypeAndTag_PR_dummy,
	SIBSb_TypeAndTag_PR_dummy2,
	SIBSb_TypeAndTag_PR_dummy3,
	SIBSb_TypeAndTag_PR_sysInfoType11,
	SIBSb_TypeAndTag_PR_sysInfoType12,
	SIBSb_TypeAndTag_PR_sysInfoType13,
	SIBSb_TypeAndTag_PR_sysInfoType13_1,
	SIBSb_TypeAndTag_PR_sysInfoType13_2,
	SIBSb_TypeAndTag_PR_sysInfoType13_3,
	SIBSb_TypeAndTag_PR_sysInfoType13_4,
	SIBSb_TypeAndTag_PR_sysInfoType14,
	SIBSb_TypeAndTag_PR_sysInfoType15,
	SIBSb_TypeAndTag_PR_sysInfoType16,
	SIBSb_TypeAndTag_PR_sysInfoType17,
	SIBSb_TypeAndTag_PR_sysInfoTypeSB1,
	SIBSb_TypeAndTag_PR_sysInfoTypeSB2,
	SIBSb_TypeAndTag_PR_sysInfoType15_1,
	SIBSb_TypeAndTag_PR_sysInfoType15_2,
	SIBSb_TypeAndTag_PR_sysInfoType15_3,
	SIBSb_TypeAndTag_PR_sysInfoType15_4,
	SIBSb_TypeAndTag_PR_sysInfoType18,
	SIBSb_TypeAndTag_PR_sysInfoType15_5,
	SIBSb_TypeAndTag_PR_sysInfoType5bis,
	SIBSb_TypeAndTag_PR_spare2,
	SIBSb_TypeAndTag_PR_spare1
} SIBSb_TypeAndTag_PR;

/* SIBSb-TypeAndTag */
typedef struct SIBSb_TypeAndTag {
	SIBSb_TypeAndTag_PR present;
	union SIBSb_TypeAndTag_u {
		PLMN_ValueTag_t	 sysInfoType1;
		CellValueTag_t	 sysInfoType2;
		CellValueTag_t	 sysInfoType3;
		CellValueTag_t	 sysInfoType4;
		CellValueTag_t	 sysInfoType5;
		CellValueTag_t	 sysInfoType6;
		NULL_t	 sysInfoType7;
		CellValueTag_t	 dummy;
		NULL_t	 dummy2;
		NULL_t	 dummy3;
		CellValueTag_t	 sysInfoType11;
		CellValueTag_t	 sysInfoType12;
		CellValueTag_t	 sysInfoType13;
		CellValueTag_t	 sysInfoType13_1;
		CellValueTag_t	 sysInfoType13_2;
		CellValueTag_t	 sysInfoType13_3;
		CellValueTag_t	 sysInfoType13_4;
		NULL_t	 sysInfoType14;
		CellValueTag_t	 sysInfoType15;
		PredefinedConfigIdentityAndValueTag_t	 sysInfoType16;
		NULL_t	 sysInfoType17;
		CellValueTag_t	 sysInfoTypeSB1;
		CellValueTag_t	 sysInfoTypeSB2;
		CellValueTag_t	 sysInfoType15_1;
		SIBOccurrenceIdentityAndValueTag_t	 sysInfoType15_2;
		SIBOccurrenceIdentityAndValueTag_t	 sysInfoType15_3;
		CellValueTag_t	 sysInfoType15_4;
		CellValueTag_t	 sysInfoType18;
		CellValueTag_t	 sysInfoType15_5;
		CellValueTag_t	 sysInfoType5bis;
		NULL_t	 spare2;
		NULL_t	 spare1;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIBSb_TypeAndTag_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIBSb_TypeAndTag;
extern asn_CHOICE_specifics_t asn_SPC_SIBSb_TypeAndTag_specs_1;
extern asn_TYPE_member_t asn_MBR_SIBSb_TypeAndTag_1[32];
extern asn_per_constraints_t asn_PER_type_SIBSb_TypeAndTag_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SIBSb_TypeAndTag_H_ */
#include <asn_internal.h>
