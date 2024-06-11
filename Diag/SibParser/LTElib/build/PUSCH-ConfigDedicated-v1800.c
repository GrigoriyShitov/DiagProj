/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "PUSCH-ConfigDedicated-v1800.h"

asn_TYPE_member_t asn_MBR_PUSCH_ConfigDedicated_v1800_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_ConfigDedicated_v1800, uplinkHARQ_Mode_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SetupRelease_4114P19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkHARQ-Mode-r18"
		},
};
static const ber_tlv_tag_t asn_DEF_PUSCH_ConfigDedicated_v1800_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PUSCH_ConfigDedicated_v1800_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* uplinkHARQ-Mode-r18 */
};
asn_SEQUENCE_specifics_t asn_SPC_PUSCH_ConfigDedicated_v1800_specs_1 = {
	sizeof(struct PUSCH_ConfigDedicated_v1800),
	offsetof(struct PUSCH_ConfigDedicated_v1800, _asn_ctx),
	asn_MAP_PUSCH_ConfigDedicated_v1800_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigDedicated_v1800 = {
	"PUSCH-ConfigDedicated-v1800",
	"PUSCH-ConfigDedicated-v1800",
	&asn_OP_SEQUENCE,
	asn_DEF_PUSCH_ConfigDedicated_v1800_tags_1,
	sizeof(asn_DEF_PUSCH_ConfigDedicated_v1800_tags_1)
		/sizeof(asn_DEF_PUSCH_ConfigDedicated_v1800_tags_1[0]), /* 1 */
	asn_DEF_PUSCH_ConfigDedicated_v1800_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUSCH_ConfigDedicated_v1800_tags_1)
		/sizeof(asn_DEF_PUSCH_ConfigDedicated_v1800_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PUSCH_ConfigDedicated_v1800_1,
	1,	/* Elements count */
	&asn_SPC_PUSCH_ConfigDedicated_v1800_specs_1	/* Additional specs */
};

