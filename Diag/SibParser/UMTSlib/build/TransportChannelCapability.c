/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "TransportChannelCapability.h"

asn_TYPE_member_t asn_MBR_TransportChannelCapability_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TransportChannelCapability, dl_TransChCapability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_TransChCapability,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-TransChCapability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TransportChannelCapability, ul_TransChCapability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_TransChCapability,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-TransChCapability"
		},
};
static const ber_tlv_tag_t asn_DEF_TransportChannelCapability_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TransportChannelCapability_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-TransChCapability */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ul-TransChCapability */
};
asn_SEQUENCE_specifics_t asn_SPC_TransportChannelCapability_specs_1 = {
	sizeof(struct TransportChannelCapability),
	offsetof(struct TransportChannelCapability, _asn_ctx),
	asn_MAP_TransportChannelCapability_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TransportChannelCapability = {
	"TransportChannelCapability",
	"TransportChannelCapability",
	&asn_OP_SEQUENCE,
	asn_DEF_TransportChannelCapability_tags_1,
	sizeof(asn_DEF_TransportChannelCapability_tags_1)
		/sizeof(asn_DEF_TransportChannelCapability_tags_1[0]), /* 1 */
	asn_DEF_TransportChannelCapability_tags_1,	/* Same as above */
	sizeof(asn_DEF_TransportChannelCapability_tags_1)
		/sizeof(asn_DEF_TransportChannelCapability_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TransportChannelCapability_1,
	2,	/* Elements count */
	&asn_SPC_TransportChannelCapability_specs_1	/* Additional specs */
};

