/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "NS-PmaxValueAerial-r18.h"

asn_TYPE_member_t asn_MBR_NS_PmaxValueAerial_r18_1[] = {
	{ ATF_POINTER, 2, offsetof(struct NS_PmaxValueAerial_r18, additionalPmax_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalPmax-r18"
		},
	{ ATF_POINTER, 1, offsetof(struct NS_PmaxValueAerial_r18, additionalSpectrumEmission_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSpectrumEmission_r18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSpectrumEmission-r18"
		},
};
static const int asn_MAP_NS_PmaxValueAerial_r18_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NS_PmaxValueAerial_r18_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NS_PmaxValueAerial_r18_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* additionalPmax-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* additionalSpectrumEmission-r18 */
};
asn_SEQUENCE_specifics_t asn_SPC_NS_PmaxValueAerial_r18_specs_1 = {
	sizeof(struct NS_PmaxValueAerial_r18),
	offsetof(struct NS_PmaxValueAerial_r18, _asn_ctx),
	asn_MAP_NS_PmaxValueAerial_r18_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NS_PmaxValueAerial_r18_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NS_PmaxValueAerial_r18 = {
	"NS-PmaxValueAerial-r18",
	"NS-PmaxValueAerial-r18",
	&asn_OP_SEQUENCE,
	asn_DEF_NS_PmaxValueAerial_r18_tags_1,
	sizeof(asn_DEF_NS_PmaxValueAerial_r18_tags_1)
		/sizeof(asn_DEF_NS_PmaxValueAerial_r18_tags_1[0]), /* 1 */
	asn_DEF_NS_PmaxValueAerial_r18_tags_1,	/* Same as above */
	sizeof(asn_DEF_NS_PmaxValueAerial_r18_tags_1)
		/sizeof(asn_DEF_NS_PmaxValueAerial_r18_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NS_PmaxValueAerial_r18_1,
	2,	/* Elements count */
	&asn_SPC_NS_PmaxValueAerial_r18_specs_1	/* Additional specs */
};

