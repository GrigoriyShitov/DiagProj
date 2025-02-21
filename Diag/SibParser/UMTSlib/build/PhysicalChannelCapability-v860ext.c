/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "PhysicalChannelCapability-v860ext.h"

static asn_TYPE_member_t asn_MBR_fddPhysChCapability_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_v860ext__fddPhysChCapability, downlinkPhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_PhysChCapabilityFDD_v860ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"downlinkPhysChCapability"
		},
};
static const ber_tlv_tag_t asn_DEF_fddPhysChCapability_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fddPhysChCapability_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* downlinkPhysChCapability */
};
static asn_SEQUENCE_specifics_t asn_SPC_fddPhysChCapability_specs_2 = {
	sizeof(struct PhysicalChannelCapability_v860ext__fddPhysChCapability),
	offsetof(struct PhysicalChannelCapability_v860ext__fddPhysChCapability, _asn_ctx),
	asn_MAP_fddPhysChCapability_tag2el_2,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fddPhysChCapability_2 = {
	"fddPhysChCapability",
	"fddPhysChCapability",
	&asn_OP_SEQUENCE,
	asn_DEF_fddPhysChCapability_tags_2,
	sizeof(asn_DEF_fddPhysChCapability_tags_2)
		/sizeof(asn_DEF_fddPhysChCapability_tags_2[0]) - 1, /* 1 */
	asn_DEF_fddPhysChCapability_tags_2,	/* Same as above */
	sizeof(asn_DEF_fddPhysChCapability_tags_2)
		/sizeof(asn_DEF_fddPhysChCapability_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_fddPhysChCapability_2,
	1,	/* Elements count */
	&asn_SPC_fddPhysChCapability_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tddPhysChCapability_128_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_v860ext__tddPhysChCapability_128, downlinkPhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_PhysChCapabilityTDD_128_v860ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"downlinkPhysChCapability"
		},
};
static const ber_tlv_tag_t asn_DEF_tddPhysChCapability_128_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tddPhysChCapability_128_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* downlinkPhysChCapability */
};
static asn_SEQUENCE_specifics_t asn_SPC_tddPhysChCapability_128_specs_4 = {
	sizeof(struct PhysicalChannelCapability_v860ext__tddPhysChCapability_128),
	offsetof(struct PhysicalChannelCapability_v860ext__tddPhysChCapability_128, _asn_ctx),
	asn_MAP_tddPhysChCapability_128_tag2el_4,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tddPhysChCapability_128_4 = {
	"tddPhysChCapability-128",
	"tddPhysChCapability-128",
	&asn_OP_SEQUENCE,
	asn_DEF_tddPhysChCapability_128_tags_4,
	sizeof(asn_DEF_tddPhysChCapability_128_tags_4)
		/sizeof(asn_DEF_tddPhysChCapability_128_tags_4[0]) - 1, /* 1 */
	asn_DEF_tddPhysChCapability_128_tags_4,	/* Same as above */
	sizeof(asn_DEF_tddPhysChCapability_128_tags_4)
		/sizeof(asn_DEF_tddPhysChCapability_128_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_tddPhysChCapability_128_4,
	1,	/* Elements count */
	&asn_SPC_tddPhysChCapability_128_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PhysicalChannelCapability_v860ext_1[] = {
	{ ATF_POINTER, 2, offsetof(struct PhysicalChannelCapability_v860ext, fddPhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fddPhysChCapability_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fddPhysChCapability"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalChannelCapability_v860ext, tddPhysChCapability_128),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tddPhysChCapability_128_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tddPhysChCapability-128"
		},
};
static const int asn_MAP_PhysicalChannelCapability_v860ext_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_PhysicalChannelCapability_v860ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PhysicalChannelCapability_v860ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fddPhysChCapability */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tddPhysChCapability-128 */
};
asn_SEQUENCE_specifics_t asn_SPC_PhysicalChannelCapability_v860ext_specs_1 = {
	sizeof(struct PhysicalChannelCapability_v860ext),
	offsetof(struct PhysicalChannelCapability_v860ext, _asn_ctx),
	asn_MAP_PhysicalChannelCapability_v860ext_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PhysicalChannelCapability_v860ext_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PhysicalChannelCapability_v860ext = {
	"PhysicalChannelCapability-v860ext",
	"PhysicalChannelCapability-v860ext",
	&asn_OP_SEQUENCE,
	asn_DEF_PhysicalChannelCapability_v860ext_tags_1,
	sizeof(asn_DEF_PhysicalChannelCapability_v860ext_tags_1)
		/sizeof(asn_DEF_PhysicalChannelCapability_v860ext_tags_1[0]), /* 1 */
	asn_DEF_PhysicalChannelCapability_v860ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysicalChannelCapability_v860ext_tags_1)
		/sizeof(asn_DEF_PhysicalChannelCapability_v860ext_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PhysicalChannelCapability_v860ext_1,
	2,	/* Elements count */
	&asn_SPC_PhysicalChannelCapability_v860ext_specs_1	/* Additional specs */
};

