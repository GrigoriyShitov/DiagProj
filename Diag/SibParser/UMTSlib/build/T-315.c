/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "T-315.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_T_315_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_T_315_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_T_315_value2enum_1[] = {
	{ 0,	2,	"s0" },
	{ 1,	3,	"s10" },
	{ 2,	3,	"s30" },
	{ 3,	3,	"s60" },
	{ 4,	4,	"s180" },
	{ 5,	4,	"s600" },
	{ 6,	5,	"s1200" },
	{ 7,	5,	"s1800" }
};
static const unsigned int asn_MAP_T_315_enum2value_1[] = {
	0,	/* s0(0) */
	1,	/* s10(1) */
	6,	/* s1200(6) */
	4,	/* s180(4) */
	7,	/* s1800(7) */
	2,	/* s30(2) */
	3,	/* s60(3) */
	5	/* s600(5) */
};
const asn_INTEGER_specifics_t asn_SPC_T_315_specs_1 = {
	asn_MAP_T_315_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_T_315_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_T_315_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_T_315 = {
	"T-315",
	"T-315",
	&asn_OP_NativeEnumerated,
	asn_DEF_T_315_tags_1,
	sizeof(asn_DEF_T_315_tags_1)
		/sizeof(asn_DEF_T_315_tags_1[0]), /* 1 */
	asn_DEF_T_315_tags_1,	/* Same as above */
	sizeof(asn_DEF_T_315_tags_1)
		/sizeof(asn_DEF_T_315_tags_1[0]), /* 1 */
	{ &asn_OER_type_T_315_constr_1, &asn_PER_type_T_315_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_T_315_specs_1	/* Additional specs */
};

