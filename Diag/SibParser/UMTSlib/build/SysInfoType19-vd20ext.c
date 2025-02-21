/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SysInfoType19-vd20ext.h"

asn_TYPE_member_t asn_MBR_SysInfoType19_vd20ext_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SysInfoType19_vd20ext, eutra_FrequencyAndPriorityInfoList_vd20ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_FrequencyAndPriorityInfoList_vd20ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-FrequencyAndPriorityInfoList-vd20ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType19_vd20ext, eutra_FrequencyAndPriorityInfoExtensionList_vd20ext),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_FrequencyAndPriorityInfoExtensionList_vd20ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-FrequencyAndPriorityInfoExtensionList-vd20ext"
		},
};
static const int asn_MAP_SysInfoType19_vd20ext_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SysInfoType19_vd20ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SysInfoType19_vd20ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutra-FrequencyAndPriorityInfoList-vd20ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eutra-FrequencyAndPriorityInfoExtensionList-vd20ext */
};
asn_SEQUENCE_specifics_t asn_SPC_SysInfoType19_vd20ext_specs_1 = {
	sizeof(struct SysInfoType19_vd20ext),
	offsetof(struct SysInfoType19_vd20ext, _asn_ctx),
	asn_MAP_SysInfoType19_vd20ext_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SysInfoType19_vd20ext_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType19_vd20ext = {
	"SysInfoType19-vd20ext",
	"SysInfoType19-vd20ext",
	&asn_OP_SEQUENCE,
	asn_DEF_SysInfoType19_vd20ext_tags_1,
	sizeof(asn_DEF_SysInfoType19_vd20ext_tags_1)
		/sizeof(asn_DEF_SysInfoType19_vd20ext_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType19_vd20ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType19_vd20ext_tags_1)
		/sizeof(asn_DEF_SysInfoType19_vd20ext_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SysInfoType19_vd20ext_1,
	2,	/* Elements count */
	&asn_SPC_SysInfoType19_vd20ext_specs_1	/* Additional specs */
};

