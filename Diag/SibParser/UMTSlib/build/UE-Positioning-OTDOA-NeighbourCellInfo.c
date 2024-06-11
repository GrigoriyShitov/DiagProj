/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "UE-Positioning-OTDOA-NeighbourCellInfo.h"

static asn_oer_constraints_t asn_OER_type_modeSpecificInfo_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_positioningMode_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_positioningMode_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo__fdd, primaryCPICH_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCPICH_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"primaryCPICH-Info"
		},
};
static const ber_tlv_tag_t asn_DEF_fdd_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* primaryCPICH-Info */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_3 = {
	sizeof(struct UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo__fdd),
	offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_3 = {
	"fdd",
	"fdd",
	&asn_OP_SEQUENCE,
	asn_DEF_fdd_tags_3,
	sizeof(asn_DEF_fdd_tags_3)
		/sizeof(asn_DEF_fdd_tags_3[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_3,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_3)
		/sizeof(asn_DEF_fdd_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_fdd_3,
	1,	/* Elements count */
	&asn_SPC_fdd_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo__tdd, cellAndChannelIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellAndChannelIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellAndChannelIdentity"
		},
};
static const ber_tlv_tag_t asn_DEF_tdd_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cellAndChannelIdentity */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_5 = {
	sizeof(struct UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo__tdd),
	offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo__tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_5,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_5 = {
	"tdd",
	"tdd",
	&asn_OP_SEQUENCE,
	asn_DEF_tdd_tags_5,
	sizeof(asn_DEF_tdd_tags_5)
		/sizeof(asn_DEF_tdd_tags_5[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_5,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_5)
		/sizeof(asn_DEF_tdd_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_tdd_5,
	1,	/* Elements count */
	&asn_SPC_tdd_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_2 = {
	sizeof(struct UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo),
	offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo, _asn_ctx),
	offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo, present),
	sizeof(((struct UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo *)0)->present),
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

static const ber_tlv_tag_t asn_DEF_ueBased_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_ueBased_specs_13 = {
	sizeof(struct UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode__ueBased),
	offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode__ueBased, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ueBased_13 = {
	"ueBased",
	"ueBased",
	&asn_OP_SEQUENCE,
	asn_DEF_ueBased_tags_13,
	sizeof(asn_DEF_ueBased_tags_13)
		/sizeof(asn_DEF_ueBased_tags_13[0]) - 1, /* 1 */
	asn_DEF_ueBased_tags_13,	/* Same as above */
	sizeof(asn_DEF_ueBased_tags_13)
		/sizeof(asn_DEF_ueBased_tags_13[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_ueBased_specs_13	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ueAssisted_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_ueAssisted_specs_14 = {
	sizeof(struct UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode__ueAssisted),
	offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode__ueAssisted, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ueAssisted_14 = {
	"ueAssisted",
	"ueAssisted",
	&asn_OP_SEQUENCE,
	asn_DEF_ueAssisted_tags_14,
	sizeof(asn_DEF_ueAssisted_tags_14)
		/sizeof(asn_DEF_ueAssisted_tags_14[0]) - 1, /* 1 */
	asn_DEF_ueAssisted_tags_14,	/* Same as above */
	sizeof(asn_DEF_ueAssisted_tags_14)
		/sizeof(asn_DEF_ueAssisted_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_ueAssisted_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_positioningMode_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode, choice.ueBased),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ueBased_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueBased"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode, choice.ueAssisted),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ueAssisted_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueAssisted"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_positioningMode_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ueBased */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ueAssisted */
};
static asn_CHOICE_specifics_t asn_SPC_positioningMode_specs_12 = {
	sizeof(struct UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode),
	offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode, _asn_ctx),
	offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode, present),
	sizeof(((struct UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode *)0)->present),
	asn_MAP_positioningMode_tag2el_12,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_positioningMode_12 = {
	"positioningMode",
	"positioningMode",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_positioningMode_constr_12, &asn_PER_type_positioningMode_constr_12, CHOICE_constraint },
	asn_MBR_positioningMode_12,
	2,	/* Elements count */
	&asn_SPC_positioningMode_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_Positioning_OTDOA_NeighbourCellInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"modeSpecificInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"frequencyInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo, ue_positioning_IPDL_Paremeters),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_IPDL_Parameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-positioning-IPDL-Paremeters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo, sfn_SFN_RelTimeDifference),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SFN_SFN_RelTimeDifference1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sfn-SFN-RelTimeDifference"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo, sfn_SFN_Drift),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SFN_SFN_Drift,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sfn-SFN-Drift"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo, searchWindowSize),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OTDOA_SearchWindowSize,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"searchWindowSize"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo, positioningMode),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_positioningMode_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"positioningMode"
		},
};
static const int asn_MAP_UE_Positioning_OTDOA_NeighbourCellInfo_oms_1[] = { 1, 2, 4 };
static const ber_tlv_tag_t asn_DEF_UE_Positioning_OTDOA_NeighbourCellInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_Positioning_OTDOA_NeighbourCellInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* modeSpecificInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* frequencyInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ue-positioning-IPDL-Paremeters */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sfn-SFN-RelTimeDifference */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sfn-SFN-Drift */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* searchWindowSize */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* positioningMode */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_OTDOA_NeighbourCellInfo_specs_1 = {
	sizeof(struct UE_Positioning_OTDOA_NeighbourCellInfo),
	offsetof(struct UE_Positioning_OTDOA_NeighbourCellInfo, _asn_ctx),
	asn_MAP_UE_Positioning_OTDOA_NeighbourCellInfo_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_UE_Positioning_OTDOA_NeighbourCellInfo_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_Positioning_OTDOA_NeighbourCellInfo = {
	"UE-Positioning-OTDOA-NeighbourCellInfo",
	"UE-Positioning-OTDOA-NeighbourCellInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_Positioning_OTDOA_NeighbourCellInfo_tags_1,
	sizeof(asn_DEF_UE_Positioning_OTDOA_NeighbourCellInfo_tags_1)
		/sizeof(asn_DEF_UE_Positioning_OTDOA_NeighbourCellInfo_tags_1[0]), /* 1 */
	asn_DEF_UE_Positioning_OTDOA_NeighbourCellInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_Positioning_OTDOA_NeighbourCellInfo_tags_1)
		/sizeof(asn_DEF_UE_Positioning_OTDOA_NeighbourCellInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_Positioning_OTDOA_NeighbourCellInfo_1,
	7,	/* Elements count */
	&asn_SPC_UE_Positioning_OTDOA_NeighbourCellInfo_specs_1	/* Additional specs */
};

