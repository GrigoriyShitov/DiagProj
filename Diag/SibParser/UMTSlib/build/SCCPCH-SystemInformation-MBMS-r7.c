/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "SCCPCH-SystemInformation-MBMS-r7.h"

static asn_TYPE_member_t asn_MBR_fachCarryingMCCH_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SCCPCH_SystemInformation_MBMS_r7__fachCarryingMCCH, mcch_transportFormatSet),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TransportFormatSet,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mcch-transportFormatSet"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SCCPCH_SystemInformation_MBMS_r7__fachCarryingMCCH, mcch_ConfigurationInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_MCCH_ConfigurationInfo_r6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mcch-ConfigurationInfo"
		},
};
static const ber_tlv_tag_t asn_DEF_fachCarryingMCCH_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fachCarryingMCCH_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mcch-transportFormatSet */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mcch-ConfigurationInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_fachCarryingMCCH_specs_4 = {
	sizeof(struct SCCPCH_SystemInformation_MBMS_r7__fachCarryingMCCH),
	offsetof(struct SCCPCH_SystemInformation_MBMS_r7__fachCarryingMCCH, _asn_ctx),
	asn_MAP_fachCarryingMCCH_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fachCarryingMCCH_4 = {
	"fachCarryingMCCH",
	"fachCarryingMCCH",
	&asn_OP_SEQUENCE,
	asn_DEF_fachCarryingMCCH_tags_4,
	sizeof(asn_DEF_fachCarryingMCCH_tags_4)
		/sizeof(asn_DEF_fachCarryingMCCH_tags_4[0]) - 1, /* 1 */
	asn_DEF_fachCarryingMCCH_tags_4,	/* Same as above */
	sizeof(asn_DEF_fachCarryingMCCH_tags_4)
		/sizeof(asn_DEF_fachCarryingMCCH_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_fachCarryingMCCH_4,
	2,	/* Elements count */
	&asn_SPC_fachCarryingMCCH_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_fachCarryingMSCH_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SCCPCH_SystemInformation_MBMS_r7__fachCarryingMSCH, msch_transportFormatSet),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TransportFormatSet,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msch-transportFormatSet"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SCCPCH_SystemInformation_MBMS_r7__fachCarryingMSCH, msch_ConfigurationInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_MSCH_ConfigurationInfo_r6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msch-ConfigurationInfo"
		},
};
static const ber_tlv_tag_t asn_DEF_fachCarryingMSCH_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fachCarryingMSCH_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* msch-transportFormatSet */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* msch-ConfigurationInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_fachCarryingMSCH_specs_8 = {
	sizeof(struct SCCPCH_SystemInformation_MBMS_r7__fachCarryingMSCH),
	offsetof(struct SCCPCH_SystemInformation_MBMS_r7__fachCarryingMSCH, _asn_ctx),
	asn_MAP_fachCarryingMSCH_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fachCarryingMSCH_8 = {
	"fachCarryingMSCH",
	"fachCarryingMSCH",
	&asn_OP_SEQUENCE,
	asn_DEF_fachCarryingMSCH_tags_8,
	sizeof(asn_DEF_fachCarryingMSCH_tags_8)
		/sizeof(asn_DEF_fachCarryingMSCH_tags_8[0]) - 1, /* 1 */
	asn_DEF_fachCarryingMSCH_tags_8,	/* Same as above */
	sizeof(asn_DEF_fachCarryingMSCH_tags_8)
		/sizeof(asn_DEF_fachCarryingMSCH_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_fachCarryingMSCH_8,
	2,	/* Elements count */
	&asn_SPC_fachCarryingMSCH_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SCCPCH_SystemInformation_MBMS_r7_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SCCPCH_SystemInformation_MBMS_r7, secondaryCCPCHInfo_MBMS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecondaryCCPCHInfo_MBMS_r7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"secondaryCCPCHInfo-MBMS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SCCPCH_SystemInformation_MBMS_r7, transportFormatCombinationSet),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TFCS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transportFormatCombinationSet"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SCCPCH_SystemInformation_MBMS_r7, fachCarryingMCCH),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_fachCarryingMCCH_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fachCarryingMCCH"
		},
	{ ATF_POINTER, 2, offsetof(struct SCCPCH_SystemInformation_MBMS_r7, fachCarryingMTCH_List),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_FACHCarryingMTCH_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fachCarryingMTCH-List"
		},
	{ ATF_POINTER, 1, offsetof(struct SCCPCH_SystemInformation_MBMS_r7, fachCarryingMSCH),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_fachCarryingMSCH_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fachCarryingMSCH"
		},
};
static const int asn_MAP_SCCPCH_SystemInformation_MBMS_r7_oms_1[] = { 3, 4 };
static const ber_tlv_tag_t asn_DEF_SCCPCH_SystemInformation_MBMS_r7_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SCCPCH_SystemInformation_MBMS_r7_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* secondaryCCPCHInfo-MBMS */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* transportFormatCombinationSet */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* fachCarryingMCCH */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* fachCarryingMTCH-List */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* fachCarryingMSCH */
};
asn_SEQUENCE_specifics_t asn_SPC_SCCPCH_SystemInformation_MBMS_r7_specs_1 = {
	sizeof(struct SCCPCH_SystemInformation_MBMS_r7),
	offsetof(struct SCCPCH_SystemInformation_MBMS_r7, _asn_ctx),
	asn_MAP_SCCPCH_SystemInformation_MBMS_r7_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_SCCPCH_SystemInformation_MBMS_r7_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SCCPCH_SystemInformation_MBMS_r7 = {
	"SCCPCH-SystemInformation-MBMS-r7",
	"SCCPCH-SystemInformation-MBMS-r7",
	&asn_OP_SEQUENCE,
	asn_DEF_SCCPCH_SystemInformation_MBMS_r7_tags_1,
	sizeof(asn_DEF_SCCPCH_SystemInformation_MBMS_r7_tags_1)
		/sizeof(asn_DEF_SCCPCH_SystemInformation_MBMS_r7_tags_1[0]), /* 1 */
	asn_DEF_SCCPCH_SystemInformation_MBMS_r7_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCCPCH_SystemInformation_MBMS_r7_tags_1)
		/sizeof(asn_DEF_SCCPCH_SystemInformation_MBMS_r7_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SCCPCH_SystemInformation_MBMS_r7_1,
	5,	/* Elements count */
	&asn_SPC_SCCPCH_SystemInformation_MBMS_r7_specs_1	/* Additional specs */
};

