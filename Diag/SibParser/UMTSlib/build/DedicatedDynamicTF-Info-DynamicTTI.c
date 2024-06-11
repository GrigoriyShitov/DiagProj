/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "DedicatedDynamicTF-Info-DynamicTTI.h"

static asn_oer_constraints_t asn_OER_type_rlc_Size_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_rlc_Size_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_rlc_Size_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DedicatedDynamicTF_Info_DynamicTTI__rlc_Size, choice.bitMode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_BitModeRLC_SizeInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bitMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DedicatedDynamicTF_Info_DynamicTTI__rlc_Size, choice.octetModeType1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_OctetModeRLC_SizeInfoType1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"octetModeType1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_rlc_Size_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bitMode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* octetModeType1 */
};
static asn_CHOICE_specifics_t asn_SPC_rlc_Size_specs_2 = {
	sizeof(struct DedicatedDynamicTF_Info_DynamicTTI__rlc_Size),
	offsetof(struct DedicatedDynamicTF_Info_DynamicTTI__rlc_Size, _asn_ctx),
	offsetof(struct DedicatedDynamicTF_Info_DynamicTTI__rlc_Size, present),
	sizeof(((struct DedicatedDynamicTF_Info_DynamicTTI__rlc_Size *)0)->present),
	asn_MAP_rlc_Size_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlc_Size_2 = {
	"rlc-Size",
	"rlc-Size",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_rlc_Size_constr_2, &asn_PER_type_rlc_Size_constr_2, CHOICE_constraint },
	asn_MBR_rlc_Size_2,
	2,	/* Elements count */
	&asn_SPC_rlc_Size_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DedicatedDynamicTF_Info_DynamicTTI_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DedicatedDynamicTF_Info_DynamicTTI, rlc_Size),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_rlc_Size_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Size"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DedicatedDynamicTF_Info_DynamicTTI, numberOfTbSizeAndTTIList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NumberOfTbSizeAndTTIList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numberOfTbSizeAndTTIList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DedicatedDynamicTF_Info_DynamicTTI, logicalChannelList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LogicalChannelList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logicalChannelList"
		},
};
static const ber_tlv_tag_t asn_DEF_DedicatedDynamicTF_Info_DynamicTTI_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DedicatedDynamicTF_Info_DynamicTTI_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlc-Size */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* numberOfTbSizeAndTTIList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* logicalChannelList */
};
asn_SEQUENCE_specifics_t asn_SPC_DedicatedDynamicTF_Info_DynamicTTI_specs_1 = {
	sizeof(struct DedicatedDynamicTF_Info_DynamicTTI),
	offsetof(struct DedicatedDynamicTF_Info_DynamicTTI, _asn_ctx),
	asn_MAP_DedicatedDynamicTF_Info_DynamicTTI_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DedicatedDynamicTF_Info_DynamicTTI = {
	"DedicatedDynamicTF-Info-DynamicTTI",
	"DedicatedDynamicTF-Info-DynamicTTI",
	&asn_OP_SEQUENCE,
	asn_DEF_DedicatedDynamicTF_Info_DynamicTTI_tags_1,
	sizeof(asn_DEF_DedicatedDynamicTF_Info_DynamicTTI_tags_1)
		/sizeof(asn_DEF_DedicatedDynamicTF_Info_DynamicTTI_tags_1[0]), /* 1 */
	asn_DEF_DedicatedDynamicTF_Info_DynamicTTI_tags_1,	/* Same as above */
	sizeof(asn_DEF_DedicatedDynamicTF_Info_DynamicTTI_tags_1)
		/sizeof(asn_DEF_DedicatedDynamicTF_Info_DynamicTTI_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DedicatedDynamicTF_Info_DynamicTTI_1,
	3,	/* Elements count */
	&asn_SPC_DedicatedDynamicTF_Info_DynamicTTI_specs_1	/* Additional specs */
};

