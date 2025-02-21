/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "DRX-Info.h"

asn_TYPE_member_t asn_MBR_DRX_Info_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info, ue_drx_Cycle),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_DRX_Cycle,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-drx-Cycle"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info, ue_drx_Cycle_InactivityThreshold),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_DRX_Cycle_InactivityThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-drx-Cycle-InactivityThreshold"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info, ue_GrantMonitoring_InactivityThreshold),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_GrantMonitoring_InactivityThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-GrantMonitoring-InactivityThreshold"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info, ue_drx_GrantMonitoring),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-drx-GrantMonitoring"
		},
};
static const ber_tlv_tag_t asn_DEF_DRX_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRX_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-drx-Cycle */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ue-drx-Cycle-InactivityThreshold */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ue-GrantMonitoring-InactivityThreshold */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ue-drx-GrantMonitoring */
};
asn_SEQUENCE_specifics_t asn_SPC_DRX_Info_specs_1 = {
	sizeof(struct DRX_Info),
	offsetof(struct DRX_Info, _asn_ctx),
	asn_MAP_DRX_Info_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRX_Info = {
	"DRX-Info",
	"DRX-Info",
	&asn_OP_SEQUENCE,
	asn_DEF_DRX_Info_tags_1,
	sizeof(asn_DEF_DRX_Info_tags_1)
		/sizeof(asn_DEF_DRX_Info_tags_1[0]), /* 1 */
	asn_DEF_DRX_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRX_Info_tags_1)
		/sizeof(asn_DEF_DRX_Info_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DRX_Info_1,
	4,	/* Elements count */
	&asn_SPC_DRX_Info_specs_1	/* Additional specs */
};

