/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "MBMS-MSCH-ConfigurationInfo-r6.h"

asn_TYPE_member_t asn_MBR_MBMS_MSCH_ConfigurationInfo_r6_1[] = {
	{ ATF_POINTER, 3, offsetof(struct MBMS_MSCH_ConfigurationInfo_r6, mschShedulingInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MBMS_MSCHSchedulingInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mschShedulingInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct MBMS_MSCH_ConfigurationInfo_r6, rlc_Info),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Info_MSCH_r6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Info"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMS_MSCH_ConfigurationInfo_r6, tctf_Presence),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_TCTF_Presence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tctf-Presence"
		},
};
static const int asn_MAP_MBMS_MSCH_ConfigurationInfo_r6_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_MBMS_MSCH_ConfigurationInfo_r6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBMS_MSCH_ConfigurationInfo_r6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mschShedulingInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rlc-Info */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* tctf-Presence */
};
asn_SEQUENCE_specifics_t asn_SPC_MBMS_MSCH_ConfigurationInfo_r6_specs_1 = {
	sizeof(struct MBMS_MSCH_ConfigurationInfo_r6),
	offsetof(struct MBMS_MSCH_ConfigurationInfo_r6, _asn_ctx),
	asn_MAP_MBMS_MSCH_ConfigurationInfo_r6_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MBMS_MSCH_ConfigurationInfo_r6_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_MSCH_ConfigurationInfo_r6 = {
	"MBMS-MSCH-ConfigurationInfo-r6",
	"MBMS-MSCH-ConfigurationInfo-r6",
	&asn_OP_SEQUENCE,
	asn_DEF_MBMS_MSCH_ConfigurationInfo_r6_tags_1,
	sizeof(asn_DEF_MBMS_MSCH_ConfigurationInfo_r6_tags_1)
		/sizeof(asn_DEF_MBMS_MSCH_ConfigurationInfo_r6_tags_1[0]), /* 1 */
	asn_DEF_MBMS_MSCH_ConfigurationInfo_r6_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_MSCH_ConfigurationInfo_r6_tags_1)
		/sizeof(asn_DEF_MBMS_MSCH_ConfigurationInfo_r6_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MBMS_MSCH_ConfigurationInfo_r6_1,
	3,	/* Elements count */
	&asn_SPC_MBMS_MSCH_ConfigurationInfo_r6_specs_1	/* Additional specs */
};

