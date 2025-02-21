/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "LoggedUTRACellInfo.h"

asn_TYPE_member_t asn_MBR_LoggedUTRACellInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedUTRACellInfo, plmn_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedUTRACellInfo, cellIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedUTRACellInfo, uarfcn),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UARFCN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uarfcn"
		},
	{ ATF_POINTER, 2, offsetof(struct LoggedUTRACellInfo, cellParametersID),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellParametersID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellParametersID"
		},
	{ ATF_POINTER, 1, offsetof(struct LoggedUTRACellInfo, primaryScramblingCode),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryScramblingCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"primaryScramblingCode"
		},
};
static const int asn_MAP_LoggedUTRACellInfo_oms_1[] = { 3, 4 };
static const ber_tlv_tag_t asn_DEF_LoggedUTRACellInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LoggedUTRACellInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uarfcn */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cellParametersID */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* primaryScramblingCode */
};
asn_SEQUENCE_specifics_t asn_SPC_LoggedUTRACellInfo_specs_1 = {
	sizeof(struct LoggedUTRACellInfo),
	offsetof(struct LoggedUTRACellInfo, _asn_ctx),
	asn_MAP_LoggedUTRACellInfo_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LoggedUTRACellInfo_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LoggedUTRACellInfo = {
	"LoggedUTRACellInfo",
	"LoggedUTRACellInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_LoggedUTRACellInfo_tags_1,
	sizeof(asn_DEF_LoggedUTRACellInfo_tags_1)
		/sizeof(asn_DEF_LoggedUTRACellInfo_tags_1[0]), /* 1 */
	asn_DEF_LoggedUTRACellInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_LoggedUTRACellInfo_tags_1)
		/sizeof(asn_DEF_LoggedUTRACellInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LoggedUTRACellInfo_1,
	5,	/* Elements count */
	&asn_SPC_LoggedUTRACellInfo_specs_1	/* Additional specs */
};

