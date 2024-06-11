/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "T-317.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_T_317_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_T_317_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_T_317_value2enum_1[] = {
	{ 0,	9,	"infinity0" },
	{ 1,	9,	"infinity1" },
	{ 2,	9,	"infinity2" },
	{ 3,	9,	"infinity3" },
	{ 4,	9,	"infinity4" },
	{ 5,	9,	"infinity5" },
	{ 6,	9,	"infinity6" },
	{ 7,	9,	"infinity7" }
};
static const unsigned int asn_MAP_T_317_enum2value_1[] = {
	0,	/* infinity0(0) */
	1,	/* infinity1(1) */
	2,	/* infinity2(2) */
	3,	/* infinity3(3) */
	4,	/* infinity4(4) */
	5,	/* infinity5(5) */
	6,	/* infinity6(6) */
	7	/* infinity7(7) */
};
const asn_INTEGER_specifics_t asn_SPC_T_317_specs_1 = {
	asn_MAP_T_317_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_T_317_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_T_317_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_T_317 = {
	"T-317",
	"T-317",
	&asn_OP_NativeEnumerated,
	asn_DEF_T_317_tags_1,
	sizeof(asn_DEF_T_317_tags_1)
		/sizeof(asn_DEF_T_317_tags_1[0]), /* 1 */
	asn_DEF_T_317_tags_1,	/* Same as above */
	sizeof(asn_DEF_T_317_tags_1)
		/sizeof(asn_DEF_T_317_tags_1[0]), /* 1 */
	{ &asn_OER_type_T_317_constr_1, &asn_PER_type_T_317_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_T_317_specs_1	/* Additional specs */
};

