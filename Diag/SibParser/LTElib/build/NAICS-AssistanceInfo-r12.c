/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "NAICS-AssistanceInfo-r12.h"

static asn_oer_constraints_t asn_OER_type_NAICS_AssistanceInfo_r12_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_NAICS_AssistanceInfo_r12_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_POINTER, 3, offsetof(struct NAICS_AssistanceInfo_r12__setup, neighCellsToReleaseList_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NeighCellsToReleaseList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellsToReleaseList-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct NAICS_AssistanceInfo_r12__setup, neighCellsToAddModList_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NeighCellsToAddModList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellsToAddModList-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct NAICS_AssistanceInfo_r12__setup, servCellp_a_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_a,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servCellp-a-r12"
		},
};
static const int asn_MAP_setup_oms_3[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* neighCellsToReleaseList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* neighCellsToAddModList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* servCellp-a-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct NAICS_AssistanceInfo_r12__setup),
	offsetof(struct NAICS_AssistanceInfo_r12__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	3,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_3,
	3,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NAICS_AssistanceInfo_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NAICS_AssistanceInfo_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NAICS_AssistanceInfo_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NAICS_AssistanceInfo_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_NAICS_AssistanceInfo_r12_specs_1 = {
	sizeof(struct NAICS_AssistanceInfo_r12),
	offsetof(struct NAICS_AssistanceInfo_r12, _asn_ctx),
	offsetof(struct NAICS_AssistanceInfo_r12, present),
	sizeof(((struct NAICS_AssistanceInfo_r12 *)0)->present),
	asn_MAP_NAICS_AssistanceInfo_r12_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NAICS_AssistanceInfo_r12 = {
	"NAICS-AssistanceInfo-r12",
	"NAICS-AssistanceInfo-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_NAICS_AssistanceInfo_r12_constr_1, &asn_PER_type_NAICS_AssistanceInfo_r12_constr_1, CHOICE_constraint },
	asn_MBR_NAICS_AssistanceInfo_r12_1,
	2,	/* Elements count */
	&asn_SPC_NAICS_AssistanceInfo_r12_specs_1	/* Additional specs */
};

