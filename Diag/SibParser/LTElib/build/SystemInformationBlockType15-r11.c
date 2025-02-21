/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SystemInformationBlockType15-r11.h"

asn_TYPE_member_t asn_MBR_SystemInformationBlockType15_r11_1[] = {
	{ ATF_POINTER, 6, offsetof(struct SystemInformationBlockType15_r11, mbms_SAI_IntraFreq_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_SAI_List_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-SAI-IntraFreq-r11"
		},
	{ ATF_POINTER, 5, offsetof(struct SystemInformationBlockType15_r11, mbms_SAI_InterFreqList_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_SAI_InterFreqList_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-SAI-InterFreqList-r11"
		},
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType15_r11, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType15_r11, mbms_SAI_InterFreqList_v1140),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_SAI_InterFreqList_v1140,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-SAI-InterFreqList-v1140"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType15_r11, mbms_IntraFreqCarrierType_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_CarrierType_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-IntraFreqCarrierType-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType15_r11, mbms_InterFreqCarrierTypeList_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_InterFreqCarrierTypeList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-InterFreqCarrierTypeList-r14"
		},
};
static const int asn_MAP_SystemInformationBlockType15_r11_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType15_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType15_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbms-SAI-IntraFreq-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbms-SAI-InterFreqList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mbms-SAI-InterFreqList-v1140 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* mbms-IntraFreqCarrierType-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* mbms-InterFreqCarrierTypeList-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType15_r11_specs_1 = {
	sizeof(struct SystemInformationBlockType15_r11),
	offsetof(struct SystemInformationBlockType15_r11, _asn_ctx),
	asn_MAP_SystemInformationBlockType15_r11_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType15_r11_oms_1,	/* Optional members */
	3, 3,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType15_r11 = {
	"SystemInformationBlockType15-r11",
	"SystemInformationBlockType15-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType15_r11_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType15_r11_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType15_r11_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType15_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType15_r11_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType15_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType15_r11_1,
	6,	/* Elements count */
	&asn_SPC_SystemInformationBlockType15_r11_specs_1	/* Additional specs */
};

