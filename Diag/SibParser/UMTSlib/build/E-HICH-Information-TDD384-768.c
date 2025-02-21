/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "E-HICH-Information-TDD384-768.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_n_E_HICH_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 4 && value <= 44)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_tS_Number_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 14)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_modeSpecificInfo_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_burst_Type_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_burst_Type_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_midamble_Allocation_Mode_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_midamble_Allocation_Mode_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_n_E_HICH_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (4..44) */,
	-1};
static asn_per_constraints_t asn_PER_memb_n_E_HICH_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  4,  44 }	/* (4..44) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_tS_Number_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..14) */,
	-1};
static asn_per_constraints_t asn_PER_memb_tS_Number_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  14 }	/* (0..14) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_modeSpecificInfo_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E_HICH_Information_TDD384_768__modeSpecificInfo, choice.tdd384),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_TS_ChannelisationCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd384"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_HICH_Information_TDD384_768__modeSpecificInfo, choice.tdd768),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_TS_ChannelisationCode_VHCR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd768"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd384 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd768 */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_4 = {
	sizeof(struct E_HICH_Information_TDD384_768__modeSpecificInfo),
	offsetof(struct E_HICH_Information_TDD384_768__modeSpecificInfo, _asn_ctx),
	offsetof(struct E_HICH_Information_TDD384_768__modeSpecificInfo, present),
	sizeof(((struct E_HICH_Information_TDD384_768__modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_4 = {
	"modeSpecificInfo",
	"modeSpecificInfo",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_modeSpecificInfo_constr_4, &asn_PER_type_modeSpecificInfo_constr_4, CHOICE_constraint },
	asn_MBR_modeSpecificInfo_4,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_burst_Type_value2enum_7[] = {
	{ 0,	5,	"type1" },
	{ 1,	5,	"type2" }
};
static const unsigned int asn_MAP_burst_Type_enum2value_7[] = {
	0,	/* type1(0) */
	1	/* type2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_burst_Type_specs_7 = {
	asn_MAP_burst_Type_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_burst_Type_enum2value_7,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_burst_Type_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_burst_Type_7 = {
	"burst-Type",
	"burst-Type",
	&asn_OP_NativeEnumerated,
	asn_DEF_burst_Type_tags_7,
	sizeof(asn_DEF_burst_Type_tags_7)
		/sizeof(asn_DEF_burst_Type_tags_7[0]) - 1, /* 1 */
	asn_DEF_burst_Type_tags_7,	/* Same as above */
	sizeof(asn_DEF_burst_Type_tags_7)
		/sizeof(asn_DEF_burst_Type_tags_7[0]), /* 2 */
	{ &asn_OER_type_burst_Type_constr_7, &asn_PER_type_burst_Type_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_burst_Type_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_midamble_Allocation_Mode_value2enum_10[] = {
	{ 0,	7,	"default" },
	{ 1,	6,	"common" }
};
static const unsigned int asn_MAP_midamble_Allocation_Mode_enum2value_10[] = {
	1,	/* common(1) */
	0	/* default(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_midamble_Allocation_Mode_specs_10 = {
	asn_MAP_midamble_Allocation_Mode_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_midamble_Allocation_Mode_enum2value_10,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_midamble_Allocation_Mode_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_midamble_Allocation_Mode_10 = {
	"midamble-Allocation-Mode",
	"midamble-Allocation-Mode",
	&asn_OP_NativeEnumerated,
	asn_DEF_midamble_Allocation_Mode_tags_10,
	sizeof(asn_DEF_midamble_Allocation_Mode_tags_10)
		/sizeof(asn_DEF_midamble_Allocation_Mode_tags_10[0]) - 1, /* 1 */
	asn_DEF_midamble_Allocation_Mode_tags_10,	/* Same as above */
	sizeof(asn_DEF_midamble_Allocation_Mode_tags_10)
		/sizeof(asn_DEF_midamble_Allocation_Mode_tags_10[0]), /* 2 */
	{ &asn_OER_type_midamble_Allocation_Mode_constr_10, &asn_PER_type_midamble_Allocation_Mode_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_midamble_Allocation_Mode_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_E_HICH_Information_TDD384_768_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E_HICH_Information_TDD384_768, n_E_HICH),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_n_E_HICH_constr_2, &asn_PER_memb_n_E_HICH_constr_2,  memb_n_E_HICH_constraint_1 },
		0, 0, /* No default value */
		"n-E-HICH"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_HICH_Information_TDD384_768, tS_Number),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_tS_Number_constr_3, &asn_PER_memb_tS_Number_constr_3,  memb_tS_Number_constraint_1 },
		0, 0, /* No default value */
		"tS-Number"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_HICH_Information_TDD384_768, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"modeSpecificInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_HICH_Information_TDD384_768, burst_Type),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_burst_Type_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"burst-Type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_HICH_Information_TDD384_768, midamble_Allocation_Mode),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_midamble_Allocation_Mode_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"midamble-Allocation-Mode"
		},
};
static const ber_tlv_tag_t asn_DEF_E_HICH_Information_TDD384_768_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E_HICH_Information_TDD384_768_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n-E-HICH */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tS-Number */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* modeSpecificInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* burst-Type */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* midamble-Allocation-Mode */
};
asn_SEQUENCE_specifics_t asn_SPC_E_HICH_Information_TDD384_768_specs_1 = {
	sizeof(struct E_HICH_Information_TDD384_768),
	offsetof(struct E_HICH_Information_TDD384_768, _asn_ctx),
	asn_MAP_E_HICH_Information_TDD384_768_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E_HICH_Information_TDD384_768 = {
	"E-HICH-Information-TDD384-768",
	"E-HICH-Information-TDD384-768",
	&asn_OP_SEQUENCE,
	asn_DEF_E_HICH_Information_TDD384_768_tags_1,
	sizeof(asn_DEF_E_HICH_Information_TDD384_768_tags_1)
		/sizeof(asn_DEF_E_HICH_Information_TDD384_768_tags_1[0]), /* 1 */
	asn_DEF_E_HICH_Information_TDD384_768_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_HICH_Information_TDD384_768_tags_1)
		/sizeof(asn_DEF_E_HICH_Information_TDD384_768_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E_HICH_Information_TDD384_768_1,
	5,	/* Elements count */
	&asn_SPC_E_HICH_Information_TDD384_768_specs_1	/* Additional specs */
};

