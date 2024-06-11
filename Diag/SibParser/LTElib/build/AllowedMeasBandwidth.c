/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "AllowedMeasBandwidth.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_AllowedMeasBandwidth_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_AllowedMeasBandwidth_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_AllowedMeasBandwidth_value2enum_1[] = {
	{ 0,	4,	"mbw6" },
	{ 1,	5,	"mbw15" },
	{ 2,	5,	"mbw25" },
	{ 3,	5,	"mbw50" },
	{ 4,	5,	"mbw75" },
	{ 5,	6,	"mbw100" }
};
static const unsigned int asn_MAP_AllowedMeasBandwidth_enum2value_1[] = {
	5,	/* mbw100(5) */
	1,	/* mbw15(1) */
	2,	/* mbw25(2) */
	3,	/* mbw50(3) */
	0,	/* mbw6(0) */
	4	/* mbw75(4) */
};
const asn_INTEGER_specifics_t asn_SPC_AllowedMeasBandwidth_specs_1 = {
	asn_MAP_AllowedMeasBandwidth_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_AllowedMeasBandwidth_enum2value_1,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_AllowedMeasBandwidth_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_AllowedMeasBandwidth = {
	"AllowedMeasBandwidth",
	"AllowedMeasBandwidth",
	&asn_OP_NativeEnumerated,
	asn_DEF_AllowedMeasBandwidth_tags_1,
	sizeof(asn_DEF_AllowedMeasBandwidth_tags_1)
		/sizeof(asn_DEF_AllowedMeasBandwidth_tags_1[0]), /* 1 */
	asn_DEF_AllowedMeasBandwidth_tags_1,	/* Same as above */
	sizeof(asn_DEF_AllowedMeasBandwidth_tags_1)
		/sizeof(asn_DEF_AllowedMeasBandwidth_tags_1[0]), /* 1 */
	{ &asn_OER_type_AllowedMeasBandwidth_constr_1, &asn_PER_type_AllowedMeasBandwidth_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_AllowedMeasBandwidth_specs_1	/* Additional specs */
};

