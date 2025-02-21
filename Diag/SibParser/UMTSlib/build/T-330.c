/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "T-330.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_T_330_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_T_330_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_T_330_value2enum_1[] = {
	{ 0,	2,	"m5" },
	{ 1,	3,	"m10" },
	{ 2,	3,	"m20" },
	{ 3,	3,	"m30" },
	{ 4,	3,	"m60" },
	{ 5,	4,	"m120" },
	{ 6,	4,	"m180" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_T_330_enum2value_1[] = {
	1,	/* m10(1) */
	5,	/* m120(5) */
	6,	/* m180(6) */
	2,	/* m20(2) */
	3,	/* m30(3) */
	0,	/* m5(0) */
	4,	/* m60(4) */
	7	/* spare1(7) */
};
const asn_INTEGER_specifics_t asn_SPC_T_330_specs_1 = {
	asn_MAP_T_330_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_T_330_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_T_330_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_T_330 = {
	"T-330",
	"T-330",
	&asn_OP_NativeEnumerated,
	asn_DEF_T_330_tags_1,
	sizeof(asn_DEF_T_330_tags_1)
		/sizeof(asn_DEF_T_330_tags_1[0]), /* 1 */
	asn_DEF_T_330_tags_1,	/* Same as above */
	sizeof(asn_DEF_T_330_tags_1)
		/sizeof(asn_DEF_T_330_tags_1[0]), /* 1 */
	{ &asn_OER_type_T_330_constr_1, &asn_PER_type_T_330_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_T_330_specs_1	/* Additional specs */
};

