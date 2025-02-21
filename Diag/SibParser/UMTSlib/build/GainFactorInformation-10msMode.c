/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "GainFactorInformation-10msMode.h"

static asn_oer_constraints_t asn_OER_type_GainFactorInformation_10msMode_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_GainFactorInformation_10msMode_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_signalledGainFactors_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GainFactorInformation_10msMode__signalledGainFactors, gainFactorBetaC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GainFactor,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gainFactorBetaC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GainFactorInformation_10msMode__signalledGainFactors, gainFactorBetaD),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GainFactor,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gainFactorBetaD"
		},
	{ ATF_POINTER, 1, offsetof(struct GainFactorInformation_10msMode__signalledGainFactors, referenceTFC_ID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReferenceTFC_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referenceTFC-ID"
		},
};
static const int asn_MAP_signalledGainFactors_oms_2[] = { 2 };
static const ber_tlv_tag_t asn_DEF_signalledGainFactors_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_signalledGainFactors_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gainFactorBetaC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gainFactorBetaD */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* referenceTFC-ID */
};
static asn_SEQUENCE_specifics_t asn_SPC_signalledGainFactors_specs_2 = {
	sizeof(struct GainFactorInformation_10msMode__signalledGainFactors),
	offsetof(struct GainFactorInformation_10msMode__signalledGainFactors, _asn_ctx),
	asn_MAP_signalledGainFactors_tag2el_2,
	3,	/* Count of tags in the map */
	asn_MAP_signalledGainFactors_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_signalledGainFactors_2 = {
	"signalledGainFactors",
	"signalledGainFactors",
	&asn_OP_SEQUENCE,
	asn_DEF_signalledGainFactors_tags_2,
	sizeof(asn_DEF_signalledGainFactors_tags_2)
		/sizeof(asn_DEF_signalledGainFactors_tags_2[0]) - 1, /* 1 */
	asn_DEF_signalledGainFactors_tags_2,	/* Same as above */
	sizeof(asn_DEF_signalledGainFactors_tags_2)
		/sizeof(asn_DEF_signalledGainFactors_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_signalledGainFactors_2,
	3,	/* Elements count */
	&asn_SPC_signalledGainFactors_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_GainFactorInformation_10msMode_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GainFactorInformation_10msMode, choice.signalledGainFactors),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_signalledGainFactors_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"signalledGainFactors"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GainFactorInformation_10msMode, choice.computedGainFactors),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReferenceTFC_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"computedGainFactors"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_GainFactorInformation_10msMode_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* signalledGainFactors */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* computedGainFactors */
};
asn_CHOICE_specifics_t asn_SPC_GainFactorInformation_10msMode_specs_1 = {
	sizeof(struct GainFactorInformation_10msMode),
	offsetof(struct GainFactorInformation_10msMode, _asn_ctx),
	offsetof(struct GainFactorInformation_10msMode, present),
	sizeof(((struct GainFactorInformation_10msMode *)0)->present),
	asn_MAP_GainFactorInformation_10msMode_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_GainFactorInformation_10msMode = {
	"GainFactorInformation-10msMode",
	"GainFactorInformation-10msMode",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_GainFactorInformation_10msMode_constr_1, &asn_PER_type_GainFactorInformation_10msMode_constr_1, CHOICE_constraint },
	asn_MBR_GainFactorInformation_10msMode_1,
	2,	/* Elements count */
	&asn_SPC_GainFactorInformation_10msMode_specs_1	/* Additional specs */
};

