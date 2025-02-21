/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "RLC-BuffersPayload.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_RLC_BuffersPayload_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_RLC_BuffersPayload_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RLC_BuffersPayload_value2enum_1[] = {
	{ 0,	3,	"pl0" },
	{ 1,	3,	"pl4" },
	{ 2,	3,	"pl8" },
	{ 3,	4,	"pl16" },
	{ 4,	4,	"pl32" },
	{ 5,	4,	"pl64" },
	{ 6,	5,	"pl128" },
	{ 7,	5,	"pl256" },
	{ 8,	5,	"pl512" },
	{ 9,	6,	"pl1024" },
	{ 10,	4,	"pl2k" },
	{ 11,	4,	"pl4k" },
	{ 12,	4,	"pl8k" },
	{ 13,	5,	"pl16k" },
	{ 14,	5,	"pl32k" },
	{ 15,	5,	"pl64k" },
	{ 16,	6,	"pl128k" },
	{ 17,	6,	"pl256k" },
	{ 18,	6,	"pl512k" },
	{ 19,	7,	"pl1024k" },
	{ 20,	7,	"spare12" },
	{ 21,	7,	"spare11" },
	{ 22,	7,	"spare10" },
	{ 23,	6,	"spare9" },
	{ 24,	6,	"spare8" },
	{ 25,	6,	"spare7" },
	{ 26,	6,	"spare6" },
	{ 27,	6,	"spare5" },
	{ 28,	6,	"spare4" },
	{ 29,	6,	"spare3" },
	{ 30,	6,	"spare2" },
	{ 31,	6,	"spare1" }
};
static const unsigned int asn_MAP_RLC_BuffersPayload_enum2value_1[] = {
	0,	/* pl0(0) */
	9,	/* pl1024(9) */
	19,	/* pl1024k(19) */
	6,	/* pl128(6) */
	16,	/* pl128k(16) */
	3,	/* pl16(3) */
	13,	/* pl16k(13) */
	7,	/* pl256(7) */
	17,	/* pl256k(17) */
	10,	/* pl2k(10) */
	4,	/* pl32(4) */
	14,	/* pl32k(14) */
	1,	/* pl4(1) */
	11,	/* pl4k(11) */
	8,	/* pl512(8) */
	18,	/* pl512k(18) */
	5,	/* pl64(5) */
	15,	/* pl64k(15) */
	2,	/* pl8(2) */
	12,	/* pl8k(12) */
	31,	/* spare1(31) */
	22,	/* spare10(22) */
	21,	/* spare11(21) */
	20,	/* spare12(20) */
	30,	/* spare2(30) */
	29,	/* spare3(29) */
	28,	/* spare4(28) */
	27,	/* spare5(27) */
	26,	/* spare6(26) */
	25,	/* spare7(25) */
	24,	/* spare8(24) */
	23	/* spare9(23) */
};
const asn_INTEGER_specifics_t asn_SPC_RLC_BuffersPayload_specs_1 = {
	asn_MAP_RLC_BuffersPayload_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_RLC_BuffersPayload_enum2value_1,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RLC_BuffersPayload_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RLC_BuffersPayload = {
	"RLC-BuffersPayload",
	"RLC-BuffersPayload",
	&asn_OP_NativeEnumerated,
	asn_DEF_RLC_BuffersPayload_tags_1,
	sizeof(asn_DEF_RLC_BuffersPayload_tags_1)
		/sizeof(asn_DEF_RLC_BuffersPayload_tags_1[0]), /* 1 */
	asn_DEF_RLC_BuffersPayload_tags_1,	/* Same as above */
	sizeof(asn_DEF_RLC_BuffersPayload_tags_1)
		/sizeof(asn_DEF_RLC_BuffersPayload_tags_1[0]), /* 1 */
	{ &asn_OER_type_RLC_BuffersPayload_constr_1, &asn_PER_type_RLC_BuffersPayload_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RLC_BuffersPayload_specs_1	/* Additional specs */
};

