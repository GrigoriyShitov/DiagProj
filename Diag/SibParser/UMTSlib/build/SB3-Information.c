/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SB3-Information.h"

static int asn_DFL_2_cmp_1(const void *sptr) {
	const SegCount_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 1 */
	return (*st != 1);
}
static int asn_DFL_2_set_1(void **sptr) {
	SegCount_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 1 */
	*st = 1;
	return 0;
}
asn_TYPE_member_t asn_MBR_SB3_Information_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SB3_Information, sb3_SegCount),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SegCount,
		0,
		{ 0, 0, 0 },
		&asn_DFL_2_cmp_1,	/* Compare DEFAULT 1 */
		&asn_DFL_2_set_1,	/* Set DEFAULT 1 */
		"sb3-SegCount"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SB3_Information, sb3_Sib_Rep),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SIB_Rep,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sb3-Sib-Rep"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SB3_Information, second_BCH_Channelizationcode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BCH_Channelizationcode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"second-BCH-Channelizationcode"
		},
};
static const int asn_MAP_SB3_Information_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_SB3_Information_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SB3_Information_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sb3-SegCount */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sb3-Sib-Rep */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* second-BCH-Channelizationcode */
};
asn_SEQUENCE_specifics_t asn_SPC_SB3_Information_specs_1 = {
	sizeof(struct SB3_Information),
	offsetof(struct SB3_Information, _asn_ctx),
	asn_MAP_SB3_Information_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SB3_Information_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SB3_Information = {
	"SB3-Information",
	"SB3-Information",
	&asn_OP_SEQUENCE,
	asn_DEF_SB3_Information_tags_1,
	sizeof(asn_DEF_SB3_Information_tags_1)
		/sizeof(asn_DEF_SB3_Information_tags_1[0]), /* 1 */
	asn_DEF_SB3_Information_tags_1,	/* Same as above */
	sizeof(asn_DEF_SB3_Information_tags_1)
		/sizeof(asn_DEF_SB3_Information_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SB3_Information_1,
	3,	/* Elements count */
	&asn_SPC_SB3_Information_specs_1	/* Additional specs */
};

