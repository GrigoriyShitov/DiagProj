/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "PosSystemInformation-r15-IEs.h"

static int
memb_posSIB_TypeAndInfo_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 32)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_Member_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_Member_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  5,  5,  0,  26 }	/* (0..26,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_posSIB_TypeAndInfo_r15_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_type_posSIB_TypeAndInfo_r15_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_posSIB_TypeAndInfo_r15_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_memb_posSIB_TypeAndInfo_r15_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Member_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib1_1_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-1-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib1_2_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-2-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib1_3_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-3-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib1_4_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-4-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib1_5_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-5-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib1_6_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-6-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib1_7_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-7-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_1_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-1-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_2_r15),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-2-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_3_r15),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-3-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_4_r15),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-4-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_5_r15),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-5-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_6_r15),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-6-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_7_r15),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-7-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_8_r15),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-8-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_9_r15),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-9-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_10_r15),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-10-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_11_r15),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-11-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_12_r15),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-12-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_13_r15),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-13-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_14_r15),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-14-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_15_r15),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-15-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_16_r15),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-16-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_17_r15),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-17-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_18_r15),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-18-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_19_r15),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-19-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib3_1_r15),
		(ASN_TAG_CLASS_CONTEXT | (26 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib3-1-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib1_8_v1610),
		(ASN_TAG_CLASS_CONTEXT | (27 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-8-v1610"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_20_v1610),
		(ASN_TAG_CLASS_CONTEXT | (28 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-20-v1610"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_21_v1610),
		(ASN_TAG_CLASS_CONTEXT | (29 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-21-v1610"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_22_v1610),
		(ASN_TAG_CLASS_CONTEXT | (30 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-22-v1610"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_23_v1610),
		(ASN_TAG_CLASS_CONTEXT | (31 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-23-v1610"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_24_v1610),
		(ASN_TAG_CLASS_CONTEXT | (32 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-24-v1610"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_25_v1610),
		(ASN_TAG_CLASS_CONTEXT | (33 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-25-v1610"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib4_1_v1610),
		(ASN_TAG_CLASS_CONTEXT | (34 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib4-1-v1610"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib5_1_v1610),
		(ASN_TAG_CLASS_CONTEXT | (35 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib5-1-v1610"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib1_9_v1700),
		(ASN_TAG_CLASS_CONTEXT | (36 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-9-v1700"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib1_10_v1700),
		(ASN_TAG_CLASS_CONTEXT | (37 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-10-v1700"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_17a_v1770),
		(ASN_TAG_CLASS_CONTEXT | (38 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-17a-v1770"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_18a_v1770),
		(ASN_TAG_CLASS_CONTEXT | (39 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-18a-v1770"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_20a_v1770),
		(ASN_TAG_CLASS_CONTEXT | (40 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-20a-v1770"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib1_11_v1800),
		(ASN_TAG_CLASS_CONTEXT | (41 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-11-v1800"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib1_12_v1800),
		(ASN_TAG_CLASS_CONTEXT | (42 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-12-v1800"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_26_v1800),
		(ASN_TAG_CLASS_CONTEXT | (43 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-26-v1800"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, choice.posSib2_27_v1800),
		(ASN_TAG_CLASS_CONTEXT | (44 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockPos_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-27-v1800"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* posSib1-1-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* posSib1-2-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* posSib1-3-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* posSib1-4-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* posSib1-5-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* posSib1-6-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* posSib1-7-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* posSib2-1-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* posSib2-2-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* posSib2-3-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* posSib2-4-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* posSib2-5-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* posSib2-6-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* posSib2-7-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* posSib2-8-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* posSib2-9-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* posSib2-10-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* posSib2-11-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* posSib2-12-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* posSib2-13-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* posSib2-14-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* posSib2-15-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 }, /* posSib2-16-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 23, 0, 0 }, /* posSib2-17-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 24, 0, 0 }, /* posSib2-18-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 25, 0, 0 }, /* posSib2-19-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 26, 0, 0 }, /* posSib3-1-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 27, 0, 0 }, /* posSib1-8-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (28 << 2)), 28, 0, 0 }, /* posSib2-20-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (29 << 2)), 29, 0, 0 }, /* posSib2-21-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (30 << 2)), 30, 0, 0 }, /* posSib2-22-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (31 << 2)), 31, 0, 0 }, /* posSib2-23-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (32 << 2)), 32, 0, 0 }, /* posSib2-24-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (33 << 2)), 33, 0, 0 }, /* posSib2-25-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (34 << 2)), 34, 0, 0 }, /* posSib4-1-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (35 << 2)), 35, 0, 0 }, /* posSib5-1-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (36 << 2)), 36, 0, 0 }, /* posSib1-9-v1700 */
    { (ASN_TAG_CLASS_CONTEXT | (37 << 2)), 37, 0, 0 }, /* posSib1-10-v1700 */
    { (ASN_TAG_CLASS_CONTEXT | (38 << 2)), 38, 0, 0 }, /* posSib2-17a-v1770 */
    { (ASN_TAG_CLASS_CONTEXT | (39 << 2)), 39, 0, 0 }, /* posSib2-18a-v1770 */
    { (ASN_TAG_CLASS_CONTEXT | (40 << 2)), 40, 0, 0 }, /* posSib2-20a-v1770 */
    { (ASN_TAG_CLASS_CONTEXT | (41 << 2)), 41, 0, 0 }, /* posSib1-11-v1800 */
    { (ASN_TAG_CLASS_CONTEXT | (42 << 2)), 42, 0, 0 }, /* posSib1-12-v1800 */
    { (ASN_TAG_CLASS_CONTEXT | (43 << 2)), 43, 0, 0 }, /* posSib2-26-v1800 */
    { (ASN_TAG_CLASS_CONTEXT | (44 << 2)), 44, 0, 0 } /* posSib2-27-v1800 */
};
static asn_CHOICE_specifics_t asn_SPC_Member_specs_3 = {
	sizeof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member),
	offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, _asn_ctx),
	offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member, present),
	sizeof(((struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member *)0)->present),
	asn_MAP_Member_tag2el_3,
	45,	/* Count of tags in the map */
	0, 0,
	27	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_3 = {
	"CHOICE",
	"CHOICE",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_Member_constr_3, &asn_PER_type_Member_constr_3, CHOICE_constraint },
	asn_MBR_Member_3,
	45,	/* Elements count */
	&asn_SPC_Member_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_posSIB_TypeAndInfo_r15_2[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Member_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_posSIB_TypeAndInfo_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_posSIB_TypeAndInfo_r15_specs_2 = {
	sizeof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15),
	offsetof(struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_posSIB_TypeAndInfo_r15_2 = {
	"posSIB-TypeAndInfo-r15",
	"posSIB-TypeAndInfo-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_posSIB_TypeAndInfo_r15_tags_2,
	sizeof(asn_DEF_posSIB_TypeAndInfo_r15_tags_2)
		/sizeof(asn_DEF_posSIB_TypeAndInfo_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_posSIB_TypeAndInfo_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_posSIB_TypeAndInfo_r15_tags_2)
		/sizeof(asn_DEF_posSIB_TypeAndInfo_r15_tags_2[0]), /* 2 */
	{ &asn_OER_type_posSIB_TypeAndInfo_r15_constr_2, &asn_PER_type_posSIB_TypeAndInfo_r15_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_posSIB_TypeAndInfo_r15_2,
	1,	/* Single element */
	&asn_SPC_posSIB_TypeAndInfo_r15_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_51[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_51 = {
	sizeof(struct PosSystemInformation_r15_IEs__nonCriticalExtension),
	offsetof(struct PosSystemInformation_r15_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_51 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_51,
	sizeof(asn_DEF_nonCriticalExtension_tags_51)
		/sizeof(asn_DEF_nonCriticalExtension_tags_51[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_51,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_51)
		/sizeof(asn_DEF_nonCriticalExtension_tags_51[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_51	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PosSystemInformation_r15_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PosSystemInformation_r15_IEs, posSIB_TypeAndInfo_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_posSIB_TypeAndInfo_r15_2,
		0,
		{ &asn_OER_memb_posSIB_TypeAndInfo_r15_constr_2, &asn_PER_memb_posSIB_TypeAndInfo_r15_constr_2,  memb_posSIB_TypeAndInfo_r15_constraint_1 },
		0, 0, /* No default value */
		"posSIB-TypeAndInfo-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct PosSystemInformation_r15_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct PosSystemInformation_r15_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_51,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_PosSystemInformation_r15_IEs_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_PosSystemInformation_r15_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PosSystemInformation_r15_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* posSIB-TypeAndInfo-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_PosSystemInformation_r15_IEs_specs_1 = {
	sizeof(struct PosSystemInformation_r15_IEs),
	offsetof(struct PosSystemInformation_r15_IEs, _asn_ctx),
	asn_MAP_PosSystemInformation_r15_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PosSystemInformation_r15_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PosSystemInformation_r15_IEs = {
	"PosSystemInformation-r15-IEs",
	"PosSystemInformation-r15-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_PosSystemInformation_r15_IEs_tags_1,
	sizeof(asn_DEF_PosSystemInformation_r15_IEs_tags_1)
		/sizeof(asn_DEF_PosSystemInformation_r15_IEs_tags_1[0]), /* 1 */
	asn_DEF_PosSystemInformation_r15_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_PosSystemInformation_r15_IEs_tags_1)
		/sizeof(asn_DEF_PosSystemInformation_r15_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PosSystemInformation_r15_IEs_1,
	3,	/* Elements count */
	&asn_SPC_PosSystemInformation_r15_IEs_specs_1	/* Additional specs */
};

