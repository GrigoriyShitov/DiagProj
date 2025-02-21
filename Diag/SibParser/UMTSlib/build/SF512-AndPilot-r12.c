/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SF512-AndPilot-r12.h"

static asn_oer_constraints_t asn_OER_type_SF512_AndPilot_r12_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_SF512_AndPilot_r12_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SF512_AndPilot_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SF512_AndPilot_r12, choice.sfd4),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sfd4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SF512_AndPilot_r12, choice.sfd8),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sfd8"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SF512_AndPilot_r12, choice.sfd16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sfd16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SF512_AndPilot_r12, choice.sfd32),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sfd32"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SF512_AndPilot_r12, choice.sfd64),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sfd64"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SF512_AndPilot_r12, choice.sfd128),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PilotBits128_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sfd128"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SF512_AndPilot_r12, choice.sfd256),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PilotBits256_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sfd256"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SF512_AndPilot_r12, choice.sfd512),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sfd512"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SF512_AndPilot_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sfd4 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sfd8 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sfd16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sfd32 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sfd64 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sfd128 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sfd256 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* sfd512 */
};
asn_CHOICE_specifics_t asn_SPC_SF512_AndPilot_r12_specs_1 = {
	sizeof(struct SF512_AndPilot_r12),
	offsetof(struct SF512_AndPilot_r12, _asn_ctx),
	offsetof(struct SF512_AndPilot_r12, present),
	sizeof(((struct SF512_AndPilot_r12 *)0)->present),
	asn_MAP_SF512_AndPilot_r12_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SF512_AndPilot_r12 = {
	"SF512-AndPilot-r12",
	"SF512-AndPilot-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_SF512_AndPilot_r12_constr_1, &asn_PER_type_SF512_AndPilot_r12_constr_1, CHOICE_constraint },
	asn_MBR_SF512_AndPilot_r12_1,
	8,	/* Elements count */
	&asn_SPC_SF512_AndPilot_r12_specs_1	/* Additional specs */
};

