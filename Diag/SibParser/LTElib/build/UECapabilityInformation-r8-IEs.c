/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UECapabilityInformation-r8-IEs.h"

asn_TYPE_member_t asn_MBR_UECapabilityInformation_r8_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UECapabilityInformation_r8_IEs, ue_CapabilityRAT_ContainerList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_CapabilityRAT_ContainerList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-CapabilityRAT-ContainerList"
		},
	{ ATF_POINTER, 1, offsetof(struct UECapabilityInformation_r8_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UECapabilityInformation_v8a0_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UECapabilityInformation_r8_IEs_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_UECapabilityInformation_r8_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UECapabilityInformation_r8_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-CapabilityRAT-ContainerList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UECapabilityInformation_r8_IEs_specs_1 = {
	sizeof(struct UECapabilityInformation_r8_IEs),
	offsetof(struct UECapabilityInformation_r8_IEs, _asn_ctx),
	asn_MAP_UECapabilityInformation_r8_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UECapabilityInformation_r8_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UECapabilityInformation_r8_IEs = {
	"UECapabilityInformation-r8-IEs",
	"UECapabilityInformation-r8-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UECapabilityInformation_r8_IEs_tags_1,
	sizeof(asn_DEF_UECapabilityInformation_r8_IEs_tags_1)
		/sizeof(asn_DEF_UECapabilityInformation_r8_IEs_tags_1[0]), /* 1 */
	asn_DEF_UECapabilityInformation_r8_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UECapabilityInformation_r8_IEs_tags_1)
		/sizeof(asn_DEF_UECapabilityInformation_r8_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UECapabilityInformation_r8_IEs_1,
	2,	/* Elements count */
	&asn_SPC_UECapabilityInformation_r8_IEs_specs_1	/* Additional specs */
};

