/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "AdditionalSecondaryCellInfoForMixedTTIConfiguration.h"

asn_TYPE_member_t asn_MBR_AdditionalSecondaryCellInfoForMixedTTIConfiguration_1[] = {
	{ ATF_POINTER, 7, offsetof(struct AdditionalSecondaryCellInfoForMixedTTIConfiguration, eDPCCH_DPCCH_PowerOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_DPCCH_DPCCH_PowerOffset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eDPCCH-DPCCH-PowerOffset"
		},
	{ ATF_POINTER, 6, offsetof(struct AdditionalSecondaryCellInfoForMixedTTIConfiguration, happyBit_DelayCondition),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HappyBit_DelayCondition,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"happyBit-DelayCondition"
		},
	{ ATF_POINTER, 5, offsetof(struct AdditionalSecondaryCellInfoForMixedTTIConfiguration, e_TFC_Boost_Info),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_TFC_Boost_Info_r7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-TFC-Boost-Info"
		},
	{ ATF_POINTER, 4, offsetof(struct AdditionalSecondaryCellInfoForMixedTTIConfiguration, e_TFCI_TableIndex),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_TFCI_TableIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-TFCI-TableIndex"
		},
	{ ATF_POINTER, 3, offsetof(struct AdditionalSecondaryCellInfoForMixedTTIConfiguration, reference_E_TFCIs),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_DPDCH_Reference_E_TFCIList_r7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reference-E-TFCIs"
		},
	{ ATF_POINTER, 2, offsetof(struct AdditionalSecondaryCellInfoForMixedTTIConfiguration, maxChannelisationCodes),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_DPDCH_MaxChannelisationCodes,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxChannelisationCodes"
		},
	{ ATF_POINTER, 1, offsetof(struct AdditionalSecondaryCellInfoForMixedTTIConfiguration, schedulingInfoConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_DPDCH_SchedulingInfoConfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"schedulingInfoConfiguration"
		},
};
static const int asn_MAP_AdditionalSecondaryCellInfoForMixedTTIConfiguration_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_AdditionalSecondaryCellInfoForMixedTTIConfiguration_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AdditionalSecondaryCellInfoForMixedTTIConfiguration_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eDPCCH-DPCCH-PowerOffset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* happyBit-DelayCondition */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* e-TFC-Boost-Info */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* e-TFCI-TableIndex */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* reference-E-TFCIs */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* maxChannelisationCodes */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* schedulingInfoConfiguration */
};
asn_SEQUENCE_specifics_t asn_SPC_AdditionalSecondaryCellInfoForMixedTTIConfiguration_specs_1 = {
	sizeof(struct AdditionalSecondaryCellInfoForMixedTTIConfiguration),
	offsetof(struct AdditionalSecondaryCellInfoForMixedTTIConfiguration, _asn_ctx),
	asn_MAP_AdditionalSecondaryCellInfoForMixedTTIConfiguration_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_AdditionalSecondaryCellInfoForMixedTTIConfiguration_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AdditionalSecondaryCellInfoForMixedTTIConfiguration = {
	"AdditionalSecondaryCellInfoForMixedTTIConfiguration",
	"AdditionalSecondaryCellInfoForMixedTTIConfiguration",
	&asn_OP_SEQUENCE,
	asn_DEF_AdditionalSecondaryCellInfoForMixedTTIConfiguration_tags_1,
	sizeof(asn_DEF_AdditionalSecondaryCellInfoForMixedTTIConfiguration_tags_1)
		/sizeof(asn_DEF_AdditionalSecondaryCellInfoForMixedTTIConfiguration_tags_1[0]), /* 1 */
	asn_DEF_AdditionalSecondaryCellInfoForMixedTTIConfiguration_tags_1,	/* Same as above */
	sizeof(asn_DEF_AdditionalSecondaryCellInfoForMixedTTIConfiguration_tags_1)
		/sizeof(asn_DEF_AdditionalSecondaryCellInfoForMixedTTIConfiguration_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AdditionalSecondaryCellInfoForMixedTTIConfiguration_1,
	7,	/* Elements count */
	&asn_SPC_AdditionalSecondaryCellInfoForMixedTTIConfiguration_specs_1	/* Additional specs */
};

