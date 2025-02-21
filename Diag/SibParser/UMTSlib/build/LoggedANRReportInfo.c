/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "LoggedANRReportInfo.h"

asn_TYPE_member_t asn_MBR_LoggedANRReportInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedANRReportInfo, plmn_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedANRReportInfo, servingCell),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servingCell"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedANRReportInfo, loggedCellInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LoggedCellInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"loggedCellInfo"
		},
};
static const ber_tlv_tag_t asn_DEF_LoggedANRReportInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LoggedANRReportInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* servingCell */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* loggedCellInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_LoggedANRReportInfo_specs_1 = {
	sizeof(struct LoggedANRReportInfo),
	offsetof(struct LoggedANRReportInfo, _asn_ctx),
	asn_MAP_LoggedANRReportInfo_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LoggedANRReportInfo = {
	"LoggedANRReportInfo",
	"LoggedANRReportInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_LoggedANRReportInfo_tags_1,
	sizeof(asn_DEF_LoggedANRReportInfo_tags_1)
		/sizeof(asn_DEF_LoggedANRReportInfo_tags_1[0]), /* 1 */
	asn_DEF_LoggedANRReportInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_LoggedANRReportInfo_tags_1)
		/sizeof(asn_DEF_LoggedANRReportInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LoggedANRReportInfo_1,
	3,	/* Elements count */
	&asn_SPC_LoggedANRReportInfo_specs_1	/* Additional specs */
};

