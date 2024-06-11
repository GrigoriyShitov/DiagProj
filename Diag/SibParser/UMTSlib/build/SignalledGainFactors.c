/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "SignalledGainFactors.h"

static asn_oer_constraints_t asn_OER_type_modeSpecificInfo_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SignalledGainFactors__modeSpecificInfo__fdd, gainFactorBetaC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GainFactor,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gainFactorBetaC"
		},
};
static const ber_tlv_tag_t asn_DEF_fdd_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* gainFactorBetaC */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_3 = {
	sizeof(struct SignalledGainFactors__modeSpecificInfo__fdd),
	offsetof(struct SignalledGainFactors__modeSpecificInfo__fdd, _asn_ctx),
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

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SignalledGainFactors__modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SignalledGainFactors__modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
	sizeof(struct SignalledGainFactors__modeSpecificInfo),
	offsetof(struct SignalledGainFactors__modeSpecificInfo, _asn_ctx),
	offsetof(struct SignalledGainFactors__modeSpecificInfo, present),
	sizeof(((struct SignalledGainFactors__modeSpecificInfo *)0)->present),
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

asn_TYPE_member_t asn_MBR_SignalledGainFactors_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SignalledGainFactors, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"modeSpecificInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SignalledGainFactors, gainFactorBetaD),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GainFactor,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gainFactorBetaD"
		},
	{ ATF_POINTER, 1, offsetof(struct SignalledGainFactors, referenceTFC_ID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReferenceTFC_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referenceTFC-ID"
		},
};
static const int asn_MAP_SignalledGainFactors_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_SignalledGainFactors_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SignalledGainFactors_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* modeSpecificInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gainFactorBetaD */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* referenceTFC-ID */
};
asn_SEQUENCE_specifics_t asn_SPC_SignalledGainFactors_specs_1 = {
	sizeof(struct SignalledGainFactors),
	offsetof(struct SignalledGainFactors, _asn_ctx),
	asn_MAP_SignalledGainFactors_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SignalledGainFactors_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SignalledGainFactors = {
	"SignalledGainFactors",
	"SignalledGainFactors",
	&asn_OP_SEQUENCE,
	asn_DEF_SignalledGainFactors_tags_1,
	sizeof(asn_DEF_SignalledGainFactors_tags_1)
		/sizeof(asn_DEF_SignalledGainFactors_tags_1[0]), /* 1 */
	asn_DEF_SignalledGainFactors_tags_1,	/* Same as above */
	sizeof(asn_DEF_SignalledGainFactors_tags_1)
		/sizeof(asn_DEF_SignalledGainFactors_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SignalledGainFactors_1,
	3,	/* Elements count */
	&asn_SPC_SignalledGainFactors_specs_1	/* Additional specs */
};

