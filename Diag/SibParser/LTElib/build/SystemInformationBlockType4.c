/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SystemInformationBlockType4.h"

asn_TYPE_member_t asn_MBR_SystemInformationBlockType4_1[] = {
	{ ATF_POINTER, 7, offsetof(struct SystemInformationBlockType4, intraFreqNeighCellList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqNeighCellList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqNeighCellList"
		},
	{ ATF_POINTER, 6, offsetof(struct SystemInformationBlockType4, intraFreqExcludedCellList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqExcludedCellList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqExcludedCellList"
		},
	{ ATF_POINTER, 5, offsetof(struct SystemInformationBlockType4, csg_PhysCellIdRange),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdRange,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csg-PhysCellIdRange"
		},
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType4, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType4, intraFreqNeighHSDN_CellList_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqNeighHSDN_CellList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqNeighHSDN-CellList-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType4, rss_ConfigCarrierInfo_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSS_ConfigCarrierInfo_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rss-ConfigCarrierInfo-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType4, intraFreqNeighCellList_v1610),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqNeighCellList_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqNeighCellList-v1610"
		},
};
static const int asn_MAP_SystemInformationBlockType4_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqNeighCellList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* intraFreqExcludedCellList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* csg-PhysCellIdRange */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* intraFreqNeighHSDN-CellList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* rss-ConfigCarrierInfo-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* intraFreqNeighCellList-v1610 */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType4_specs_1 = {
	sizeof(struct SystemInformationBlockType4),
	offsetof(struct SystemInformationBlockType4, _asn_ctx),
	asn_MAP_SystemInformationBlockType4_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType4_oms_1,	/* Optional members */
	3, 4,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType4 = {
	"SystemInformationBlockType4",
	"SystemInformationBlockType4",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType4_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType4_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType4_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType4_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType4_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType4_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType4_1,
	7,	/* Elements count */
	&asn_SPC_SystemInformationBlockType4_specs_1	/* Additional specs */
};

