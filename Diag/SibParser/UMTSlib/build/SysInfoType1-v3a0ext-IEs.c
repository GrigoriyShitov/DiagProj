/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "SysInfoType1-v3a0ext-IEs.h"

asn_TYPE_member_t asn_MBR_SysInfoType1_v3a0ext_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType1_v3a0ext_IEs, ue_ConnTimersAndConstants_v3a0ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_ConnTimersAndConstants_v3a0ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-ConnTimersAndConstants-v3a0ext"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType1_v3a0ext_IEs, ue_IdleTimersAndConstants_v3a0ext),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_IdleTimersAndConstants_v3a0ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-IdleTimersAndConstants-v3a0ext"
		},
};
static const ber_tlv_tag_t asn_DEF_SysInfoType1_v3a0ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SysInfoType1_v3a0ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-ConnTimersAndConstants-v3a0ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ue-IdleTimersAndConstants-v3a0ext */
};
asn_SEQUENCE_specifics_t asn_SPC_SysInfoType1_v3a0ext_IEs_specs_1 = {
	sizeof(struct SysInfoType1_v3a0ext_IEs),
	offsetof(struct SysInfoType1_v3a0ext_IEs, _asn_ctx),
	asn_MAP_SysInfoType1_v3a0ext_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType1_v3a0ext_IEs = {
	"SysInfoType1-v3a0ext-IEs",
	"SysInfoType1-v3a0ext-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_SysInfoType1_v3a0ext_IEs_tags_1,
	sizeof(asn_DEF_SysInfoType1_v3a0ext_IEs_tags_1)
		/sizeof(asn_DEF_SysInfoType1_v3a0ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType1_v3a0ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType1_v3a0ext_IEs_tags_1)
		/sizeof(asn_DEF_SysInfoType1_v3a0ext_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SysInfoType1_v3a0ext_IEs_1,
	2,	/* Elements count */
	&asn_SPC_SysInfoType1_v3a0ext_IEs_specs_1	/* Additional specs */
};

