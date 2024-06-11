/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "SysInfoType6-v7xyext-IEs.h"

asn_TYPE_member_t asn_MBR_SysInfoType6_v7xyext_IEs_1[] = {
	{ ATF_POINTER, 4, offsetof(struct SysInfoType6_v7xyext_IEs, pusch_SysInfoList_SFN_VHCR),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_SysInfoList_SFN_VHCR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-SysInfoList-SFN-VHCR"
		},
	{ ATF_POINTER, 3, offsetof(struct SysInfoType6_v7xyext_IEs, pdsch_SysInfoList_SFN_r7),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_SysInfoList_r7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-SysInfoList-SFN-r7"
		},
	{ ATF_POINTER, 2, offsetof(struct SysInfoType6_v7xyext_IEs, prach_SystemInformationList_r7),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_SystemInformationList_r7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prach-SystemInformationList-r7"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType6_v7xyext_IEs, sCCPCH_SystemInformationList_r7),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCCPCH_SystemInformationList_r7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCCPCH-SystemInformationList-r7"
		},
};
static const int asn_MAP_SysInfoType6_v7xyext_IEs_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_SysInfoType6_v7xyext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SysInfoType6_v7xyext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pusch-SysInfoList-SFN-VHCR */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdsch-SysInfoList-SFN-r7 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* prach-SystemInformationList-r7 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* sCCPCH-SystemInformationList-r7 */
};
asn_SEQUENCE_specifics_t asn_SPC_SysInfoType6_v7xyext_IEs_specs_1 = {
	sizeof(struct SysInfoType6_v7xyext_IEs),
	offsetof(struct SysInfoType6_v7xyext_IEs, _asn_ctx),
	asn_MAP_SysInfoType6_v7xyext_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SysInfoType6_v7xyext_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType6_v7xyext_IEs = {
	"SysInfoType6-v7xyext-IEs",
	"SysInfoType6-v7xyext-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_SysInfoType6_v7xyext_IEs_tags_1,
	sizeof(asn_DEF_SysInfoType6_v7xyext_IEs_tags_1)
		/sizeof(asn_DEF_SysInfoType6_v7xyext_IEs_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType6_v7xyext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType6_v7xyext_IEs_tags_1)
		/sizeof(asn_DEF_SysInfoType6_v7xyext_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SysInfoType6_v7xyext_IEs_1,
	4,	/* Elements count */
	&asn_SPC_SysInfoType6_v7xyext_IEs_specs_1	/* Additional specs */
};

