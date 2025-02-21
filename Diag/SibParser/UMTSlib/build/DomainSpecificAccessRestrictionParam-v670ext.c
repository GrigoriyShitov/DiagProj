/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "DomainSpecificAccessRestrictionParam-v670ext.h"

asn_TYPE_member_t asn_MBR_DomainSpecificAccessRestrictionParam_v670ext_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DomainSpecificAccessRestrictionParam_v670ext, cSDomainSpecificAccessRestriction),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DomainSpecificAccessRestriction_v670ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cSDomainSpecificAccessRestriction"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainSpecificAccessRestrictionParam_v670ext, pSDomainSpecificAccessRestriction),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DomainSpecificAccessRestriction_v670ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pSDomainSpecificAccessRestriction"
		},
};
static const ber_tlv_tag_t asn_DEF_DomainSpecificAccessRestrictionParam_v670ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DomainSpecificAccessRestrictionParam_v670ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cSDomainSpecificAccessRestriction */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pSDomainSpecificAccessRestriction */
};
asn_SEQUENCE_specifics_t asn_SPC_DomainSpecificAccessRestrictionParam_v670ext_specs_1 = {
	sizeof(struct DomainSpecificAccessRestrictionParam_v670ext),
	offsetof(struct DomainSpecificAccessRestrictionParam_v670ext, _asn_ctx),
	asn_MAP_DomainSpecificAccessRestrictionParam_v670ext_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DomainSpecificAccessRestrictionParam_v670ext = {
	"DomainSpecificAccessRestrictionParam-v670ext",
	"DomainSpecificAccessRestrictionParam-v670ext",
	&asn_OP_SEQUENCE,
	asn_DEF_DomainSpecificAccessRestrictionParam_v670ext_tags_1,
	sizeof(asn_DEF_DomainSpecificAccessRestrictionParam_v670ext_tags_1)
		/sizeof(asn_DEF_DomainSpecificAccessRestrictionParam_v670ext_tags_1[0]), /* 1 */
	asn_DEF_DomainSpecificAccessRestrictionParam_v670ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_DomainSpecificAccessRestrictionParam_v670ext_tags_1)
		/sizeof(asn_DEF_DomainSpecificAccessRestrictionParam_v670ext_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DomainSpecificAccessRestrictionParam_v670ext_1,
	2,	/* Elements count */
	&asn_SPC_DomainSpecificAccessRestrictionParam_v670ext_specs_1	/* Additional specs */
};

