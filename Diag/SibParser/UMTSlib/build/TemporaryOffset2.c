/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "TemporaryOffset2.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_TemporaryOffset2_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_TemporaryOffset2_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_TemporaryOffset2_value2enum_1[] = {
	{ 0,	3,	"to2" },
	{ 1,	3,	"to3" },
	{ 2,	3,	"to4" },
	{ 3,	3,	"to6" },
	{ 4,	3,	"to8" },
	{ 5,	4,	"to10" },
	{ 6,	4,	"to12" },
	{ 7,	8,	"infinite" }
};
static const unsigned int asn_MAP_TemporaryOffset2_enum2value_1[] = {
	7,	/* infinite(7) */
	5,	/* to10(5) */
	6,	/* to12(6) */
	0,	/* to2(0) */
	1,	/* to3(1) */
	2,	/* to4(2) */
	3,	/* to6(3) */
	4	/* to8(4) */
};
const asn_INTEGER_specifics_t asn_SPC_TemporaryOffset2_specs_1 = {
	asn_MAP_TemporaryOffset2_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_TemporaryOffset2_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_TemporaryOffset2_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TemporaryOffset2 = {
	"TemporaryOffset2",
	"TemporaryOffset2",
	&asn_OP_NativeEnumerated,
	asn_DEF_TemporaryOffset2_tags_1,
	sizeof(asn_DEF_TemporaryOffset2_tags_1)
		/sizeof(asn_DEF_TemporaryOffset2_tags_1[0]), /* 1 */
	asn_DEF_TemporaryOffset2_tags_1,	/* Same as above */
	sizeof(asn_DEF_TemporaryOffset2_tags_1)
		/sizeof(asn_DEF_TemporaryOffset2_tags_1[0]), /* 1 */
	{ &asn_OER_type_TemporaryOffset2_constr_1, &asn_PER_type_TemporaryOffset2_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_TemporaryOffset2_specs_1	/* Additional specs */
};

