/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UAC-BarringInfoSet-v1700.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_uac_BarringFactorForAI3_r17_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_uac_BarringFactorForAI3_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_uac_BarringFactorForAI3_r17_value2enum_2[] = {
	{ 0,	3,	"p00" },
	{ 1,	3,	"p05" },
	{ 2,	3,	"p10" },
	{ 3,	3,	"p15" },
	{ 4,	3,	"p20" },
	{ 5,	3,	"p25" },
	{ 6,	3,	"p30" },
	{ 7,	3,	"p40" },
	{ 8,	3,	"p50" },
	{ 9,	3,	"p60" },
	{ 10,	3,	"p70" },
	{ 11,	3,	"p75" },
	{ 12,	3,	"p80" },
	{ 13,	3,	"p85" },
	{ 14,	3,	"p90" },
	{ 15,	3,	"p95" }
};
static const unsigned int asn_MAP_uac_BarringFactorForAI3_r17_enum2value_2[] = {
	0,	/* p00(0) */
	1,	/* p05(1) */
	2,	/* p10(2) */
	3,	/* p15(3) */
	4,	/* p20(4) */
	5,	/* p25(5) */
	6,	/* p30(6) */
	7,	/* p40(7) */
	8,	/* p50(8) */
	9,	/* p60(9) */
	10,	/* p70(10) */
	11,	/* p75(11) */
	12,	/* p80(12) */
	13,	/* p85(13) */
	14,	/* p90(14) */
	15	/* p95(15) */
};
static const asn_INTEGER_specifics_t asn_SPC_uac_BarringFactorForAI3_r17_specs_2 = {
	asn_MAP_uac_BarringFactorForAI3_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_uac_BarringFactorForAI3_r17_enum2value_2,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_uac_BarringFactorForAI3_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_uac_BarringFactorForAI3_r17_2 = {
	"uac-BarringFactorForAI3-r17",
	"uac-BarringFactorForAI3-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_uac_BarringFactorForAI3_r17_tags_2,
	sizeof(asn_DEF_uac_BarringFactorForAI3_r17_tags_2)
		/sizeof(asn_DEF_uac_BarringFactorForAI3_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_uac_BarringFactorForAI3_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_uac_BarringFactorForAI3_r17_tags_2)
		/sizeof(asn_DEF_uac_BarringFactorForAI3_r17_tags_2[0]), /* 2 */
	{ &asn_OER_type_uac_BarringFactorForAI3_r17_constr_2, &asn_PER_type_uac_BarringFactorForAI3_r17_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_uac_BarringFactorForAI3_r17_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UAC_BarringInfoSet_v1700_1[] = {
	{ ATF_POINTER, 1, offsetof(struct UAC_BarringInfoSet_v1700, uac_BarringFactorForAI3_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_uac_BarringFactorForAI3_r17_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uac-BarringFactorForAI3-r17"
		},
};
static const int asn_MAP_UAC_BarringInfoSet_v1700_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_UAC_BarringInfoSet_v1700_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UAC_BarringInfoSet_v1700_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* uac-BarringFactorForAI3-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_UAC_BarringInfoSet_v1700_specs_1 = {
	sizeof(struct UAC_BarringInfoSet_v1700),
	offsetof(struct UAC_BarringInfoSet_v1700, _asn_ctx),
	asn_MAP_UAC_BarringInfoSet_v1700_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_UAC_BarringInfoSet_v1700_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UAC_BarringInfoSet_v1700 = {
	"UAC-BarringInfoSet-v1700",
	"UAC-BarringInfoSet-v1700",
	&asn_OP_SEQUENCE,
	asn_DEF_UAC_BarringInfoSet_v1700_tags_1,
	sizeof(asn_DEF_UAC_BarringInfoSet_v1700_tags_1)
		/sizeof(asn_DEF_UAC_BarringInfoSet_v1700_tags_1[0]), /* 1 */
	asn_DEF_UAC_BarringInfoSet_v1700_tags_1,	/* Same as above */
	sizeof(asn_DEF_UAC_BarringInfoSet_v1700_tags_1)
		/sizeof(asn_DEF_UAC_BarringInfoSet_v1700_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UAC_BarringInfoSet_v1700_1,
	1,	/* Elements count */
	&asn_SPC_UAC_BarringInfoSet_v1700_specs_1	/* Additional specs */
};

