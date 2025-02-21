/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "TotalRLC-AM-BufferSize-r5.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_TotalRLC_AM_BufferSize_r5_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_TotalRLC_AM_BufferSize_r5_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_TotalRLC_AM_BufferSize_r5_value2enum_1[] = {
	{ 0,	4,	"kb10" },
	{ 1,	4,	"kb50" },
	{ 2,	5,	"kb100" },
	{ 3,	5,	"kb150" },
	{ 4,	5,	"kb200" },
	{ 5,	5,	"kb300" },
	{ 6,	5,	"kb400" },
	{ 7,	5,	"kb500" },
	{ 8,	5,	"kb750" },
	{ 9,	6,	"kb1000" }
};
static const unsigned int asn_MAP_TotalRLC_AM_BufferSize_r5_enum2value_1[] = {
	0,	/* kb10(0) */
	2,	/* kb100(2) */
	9,	/* kb1000(9) */
	3,	/* kb150(3) */
	4,	/* kb200(4) */
	5,	/* kb300(5) */
	6,	/* kb400(6) */
	1,	/* kb50(1) */
	7,	/* kb500(7) */
	8	/* kb750(8) */
};
const asn_INTEGER_specifics_t asn_SPC_TotalRLC_AM_BufferSize_r5_specs_1 = {
	asn_MAP_TotalRLC_AM_BufferSize_r5_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_TotalRLC_AM_BufferSize_r5_enum2value_1,	/* N => "tag"; sorted by N */
	10,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_TotalRLC_AM_BufferSize_r5_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TotalRLC_AM_BufferSize_r5 = {
	"TotalRLC-AM-BufferSize-r5",
	"TotalRLC-AM-BufferSize-r5",
	&asn_OP_NativeEnumerated,
	asn_DEF_TotalRLC_AM_BufferSize_r5_tags_1,
	sizeof(asn_DEF_TotalRLC_AM_BufferSize_r5_tags_1)
		/sizeof(asn_DEF_TotalRLC_AM_BufferSize_r5_tags_1[0]), /* 1 */
	asn_DEF_TotalRLC_AM_BufferSize_r5_tags_1,	/* Same as above */
	sizeof(asn_DEF_TotalRLC_AM_BufferSize_r5_tags_1)
		/sizeof(asn_DEF_TotalRLC_AM_BufferSize_r5_tags_1[0]), /* 1 */
	{ &asn_OER_type_TotalRLC_AM_BufferSize_r5_constr_1, &asn_PER_type_TotalRLC_AM_BufferSize_r5_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_TotalRLC_AM_BufferSize_r5_specs_1	/* Additional specs */
};

