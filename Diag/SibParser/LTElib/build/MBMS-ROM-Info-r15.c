/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "MBMS-ROM-Info-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_mbms_ROM_SubcarrierSpacing_r15_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_mbms_ROM_SubcarrierSpacing_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_mbms_Bandwidth_r15_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_mbms_Bandwidth_r15_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_mbms_ROM_SubcarrierSpacing_r15_value2enum_3[] = {
	{ 0,	5,	"kHz15" },
	{ 1,	8,	"kHz7dot5" },
	{ 2,	9,	"kHz1dot25" }
};
static const unsigned int asn_MAP_mbms_ROM_SubcarrierSpacing_r15_enum2value_3[] = {
	0,	/* kHz15(0) */
	2,	/* kHz1dot25(2) */
	1	/* kHz7dot5(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_mbms_ROM_SubcarrierSpacing_r15_specs_3 = {
	asn_MAP_mbms_ROM_SubcarrierSpacing_r15_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_mbms_ROM_SubcarrierSpacing_r15_enum2value_3,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mbms_ROM_SubcarrierSpacing_r15_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mbms_ROM_SubcarrierSpacing_r15_3 = {
	"mbms-ROM-SubcarrierSpacing-r15",
	"mbms-ROM-SubcarrierSpacing-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_mbms_ROM_SubcarrierSpacing_r15_tags_3,
	sizeof(asn_DEF_mbms_ROM_SubcarrierSpacing_r15_tags_3)
		/sizeof(asn_DEF_mbms_ROM_SubcarrierSpacing_r15_tags_3[0]) - 1, /* 1 */
	asn_DEF_mbms_ROM_SubcarrierSpacing_r15_tags_3,	/* Same as above */
	sizeof(asn_DEF_mbms_ROM_SubcarrierSpacing_r15_tags_3)
		/sizeof(asn_DEF_mbms_ROM_SubcarrierSpacing_r15_tags_3[0]), /* 2 */
	{ &asn_OER_type_mbms_ROM_SubcarrierSpacing_r15_constr_3, &asn_PER_type_mbms_ROM_SubcarrierSpacing_r15_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mbms_ROM_SubcarrierSpacing_r15_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mbms_Bandwidth_r15_value2enum_7[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" }
};
static const unsigned int asn_MAP_mbms_Bandwidth_r15_enum2value_7[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4	/* n75(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_mbms_Bandwidth_r15_specs_7 = {
	asn_MAP_mbms_Bandwidth_r15_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_mbms_Bandwidth_r15_enum2value_7,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mbms_Bandwidth_r15_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mbms_Bandwidth_r15_7 = {
	"mbms-Bandwidth-r15",
	"mbms-Bandwidth-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_mbms_Bandwidth_r15_tags_7,
	sizeof(asn_DEF_mbms_Bandwidth_r15_tags_7)
		/sizeof(asn_DEF_mbms_Bandwidth_r15_tags_7[0]) - 1, /* 1 */
	asn_DEF_mbms_Bandwidth_r15_tags_7,	/* Same as above */
	sizeof(asn_DEF_mbms_Bandwidth_r15_tags_7)
		/sizeof(asn_DEF_mbms_Bandwidth_r15_tags_7[0]), /* 2 */
	{ &asn_OER_type_mbms_Bandwidth_r15_constr_7, &asn_PER_type_mbms_Bandwidth_r15_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mbms_Bandwidth_r15_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MBMS_ROM_Info_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_ROM_Info_r15, mbms_ROM_Freq_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-ROM-Freq-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_ROM_Info_r15, mbms_ROM_SubcarrierSpacing_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mbms_ROM_SubcarrierSpacing_r15_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-ROM-SubcarrierSpacing-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_ROM_Info_r15, mbms_Bandwidth_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mbms_Bandwidth_r15_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-Bandwidth-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_MBMS_ROM_Info_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBMS_ROM_Info_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbms-ROM-Freq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbms-ROM-SubcarrierSpacing-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* mbms-Bandwidth-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_MBMS_ROM_Info_r15_specs_1 = {
	sizeof(struct MBMS_ROM_Info_r15),
	offsetof(struct MBMS_ROM_Info_r15, _asn_ctx),
	asn_MAP_MBMS_ROM_Info_r15_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_ROM_Info_r15 = {
	"MBMS-ROM-Info-r15",
	"MBMS-ROM-Info-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_MBMS_ROM_Info_r15_tags_1,
	sizeof(asn_DEF_MBMS_ROM_Info_r15_tags_1)
		/sizeof(asn_DEF_MBMS_ROM_Info_r15_tags_1[0]), /* 1 */
	asn_DEF_MBMS_ROM_Info_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_ROM_Info_r15_tags_1)
		/sizeof(asn_DEF_MBMS_ROM_Info_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MBMS_ROM_Info_r15_1,
	3,	/* Elements count */
	&asn_SPC_MBMS_ROM_Info_r15_specs_1	/* Additional specs */
};

