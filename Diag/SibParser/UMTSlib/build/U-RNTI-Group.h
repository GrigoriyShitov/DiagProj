/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_U_RNTI_Group_H_
#define	_U_RNTI_Group_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum U_RNTI_Group_PR {
	U_RNTI_Group_PR_NOTHING,	/* No components present */
	U_RNTI_Group_PR_all,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b1,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b2,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b3,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b4,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b5,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b6,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b7,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b8,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b9,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b10,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b11,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b12,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b13,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b14,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b15,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b16,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b17,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b18,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b19,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b20,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b21,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b22,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b23,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b24,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b25,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b26,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b27,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b28,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b29,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b30,
	U_RNTI_Group_PR_u_RNTI_BitMaskIndex_b31
} U_RNTI_Group_PR;

/* U-RNTI-Group */
typedef struct U_RNTI_Group {
	U_RNTI_Group_PR present;
	union U_RNTI_Group_u {
		NULL_t	 all;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b1;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b2;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b3;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b4;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b5;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b6;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b7;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b8;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b9;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b10;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b11;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b12;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b13;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b14;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b15;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b16;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b17;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b18;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b19;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b20;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b21;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b22;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b23;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b24;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b25;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b26;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b27;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b28;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b29;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b30;
		BIT_STRING_t	 u_RNTI_BitMaskIndex_b31;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} U_RNTI_Group_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_U_RNTI_Group;
extern asn_CHOICE_specifics_t asn_SPC_U_RNTI_Group_specs_1;
extern asn_TYPE_member_t asn_MBR_U_RNTI_Group_1[32];
extern asn_per_constraints_t asn_PER_type_U_RNTI_Group_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _U_RNTI_Group_H_ */
#include <asn_internal.h>
