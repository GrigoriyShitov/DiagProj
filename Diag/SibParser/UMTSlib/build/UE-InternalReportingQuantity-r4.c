/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UE-InternalReportingQuantity-r4.h"

static asn_oer_constraints_t asn_OER_type_tddOption_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_tddOption_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_modeSpecificInfo_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo__fdd, ue_RX_TX_TimeDifference),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-RX-TX-TimeDifference"
		},
};
static const ber_tlv_tag_t asn_DEF_fdd_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ue-RX-TX-TimeDifference */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_4 = {
	sizeof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo__fdd),
	offsetof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_4,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_4 = {
	"fdd",
	"fdd",
	&asn_OP_SEQUENCE,
	asn_DEF_fdd_tags_4,
	sizeof(asn_DEF_fdd_tags_4)
		/sizeof(asn_DEF_fdd_tags_4[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_4,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_4)
		/sizeof(asn_DEF_fdd_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_fdd_4,
	1,	/* Elements count */
	&asn_SPC_fdd_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd384_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption__tdd384, appliedTA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"appliedTA"
		},
};
static const ber_tlv_tag_t asn_DEF_tdd384_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd384_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* appliedTA */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd384_specs_8 = {
	sizeof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption__tdd384),
	offsetof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption__tdd384, _asn_ctx),
	asn_MAP_tdd384_tag2el_8,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd384_8 = {
	"tdd384",
	"tdd384",
	&asn_OP_SEQUENCE,
	asn_DEF_tdd384_tags_8,
	sizeof(asn_DEF_tdd384_tags_8)
		/sizeof(asn_DEF_tdd384_tags_8[0]) - 1, /* 1 */
	asn_DEF_tdd384_tags_8,	/* Same as above */
	sizeof(asn_DEF_tdd384_tags_8)
		/sizeof(asn_DEF_tdd384_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_tdd384_8,
	1,	/* Elements count */
	&asn_SPC_tdd384_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd128_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption__tdd128, t_ADVinfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ADVinfo"
		},
};
static const ber_tlv_tag_t asn_DEF_tdd128_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd128_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* t-ADVinfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128_specs_10 = {
	sizeof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption__tdd128),
	offsetof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption__tdd128, _asn_ctx),
	asn_MAP_tdd128_tag2el_10,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_10 = {
	"tdd128",
	"tdd128",
	&asn_OP_SEQUENCE,
	asn_DEF_tdd128_tags_10,
	sizeof(asn_DEF_tdd128_tags_10)
		/sizeof(asn_DEF_tdd128_tags_10[0]) - 1, /* 1 */
	asn_DEF_tdd128_tags_10,	/* Same as above */
	sizeof(asn_DEF_tdd128_tags_10)
		/sizeof(asn_DEF_tdd128_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_tdd128_10,
	1,	/* Elements count */
	&asn_SPC_tdd128_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tddOption_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption, choice.tdd384),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_tdd384_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd384"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption, choice.tdd128),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd128_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd128"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_tddOption_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd384 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd128 */
};
static asn_CHOICE_specifics_t asn_SPC_tddOption_specs_7 = {
	sizeof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption),
	offsetof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption, _asn_ctx),
	offsetof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption, present),
	sizeof(((struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd__tddOption *)0)->present),
	asn_MAP_tddOption_tag2el_7,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tddOption_7 = {
	"tddOption",
	"tddOption",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_tddOption_constr_7, &asn_PER_type_tddOption_constr_7, CHOICE_constraint },
	asn_MBR_tddOption_7,
	2,	/* Elements count */
	&asn_SPC_tddOption_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd, tddOption),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tddOption_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tddOption"
		},
};
static const ber_tlv_tag_t asn_DEF_tdd_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tddOption */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_6 = {
	sizeof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd),
	offsetof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo__tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_6,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_6 = {
	"tdd",
	"tdd",
	&asn_OP_SEQUENCE,
	asn_DEF_tdd_tags_6,
	sizeof(asn_DEF_tdd_tags_6)
		/sizeof(asn_DEF_tdd_tags_6[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_6,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_6)
		/sizeof(asn_DEF_tdd_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_tdd_6,
	1,	/* Elements count */
	&asn_SPC_tdd_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_3 = {
	sizeof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo),
	offsetof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo, _asn_ctx),
	offsetof(struct UE_InternalReportingQuantity_r4__modeSpecificInfo, present),
	sizeof(((struct UE_InternalReportingQuantity_r4__modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_3 = {
	"modeSpecificInfo",
	"modeSpecificInfo",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_modeSpecificInfo_constr_3, &asn_PER_type_modeSpecificInfo_constr_3, CHOICE_constraint },
	asn_MBR_modeSpecificInfo_3,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_InternalReportingQuantity_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_InternalReportingQuantity_r4, ue_TransmittedPower),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-TransmittedPower"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_InternalReportingQuantity_r4, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"modeSpecificInfo"
		},
};
static const ber_tlv_tag_t asn_DEF_UE_InternalReportingQuantity_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_InternalReportingQuantity_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-TransmittedPower */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* modeSpecificInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_InternalReportingQuantity_r4_specs_1 = {
	sizeof(struct UE_InternalReportingQuantity_r4),
	offsetof(struct UE_InternalReportingQuantity_r4, _asn_ctx),
	asn_MAP_UE_InternalReportingQuantity_r4_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_InternalReportingQuantity_r4 = {
	"UE-InternalReportingQuantity-r4",
	"UE-InternalReportingQuantity-r4",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_InternalReportingQuantity_r4_tags_1,
	sizeof(asn_DEF_UE_InternalReportingQuantity_r4_tags_1)
		/sizeof(asn_DEF_UE_InternalReportingQuantity_r4_tags_1[0]), /* 1 */
	asn_DEF_UE_InternalReportingQuantity_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_InternalReportingQuantity_r4_tags_1)
		/sizeof(asn_DEF_UE_InternalReportingQuantity_r4_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_InternalReportingQuantity_r4_1,
	2,	/* Elements count */
	&asn_SPC_UE_InternalReportingQuantity_r4_specs_1	/* Additional specs */
};

