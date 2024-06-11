/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "RF-Parameters-v1630.h"

asn_TYPE_member_t asn_MBR_RF_Parameters_v1630_1[] = {
	{ ATF_POINTER, 3, offsetof(struct RF_Parameters_v1630, supportedBandCombination_v1630),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBandCombination_v1630,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombination-v1630"
		},
	{ ATF_POINTER, 2, offsetof(struct RF_Parameters_v1630, supportedBandCombinationAdd_v1630),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBandCombinationAdd_v1630,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationAdd-v1630"
		},
	{ ATF_POINTER, 1, offsetof(struct RF_Parameters_v1630, supportedBandCombinationReduced_v1630),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBandCombinationReduced_v1630,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationReduced-v1630"
		},
};
static const int asn_MAP_RF_Parameters_v1630_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_RF_Parameters_v1630_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RF_Parameters_v1630_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedBandCombination-v1630 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* supportedBandCombinationAdd-v1630 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* supportedBandCombinationReduced-v1630 */
};
asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v1630_specs_1 = {
	sizeof(struct RF_Parameters_v1630),
	offsetof(struct RF_Parameters_v1630, _asn_ctx),
	asn_MAP_RF_Parameters_v1630_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RF_Parameters_v1630_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1630 = {
	"RF-Parameters-v1630",
	"RF-Parameters-v1630",
	&asn_OP_SEQUENCE,
	asn_DEF_RF_Parameters_v1630_tags_1,
	sizeof(asn_DEF_RF_Parameters_v1630_tags_1)
		/sizeof(asn_DEF_RF_Parameters_v1630_tags_1[0]), /* 1 */
	asn_DEF_RF_Parameters_v1630_tags_1,	/* Same as above */
	sizeof(asn_DEF_RF_Parameters_v1630_tags_1)
		/sizeof(asn_DEF_RF_Parameters_v1630_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RF_Parameters_v1630_1,
	3,	/* Elements count */
	&asn_SPC_RF_Parameters_v1630_specs_1	/* Additional specs */
};

