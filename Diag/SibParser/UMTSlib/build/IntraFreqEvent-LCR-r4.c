/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "IntraFreqEvent-LCR-r4.h"

static asn_oer_constraints_t asn_OER_type_IntraFreqEvent_LCR_r4_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_IntraFreqEvent_LCR_r4_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  8 }	/* (0..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_IntraFreqEvent_LCR_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqEvent_LCR_r4, choice.e1a),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Event1a_LCR_r4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e1a"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqEvent_LCR_r4, choice.e1b),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Event1b_LCR_r4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e1b"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqEvent_LCR_r4, choice.e1c),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Event1c,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e1c"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqEvent_LCR_r4, choice.e1d),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e1d"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqEvent_LCR_r4, choice.e1e),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Event1e,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e1e"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqEvent_LCR_r4, choice.e1f),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Event1f,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e1f"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqEvent_LCR_r4, choice.e1g),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e1g"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqEvent_LCR_r4, choice.e1h),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdUsedFrequency,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e1h"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqEvent_LCR_r4, choice.e1i),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdUsedFrequency,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e1i"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_IntraFreqEvent_LCR_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e1a */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* e1b */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* e1c */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* e1d */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* e1e */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* e1f */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* e1g */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* e1h */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* e1i */
};
asn_CHOICE_specifics_t asn_SPC_IntraFreqEvent_LCR_r4_specs_1 = {
	sizeof(struct IntraFreqEvent_LCR_r4),
	offsetof(struct IntraFreqEvent_LCR_r4, _asn_ctx),
	offsetof(struct IntraFreqEvent_LCR_r4, present),
	sizeof(((struct IntraFreqEvent_LCR_r4 *)0)->present),
	asn_MAP_IntraFreqEvent_LCR_r4_tag2el_1,
	9,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_IntraFreqEvent_LCR_r4 = {
	"IntraFreqEvent-LCR-r4",
	"IntraFreqEvent-LCR-r4",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_IntraFreqEvent_LCR_r4_constr_1, &asn_PER_type_IntraFreqEvent_LCR_r4_constr_1, CHOICE_constraint },
	asn_MBR_IntraFreqEvent_LCR_r4_1,
	9,	/* Elements count */
	&asn_SPC_IntraFreqEvent_LCR_r4_specs_1	/* Additional specs */
};

