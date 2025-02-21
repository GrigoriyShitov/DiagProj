/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UE-DTX-Cycle1-10ms.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_UE_DTX_Cycle1_10ms_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_UE_DTX_Cycle1_10ms_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_UE_DTX_Cycle1_10ms_value2enum_1[] = {
	{ 0,	12,	"sub-frames-1" },
	{ 1,	12,	"sub-frames-5" },
	{ 2,	13,	"sub-frames-10" },
	{ 3,	13,	"sub-frames-20" }
};
static const unsigned int asn_MAP_UE_DTX_Cycle1_10ms_enum2value_1[] = {
	0,	/* sub-frames-1(0) */
	2,	/* sub-frames-10(2) */
	3,	/* sub-frames-20(3) */
	1	/* sub-frames-5(1) */
};
const asn_INTEGER_specifics_t asn_SPC_UE_DTX_Cycle1_10ms_specs_1 = {
	asn_MAP_UE_DTX_Cycle1_10ms_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_UE_DTX_Cycle1_10ms_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_UE_DTX_Cycle1_10ms_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_UE_DTX_Cycle1_10ms = {
	"UE-DTX-Cycle1-10ms",
	"UE-DTX-Cycle1-10ms",
	&asn_OP_NativeEnumerated,
	asn_DEF_UE_DTX_Cycle1_10ms_tags_1,
	sizeof(asn_DEF_UE_DTX_Cycle1_10ms_tags_1)
		/sizeof(asn_DEF_UE_DTX_Cycle1_10ms_tags_1[0]), /* 1 */
	asn_DEF_UE_DTX_Cycle1_10ms_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_DTX_Cycle1_10ms_tags_1)
		/sizeof(asn_DEF_UE_DTX_Cycle1_10ms_tags_1[0]), /* 1 */
	{ &asn_OER_type_UE_DTX_Cycle1_10ms_constr_1, &asn_PER_type_UE_DTX_Cycle1_10ms_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_UE_DTX_Cycle1_10ms_specs_1	/* Additional specs */
};

