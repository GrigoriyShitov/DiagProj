/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "WindowSizeOSD-r6.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_WindowSizeOSD_r6_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_WindowSizeOSD_r6_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_WindowSizeOSD_r6_value2enum_1[] = {
	{ 0,	3,	"ws8" },
	{ 1,	4,	"ws16" },
	{ 2,	4,	"ws32" },
	{ 3,	4,	"ws40" },
	{ 4,	4,	"ws48" },
	{ 5,	4,	"ws56" },
	{ 6,	4,	"ws64" }
};
static const unsigned int asn_MAP_WindowSizeOSD_r6_enum2value_1[] = {
	1,	/* ws16(1) */
	2,	/* ws32(2) */
	3,	/* ws40(3) */
	4,	/* ws48(4) */
	5,	/* ws56(5) */
	6,	/* ws64(6) */
	0	/* ws8(0) */
};
const asn_INTEGER_specifics_t asn_SPC_WindowSizeOSD_r6_specs_1 = {
	asn_MAP_WindowSizeOSD_r6_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_WindowSizeOSD_r6_enum2value_1,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_WindowSizeOSD_r6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_WindowSizeOSD_r6 = {
	"WindowSizeOSD-r6",
	"WindowSizeOSD-r6",
	&asn_OP_NativeEnumerated,
	asn_DEF_WindowSizeOSD_r6_tags_1,
	sizeof(asn_DEF_WindowSizeOSD_r6_tags_1)
		/sizeof(asn_DEF_WindowSizeOSD_r6_tags_1[0]), /* 1 */
	asn_DEF_WindowSizeOSD_r6_tags_1,	/* Same as above */
	sizeof(asn_DEF_WindowSizeOSD_r6_tags_1)
		/sizeof(asn_DEF_WindowSizeOSD_r6_tags_1[0]), /* 1 */
	{ &asn_OER_type_WindowSizeOSD_r6_constr_1, &asn_PER_type_WindowSizeOSD_r6_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_WindowSizeOSD_r6_specs_1	/* Additional specs */
};

