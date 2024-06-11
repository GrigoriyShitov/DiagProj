/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "MinimumSpreadingFactor.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_MinimumSpreadingFactor_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_MinimumSpreadingFactor_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_MinimumSpreadingFactor_value2enum_1[] = {
	{ 0,	3,	"sf4" },
	{ 1,	3,	"sf8" },
	{ 2,	4,	"sf16" },
	{ 3,	4,	"sf32" },
	{ 4,	4,	"sf64" },
	{ 5,	5,	"sf128" },
	{ 6,	5,	"sf256" }
};
static const unsigned int asn_MAP_MinimumSpreadingFactor_enum2value_1[] = {
	5,	/* sf128(5) */
	2,	/* sf16(2) */
	6,	/* sf256(6) */
	3,	/* sf32(3) */
	0,	/* sf4(0) */
	4,	/* sf64(4) */
	1	/* sf8(1) */
};
const asn_INTEGER_specifics_t asn_SPC_MinimumSpreadingFactor_specs_1 = {
	asn_MAP_MinimumSpreadingFactor_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_MinimumSpreadingFactor_enum2value_1,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_MinimumSpreadingFactor_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_MinimumSpreadingFactor = {
	"MinimumSpreadingFactor",
	"MinimumSpreadingFactor",
	&asn_OP_NativeEnumerated,
	asn_DEF_MinimumSpreadingFactor_tags_1,
	sizeof(asn_DEF_MinimumSpreadingFactor_tags_1)
		/sizeof(asn_DEF_MinimumSpreadingFactor_tags_1[0]), /* 1 */
	asn_DEF_MinimumSpreadingFactor_tags_1,	/* Same as above */
	sizeof(asn_DEF_MinimumSpreadingFactor_tags_1)
		/sizeof(asn_DEF_MinimumSpreadingFactor_tags_1[0]), /* 1 */
	{ &asn_OER_type_MinimumSpreadingFactor_constr_1, &asn_PER_type_MinimumSpreadingFactor_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_MinimumSpreadingFactor_specs_1	/* Additional specs */
};

