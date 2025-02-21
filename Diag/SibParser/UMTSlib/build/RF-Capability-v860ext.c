/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "RF-Capability-v860ext.h"

asn_TYPE_member_t asn_MBR_RF_Capability_v860ext_1[] = {
	{ ATF_POINTER, 3, offsetof(struct RF_Capability_v860ext, tdd128RF_Capability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioFrequencyBandTDDextList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd128RF-Capability"
		},
	{ ATF_POINTER, 2, offsetof(struct RF_Capability_v860ext, tdd384RF_Capability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioFrequencyBandTDDextList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd384RF-Capability"
		},
	{ ATF_POINTER, 1, offsetof(struct RF_Capability_v860ext, tdd768RF_Capability),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioFrequencyBandTDDextList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd768RF-Capability"
		},
};
static const int asn_MAP_RF_Capability_v860ext_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_RF_Capability_v860ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RF_Capability_v860ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd128RF-Capability */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tdd384RF-Capability */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* tdd768RF-Capability */
};
asn_SEQUENCE_specifics_t asn_SPC_RF_Capability_v860ext_specs_1 = {
	sizeof(struct RF_Capability_v860ext),
	offsetof(struct RF_Capability_v860ext, _asn_ctx),
	asn_MAP_RF_Capability_v860ext_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RF_Capability_v860ext_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RF_Capability_v860ext = {
	"RF-Capability-v860ext",
	"RF-Capability-v860ext",
	&asn_OP_SEQUENCE,
	asn_DEF_RF_Capability_v860ext_tags_1,
	sizeof(asn_DEF_RF_Capability_v860ext_tags_1)
		/sizeof(asn_DEF_RF_Capability_v860ext_tags_1[0]), /* 1 */
	asn_DEF_RF_Capability_v860ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_RF_Capability_v860ext_tags_1)
		/sizeof(asn_DEF_RF_Capability_v860ext_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RF_Capability_v860ext_1,
	3,	/* Elements count */
	&asn_SPC_RF_Capability_v860ext_specs_1	/* Additional specs */
};

