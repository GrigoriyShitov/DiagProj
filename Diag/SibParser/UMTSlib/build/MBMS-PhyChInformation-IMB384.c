/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "MBMS-PhyChInformation-IMB384.h"

asn_TYPE_member_t asn_MBR_MBMS_PhyChInformation_IMB384_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_PhyChInformation_IMB384, mbms_CommonPhyChIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_CommonPhyChIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-CommonPhyChIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_PhyChInformation_IMB384, secondaryCCPCHInfo_MBMS),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecondaryCCPCHFrameType2Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"secondaryCCPCHInfo-MBMS"
		},
};
static const ber_tlv_tag_t asn_DEF_MBMS_PhyChInformation_IMB384_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBMS_PhyChInformation_IMB384_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbms-CommonPhyChIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* secondaryCCPCHInfo-MBMS */
};
asn_SEQUENCE_specifics_t asn_SPC_MBMS_PhyChInformation_IMB384_specs_1 = {
	sizeof(struct MBMS_PhyChInformation_IMB384),
	offsetof(struct MBMS_PhyChInformation_IMB384, _asn_ctx),
	asn_MAP_MBMS_PhyChInformation_IMB384_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_PhyChInformation_IMB384 = {
	"MBMS-PhyChInformation-IMB384",
	"MBMS-PhyChInformation-IMB384",
	&asn_OP_SEQUENCE,
	asn_DEF_MBMS_PhyChInformation_IMB384_tags_1,
	sizeof(asn_DEF_MBMS_PhyChInformation_IMB384_tags_1)
		/sizeof(asn_DEF_MBMS_PhyChInformation_IMB384_tags_1[0]), /* 1 */
	asn_DEF_MBMS_PhyChInformation_IMB384_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_PhyChInformation_IMB384_tags_1)
		/sizeof(asn_DEF_MBMS_PhyChInformation_IMB384_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MBMS_PhyChInformation_IMB384_1,
	2,	/* Elements count */
	&asn_SPC_MBMS_PhyChInformation_IMB384_specs_1	/* Additional specs */
};

