/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "CPCH-SetInfo.h"

asn_TYPE_member_t asn_MBR_CPCH_SetInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CPCH_SetInfo, cpch_SetID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CPCH_SetID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cpch-SetID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CPCH_SetInfo, transportFormatSet),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TransportFormatSet,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transportFormatSet"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CPCH_SetInfo, tfcs),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TFCS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tfcs"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CPCH_SetInfo, ap_PreambleScramblingCode),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AP_PreambleScramblingCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ap-PreambleScramblingCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CPCH_SetInfo, ap_AICH_ChannelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AP_AICH_ChannelisationCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ap-AICH-ChannelisationCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CPCH_SetInfo, cd_PreambleScramblingCode),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CD_PreambleScramblingCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cd-PreambleScramblingCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CPCH_SetInfo, cd_CA_ICH_ChannelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CD_CA_ICH_ChannelisationCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cd-CA-ICH-ChannelisationCode"
		},
	{ ATF_POINTER, 2, offsetof(struct CPCH_SetInfo, cd_AccessSlotSubchannelList),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CD_AccessSlotSubchannelList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cd-AccessSlotSubchannelList"
		},
	{ ATF_POINTER, 1, offsetof(struct CPCH_SetInfo, cd_SignatureCodeList),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CD_SignatureCodeList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cd-SignatureCodeList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CPCH_SetInfo, deltaPp_m),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaPp_m,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaPp-m"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CPCH_SetInfo, ul_DPCCH_SlotFormat),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_DPCCH_SlotFormat,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-DPCCH-SlotFormat"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CPCH_SetInfo, n_StartMessage),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_N_StartMessage,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n-StartMessage"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CPCH_SetInfo, n_EOT),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_N_EOT,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n-EOT"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CPCH_SetInfo, channelAssignmentActive),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ChannelAssignmentActive,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"channelAssignmentActive"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CPCH_SetInfo, cpch_StatusIndicationMode),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CPCH_StatusIndicationMode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cpch-StatusIndicationMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CPCH_SetInfo, pcpch_ChannelInfoList),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PCPCH_ChannelInfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pcpch-ChannelInfoList"
		},
};
static const int asn_MAP_CPCH_SetInfo_oms_1[] = { 7, 8 };
static const ber_tlv_tag_t asn_DEF_CPCH_SetInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CPCH_SetInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cpch-SetID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* transportFormatSet */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tfcs */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ap-PreambleScramblingCode */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ap-AICH-ChannelisationCode */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* cd-PreambleScramblingCode */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* cd-CA-ICH-ChannelisationCode */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* cd-AccessSlotSubchannelList */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* cd-SignatureCodeList */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* deltaPp-m */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ul-DPCCH-SlotFormat */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* n-StartMessage */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* n-EOT */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* channelAssignmentActive */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* cpch-StatusIndicationMode */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 } /* pcpch-ChannelInfoList */
};
asn_SEQUENCE_specifics_t asn_SPC_CPCH_SetInfo_specs_1 = {
	sizeof(struct CPCH_SetInfo),
	offsetof(struct CPCH_SetInfo, _asn_ctx),
	asn_MAP_CPCH_SetInfo_tag2el_1,
	16,	/* Count of tags in the map */
	asn_MAP_CPCH_SetInfo_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CPCH_SetInfo = {
	"CPCH-SetInfo",
	"CPCH-SetInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_CPCH_SetInfo_tags_1,
	sizeof(asn_DEF_CPCH_SetInfo_tags_1)
		/sizeof(asn_DEF_CPCH_SetInfo_tags_1[0]), /* 1 */
	asn_DEF_CPCH_SetInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_CPCH_SetInfo_tags_1)
		/sizeof(asn_DEF_CPCH_SetInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CPCH_SetInfo_1,
	16,	/* Elements count */
	&asn_SPC_CPCH_SetInfo_specs_1	/* Additional specs */
};

