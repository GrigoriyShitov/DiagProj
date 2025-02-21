/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "FACH-PCH-Information.h"

asn_TYPE_member_t asn_MBR_FACH_PCH_Information_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FACH_PCH_Information, transportFormatSet),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TransportFormatSet,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transportFormatSet"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FACH_PCH_Information, transportChannelIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportChannelIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transportChannelIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FACH_PCH_Information, ctch_Indicator),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ctch-Indicator"
		},
};
static const ber_tlv_tag_t asn_DEF_FACH_PCH_Information_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FACH_PCH_Information_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transportFormatSet */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* transportChannelIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ctch-Indicator */
};
asn_SEQUENCE_specifics_t asn_SPC_FACH_PCH_Information_specs_1 = {
	sizeof(struct FACH_PCH_Information),
	offsetof(struct FACH_PCH_Information, _asn_ctx),
	asn_MAP_FACH_PCH_Information_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FACH_PCH_Information = {
	"FACH-PCH-Information",
	"FACH-PCH-Information",
	&asn_OP_SEQUENCE,
	asn_DEF_FACH_PCH_Information_tags_1,
	sizeof(asn_DEF_FACH_PCH_Information_tags_1)
		/sizeof(asn_DEF_FACH_PCH_Information_tags_1[0]), /* 1 */
	asn_DEF_FACH_PCH_Information_tags_1,	/* Same as above */
	sizeof(asn_DEF_FACH_PCH_Information_tags_1)
		/sizeof(asn_DEF_FACH_PCH_Information_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_FACH_PCH_Information_1,
	3,	/* Elements count */
	&asn_SPC_FACH_PCH_Information_specs_1	/* Additional specs */
};

