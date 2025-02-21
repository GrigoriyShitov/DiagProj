/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "PRACH-SystemInformation-LCR-r4.h"

asn_TYPE_member_t asn_MBR_PRACH_SystemInformation_LCR_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PRACH_SystemInformation_LCR_r4, prach_RACH_Info_LCR),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_RACH_Info_LCR_r4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prach-RACH-Info-LCR"
		},
	{ ATF_POINTER, 2, offsetof(struct PRACH_SystemInformation_LCR_r4, rach_TransportFormatSet_LCR),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TransportFormatSet_LCR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-TransportFormatSet-LCR"
		},
	{ ATF_POINTER, 1, offsetof(struct PRACH_SystemInformation_LCR_r4, prach_Partitioning_LCR),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_Partitioning_LCR_r4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prach-Partitioning-LCR"
		},
};
static const int asn_MAP_PRACH_SystemInformation_LCR_r4_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_PRACH_SystemInformation_LCR_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PRACH_SystemInformation_LCR_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* prach-RACH-Info-LCR */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rach-TransportFormatSet-LCR */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* prach-Partitioning-LCR */
};
asn_SEQUENCE_specifics_t asn_SPC_PRACH_SystemInformation_LCR_r4_specs_1 = {
	sizeof(struct PRACH_SystemInformation_LCR_r4),
	offsetof(struct PRACH_SystemInformation_LCR_r4, _asn_ctx),
	asn_MAP_PRACH_SystemInformation_LCR_r4_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PRACH_SystemInformation_LCR_r4_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PRACH_SystemInformation_LCR_r4 = {
	"PRACH-SystemInformation-LCR-r4",
	"PRACH-SystemInformation-LCR-r4",
	&asn_OP_SEQUENCE,
	asn_DEF_PRACH_SystemInformation_LCR_r4_tags_1,
	sizeof(asn_DEF_PRACH_SystemInformation_LCR_r4_tags_1)
		/sizeof(asn_DEF_PRACH_SystemInformation_LCR_r4_tags_1[0]), /* 1 */
	asn_DEF_PRACH_SystemInformation_LCR_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_PRACH_SystemInformation_LCR_r4_tags_1)
		/sizeof(asn_DEF_PRACH_SystemInformation_LCR_r4_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PRACH_SystemInformation_LCR_r4_1,
	3,	/* Elements count */
	&asn_SPC_PRACH_SystemInformation_LCR_r4_specs_1	/* Additional specs */
};

