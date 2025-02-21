/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SIB_TypeAndTag_H_
#define	_SIB_TypeAndTag_H_


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
typedef enum SIB_TypeAndTag_PR {
	SIB_TypeAndTag_PR_NOTHING,	/* No components present */
	SIB_TypeAndTag_PR_sysInfoType1,
	SIB_TypeAndTag_PR_sysInfoType2,
	SIB_TypeAndTag_PR_sysInfoType3,
	SIB_TypeAndTag_PR_sysInfoType4,
	SIB_TypeAndTag_PR_sysInfoType5,
	SIB_TypeAndTag_PR_sysInfoType6,
	SIB_TypeAndTag_PR_sysInfoType7,
	SIB_TypeAndTag_PR_dummy,
	SIB_TypeAndTag_PR_dummy2,
	SIB_TypeAndTag_PR_dummy3,
	SIB_TypeAndTag_PR_sysInfoType11,
	SIB_TypeAndTag_PR_sysInfoType12,
	SIB_TypeAndTag_PR_sysInfoType13,
	SIB_TypeAndTag_PR_sysInfoType13_1,
	SIB_TypeAndTag_PR_sysInfoType13_2,
	SIB_TypeAndTag_PR_sysInfoType13_3,
	SIB_TypeAndTag_PR_sysInfoType13_4,
	SIB_TypeAndTag_PR_sysInfoType14,
	SIB_TypeAndTag_PR_sysInfoType15,
	SIB_TypeAndTag_PR_sysInfoType16,
	SIB_TypeAndTag_PR_sysInfoType17,
	SIB_TypeAndTag_PR_sysInfoType15_1,
	SIB_TypeAndTag_PR_sysInfoType15_2,
	SIB_TypeAndTag_PR_sysInfoType15_3,
	SIB_TypeAndTag_PR_sysInfoType15_4,
	SIB_TypeAndTag_PR_sysInfoType18,
	SIB_TypeAndTag_PR_sysInfoType15_5,
	SIB_TypeAndTag_PR_sysInfoType5bis,
	SIB_TypeAndTag_PR_spare4,
	SIB_TypeAndTag_PR_spare3,
	SIB_TypeAndTag_PR_spare2,
	SIB_TypeAndTag_PR_spare1
} SIB_TypeAndTag_PR;

/* SIB-TypeAndTag */
typedef struct SIB_TypeAndTag {
	SIB_TypeAndTag_PR present;
	union SIB_TypeAndTag_u {
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
		CellValueTag_t	 sysInfoType15_1;
		SIBOccurrenceIdentityAndValueTag_t	 sysInfoType15_2;
		SIBOccurrenceIdentityAndValueTag_t	 sysInfoType15_3;
		CellValueTag_t	 sysInfoType15_4;
		CellValueTag_t	 sysInfoType18;
		CellValueTag_t	 sysInfoType15_5;
		CellValueTag_t	 sysInfoType5bis;
		NULL_t	 spare4;
		NULL_t	 spare3;
		NULL_t	 spare2;
		NULL_t	 spare1;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB_TypeAndTag_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB_TypeAndTag;
extern asn_CHOICE_specifics_t asn_SPC_SIB_TypeAndTag_specs_1;
extern asn_TYPE_member_t asn_MBR_SIB_TypeAndTag_1[32];
extern asn_per_constraints_t asn_PER_type_SIB_TypeAndTag_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SIB_TypeAndTag_H_ */
#include <asn_internal.h>
