/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "MIMO-UE-ParametersPerTM-r13.h"

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
static asn_oer_constraints_t asn_OER_type_channelMeasRestriction_r13_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_channelMeasRestriction_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_dmrs_Enhancements_r13_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_dmrs_Enhancements_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_csi_RS_EnhancementsTDD_r13_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_csi_RS_EnhancementsTDD_r13_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_channelMeasRestriction_r13_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_channelMeasRestriction_r13_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_channelMeasRestriction_r13_specs_4 = {
	asn_MAP_channelMeasRestriction_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_channelMeasRestriction_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_channelMeasRestriction_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_channelMeasRestriction_r13_4 = {
	"channelMeasRestriction-r13",
	"channelMeasRestriction-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_channelMeasRestriction_r13_tags_4,
	sizeof(asn_DEF_channelMeasRestriction_r13_tags_4)
		/sizeof(asn_DEF_channelMeasRestriction_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_channelMeasRestriction_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_channelMeasRestriction_r13_tags_4)
		/sizeof(asn_DEF_channelMeasRestriction_r13_tags_4[0]), /* 2 */
	{ &asn_OER_type_channelMeasRestriction_r13_constr_4, &asn_PER_type_channelMeasRestriction_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_channelMeasRestriction_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dmrs_Enhancements_r13_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_dmrs_Enhancements_r13_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_dmrs_Enhancements_r13_specs_6 = {
	asn_MAP_dmrs_Enhancements_r13_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_dmrs_Enhancements_r13_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dmrs_Enhancements_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dmrs_Enhancements_r13_6 = {
	"dmrs-Enhancements-r13",
	"dmrs-Enhancements-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_dmrs_Enhancements_r13_tags_6,
	sizeof(asn_DEF_dmrs_Enhancements_r13_tags_6)
		/sizeof(asn_DEF_dmrs_Enhancements_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_dmrs_Enhancements_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_dmrs_Enhancements_r13_tags_6)
		/sizeof(asn_DEF_dmrs_Enhancements_r13_tags_6[0]), /* 2 */
	{ &asn_OER_type_dmrs_Enhancements_r13_constr_6, &asn_PER_type_dmrs_Enhancements_r13_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dmrs_Enhancements_r13_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_csi_RS_EnhancementsTDD_r13_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_csi_RS_EnhancementsTDD_r13_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_csi_RS_EnhancementsTDD_r13_specs_8 = {
	asn_MAP_csi_RS_EnhancementsTDD_r13_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_csi_RS_EnhancementsTDD_r13_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_csi_RS_EnhancementsTDD_r13_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_RS_EnhancementsTDD_r13_8 = {
	"csi-RS-EnhancementsTDD-r13",
	"csi-RS-EnhancementsTDD-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_csi_RS_EnhancementsTDD_r13_tags_8,
	sizeof(asn_DEF_csi_RS_EnhancementsTDD_r13_tags_8)
		/sizeof(asn_DEF_csi_RS_EnhancementsTDD_r13_tags_8[0]) - 1, /* 1 */
	asn_DEF_csi_RS_EnhancementsTDD_r13_tags_8,	/* Same as above */
	sizeof(asn_DEF_csi_RS_EnhancementsTDD_r13_tags_8)
		/sizeof(asn_DEF_csi_RS_EnhancementsTDD_r13_tags_8[0]), /* 2 */
	{ &asn_OER_type_csi_RS_EnhancementsTDD_r13_constr_8, &asn_PER_type_csi_RS_EnhancementsTDD_r13_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_csi_RS_EnhancementsTDD_r13_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MIMO_UE_ParametersPerTM_r13_1[] = {
	{ ATF_POINTER, 5, offsetof(struct MIMO_UE_ParametersPerTM_r13, nonPrecoded_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_NonPrecodedCapabilities_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonPrecoded-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct MIMO_UE_ParametersPerTM_r13, beamformed_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_UE_BeamformedCapabilities_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"beamformed-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct MIMO_UE_ParametersPerTM_r13, channelMeasRestriction_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_channelMeasRestriction_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"channelMeasRestriction-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct MIMO_UE_ParametersPerTM_r13, dmrs_Enhancements_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dmrs_Enhancements_r13_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dmrs-Enhancements-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct MIMO_UE_ParametersPerTM_r13, csi_RS_EnhancementsTDD_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_csi_RS_EnhancementsTDD_r13_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-EnhancementsTDD-r13"
		},
};
static const int asn_MAP_MIMO_UE_ParametersPerTM_r13_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_MIMO_UE_ParametersPerTM_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MIMO_UE_ParametersPerTM_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nonPrecoded-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* beamformed-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* channelMeasRestriction-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dmrs-Enhancements-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* csi-RS-EnhancementsTDD-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_MIMO_UE_ParametersPerTM_r13_specs_1 = {
	sizeof(struct MIMO_UE_ParametersPerTM_r13),
	offsetof(struct MIMO_UE_ParametersPerTM_r13, _asn_ctx),
	asn_MAP_MIMO_UE_ParametersPerTM_r13_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_MIMO_UE_ParametersPerTM_r13_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MIMO_UE_ParametersPerTM_r13 = {
	"MIMO-UE-ParametersPerTM-r13",
	"MIMO-UE-ParametersPerTM-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_MIMO_UE_ParametersPerTM_r13_tags_1,
	sizeof(asn_DEF_MIMO_UE_ParametersPerTM_r13_tags_1)
		/sizeof(asn_DEF_MIMO_UE_ParametersPerTM_r13_tags_1[0]), /* 1 */
	asn_DEF_MIMO_UE_ParametersPerTM_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_MIMO_UE_ParametersPerTM_r13_tags_1)
		/sizeof(asn_DEF_MIMO_UE_ParametersPerTM_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MIMO_UE_ParametersPerTM_r13_1,
	5,	/* Elements count */
	&asn_SPC_MIMO_UE_ParametersPerTM_r13_specs_1	/* Additional specs */
};

