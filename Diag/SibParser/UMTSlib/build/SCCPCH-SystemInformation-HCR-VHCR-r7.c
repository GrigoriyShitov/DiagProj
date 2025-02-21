/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SCCPCH-SystemInformation-HCR-VHCR-r7.h"

asn_TYPE_member_t asn_MBR_SCCPCH_SystemInformation_HCR_VHCR_r7_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SCCPCH_SystemInformation_HCR_VHCR_r7, secondaryCCPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecondaryCCPCH_Info_HCR_VHCR_r7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"secondaryCCPCH-Info"
		},
	{ ATF_POINTER, 3, offsetof(struct SCCPCH_SystemInformation_HCR_VHCR_r7, tfcs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TFCS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tfcs"
		},
	{ ATF_POINTER, 2, offsetof(struct SCCPCH_SystemInformation_HCR_VHCR_r7, fach_PCH_InformationList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FACH_PCH_InformationList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fach-PCH-InformationList"
		},
	{ ATF_POINTER, 1, offsetof(struct SCCPCH_SystemInformation_HCR_VHCR_r7, pich_Info),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PICH_Info_HCR_VHCR_r7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pich-Info"
		},
};
static const int asn_MAP_SCCPCH_SystemInformation_HCR_VHCR_r7_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_SCCPCH_SystemInformation_HCR_VHCR_r7_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SCCPCH_SystemInformation_HCR_VHCR_r7_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* secondaryCCPCH-Info */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tfcs */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* fach-PCH-InformationList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* pich-Info */
};
asn_SEQUENCE_specifics_t asn_SPC_SCCPCH_SystemInformation_HCR_VHCR_r7_specs_1 = {
	sizeof(struct SCCPCH_SystemInformation_HCR_VHCR_r7),
	offsetof(struct SCCPCH_SystemInformation_HCR_VHCR_r7, _asn_ctx),
	asn_MAP_SCCPCH_SystemInformation_HCR_VHCR_r7_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SCCPCH_SystemInformation_HCR_VHCR_r7_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SCCPCH_SystemInformation_HCR_VHCR_r7 = {
	"SCCPCH-SystemInformation-HCR-VHCR-r7",
	"SCCPCH-SystemInformation-HCR-VHCR-r7",
	&asn_OP_SEQUENCE,
	asn_DEF_SCCPCH_SystemInformation_HCR_VHCR_r7_tags_1,
	sizeof(asn_DEF_SCCPCH_SystemInformation_HCR_VHCR_r7_tags_1)
		/sizeof(asn_DEF_SCCPCH_SystemInformation_HCR_VHCR_r7_tags_1[0]), /* 1 */
	asn_DEF_SCCPCH_SystemInformation_HCR_VHCR_r7_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCCPCH_SystemInformation_HCR_VHCR_r7_tags_1)
		/sizeof(asn_DEF_SCCPCH_SystemInformation_HCR_VHCR_r7_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SCCPCH_SystemInformation_HCR_VHCR_r7_1,
	4,	/* Elements count */
	&asn_SPC_SCCPCH_SystemInformation_HCR_VHCR_r7_specs_1	/* Additional specs */
};

