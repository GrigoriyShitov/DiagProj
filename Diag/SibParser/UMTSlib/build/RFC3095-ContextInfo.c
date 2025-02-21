/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "RFC3095-ContextInfo.h"

asn_TYPE_member_t asn_MBR_RFC3095_ContextInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RFC3095_ContextInfo, rb_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rb-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RFC3095_ContextInfo, rfc3095_Context_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RFC3095_Context_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rfc3095-Context-List"
		},
};
static const ber_tlv_tag_t asn_DEF_RFC3095_ContextInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RFC3095_ContextInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rb-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rfc3095-Context-List */
};
asn_SEQUENCE_specifics_t asn_SPC_RFC3095_ContextInfo_specs_1 = {
	sizeof(struct RFC3095_ContextInfo),
	offsetof(struct RFC3095_ContextInfo, _asn_ctx),
	asn_MAP_RFC3095_ContextInfo_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RFC3095_ContextInfo = {
	"RFC3095-ContextInfo",
	"RFC3095-ContextInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_RFC3095_ContextInfo_tags_1,
	sizeof(asn_DEF_RFC3095_ContextInfo_tags_1)
		/sizeof(asn_DEF_RFC3095_ContextInfo_tags_1[0]), /* 1 */
	asn_DEF_RFC3095_ContextInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_RFC3095_ContextInfo_tags_1)
		/sizeof(asn_DEF_RFC3095_ContextInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RFC3095_ContextInfo_1,
	2,	/* Elements count */
	&asn_SPC_RFC3095_ContextInfo_specs_1	/* Additional specs */
};

