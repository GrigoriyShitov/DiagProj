/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "PenaltyTime-RSCP.h"

static asn_oer_constraints_t asn_OER_type_PenaltyTime_RSCP_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_PenaltyTime_RSCP_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PenaltyTime_RSCP_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PenaltyTime_RSCP, choice.notUsed),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"notUsed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PenaltyTime_RSCP, choice.pt10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TemporaryOffset1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pt10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PenaltyTime_RSCP, choice.pt20),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TemporaryOffset1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pt20"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PenaltyTime_RSCP, choice.pt30),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TemporaryOffset1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pt30"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PenaltyTime_RSCP, choice.pt40),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TemporaryOffset1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pt40"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PenaltyTime_RSCP, choice.pt50),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TemporaryOffset1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pt50"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PenaltyTime_RSCP, choice.pt60),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TemporaryOffset1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pt60"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_PenaltyTime_RSCP_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* notUsed */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pt10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pt20 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pt30 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pt40 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* pt50 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* pt60 */
};
asn_CHOICE_specifics_t asn_SPC_PenaltyTime_RSCP_specs_1 = {
	sizeof(struct PenaltyTime_RSCP),
	offsetof(struct PenaltyTime_RSCP, _asn_ctx),
	offsetof(struct PenaltyTime_RSCP, present),
	sizeof(((struct PenaltyTime_RSCP *)0)->present),
	asn_MAP_PenaltyTime_RSCP_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_PenaltyTime_RSCP = {
	"PenaltyTime-RSCP",
	"PenaltyTime-RSCP",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_PenaltyTime_RSCP_constr_1, &asn_PER_type_PenaltyTime_RSCP_constr_1, CHOICE_constraint },
	asn_MBR_PenaltyTime_RSCP_1,
	7,	/* Elements count */
	&asn_SPC_PenaltyTime_RSCP_specs_1	/* Additional specs */
};

