/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "PreDefTransChConfiguration.h"

asn_TYPE_member_t asn_MBR_PreDefTransChConfiguration_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PreDefTransChConfiguration, ul_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CommonTransChInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-CommonTransChInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PreDefTransChConfiguration, ul_AddReconfTrChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_AddReconfTransChInfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-AddReconfTrChInfoList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PreDefTransChConfiguration, dl_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonTransChInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-CommonTransChInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PreDefTransChConfiguration, dl_TrChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_AddReconfTransChInfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-TrChInfoList"
		},
};
static const ber_tlv_tag_t asn_DEF_PreDefTransChConfiguration_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PreDefTransChConfiguration_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-CommonTransChInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-AddReconfTrChInfoList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dl-CommonTransChInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* dl-TrChInfoList */
};
asn_SEQUENCE_specifics_t asn_SPC_PreDefTransChConfiguration_specs_1 = {
	sizeof(struct PreDefTransChConfiguration),
	offsetof(struct PreDefTransChConfiguration, _asn_ctx),
	asn_MAP_PreDefTransChConfiguration_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PreDefTransChConfiguration = {
	"PreDefTransChConfiguration",
	"PreDefTransChConfiguration",
	&asn_OP_SEQUENCE,
	asn_DEF_PreDefTransChConfiguration_tags_1,
	sizeof(asn_DEF_PreDefTransChConfiguration_tags_1)
		/sizeof(asn_DEF_PreDefTransChConfiguration_tags_1[0]), /* 1 */
	asn_DEF_PreDefTransChConfiguration_tags_1,	/* Same as above */
	sizeof(asn_DEF_PreDefTransChConfiguration_tags_1)
		/sizeof(asn_DEF_PreDefTransChConfiguration_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PreDefTransChConfiguration_1,
	4,	/* Elements count */
	&asn_SPC_PreDefTransChConfiguration_specs_1	/* Additional specs */
};

