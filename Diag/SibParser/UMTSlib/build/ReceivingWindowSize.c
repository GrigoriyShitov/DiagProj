/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "ReceivingWindowSize.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_ReceivingWindowSize_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ReceivingWindowSize_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ReceivingWindowSize_value2enum_1[] = {
	{ 0,	3,	"rw1" },
	{ 1,	3,	"rw8" },
	{ 2,	4,	"rw16" },
	{ 3,	4,	"rw32" },
	{ 4,	4,	"rw64" },
	{ 5,	5,	"rw128" },
	{ 6,	5,	"rw256" },
	{ 7,	5,	"rw512" },
	{ 8,	5,	"rw768" },
	{ 9,	6,	"rw1024" },
	{ 10,	6,	"rw1536" },
	{ 11,	6,	"rw2047" },
	{ 12,	6,	"rw2560" },
	{ 13,	6,	"rw3072" },
	{ 14,	6,	"rw3584" },
	{ 15,	6,	"rw4095" }
};
static const unsigned int asn_MAP_ReceivingWindowSize_enum2value_1[] = {
	0,	/* rw1(0) */
	9,	/* rw1024(9) */
	5,	/* rw128(5) */
	10,	/* rw1536(10) */
	2,	/* rw16(2) */
	11,	/* rw2047(11) */
	6,	/* rw256(6) */
	12,	/* rw2560(12) */
	13,	/* rw3072(13) */
	3,	/* rw32(3) */
	14,	/* rw3584(14) */
	15,	/* rw4095(15) */
	7,	/* rw512(7) */
	4,	/* rw64(4) */
	8,	/* rw768(8) */
	1	/* rw8(1) */
};
const asn_INTEGER_specifics_t asn_SPC_ReceivingWindowSize_specs_1 = {
	asn_MAP_ReceivingWindowSize_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_ReceivingWindowSize_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ReceivingWindowSize_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ReceivingWindowSize = {
	"ReceivingWindowSize",
	"ReceivingWindowSize",
	&asn_OP_NativeEnumerated,
	asn_DEF_ReceivingWindowSize_tags_1,
	sizeof(asn_DEF_ReceivingWindowSize_tags_1)
		/sizeof(asn_DEF_ReceivingWindowSize_tags_1[0]), /* 1 */
	asn_DEF_ReceivingWindowSize_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReceivingWindowSize_tags_1)
		/sizeof(asn_DEF_ReceivingWindowSize_tags_1[0]), /* 1 */
	{ &asn_OER_type_ReceivingWindowSize_constr_1, &asn_PER_type_ReceivingWindowSize_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ReceivingWindowSize_specs_1	/* Additional specs */
};

