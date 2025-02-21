/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "BandParameters-v1090.h"

asn_TYPE_member_t asn_MBR_BandParameters_v1090_1[] = {
	{ ATF_POINTER, 1, offsetof(struct BandParameters_v1090, bandEUTRA_v1090),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandIndicator_v9e0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandEUTRA-v1090"
		},
};
static const int asn_MAP_BandParameters_v1090_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_BandParameters_v1090_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandParameters_v1090_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* bandEUTRA-v1090 */
};
asn_SEQUENCE_specifics_t asn_SPC_BandParameters_v1090_specs_1 = {
	sizeof(struct BandParameters_v1090),
	offsetof(struct BandParameters_v1090, _asn_ctx),
	asn_MAP_BandParameters_v1090_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_BandParameters_v1090_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandParameters_v1090 = {
	"BandParameters-v1090",
	"BandParameters-v1090",
	&asn_OP_SEQUENCE,
	asn_DEF_BandParameters_v1090_tags_1,
	sizeof(asn_DEF_BandParameters_v1090_tags_1)
		/sizeof(asn_DEF_BandParameters_v1090_tags_1[0]), /* 1 */
	asn_DEF_BandParameters_v1090_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandParameters_v1090_tags_1)
		/sizeof(asn_DEF_BandParameters_v1090_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BandParameters_v1090_1,
	1,	/* Elements count */
	&asn_SPC_BandParameters_v1090_specs_1	/* Additional specs */
};

