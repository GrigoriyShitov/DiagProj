/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "CQI-ReportConfig-v1130.h"

asn_TYPE_member_t asn_MBR_CQI_ReportConfig_v1130_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportConfig_v1130, cqi_ReportPeriodic_v1130),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportPeriodic_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportPeriodic-v1130"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportConfig_v1130, cqi_ReportBoth_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportBoth_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportBoth-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_CQI_ReportConfig_v1130_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CQI_ReportConfig_v1130_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cqi-ReportPeriodic-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cqi-ReportBoth-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportConfig_v1130_specs_1 = {
	sizeof(struct CQI_ReportConfig_v1130),
	offsetof(struct CQI_ReportConfig_v1130, _asn_ctx),
	asn_MAP_CQI_ReportConfig_v1130_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CQI_ReportConfig_v1130 = {
	"CQI-ReportConfig-v1130",
	"CQI-ReportConfig-v1130",
	&asn_OP_SEQUENCE,
	asn_DEF_CQI_ReportConfig_v1130_tags_1,
	sizeof(asn_DEF_CQI_ReportConfig_v1130_tags_1)
		/sizeof(asn_DEF_CQI_ReportConfig_v1130_tags_1[0]), /* 1 */
	asn_DEF_CQI_ReportConfig_v1130_tags_1,	/* Same as above */
	sizeof(asn_DEF_CQI_ReportConfig_v1130_tags_1)
		/sizeof(asn_DEF_CQI_ReportConfig_v1130_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CQI_ReportConfig_v1130_1,
	2,	/* Elements count */
	&asn_SPC_CQI_ReportConfig_v1130_specs_1	/* Additional specs */
};

