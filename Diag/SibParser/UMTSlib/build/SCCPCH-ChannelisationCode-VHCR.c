/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SCCPCH-ChannelisationCode-VHCR.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_SCCPCH_ChannelisationCode_VHCR_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_SCCPCH_ChannelisationCode_VHCR_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_SCCPCH_ChannelisationCode_VHCR_value2enum_1[] = {
	{ 0,	6,	"cc32-1" },
	{ 1,	6,	"cc32-2" },
	{ 2,	6,	"cc32-3" },
	{ 3,	6,	"cc32-4" },
	{ 4,	6,	"cc32-5" },
	{ 5,	6,	"cc32-6" },
	{ 6,	6,	"cc32-7" },
	{ 7,	6,	"cc32-8" },
	{ 8,	6,	"cc32-9" },
	{ 9,	7,	"cc32-10" },
	{ 10,	7,	"cc32-11" },
	{ 11,	7,	"cc32-12" },
	{ 12,	7,	"cc32-13" },
	{ 13,	7,	"cc32-14" },
	{ 14,	7,	"cc32-15" },
	{ 15,	7,	"cc32-16" },
	{ 16,	7,	"cc32-17" },
	{ 17,	7,	"cc32-18" },
	{ 18,	7,	"cc32-19" },
	{ 19,	7,	"cc32-20" },
	{ 20,	7,	"cc32-21" },
	{ 21,	7,	"cc32-22" },
	{ 22,	7,	"cc32-23" },
	{ 23,	7,	"cc32-24" },
	{ 24,	7,	"cc32-25" },
	{ 25,	7,	"cc32-26" },
	{ 26,	7,	"cc32-27" },
	{ 27,	7,	"cc32-28" },
	{ 28,	7,	"cc32-29" },
	{ 29,	7,	"cc32-30" },
	{ 30,	7,	"cc32-31" },
	{ 31,	7,	"cc32-32" }
};
static const unsigned int asn_MAP_SCCPCH_ChannelisationCode_VHCR_enum2value_1[] = {
	0,	/* cc32-1(0) */
	9,	/* cc32-10(9) */
	10,	/* cc32-11(10) */
	11,	/* cc32-12(11) */
	12,	/* cc32-13(12) */
	13,	/* cc32-14(13) */
	14,	/* cc32-15(14) */
	15,	/* cc32-16(15) */
	16,	/* cc32-17(16) */
	17,	/* cc32-18(17) */
	18,	/* cc32-19(18) */
	1,	/* cc32-2(1) */
	19,	/* cc32-20(19) */
	20,	/* cc32-21(20) */
	21,	/* cc32-22(21) */
	22,	/* cc32-23(22) */
	23,	/* cc32-24(23) */
	24,	/* cc32-25(24) */
	25,	/* cc32-26(25) */
	26,	/* cc32-27(26) */
	27,	/* cc32-28(27) */
	28,	/* cc32-29(28) */
	2,	/* cc32-3(2) */
	29,	/* cc32-30(29) */
	30,	/* cc32-31(30) */
	31,	/* cc32-32(31) */
	3,	/* cc32-4(3) */
	4,	/* cc32-5(4) */
	5,	/* cc32-6(5) */
	6,	/* cc32-7(6) */
	7,	/* cc32-8(7) */
	8	/* cc32-9(8) */
};
const asn_INTEGER_specifics_t asn_SPC_SCCPCH_ChannelisationCode_VHCR_specs_1 = {
	asn_MAP_SCCPCH_ChannelisationCode_VHCR_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SCCPCH_ChannelisationCode_VHCR_enum2value_1,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_SCCPCH_ChannelisationCode_VHCR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SCCPCH_ChannelisationCode_VHCR = {
	"SCCPCH-ChannelisationCode-VHCR",
	"SCCPCH-ChannelisationCode-VHCR",
	&asn_OP_NativeEnumerated,
	asn_DEF_SCCPCH_ChannelisationCode_VHCR_tags_1,
	sizeof(asn_DEF_SCCPCH_ChannelisationCode_VHCR_tags_1)
		/sizeof(asn_DEF_SCCPCH_ChannelisationCode_VHCR_tags_1[0]), /* 1 */
	asn_DEF_SCCPCH_ChannelisationCode_VHCR_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCCPCH_ChannelisationCode_VHCR_tags_1)
		/sizeof(asn_DEF_SCCPCH_ChannelisationCode_VHCR_tags_1[0]), /* 1 */
	{ &asn_OER_type_SCCPCH_ChannelisationCode_VHCR_constr_1, &asn_PER_type_SCCPCH_ChannelisationCode_VHCR_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SCCPCH_ChannelisationCode_VHCR_specs_1	/* Additional specs */
};

