/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "MaxHcContextSpace-r5.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_MaxHcContextSpace_r5_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_MaxHcContextSpace_r5_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  8 }	/* (0..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_MaxHcContextSpace_r5_value2enum_1[] = {
	{ 0,	5,	"dummy" },
	{ 1,	6,	"by1024" },
	{ 2,	6,	"by2048" },
	{ 3,	6,	"by4096" },
	{ 4,	6,	"by8192" },
	{ 5,	7,	"by16384" },
	{ 6,	7,	"by32768" },
	{ 7,	7,	"by65536" },
	{ 8,	8,	"by131072" }
};
static const unsigned int asn_MAP_MaxHcContextSpace_r5_enum2value_1[] = {
	1,	/* by1024(1) */
	8,	/* by131072(8) */
	5,	/* by16384(5) */
	2,	/* by2048(2) */
	6,	/* by32768(6) */
	3,	/* by4096(3) */
	7,	/* by65536(7) */
	4,	/* by8192(4) */
	0	/* dummy(0) */
};
const asn_INTEGER_specifics_t asn_SPC_MaxHcContextSpace_r5_specs_1 = {
	asn_MAP_MaxHcContextSpace_r5_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_MaxHcContextSpace_r5_enum2value_1,	/* N => "tag"; sorted by N */
	9,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_MaxHcContextSpace_r5_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_MaxHcContextSpace_r5 = {
	"MaxHcContextSpace-r5",
	"MaxHcContextSpace-r5",
	&asn_OP_NativeEnumerated,
	asn_DEF_MaxHcContextSpace_r5_tags_1,
	sizeof(asn_DEF_MaxHcContextSpace_r5_tags_1)
		/sizeof(asn_DEF_MaxHcContextSpace_r5_tags_1[0]), /* 1 */
	asn_DEF_MaxHcContextSpace_r5_tags_1,	/* Same as above */
	sizeof(asn_DEF_MaxHcContextSpace_r5_tags_1)
		/sizeof(asn_DEF_MaxHcContextSpace_r5_tags_1[0]), /* 1 */
	{ &asn_OER_type_MaxHcContextSpace_r5_constr_1, &asn_PER_type_MaxHcContextSpace_r5_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_MaxHcContextSpace_r5_specs_1	/* Additional specs */
};

