/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SCellConfigCommon-r15.h"

asn_TYPE_member_t asn_MBR_SCellConfigCommon_r15_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SCellConfigCommon_r15, radioResourceConfigCommonSCell_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigCommonSCell_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigCommonSCell-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct SCellConfigCommon_r15, radioResourceConfigDedicatedSCell_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicatedSCell_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigDedicatedSCell-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SCellConfigCommon_r15, antennaInfoDedicatedSCell_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoDedicated_v10i0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antennaInfoDedicatedSCell-r15"
		},
};
static const int asn_MAP_SCellConfigCommon_r15_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_SCellConfigCommon_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SCellConfigCommon_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioResourceConfigCommonSCell-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* radioResourceConfigDedicatedSCell-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* antennaInfoDedicatedSCell-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_SCellConfigCommon_r15_specs_1 = {
	sizeof(struct SCellConfigCommon_r15),
	offsetof(struct SCellConfigCommon_r15, _asn_ctx),
	asn_MAP_SCellConfigCommon_r15_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SCellConfigCommon_r15_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SCellConfigCommon_r15 = {
	"SCellConfigCommon-r15",
	"SCellConfigCommon-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_SCellConfigCommon_r15_tags_1,
	sizeof(asn_DEF_SCellConfigCommon_r15_tags_1)
		/sizeof(asn_DEF_SCellConfigCommon_r15_tags_1[0]), /* 1 */
	asn_DEF_SCellConfigCommon_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCellConfigCommon_r15_tags_1)
		/sizeof(asn_DEF_SCellConfigCommon_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SCellConfigCommon_r15_1,
	3,	/* Elements count */
	&asn_SPC_SCellConfigCommon_r15_specs_1	/* Additional specs */
};

