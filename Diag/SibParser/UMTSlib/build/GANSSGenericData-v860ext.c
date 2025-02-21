/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "GANSSGenericData-v860ext.h"

asn_TYPE_member_t asn_MBR_GANSSGenericData_v860ext_1[] = {
	{ ATF_POINTER, 5, offsetof(struct GANSSGenericData_v860ext, uePositiningGANSSsbasID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_GANSS_SBAS_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uePositiningGANSSsbasID"
		},
	{ ATF_POINTER, 4, offsetof(struct GANSSGenericData_v860ext, uePositioningGANSSAddNavigationModels),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_GANSS_AddNavigationModels,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uePositioningGANSSAddNavigationModels"
		},
	{ ATF_POINTER, 3, offsetof(struct GANSSGenericData_v860ext, uePositioningGANSSAlmanac),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_GANSS_Almanac_v860ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uePositioningGANSSAlmanac"
		},
	{ ATF_POINTER, 2, offsetof(struct GANSSGenericData_v860ext, uePositioningGANSSAddUTCModels),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_GANSS_AddUTCModels,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uePositioningGANSSAddUTCModels"
		},
	{ ATF_POINTER, 1, offsetof(struct GANSSGenericData_v860ext, uePositioningGANSSAuxiliaryInfo),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UE_Positioning_GANSS_AuxiliaryInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uePositioningGANSSAuxiliaryInfo"
		},
};
static const int asn_MAP_GANSSGenericData_v860ext_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_GANSSGenericData_v860ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GANSSGenericData_v860ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uePositiningGANSSsbasID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uePositioningGANSSAddNavigationModels */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uePositioningGANSSAlmanac */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* uePositioningGANSSAddUTCModels */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* uePositioningGANSSAuxiliaryInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_GANSSGenericData_v860ext_specs_1 = {
	sizeof(struct GANSSGenericData_v860ext),
	offsetof(struct GANSSGenericData_v860ext, _asn_ctx),
	asn_MAP_GANSSGenericData_v860ext_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_GANSSGenericData_v860ext_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GANSSGenericData_v860ext = {
	"GANSSGenericData-v860ext",
	"GANSSGenericData-v860ext",
	&asn_OP_SEQUENCE,
	asn_DEF_GANSSGenericData_v860ext_tags_1,
	sizeof(asn_DEF_GANSSGenericData_v860ext_tags_1)
		/sizeof(asn_DEF_GANSSGenericData_v860ext_tags_1[0]), /* 1 */
	asn_DEF_GANSSGenericData_v860ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_GANSSGenericData_v860ext_tags_1)
		/sizeof(asn_DEF_GANSSGenericData_v860ext_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_GANSSGenericData_v860ext_1,
	5,	/* Elements count */
	&asn_SPC_GANSSGenericData_v860ext_specs_1	/* Additional specs */
};

