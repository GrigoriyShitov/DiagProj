/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "RB-MappingOption.h"

asn_TYPE_member_t asn_MBR_RB_MappingOption_1[] = {
	{ ATF_POINTER, 2, offsetof(struct RB_MappingOption, ul_LogicalChannelMappings),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UL_LogicalChannelMappings,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-LogicalChannelMappings"
		},
	{ ATF_POINTER, 1, offsetof(struct RB_MappingOption, dl_LogicalChannelMappingList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_LogicalChannelMappingList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-LogicalChannelMappingList"
		},
};
static const int asn_MAP_RB_MappingOption_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_RB_MappingOption_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RB_MappingOption_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-LogicalChannelMappings */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-LogicalChannelMappingList */
};
asn_SEQUENCE_specifics_t asn_SPC_RB_MappingOption_specs_1 = {
	sizeof(struct RB_MappingOption),
	offsetof(struct RB_MappingOption, _asn_ctx),
	asn_MAP_RB_MappingOption_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RB_MappingOption_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RB_MappingOption = {
	"RB-MappingOption",
	"RB-MappingOption",
	&asn_OP_SEQUENCE,
	asn_DEF_RB_MappingOption_tags_1,
	sizeof(asn_DEF_RB_MappingOption_tags_1)
		/sizeof(asn_DEF_RB_MappingOption_tags_1[0]), /* 1 */
	asn_DEF_RB_MappingOption_tags_1,	/* Same as above */
	sizeof(asn_DEF_RB_MappingOption_tags_1)
		/sizeof(asn_DEF_RB_MappingOption_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RB_MappingOption_1,
	2,	/* Elements count */
	&asn_SPC_RB_MappingOption_specs_1	/* Additional specs */
};

