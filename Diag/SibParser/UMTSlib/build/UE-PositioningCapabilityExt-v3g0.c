/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UE-PositioningCapabilityExt-v3g0.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_sfn_sfnType2Capability_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sfn_sfnType2Capability_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_sfn_sfnType2Capability_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_sfn_sfnType2Capability_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_sfn_sfnType2Capability_specs_2 = {
	asn_MAP_sfn_sfnType2Capability_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_sfn_sfnType2Capability_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sfn_sfnType2Capability_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sfn_sfnType2Capability_2 = {
	"sfn-sfnType2Capability",
	"sfn-sfnType2Capability",
	&asn_OP_NativeEnumerated,
	asn_DEF_sfn_sfnType2Capability_tags_2,
	sizeof(asn_DEF_sfn_sfnType2Capability_tags_2)
		/sizeof(asn_DEF_sfn_sfnType2Capability_tags_2[0]) - 1, /* 1 */
	asn_DEF_sfn_sfnType2Capability_tags_2,	/* Same as above */
	sizeof(asn_DEF_sfn_sfnType2Capability_tags_2)
		/sizeof(asn_DEF_sfn_sfnType2Capability_tags_2[0]), /* 2 */
	{ &asn_OER_type_sfn_sfnType2Capability_constr_2, &asn_PER_type_sfn_sfnType2Capability_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sfn_sfnType2Capability_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_PositioningCapabilityExt_v3g0_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_PositioningCapabilityExt_v3g0, sfn_sfnType2Capability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sfn_sfnType2Capability_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sfn-sfnType2Capability"
		},
};
static const ber_tlv_tag_t asn_DEF_UE_PositioningCapabilityExt_v3g0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_PositioningCapabilityExt_v3g0_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sfn-sfnType2Capability */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_PositioningCapabilityExt_v3g0_specs_1 = {
	sizeof(struct UE_PositioningCapabilityExt_v3g0),
	offsetof(struct UE_PositioningCapabilityExt_v3g0, _asn_ctx),
	asn_MAP_UE_PositioningCapabilityExt_v3g0_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_PositioningCapabilityExt_v3g0 = {
	"UE-PositioningCapabilityExt-v3g0",
	"UE-PositioningCapabilityExt-v3g0",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_PositioningCapabilityExt_v3g0_tags_1,
	sizeof(asn_DEF_UE_PositioningCapabilityExt_v3g0_tags_1)
		/sizeof(asn_DEF_UE_PositioningCapabilityExt_v3g0_tags_1[0]), /* 1 */
	asn_DEF_UE_PositioningCapabilityExt_v3g0_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_PositioningCapabilityExt_v3g0_tags_1)
		/sizeof(asn_DEF_UE_PositioningCapabilityExt_v3g0_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_PositioningCapabilityExt_v3g0_1,
	1,	/* Elements count */
	&asn_SPC_UE_PositioningCapabilityExt_v3g0_specs_1	/* Additional specs */
};

