/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "NewInterFreqCell-r9.h"

static asn_oer_constraints_t asn_OER_type_modeSpecificInfo_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tdd128_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NewInterFreqCell_r9__modeSpecificInfo__tdd128, intraSecondaryFreqIndicator),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraSecondaryFreqIndicator"
		},
};
static const ber_tlv_tag_t asn_DEF_tdd128_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd128_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* intraSecondaryFreqIndicator */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128_specs_7 = {
	sizeof(struct NewInterFreqCell_r9__modeSpecificInfo__tdd128),
	offsetof(struct NewInterFreqCell_r9__modeSpecificInfo__tdd128, _asn_ctx),
	asn_MAP_tdd128_tag2el_7,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_7 = {
	"tdd128",
	"tdd128",
	&asn_OP_SEQUENCE,
	asn_DEF_tdd128_tags_7,
	sizeof(asn_DEF_tdd128_tags_7)
		/sizeof(asn_DEF_tdd128_tags_7[0]) - 1, /* 1 */
	asn_DEF_tdd128_tags_7,	/* Same as above */
	sizeof(asn_DEF_tdd128_tags_7)
		/sizeof(asn_DEF_tdd128_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_tdd128_7,
	1,	/* Elements count */
	&asn_SPC_tdd128_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NewInterFreqCell_r9__modeSpecificInfo, choice.noInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"noInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NewInterFreqCell_r9__modeSpecificInfo, choice.tdd128),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd128_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd128"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* noInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd128 */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_5 = {
	sizeof(struct NewInterFreqCell_r9__modeSpecificInfo),
	offsetof(struct NewInterFreqCell_r9__modeSpecificInfo, _asn_ctx),
	offsetof(struct NewInterFreqCell_r9__modeSpecificInfo, present),
	sizeof(((struct NewInterFreqCell_r9__modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_5 = {
	"modeSpecificInfo",
	"modeSpecificInfo",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_modeSpecificInfo_constr_5, &asn_PER_type_modeSpecificInfo_constr_5, CHOICE_constraint },
	asn_MBR_modeSpecificInfo_5,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NewInterFreqCell_r9_1[] = {
	{ ATF_POINTER, 2, offsetof(struct NewInterFreqCell_r9, interFreqCellID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqCellID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqCellID"
		},
	{ ATF_POINTER, 1, offsetof(struct NewInterFreqCell_r9, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"frequencyInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NewInterFreqCell_r9, cellInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellInfo_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NewInterFreqCell_r9, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"modeSpecificInfo"
		},
};
static const int asn_MAP_NewInterFreqCell_r9_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NewInterFreqCell_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NewInterFreqCell_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqCellID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* frequencyInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cellInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* modeSpecificInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_NewInterFreqCell_r9_specs_1 = {
	sizeof(struct NewInterFreqCell_r9),
	offsetof(struct NewInterFreqCell_r9, _asn_ctx),
	asn_MAP_NewInterFreqCell_r9_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NewInterFreqCell_r9_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NewInterFreqCell_r9 = {
	"NewInterFreqCell-r9",
	"NewInterFreqCell-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_NewInterFreqCell_r9_tags_1,
	sizeof(asn_DEF_NewInterFreqCell_r9_tags_1)
		/sizeof(asn_DEF_NewInterFreqCell_r9_tags_1[0]), /* 1 */
	asn_DEF_NewInterFreqCell_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_NewInterFreqCell_r9_tags_1)
		/sizeof(asn_DEF_NewInterFreqCell_r9_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NewInterFreqCell_r9_1,
	4,	/* Elements count */
	&asn_SPC_NewInterFreqCell_r9_specs_1	/* Additional specs */
};

