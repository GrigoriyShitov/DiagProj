/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "MBSFN-AreaInfo-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_pmch_Bandwidth_r17_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pmch_Bandwidth_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_pmch_Bandwidth_r17_value2enum_3[] = {
	{ 0,	3,	"n40" },
	{ 1,	3,	"n35" },
	{ 2,	3,	"n30" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_pmch_Bandwidth_r17_enum2value_3[] = {
	2,	/* n30(2) */
	1,	/* n35(1) */
	0,	/* n40(0) */
	3	/* spare1(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_pmch_Bandwidth_r17_specs_3 = {
	asn_MAP_pmch_Bandwidth_r17_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_pmch_Bandwidth_r17_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pmch_Bandwidth_r17_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pmch_Bandwidth_r17_3 = {
	"pmch-Bandwidth-r17",
	"pmch-Bandwidth-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_pmch_Bandwidth_r17_tags_3,
	sizeof(asn_DEF_pmch_Bandwidth_r17_tags_3)
		/sizeof(asn_DEF_pmch_Bandwidth_r17_tags_3[0]) - 1, /* 1 */
	asn_DEF_pmch_Bandwidth_r17_tags_3,	/* Same as above */
	sizeof(asn_DEF_pmch_Bandwidth_r17_tags_3)
		/sizeof(asn_DEF_pmch_Bandwidth_r17_tags_3[0]), /* 2 */
	{ &asn_OER_type_pmch_Bandwidth_r17_constr_3, &asn_PER_type_pmch_Bandwidth_r17_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pmch_Bandwidth_r17_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MBSFN_AreaInfo_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r17, mbsfn_AreaInfo_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFN_AreaInfo_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbsfn-AreaInfo-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r17, pmch_Bandwidth_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pmch_Bandwidth_r17_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pmch-Bandwidth-r17"
		},
};
static const ber_tlv_tag_t asn_DEF_MBSFN_AreaInfo_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBSFN_AreaInfo_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbsfn-AreaInfo-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pmch-Bandwidth-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_MBSFN_AreaInfo_r17_specs_1 = {
	sizeof(struct MBSFN_AreaInfo_r17),
	offsetof(struct MBSFN_AreaInfo_r17, _asn_ctx),
	asn_MAP_MBSFN_AreaInfo_r17_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBSFN_AreaInfo_r17 = {
	"MBSFN-AreaInfo-r17",
	"MBSFN-AreaInfo-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_MBSFN_AreaInfo_r17_tags_1,
	sizeof(asn_DEF_MBSFN_AreaInfo_r17_tags_1)
		/sizeof(asn_DEF_MBSFN_AreaInfo_r17_tags_1[0]), /* 1 */
	asn_DEF_MBSFN_AreaInfo_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBSFN_AreaInfo_r17_tags_1)
		/sizeof(asn_DEF_MBSFN_AreaInfo_r17_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MBSFN_AreaInfo_r17_1,
	2,	/* Elements count */
	&asn_SPC_MBSFN_AreaInfo_r17_specs_1	/* Additional specs */
};

