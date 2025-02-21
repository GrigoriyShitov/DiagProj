/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "PUSCH-SysInfo-HCR-r5.h"

asn_TYPE_member_t asn_MBR_PUSCH_SysInfo_HCR_r5_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_SysInfo_HCR_r5, pusch_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_SysInfo_HCR_r5, pusch_Info),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-Info"
		},
	{ ATF_POINTER, 2, offsetof(struct PUSCH_SysInfo_HCR_r5, usch_TransportChannelsInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_USCH_TransportChannelsInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"usch-TransportChannelsInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct PUSCH_SysInfo_HCR_r5, usch_TFCS),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TFCS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"usch-TFCS"
		},
};
static const int asn_MAP_PUSCH_SysInfo_HCR_r5_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_PUSCH_SysInfo_HCR_r5_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PUSCH_SysInfo_HCR_r5_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pusch-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pusch-Info */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* usch-TransportChannelsInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* usch-TFCS */
};
asn_SEQUENCE_specifics_t asn_SPC_PUSCH_SysInfo_HCR_r5_specs_1 = {
	sizeof(struct PUSCH_SysInfo_HCR_r5),
	offsetof(struct PUSCH_SysInfo_HCR_r5, _asn_ctx),
	asn_MAP_PUSCH_SysInfo_HCR_r5_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_PUSCH_SysInfo_HCR_r5_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PUSCH_SysInfo_HCR_r5 = {
	"PUSCH-SysInfo-HCR-r5",
	"PUSCH-SysInfo-HCR-r5",
	&asn_OP_SEQUENCE,
	asn_DEF_PUSCH_SysInfo_HCR_r5_tags_1,
	sizeof(asn_DEF_PUSCH_SysInfo_HCR_r5_tags_1)
		/sizeof(asn_DEF_PUSCH_SysInfo_HCR_r5_tags_1[0]), /* 1 */
	asn_DEF_PUSCH_SysInfo_HCR_r5_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUSCH_SysInfo_HCR_r5_tags_1)
		/sizeof(asn_DEF_PUSCH_SysInfo_HCR_r5_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PUSCH_SysInfo_HCR_r5_1,
	4,	/* Elements count */
	&asn_SPC_PUSCH_SysInfo_HCR_r5_specs_1	/* Additional specs */
};

