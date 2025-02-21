/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "CarrierFreqNBIOT-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_carrierFreqOffset_r16_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_carrierFreqOffset_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  24 }	/* (0..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_carrierFreqOffset_r16_value2enum_3[] = {
	{ 0,	4,	"v-10" },
	{ 1,	3,	"v-9" },
	{ 2,	7,	"v-8dot5" },
	{ 3,	3,	"v-8" },
	{ 4,	3,	"v-7" },
	{ 5,	3,	"v-6" },
	{ 6,	3,	"v-5" },
	{ 7,	7,	"v-4dot5" },
	{ 8,	3,	"v-4" },
	{ 9,	3,	"v-3" },
	{ 10,	3,	"v-2" },
	{ 11,	3,	"v-1" },
	{ 12,	7,	"v-0dot5" },
	{ 13,	2,	"v0" },
	{ 14,	2,	"v1" },
	{ 15,	2,	"v2" },
	{ 16,	2,	"v3" },
	{ 17,	6,	"v3dot5" },
	{ 18,	2,	"v4" },
	{ 19,	2,	"v5" },
	{ 20,	2,	"v6" },
	{ 21,	2,	"v7" },
	{ 22,	6,	"v7dot5" },
	{ 23,	2,	"v8" },
	{ 24,	2,	"v9" }
};
static const unsigned int asn_MAP_carrierFreqOffset_r16_enum2value_3[] = {
	12,	/* v-0dot5(12) */
	11,	/* v-1(11) */
	0,	/* v-10(0) */
	10,	/* v-2(10) */
	9,	/* v-3(9) */
	8,	/* v-4(8) */
	7,	/* v-4dot5(7) */
	6,	/* v-5(6) */
	5,	/* v-6(5) */
	4,	/* v-7(4) */
	3,	/* v-8(3) */
	2,	/* v-8dot5(2) */
	1,	/* v-9(1) */
	13,	/* v0(13) */
	14,	/* v1(14) */
	15,	/* v2(15) */
	16,	/* v3(16) */
	17,	/* v3dot5(17) */
	18,	/* v4(18) */
	19,	/* v5(19) */
	20,	/* v6(20) */
	21,	/* v7(21) */
	22,	/* v7dot5(22) */
	23,	/* v8(23) */
	24	/* v9(24) */
};
static const asn_INTEGER_specifics_t asn_SPC_carrierFreqOffset_r16_specs_3 = {
	asn_MAP_carrierFreqOffset_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_carrierFreqOffset_r16_enum2value_3,	/* N => "tag"; sorted by N */
	25,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_carrierFreqOffset_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_carrierFreqOffset_r16_3 = {
	"carrierFreqOffset-r16",
	"carrierFreqOffset-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_carrierFreqOffset_r16_tags_3,
	sizeof(asn_DEF_carrierFreqOffset_r16_tags_3)
		/sizeof(asn_DEF_carrierFreqOffset_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_carrierFreqOffset_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_carrierFreqOffset_r16_tags_3)
		/sizeof(asn_DEF_carrierFreqOffset_r16_tags_3[0]), /* 2 */
	{ &asn_OER_type_carrierFreqOffset_r16_constr_3, &asn_PER_type_carrierFreqOffset_r16_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_carrierFreqOffset_r16_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CarrierFreqNBIOT_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqNBIOT_r16, carrierFreq_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqNBIOT_r16, carrierFreqOffset_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_carrierFreqOffset_r16_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreqOffset-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_CarrierFreqNBIOT_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CarrierFreqNBIOT_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* carrierFreqOffset-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqNBIOT_r16_specs_1 = {
	sizeof(struct CarrierFreqNBIOT_r16),
	offsetof(struct CarrierFreqNBIOT_r16, _asn_ctx),
	asn_MAP_CarrierFreqNBIOT_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CarrierFreqNBIOT_r16 = {
	"CarrierFreqNBIOT-r16",
	"CarrierFreqNBIOT-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_CarrierFreqNBIOT_r16_tags_1,
	sizeof(asn_DEF_CarrierFreqNBIOT_r16_tags_1)
		/sizeof(asn_DEF_CarrierFreqNBIOT_r16_tags_1[0]), /* 1 */
	asn_DEF_CarrierFreqNBIOT_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_CarrierFreqNBIOT_r16_tags_1)
		/sizeof(asn_DEF_CarrierFreqNBIOT_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CarrierFreqNBIOT_r16_1,
	2,	/* Elements count */
	&asn_SPC_CarrierFreqNBIOT_r16_specs_1	/* Additional specs */
};

