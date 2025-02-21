/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "RF-CapabilityComp.h"

static asn_oer_constraints_t asn_OER_type_fdd_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_fdd_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_tdd384_RF_Capability_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_tdd384_RF_Capability_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_tdd128_RF_Capability_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_tdd128_RF_Capability_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RF_CapabilityComp__fdd, choice.notSupported),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"notSupported"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RF_CapabilityComp__fdd, choice.supported),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RF_CapabBandListFDDComp,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supported"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* notSupported */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* supported */
};
static asn_CHOICE_specifics_t asn_SPC_fdd_specs_2 = {
	sizeof(struct RF_CapabilityComp__fdd),
	offsetof(struct RF_CapabilityComp__fdd, _asn_ctx),
	offsetof(struct RF_CapabilityComp__fdd, present),
	sizeof(((struct RF_CapabilityComp__fdd *)0)->present),
	asn_MAP_fdd_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_2 = {
	"fdd",
	"fdd",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_fdd_constr_2, &asn_PER_type_fdd_constr_2, CHOICE_constraint },
	asn_MBR_fdd_2,
	2,	/* Elements count */
	&asn_SPC_fdd_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd384_RF_Capability_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RF_CapabilityComp__tdd384_RF_Capability, choice.notSupported),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"notSupported"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RF_CapabilityComp__tdd384_RF_Capability, choice.supported),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioFrequencyBandTDDList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supported"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_tdd384_RF_Capability_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* notSupported */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* supported */
};
static asn_CHOICE_specifics_t asn_SPC_tdd384_RF_Capability_specs_5 = {
	sizeof(struct RF_CapabilityComp__tdd384_RF_Capability),
	offsetof(struct RF_CapabilityComp__tdd384_RF_Capability, _asn_ctx),
	offsetof(struct RF_CapabilityComp__tdd384_RF_Capability, present),
	sizeof(((struct RF_CapabilityComp__tdd384_RF_Capability *)0)->present),
	asn_MAP_tdd384_RF_Capability_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd384_RF_Capability_5 = {
	"tdd384-RF-Capability",
	"tdd384-RF-Capability",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_tdd384_RF_Capability_constr_5, &asn_PER_type_tdd384_RF_Capability_constr_5, CHOICE_constraint },
	asn_MBR_tdd384_RF_Capability_5,
	2,	/* Elements count */
	&asn_SPC_tdd384_RF_Capability_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd128_RF_Capability_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RF_CapabilityComp__tdd128_RF_Capability, choice.notSupported),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"notSupported"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RF_CapabilityComp__tdd128_RF_Capability, choice.supported),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioFrequencyBandTDDList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supported"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_tdd128_RF_Capability_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* notSupported */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* supported */
};
static asn_CHOICE_specifics_t asn_SPC_tdd128_RF_Capability_specs_8 = {
	sizeof(struct RF_CapabilityComp__tdd128_RF_Capability),
	offsetof(struct RF_CapabilityComp__tdd128_RF_Capability, _asn_ctx),
	offsetof(struct RF_CapabilityComp__tdd128_RF_Capability, present),
	sizeof(((struct RF_CapabilityComp__tdd128_RF_Capability *)0)->present),
	asn_MAP_tdd128_RF_Capability_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_RF_Capability_8 = {
	"tdd128-RF-Capability",
	"tdd128-RF-Capability",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_tdd128_RF_Capability_constr_8, &asn_PER_type_tdd128_RF_Capability_constr_8, CHOICE_constraint },
	asn_MBR_tdd128_RF_Capability_8,
	2,	/* Elements count */
	&asn_SPC_tdd128_RF_Capability_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RF_CapabilityComp_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RF_CapabilityComp, fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_fdd_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RF_CapabilityComp, tdd384_RF_Capability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tdd384_RF_Capability_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd384-RF-Capability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RF_CapabilityComp, tdd128_RF_Capability),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tdd128_RF_Capability_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd128-RF-Capability"
		},
};
static const ber_tlv_tag_t asn_DEF_RF_CapabilityComp_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RF_CapabilityComp_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tdd384-RF-Capability */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* tdd128-RF-Capability */
};
asn_SEQUENCE_specifics_t asn_SPC_RF_CapabilityComp_specs_1 = {
	sizeof(struct RF_CapabilityComp),
	offsetof(struct RF_CapabilityComp, _asn_ctx),
	asn_MAP_RF_CapabilityComp_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RF_CapabilityComp = {
	"RF-CapabilityComp",
	"RF-CapabilityComp",
	&asn_OP_SEQUENCE,
	asn_DEF_RF_CapabilityComp_tags_1,
	sizeof(asn_DEF_RF_CapabilityComp_tags_1)
		/sizeof(asn_DEF_RF_CapabilityComp_tags_1[0]), /* 1 */
	asn_DEF_RF_CapabilityComp_tags_1,	/* Same as above */
	sizeof(asn_DEF_RF_CapabilityComp_tags_1)
		/sizeof(asn_DEF_RF_CapabilityComp_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RF_CapabilityComp_1,
	3,	/* Elements count */
	&asn_SPC_RF_CapabilityComp_specs_1	/* Additional specs */
};

