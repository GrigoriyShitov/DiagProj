/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "RRCConnectionRelease-r4-IEs.h"

asn_TYPE_member_t asn_MBR_RRCConnectionRelease_r4_IEs_1[] = {
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionRelease_r4_IEs, n_308),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_N_308,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n-308"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionRelease_r4_IEs, releaseCause),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReleaseCause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"releaseCause"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionRelease_r4_IEs, rplmn_information),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Rplmn_Information_r4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rplmn-information"
		},
};
static const int asn_MAP_RRCConnectionRelease_r4_IEs_oms_1[] = { 0, 2 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionRelease_r4_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionRelease_r4_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n-308 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* releaseCause */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* rplmn-information */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionRelease_r4_IEs_specs_1 = {
	sizeof(struct RRCConnectionRelease_r4_IEs),
	offsetof(struct RRCConnectionRelease_r4_IEs, _asn_ctx),
	asn_MAP_RRCConnectionRelease_r4_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RRCConnectionRelease_r4_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionRelease_r4_IEs = {
	"RRCConnectionRelease-r4-IEs",
	"RRCConnectionRelease-r4-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionRelease_r4_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionRelease_r4_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionRelease_r4_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionRelease_r4_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionRelease_r4_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionRelease_r4_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionRelease_r4_IEs_1,
	3,	/* Elements count */
	&asn_SPC_RRCConnectionRelease_r4_IEs_specs_1	/* Additional specs */
};

