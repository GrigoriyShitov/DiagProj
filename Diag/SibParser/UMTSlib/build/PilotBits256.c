/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "PilotBits256.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_PilotBits256_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_PilotBits256_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_PilotBits256_value2enum_1[] = {
	{ 0,	3,	"pb2" },
	{ 1,	3,	"pb4" },
	{ 2,	3,	"pb8" }
};
static const unsigned int asn_MAP_PilotBits256_enum2value_1[] = {
	0,	/* pb2(0) */
	1,	/* pb4(1) */
	2	/* pb8(2) */
};
const asn_INTEGER_specifics_t asn_SPC_PilotBits256_specs_1 = {
	asn_MAP_PilotBits256_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_PilotBits256_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_PilotBits256_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PilotBits256 = {
	"PilotBits256",
	"PilotBits256",
	&asn_OP_NativeEnumerated,
	asn_DEF_PilotBits256_tags_1,
	sizeof(asn_DEF_PilotBits256_tags_1)
		/sizeof(asn_DEF_PilotBits256_tags_1[0]), /* 1 */
	asn_DEF_PilotBits256_tags_1,	/* Same as above */
	sizeof(asn_DEF_PilotBits256_tags_1)
		/sizeof(asn_DEF_PilotBits256_tags_1[0]), /* 1 */
	{ &asn_OER_type_PilotBits256_constr_1, &asn_PER_type_PilotBits256_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_PilotBits256_specs_1	/* Additional specs */
};

