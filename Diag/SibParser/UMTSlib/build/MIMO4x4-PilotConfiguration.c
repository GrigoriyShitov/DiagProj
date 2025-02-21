/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "MIMO4x4-PilotConfiguration.h"

asn_TYPE_member_t asn_MBR_MIMO4x4_PilotConfiguration_1[] = {
	{ ATF_POINTER, 2, offsetof(struct MIMO4x4_PilotConfiguration, antenna2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_PilotConfiguration_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antenna2"
		},
	{ ATF_POINTER, 1, offsetof(struct MIMO4x4_PilotConfiguration, antenna3And4),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Antenna3And4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antenna3And4"
		},
};
static const int asn_MAP_MIMO4x4_PilotConfiguration_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_MIMO4x4_PilotConfiguration_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MIMO4x4_PilotConfiguration_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* antenna2 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* antenna3And4 */
};
asn_SEQUENCE_specifics_t asn_SPC_MIMO4x4_PilotConfiguration_specs_1 = {
	sizeof(struct MIMO4x4_PilotConfiguration),
	offsetof(struct MIMO4x4_PilotConfiguration, _asn_ctx),
	asn_MAP_MIMO4x4_PilotConfiguration_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MIMO4x4_PilotConfiguration_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MIMO4x4_PilotConfiguration = {
	"MIMO4x4-PilotConfiguration",
	"MIMO4x4-PilotConfiguration",
	&asn_OP_SEQUENCE,
	asn_DEF_MIMO4x4_PilotConfiguration_tags_1,
	sizeof(asn_DEF_MIMO4x4_PilotConfiguration_tags_1)
		/sizeof(asn_DEF_MIMO4x4_PilotConfiguration_tags_1[0]), /* 1 */
	asn_DEF_MIMO4x4_PilotConfiguration_tags_1,	/* Same as above */
	sizeof(asn_DEF_MIMO4x4_PilotConfiguration_tags_1)
		/sizeof(asn_DEF_MIMO4x4_PilotConfiguration_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MIMO4x4_PilotConfiguration_1,
	2,	/* Elements count */
	&asn_SPC_MIMO4x4_PilotConfiguration_specs_1	/* Additional specs */
};

