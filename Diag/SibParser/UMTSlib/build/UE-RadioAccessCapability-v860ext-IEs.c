/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UE-RadioAccessCapability-v860ext-IEs.h"

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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_supportOfCommonEDCH_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_supportOfCommonEDCH_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_supportOfMACiis_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_supportOfMACiis_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_supportOfSPSOperation_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_supportOfSPSOperation_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_supportOfControlChannelDRXOperation_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_supportOfControlChannelDRXOperation_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_supportOfCSG_constr_16 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_supportOfCSG_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_supportOfCommonEDCH_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_supportOfCommonEDCH_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_supportOfCommonEDCH_specs_8 = {
	asn_MAP_supportOfCommonEDCH_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_supportOfCommonEDCH_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_supportOfCommonEDCH_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportOfCommonEDCH_8 = {
	"supportOfCommonEDCH",
	"supportOfCommonEDCH",
	&asn_OP_NativeEnumerated,
	asn_DEF_supportOfCommonEDCH_tags_8,
	sizeof(asn_DEF_supportOfCommonEDCH_tags_8)
		/sizeof(asn_DEF_supportOfCommonEDCH_tags_8[0]) - 1, /* 1 */
	asn_DEF_supportOfCommonEDCH_tags_8,	/* Same as above */
	sizeof(asn_DEF_supportOfCommonEDCH_tags_8)
		/sizeof(asn_DEF_supportOfCommonEDCH_tags_8[0]), /* 2 */
	{ &asn_OER_type_supportOfCommonEDCH_constr_8, &asn_PER_type_supportOfCommonEDCH_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportOfCommonEDCH_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_supportOfMACiis_value2enum_10[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_supportOfMACiis_enum2value_10[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_supportOfMACiis_specs_10 = {
	asn_MAP_supportOfMACiis_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_supportOfMACiis_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_supportOfMACiis_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportOfMACiis_10 = {
	"supportOfMACiis",
	"supportOfMACiis",
	&asn_OP_NativeEnumerated,
	asn_DEF_supportOfMACiis_tags_10,
	sizeof(asn_DEF_supportOfMACiis_tags_10)
		/sizeof(asn_DEF_supportOfMACiis_tags_10[0]) - 1, /* 1 */
	asn_DEF_supportOfMACiis_tags_10,	/* Same as above */
	sizeof(asn_DEF_supportOfMACiis_tags_10)
		/sizeof(asn_DEF_supportOfMACiis_tags_10[0]), /* 2 */
	{ &asn_OER_type_supportOfMACiis_constr_10, &asn_PER_type_supportOfMACiis_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportOfMACiis_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_supportOfSPSOperation_value2enum_12[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_supportOfSPSOperation_enum2value_12[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_supportOfSPSOperation_specs_12 = {
	asn_MAP_supportOfSPSOperation_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_supportOfSPSOperation_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_supportOfSPSOperation_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportOfSPSOperation_12 = {
	"supportOfSPSOperation",
	"supportOfSPSOperation",
	&asn_OP_NativeEnumerated,
	asn_DEF_supportOfSPSOperation_tags_12,
	sizeof(asn_DEF_supportOfSPSOperation_tags_12)
		/sizeof(asn_DEF_supportOfSPSOperation_tags_12[0]) - 1, /* 1 */
	asn_DEF_supportOfSPSOperation_tags_12,	/* Same as above */
	sizeof(asn_DEF_supportOfSPSOperation_tags_12)
		/sizeof(asn_DEF_supportOfSPSOperation_tags_12[0]), /* 2 */
	{ &asn_OER_type_supportOfSPSOperation_constr_12, &asn_PER_type_supportOfSPSOperation_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportOfSPSOperation_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_supportOfControlChannelDRXOperation_value2enum_14[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_supportOfControlChannelDRXOperation_enum2value_14[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_supportOfControlChannelDRXOperation_specs_14 = {
	asn_MAP_supportOfControlChannelDRXOperation_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_supportOfControlChannelDRXOperation_enum2value_14,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_supportOfControlChannelDRXOperation_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportOfControlChannelDRXOperation_14 = {
	"supportOfControlChannelDRXOperation",
	"supportOfControlChannelDRXOperation",
	&asn_OP_NativeEnumerated,
	asn_DEF_supportOfControlChannelDRXOperation_tags_14,
	sizeof(asn_DEF_supportOfControlChannelDRXOperation_tags_14)
		/sizeof(asn_DEF_supportOfControlChannelDRXOperation_tags_14[0]) - 1, /* 1 */
	asn_DEF_supportOfControlChannelDRXOperation_tags_14,	/* Same as above */
	sizeof(asn_DEF_supportOfControlChannelDRXOperation_tags_14)
		/sizeof(asn_DEF_supportOfControlChannelDRXOperation_tags_14[0]), /* 2 */
	{ &asn_OER_type_supportOfControlChannelDRXOperation_constr_14, &asn_PER_type_supportOfControlChannelDRXOperation_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportOfControlChannelDRXOperation_specs_14	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_supportOfCSG_value2enum_16[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_supportOfCSG_enum2value_16[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_supportOfCSG_specs_16 = {
	asn_MAP_supportOfCSG_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_supportOfCSG_enum2value_16,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_supportOfCSG_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportOfCSG_16 = {
	"supportOfCSG",
	"supportOfCSG",
	&asn_OP_NativeEnumerated,
	asn_DEF_supportOfCSG_tags_16,
	sizeof(asn_DEF_supportOfCSG_tags_16)
		/sizeof(asn_DEF_supportOfCSG_tags_16[0]) - 1, /* 1 */
	asn_DEF_supportOfCSG_tags_16,	/* Same as above */
	sizeof(asn_DEF_supportOfCSG_tags_16)
		/sizeof(asn_DEF_supportOfCSG_tags_16[0]), /* 2 */
	{ &asn_OER_type_supportOfCSG_constr_16, &asn_PER_type_supportOfCSG_constr_16, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportOfCSG_specs_16	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_RadioAccessCapability_v860ext_IEs_1[] = {
	{ ATF_POINTER, 1, offsetof(struct UE_RadioAccessCapability_v860ext_IEs, rf_Capability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RF_Capability_v860ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rf-Capability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_v860ext_IEs, physicalChannelCapability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysicalChannelCapability_v860ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physicalChannelCapability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_v860ext_IEs, multiModeRAT_Capability),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiModeRAT_Capability_v860ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiModeRAT-Capability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_v860ext_IEs, ue_PositioningCapability),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_PositioningCapability_v860ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-PositioningCapability"
		},
	{ ATF_POINTER, 8, offsetof(struct UE_RadioAccessCapability_v860ext_IEs, measurementCapability),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementCapability_v860ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measurementCapability"
		},
	{ ATF_POINTER, 7, offsetof(struct UE_RadioAccessCapability_v860ext_IEs, measurementCapabilityTDD),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementCapabilityTDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measurementCapabilityTDD"
		},
	{ ATF_POINTER, 6, offsetof(struct UE_RadioAccessCapability_v860ext_IEs, supportOfCommonEDCH),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportOfCommonEDCH_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportOfCommonEDCH"
		},
	{ ATF_POINTER, 5, offsetof(struct UE_RadioAccessCapability_v860ext_IEs, supportOfMACiis),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportOfMACiis_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportOfMACiis"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_RadioAccessCapability_v860ext_IEs, supportOfSPSOperation),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportOfSPSOperation_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportOfSPSOperation"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_RadioAccessCapability_v860ext_IEs, supportOfControlChannelDRXOperation),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportOfControlChannelDRXOperation_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportOfControlChannelDRXOperation"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_RadioAccessCapability_v860ext_IEs, supportOfCSG),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportOfCSG_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportOfCSG"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_RadioAccessCapability_v860ext_IEs, ue_RadioAccessCapabBandFDDList3),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_RadioAccessCapabBandFDDList3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-RadioAccessCapabBandFDDList3"
		},
};
static const int asn_MAP_UE_RadioAccessCapability_v860ext_IEs_oms_1[] = { 0, 4, 5, 6, 7, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_UE_RadioAccessCapability_v860ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_RadioAccessCapability_v860ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rf-Capability */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* physicalChannelCapability */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* multiModeRAT-Capability */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ue-PositioningCapability */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* measurementCapability */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* measurementCapabilityTDD */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* supportOfCommonEDCH */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* supportOfMACiis */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* supportOfSPSOperation */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* supportOfControlChannelDRXOperation */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* supportOfCSG */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* ue-RadioAccessCapabBandFDDList3 */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_RadioAccessCapability_v860ext_IEs_specs_1 = {
	sizeof(struct UE_RadioAccessCapability_v860ext_IEs),
	offsetof(struct UE_RadioAccessCapability_v860ext_IEs, _asn_ctx),
	asn_MAP_UE_RadioAccessCapability_v860ext_IEs_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_UE_RadioAccessCapability_v860ext_IEs_oms_1,	/* Optional members */
	9, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapability_v860ext_IEs = {
	"UE-RadioAccessCapability-v860ext-IEs",
	"UE-RadioAccessCapability-v860ext-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_RadioAccessCapability_v860ext_IEs_tags_1,
	sizeof(asn_DEF_UE_RadioAccessCapability_v860ext_IEs_tags_1)
		/sizeof(asn_DEF_UE_RadioAccessCapability_v860ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_RadioAccessCapability_v860ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_RadioAccessCapability_v860ext_IEs_tags_1)
		/sizeof(asn_DEF_UE_RadioAccessCapability_v860ext_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_RadioAccessCapability_v860ext_IEs_1,
	12,	/* Elements count */
	&asn_SPC_UE_RadioAccessCapability_v860ext_IEs_specs_1	/* Additional specs */
};

