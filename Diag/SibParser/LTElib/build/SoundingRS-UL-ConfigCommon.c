/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SoundingRS-UL-ConfigCommon.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_srs_BandwidthConfig_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_srs_BandwidthConfig_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_srs_SubframeConfig_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_srs_SubframeConfig_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_srs_MaxUpPts_constr_31 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_srs_MaxUpPts_constr_31 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_SoundingRS_UL_ConfigCommon_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_SoundingRS_UL_ConfigCommon_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_srs_BandwidthConfig_value2enum_4[] = {
	{ 0,	3,	"bw0" },
	{ 1,	3,	"bw1" },
	{ 2,	3,	"bw2" },
	{ 3,	3,	"bw3" },
	{ 4,	3,	"bw4" },
	{ 5,	3,	"bw5" },
	{ 6,	3,	"bw6" },
	{ 7,	3,	"bw7" }
};
static const unsigned int asn_MAP_srs_BandwidthConfig_enum2value_4[] = {
	0,	/* bw0(0) */
	1,	/* bw1(1) */
	2,	/* bw2(2) */
	3,	/* bw3(3) */
	4,	/* bw4(4) */
	5,	/* bw5(5) */
	6,	/* bw6(6) */
	7	/* bw7(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_srs_BandwidthConfig_specs_4 = {
	asn_MAP_srs_BandwidthConfig_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_srs_BandwidthConfig_enum2value_4,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_srs_BandwidthConfig_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_BandwidthConfig_4 = {
	"srs-BandwidthConfig",
	"srs-BandwidthConfig",
	&asn_OP_NativeEnumerated,
	asn_DEF_srs_BandwidthConfig_tags_4,
	sizeof(asn_DEF_srs_BandwidthConfig_tags_4)
		/sizeof(asn_DEF_srs_BandwidthConfig_tags_4[0]) - 1, /* 1 */
	asn_DEF_srs_BandwidthConfig_tags_4,	/* Same as above */
	sizeof(asn_DEF_srs_BandwidthConfig_tags_4)
		/sizeof(asn_DEF_srs_BandwidthConfig_tags_4[0]), /* 2 */
	{ &asn_OER_type_srs_BandwidthConfig_constr_4, &asn_PER_type_srs_BandwidthConfig_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srs_BandwidthConfig_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_srs_SubframeConfig_value2enum_13[] = {
	{ 0,	3,	"sc0" },
	{ 1,	3,	"sc1" },
	{ 2,	3,	"sc2" },
	{ 3,	3,	"sc3" },
	{ 4,	3,	"sc4" },
	{ 5,	3,	"sc5" },
	{ 6,	3,	"sc6" },
	{ 7,	3,	"sc7" },
	{ 8,	3,	"sc8" },
	{ 9,	3,	"sc9" },
	{ 10,	4,	"sc10" },
	{ 11,	4,	"sc11" },
	{ 12,	4,	"sc12" },
	{ 13,	4,	"sc13" },
	{ 14,	4,	"sc14" },
	{ 15,	4,	"sc15" }
};
static const unsigned int asn_MAP_srs_SubframeConfig_enum2value_13[] = {
	0,	/* sc0(0) */
	1,	/* sc1(1) */
	10,	/* sc10(10) */
	11,	/* sc11(11) */
	12,	/* sc12(12) */
	13,	/* sc13(13) */
	14,	/* sc14(14) */
	15,	/* sc15(15) */
	2,	/* sc2(2) */
	3,	/* sc3(3) */
	4,	/* sc4(4) */
	5,	/* sc5(5) */
	6,	/* sc6(6) */
	7,	/* sc7(7) */
	8,	/* sc8(8) */
	9	/* sc9(9) */
};
static const asn_INTEGER_specifics_t asn_SPC_srs_SubframeConfig_specs_13 = {
	asn_MAP_srs_SubframeConfig_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_srs_SubframeConfig_enum2value_13,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_srs_SubframeConfig_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_SubframeConfig_13 = {
	"srs-SubframeConfig",
	"srs-SubframeConfig",
	&asn_OP_NativeEnumerated,
	asn_DEF_srs_SubframeConfig_tags_13,
	sizeof(asn_DEF_srs_SubframeConfig_tags_13)
		/sizeof(asn_DEF_srs_SubframeConfig_tags_13[0]) - 1, /* 1 */
	asn_DEF_srs_SubframeConfig_tags_13,	/* Same as above */
	sizeof(asn_DEF_srs_SubframeConfig_tags_13)
		/sizeof(asn_DEF_srs_SubframeConfig_tags_13[0]), /* 2 */
	{ &asn_OER_type_srs_SubframeConfig_constr_13, &asn_PER_type_srs_SubframeConfig_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srs_SubframeConfig_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_srs_MaxUpPts_value2enum_31[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_srs_MaxUpPts_enum2value_31[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_srs_MaxUpPts_specs_31 = {
	asn_MAP_srs_MaxUpPts_value2enum_31,	/* "tag" => N; sorted by tag */
	asn_MAP_srs_MaxUpPts_enum2value_31,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_srs_MaxUpPts_tags_31[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_MaxUpPts_31 = {
	"srs-MaxUpPts",
	"srs-MaxUpPts",
	&asn_OP_NativeEnumerated,
	asn_DEF_srs_MaxUpPts_tags_31,
	sizeof(asn_DEF_srs_MaxUpPts_tags_31)
		/sizeof(asn_DEF_srs_MaxUpPts_tags_31[0]) - 1, /* 1 */
	asn_DEF_srs_MaxUpPts_tags_31,	/* Same as above */
	sizeof(asn_DEF_srs_MaxUpPts_tags_31)
		/sizeof(asn_DEF_srs_MaxUpPts_tags_31[0]), /* 2 */
	{ &asn_OER_type_srs_MaxUpPts_constr_31, &asn_PER_type_srs_MaxUpPts_constr_31, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srs_MaxUpPts_specs_31	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigCommon__setup, srs_BandwidthConfig),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srs_BandwidthConfig_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-BandwidthConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigCommon__setup, srs_SubframeConfig),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srs_SubframeConfig_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-SubframeConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigCommon__setup, ackNackSRS_SimultaneousTransmission),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ackNackSRS-SimultaneousTransmission"
		},
	{ ATF_POINTER, 1, offsetof(struct SoundingRS_UL_ConfigCommon__setup, srs_MaxUpPts),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srs_MaxUpPts_31,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-MaxUpPts"
		},
};
static const int asn_MAP_setup_oms_3[] = { 3 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-BandwidthConfig */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* srs-SubframeConfig */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ackNackSRS-SimultaneousTransmission */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* srs-MaxUpPts */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct SoundingRS_UL_ConfigCommon__setup),
	offsetof(struct SoundingRS_UL_ConfigCommon__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	4,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_3,
	4,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SoundingRS_UL_ConfigCommon_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigCommon, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigCommon, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SoundingRS_UL_ConfigCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_SoundingRS_UL_ConfigCommon_specs_1 = {
	sizeof(struct SoundingRS_UL_ConfigCommon),
	offsetof(struct SoundingRS_UL_ConfigCommon, _asn_ctx),
	offsetof(struct SoundingRS_UL_ConfigCommon, present),
	sizeof(((struct SoundingRS_UL_ConfigCommon *)0)->present),
	asn_MAP_SoundingRS_UL_ConfigCommon_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SoundingRS_UL_ConfigCommon = {
	"SoundingRS-UL-ConfigCommon",
	"SoundingRS-UL-ConfigCommon",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_SoundingRS_UL_ConfigCommon_constr_1, &asn_PER_type_SoundingRS_UL_ConfigCommon_constr_1, CHOICE_constraint },
	asn_MBR_SoundingRS_UL_ConfigCommon_1,
	2,	/* Elements count */
	&asn_SPC_SoundingRS_UL_ConfigCommon_specs_1	/* Additional specs */
};

