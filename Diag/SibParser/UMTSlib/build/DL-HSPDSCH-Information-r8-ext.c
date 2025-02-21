/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "DL-HSPDSCH-Information-r8-ext.h"

static asn_oer_constraints_t asn_OER_type_tdd_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_tdd_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_modeSpecificInfo_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tdd128_6[] = {
	{ ATF_POINTER, 1, offsetof(struct DL_HSPDSCH_Information_r8_ext__modeSpecificInfo__tdd__tdd128, outofSyncWindow),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OutofSyncWindow,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"outofSyncWindow"
		},
};
static const int asn_MAP_tdd128_oms_6[] = { 0 };
static const ber_tlv_tag_t asn_DEF_tdd128_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd128_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* outofSyncWindow */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128_specs_6 = {
	sizeof(struct DL_HSPDSCH_Information_r8_ext__modeSpecificInfo__tdd__tdd128),
	offsetof(struct DL_HSPDSCH_Information_r8_ext__modeSpecificInfo__tdd__tdd128, _asn_ctx),
	asn_MAP_tdd128_tag2el_6,
	1,	/* Count of tags in the map */
	asn_MAP_tdd128_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_6 = {
	"tdd128",
	"tdd128",
	&asn_OP_SEQUENCE,
	asn_DEF_tdd128_tags_6,
	sizeof(asn_DEF_tdd128_tags_6)
		/sizeof(asn_DEF_tdd128_tags_6[0]) - 1, /* 1 */
	asn_DEF_tdd128_tags_6,	/* Same as above */
	sizeof(asn_DEF_tdd128_tags_6)
		/sizeof(asn_DEF_tdd128_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_tdd128_6,
	1,	/* Elements count */
	&asn_SPC_tdd128_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_HSPDSCH_Information_r8_ext__modeSpecificInfo__tdd, choice.tdd384),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd384"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_HSPDSCH_Information_r8_ext__modeSpecificInfo__tdd, choice.tdd768),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd768"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_HSPDSCH_Information_r8_ext__modeSpecificInfo__tdd, choice.tdd128),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_tdd128_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd128"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd384 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tdd768 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* tdd128 */
};
static asn_CHOICE_specifics_t asn_SPC_tdd_specs_3 = {
	sizeof(struct DL_HSPDSCH_Information_r8_ext__modeSpecificInfo__tdd),
	offsetof(struct DL_HSPDSCH_Information_r8_ext__modeSpecificInfo__tdd, _asn_ctx),
	offsetof(struct DL_HSPDSCH_Information_r8_ext__modeSpecificInfo__tdd, present),
	sizeof(((struct DL_HSPDSCH_Information_r8_ext__modeSpecificInfo__tdd *)0)->present),
	asn_MAP_tdd_tag2el_3,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_3 = {
	"tdd",
	"tdd",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_tdd_constr_3, &asn_PER_type_tdd_constr_3, CHOICE_constraint },
	asn_MBR_tdd_3,
	3,	/* Elements count */
	&asn_SPC_tdd_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_HSPDSCH_Information_r8_ext__modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tdd_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_HSPDSCH_Information_r8_ext__modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* fdd */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_2 = {
	sizeof(struct DL_HSPDSCH_Information_r8_ext__modeSpecificInfo),
	offsetof(struct DL_HSPDSCH_Information_r8_ext__modeSpecificInfo, _asn_ctx),
	offsetof(struct DL_HSPDSCH_Information_r8_ext__modeSpecificInfo, present),
	sizeof(((struct DL_HSPDSCH_Information_r8_ext__modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_2 = {
	"modeSpecificInfo",
	"modeSpecificInfo",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_modeSpecificInfo_constr_2, &asn_PER_type_modeSpecificInfo_constr_2, CHOICE_constraint },
	asn_MBR_modeSpecificInfo_2,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DL_HSPDSCH_Information_r8_ext_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_HSPDSCH_Information_r8_ext, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"modeSpecificInfo"
		},
};
static const ber_tlv_tag_t asn_DEF_DL_HSPDSCH_Information_r8_ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DL_HSPDSCH_Information_r8_ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* modeSpecificInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_DL_HSPDSCH_Information_r8_ext_specs_1 = {
	sizeof(struct DL_HSPDSCH_Information_r8_ext),
	offsetof(struct DL_HSPDSCH_Information_r8_ext, _asn_ctx),
	asn_MAP_DL_HSPDSCH_Information_r8_ext_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DL_HSPDSCH_Information_r8_ext = {
	"DL-HSPDSCH-Information-r8-ext",
	"DL-HSPDSCH-Information-r8-ext",
	&asn_OP_SEQUENCE,
	asn_DEF_DL_HSPDSCH_Information_r8_ext_tags_1,
	sizeof(asn_DEF_DL_HSPDSCH_Information_r8_ext_tags_1)
		/sizeof(asn_DEF_DL_HSPDSCH_Information_r8_ext_tags_1[0]), /* 1 */
	asn_DEF_DL_HSPDSCH_Information_r8_ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_HSPDSCH_Information_r8_ext_tags_1)
		/sizeof(asn_DEF_DL_HSPDSCH_Information_r8_ext_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DL_HSPDSCH_Information_r8_ext_1,
	1,	/* Elements count */
	&asn_SPC_DL_HSPDSCH_Information_r8_ext_specs_1	/* Additional specs */
};

