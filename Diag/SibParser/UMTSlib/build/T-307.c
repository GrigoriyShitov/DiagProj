/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "T-307.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_T_307_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_T_307_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_T_307_value2enum_1[] = {
	{ 0,	2,	"s5" },
	{ 1,	3,	"s10" },
	{ 2,	3,	"s15" },
	{ 3,	3,	"s20" },
	{ 4,	3,	"s30" },
	{ 5,	3,	"s40" },
	{ 6,	3,	"s50" },
	{ 7,	5,	"spare" }
};
static const unsigned int asn_MAP_T_307_enum2value_1[] = {
	1,	/* s10(1) */
	2,	/* s15(2) */
	3,	/* s20(3) */
	4,	/* s30(4) */
	5,	/* s40(5) */
	0,	/* s5(0) */
	6,	/* s50(6) */
	7	/* spare(7) */
};
const asn_INTEGER_specifics_t asn_SPC_T_307_specs_1 = {
	asn_MAP_T_307_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_T_307_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_T_307_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_T_307 = {
	"T-307",
	"T-307",
	&asn_OP_NativeEnumerated,
	asn_DEF_T_307_tags_1,
	sizeof(asn_DEF_T_307_tags_1)
		/sizeof(asn_DEF_T_307_tags_1[0]), /* 1 */
	asn_DEF_T_307_tags_1,	/* Same as above */
	sizeof(asn_DEF_T_307_tags_1)
		/sizeof(asn_DEF_T_307_tags_1[0]), /* 1 */
	{ &asn_OER_type_T_307_constr_1, &asn_PER_type_T_307_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_T_307_specs_1	/* Additional specs */
};

