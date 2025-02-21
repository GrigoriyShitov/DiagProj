/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UL-TransportChannelType.h"

static asn_oer_constraints_t asn_OER_type_UL_TransportChannelType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_UL_TransportChannelType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UL_TransportChannelType_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_TransportChannelType, choice.dch),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportChannelIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dch"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_TransportChannelType, choice.rach),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_TransportChannelType, choice.dummy),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_TransportChannelType, choice.usch),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportChannelIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"usch"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_UL_TransportChannelType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dch */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rach */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dummy */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* usch */
};
asn_CHOICE_specifics_t asn_SPC_UL_TransportChannelType_specs_1 = {
	sizeof(struct UL_TransportChannelType),
	offsetof(struct UL_TransportChannelType, _asn_ctx),
	offsetof(struct UL_TransportChannelType, present),
	sizeof(((struct UL_TransportChannelType *)0)->present),
	asn_MAP_UL_TransportChannelType_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UL_TransportChannelType = {
	"UL-TransportChannelType",
	"UL-TransportChannelType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_UL_TransportChannelType_constr_1, &asn_PER_type_UL_TransportChannelType_constr_1, CHOICE_constraint },
	asn_MBR_UL_TransportChannelType_1,
	4,	/* Elements count */
	&asn_SPC_UL_TransportChannelType_specs_1	/* Additional specs */
};

