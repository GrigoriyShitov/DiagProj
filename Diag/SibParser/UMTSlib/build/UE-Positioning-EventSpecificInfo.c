/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UE-Positioning-EventSpecificInfo.h"

static asn_oer_constraints_t asn_OER_type_UE_Positioning_EventSpecificInfo_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_UE_Positioning_EventSpecificInfo_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UE_Positioning_EventSpecificInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_EventSpecificInfo, choice.e7a),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdPositionChange,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e7a"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_EventSpecificInfo, choice.e7b),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdSFN_SFN_Change,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e7b"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_EventSpecificInfo, choice.e7c),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdSFN_GPS_TOW,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e7c"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_UE_Positioning_EventSpecificInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e7a */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* e7b */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* e7c */
};
asn_CHOICE_specifics_t asn_SPC_UE_Positioning_EventSpecificInfo_specs_1 = {
	sizeof(struct UE_Positioning_EventSpecificInfo),
	offsetof(struct UE_Positioning_EventSpecificInfo, _asn_ctx),
	offsetof(struct UE_Positioning_EventSpecificInfo, present),
	sizeof(((struct UE_Positioning_EventSpecificInfo *)0)->present),
	asn_MAP_UE_Positioning_EventSpecificInfo_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UE_Positioning_EventSpecificInfo = {
	"UE-Positioning-EventSpecificInfo",
	"UE-Positioning-EventSpecificInfo",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_UE_Positioning_EventSpecificInfo_constr_1, &asn_PER_type_UE_Positioning_EventSpecificInfo_constr_1, CHOICE_constraint },
	asn_MBR_UE_Positioning_EventSpecificInfo_1,
	3,	/* Elements count */
	&asn_SPC_UE_Positioning_EventSpecificInfo_specs_1	/* Additional specs */
};

