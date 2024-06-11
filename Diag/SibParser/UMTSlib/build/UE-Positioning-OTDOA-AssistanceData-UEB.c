/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "UE-Positioning-OTDOA-AssistanceData-UEB.h"

asn_TYPE_member_t asn_MBR_UE_Positioning_OTDOA_AssistanceData_UEB_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UE_Positioning_OTDOA_AssistanceData_UEB, ue_positioning_OTDOA_ReferenceCellInfo_UEB),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo_UEB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-positioning-OTDOA-ReferenceCellInfo-UEB"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_OTDOA_AssistanceData_UEB, ue_positioning_OTDOA_NeighbourCellList_UEB),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_OTDOA_NeighbourCellList_UEB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-positioning-OTDOA-NeighbourCellList-UEB"
		},
};
static const int asn_MAP_UE_Positioning_OTDOA_AssistanceData_UEB_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UE_Positioning_OTDOA_AssistanceData_UEB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_Positioning_OTDOA_AssistanceData_UEB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-positioning-OTDOA-ReferenceCellInfo-UEB */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ue-positioning-OTDOA-NeighbourCellList-UEB */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_OTDOA_AssistanceData_UEB_specs_1 = {
	sizeof(struct UE_Positioning_OTDOA_AssistanceData_UEB),
	offsetof(struct UE_Positioning_OTDOA_AssistanceData_UEB, _asn_ctx),
	asn_MAP_UE_Positioning_OTDOA_AssistanceData_UEB_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UE_Positioning_OTDOA_AssistanceData_UEB_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_Positioning_OTDOA_AssistanceData_UEB = {
	"UE-Positioning-OTDOA-AssistanceData-UEB",
	"UE-Positioning-OTDOA-AssistanceData-UEB",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_Positioning_OTDOA_AssistanceData_UEB_tags_1,
	sizeof(asn_DEF_UE_Positioning_OTDOA_AssistanceData_UEB_tags_1)
		/sizeof(asn_DEF_UE_Positioning_OTDOA_AssistanceData_UEB_tags_1[0]), /* 1 */
	asn_DEF_UE_Positioning_OTDOA_AssistanceData_UEB_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_Positioning_OTDOA_AssistanceData_UEB_tags_1)
		/sizeof(asn_DEF_UE_Positioning_OTDOA_AssistanceData_UEB_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_Positioning_OTDOA_AssistanceData_UEB_1,
	2,	/* Elements count */
	&asn_SPC_UE_Positioning_OTDOA_AssistanceData_UEB_specs_1	/* Additional specs */
};

