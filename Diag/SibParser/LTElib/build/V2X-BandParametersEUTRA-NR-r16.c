/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "V2X-BandParametersEUTRA-NR-r16.h"

static asn_oer_constraints_t asn_OER_type_V2X_BandParametersEUTRA_NR_r16_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_V2X_BandParametersEUTRA_NR_r16_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_eutra_2[] = {
	{ ATF_POINTER, 2, offsetof(struct V2X_BandParametersEUTRA_NR_r16__eutra, v2x_BandParameters1_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_V2X_BandParameters_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-BandParameters1-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct V2X_BandParametersEUTRA_NR_r16__eutra, v2x_BandParameters2_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_V2X_BandParameters_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-BandParameters2-r16"
		},
};
static const int asn_MAP_eutra_oms_2[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_eutra_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_eutra_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* v2x-BandParameters1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v2x-BandParameters2-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_eutra_specs_2 = {
	sizeof(struct V2X_BandParametersEUTRA_NR_r16__eutra),
	offsetof(struct V2X_BandParametersEUTRA_NR_r16__eutra, _asn_ctx),
	asn_MAP_eutra_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_eutra_oms_2,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eutra_2 = {
	"eutra",
	"eutra",
	&asn_OP_SEQUENCE,
	asn_DEF_eutra_tags_2,
	sizeof(asn_DEF_eutra_tags_2)
		/sizeof(asn_DEF_eutra_tags_2[0]) - 1, /* 1 */
	asn_DEF_eutra_tags_2,	/* Same as above */
	sizeof(asn_DEF_eutra_tags_2)
		/sizeof(asn_DEF_eutra_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_eutra_2,
	2,	/* Elements count */
	&asn_SPC_eutra_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_nr_5[] = {
	{ ATF_POINTER, 1, offsetof(struct V2X_BandParametersEUTRA_NR_r16__nr, v2x_BandParametersNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-BandParametersNR-r16"
		},
};
static const int asn_MAP_nr_oms_5[] = { 0 };
static const ber_tlv_tag_t asn_DEF_nr_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_nr_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* v2x-BandParametersNR-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_nr_specs_5 = {
	sizeof(struct V2X_BandParametersEUTRA_NR_r16__nr),
	offsetof(struct V2X_BandParametersEUTRA_NR_r16__nr, _asn_ctx),
	asn_MAP_nr_tag2el_5,
	1,	/* Count of tags in the map */
	asn_MAP_nr_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nr_5 = {
	"nr",
	"nr",
	&asn_OP_SEQUENCE,
	asn_DEF_nr_tags_5,
	sizeof(asn_DEF_nr_tags_5)
		/sizeof(asn_DEF_nr_tags_5[0]) - 1, /* 1 */
	asn_DEF_nr_tags_5,	/* Same as above */
	sizeof(asn_DEF_nr_tags_5)
		/sizeof(asn_DEF_nr_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_nr_5,
	1,	/* Elements count */
	&asn_SPC_nr_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_V2X_BandParametersEUTRA_NR_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct V2X_BandParametersEUTRA_NR_r16, choice.eutra),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_eutra_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct V2X_BandParametersEUTRA_NR_r16, choice.nr),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nr_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_V2X_BandParametersEUTRA_NR_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutra */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nr */
};
asn_CHOICE_specifics_t asn_SPC_V2X_BandParametersEUTRA_NR_r16_specs_1 = {
	sizeof(struct V2X_BandParametersEUTRA_NR_r16),
	offsetof(struct V2X_BandParametersEUTRA_NR_r16, _asn_ctx),
	offsetof(struct V2X_BandParametersEUTRA_NR_r16, present),
	sizeof(((struct V2X_BandParametersEUTRA_NR_r16 *)0)->present),
	asn_MAP_V2X_BandParametersEUTRA_NR_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_V2X_BandParametersEUTRA_NR_r16 = {
	"V2X-BandParametersEUTRA-NR-r16",
	"V2X-BandParametersEUTRA-NR-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_V2X_BandParametersEUTRA_NR_r16_constr_1, &asn_PER_type_V2X_BandParametersEUTRA_NR_r16_constr_1, CHOICE_constraint },
	asn_MBR_V2X_BandParametersEUTRA_NR_r16_1,
	2,	/* Elements count */
	&asn_SPC_V2X_BandParametersEUTRA_NR_r16_specs_1	/* Additional specs */
};

