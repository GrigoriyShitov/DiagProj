/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "DL-AddReconfTransChInformation-r9.h"

static asn_oer_constraints_t asn_OER_type_tfs_SignallingMode_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_tfs_SignallingMode_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tfs_SignallingMode_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_AddReconfTransChInformation_r9__tfs_SignallingMode, choice.explicit_config),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TransportFormatSet,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"explicit-config"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_AddReconfTransChInformation_r9__tfs_SignallingMode, choice.sameAsULTrCH),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_TransportChannelIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sameAsULTrCH"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_AddReconfTransChInformation_r9__tfs_SignallingMode, choice.hsdsch),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HSDSCH_Info_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hsdsch"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_tfs_SignallingMode_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicit-config */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sameAsULTrCH */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* hsdsch */
};
static asn_CHOICE_specifics_t asn_SPC_tfs_SignallingMode_specs_3 = {
	sizeof(struct DL_AddReconfTransChInformation_r9__tfs_SignallingMode),
	offsetof(struct DL_AddReconfTransChInformation_r9__tfs_SignallingMode, _asn_ctx),
	offsetof(struct DL_AddReconfTransChInformation_r9__tfs_SignallingMode, present),
	sizeof(((struct DL_AddReconfTransChInformation_r9__tfs_SignallingMode *)0)->present),
	asn_MAP_tfs_SignallingMode_tag2el_3,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tfs_SignallingMode_3 = {
	"tfs-SignallingMode",
	"tfs-SignallingMode",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_tfs_SignallingMode_constr_3, &asn_PER_type_tfs_SignallingMode_constr_3, CHOICE_constraint },
	asn_MBR_tfs_SignallingMode_3,
	3,	/* Elements count */
	&asn_SPC_tfs_SignallingMode_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DL_AddReconfTransChInformation_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_AddReconfTransChInformation_r9, dl_TransportChannelType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DL_TrCH_TypeId1_r5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-TransportChannelType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_AddReconfTransChInformation_r9, tfs_SignallingMode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tfs_SignallingMode_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tfs-SignallingMode"
		},
	{ ATF_POINTER, 1, offsetof(struct DL_AddReconfTransChInformation_r9, dch_QualityTarget),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QualityTarget,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dch-QualityTarget"
		},
};
static const int asn_MAP_DL_AddReconfTransChInformation_r9_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_DL_AddReconfTransChInformation_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DL_AddReconfTransChInformation_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-TransportChannelType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tfs-SignallingMode */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dch-QualityTarget */
};
asn_SEQUENCE_specifics_t asn_SPC_DL_AddReconfTransChInformation_r9_specs_1 = {
	sizeof(struct DL_AddReconfTransChInformation_r9),
	offsetof(struct DL_AddReconfTransChInformation_r9, _asn_ctx),
	asn_MAP_DL_AddReconfTransChInformation_r9_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_DL_AddReconfTransChInformation_r9_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DL_AddReconfTransChInformation_r9 = {
	"DL-AddReconfTransChInformation-r9",
	"DL-AddReconfTransChInformation-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_DL_AddReconfTransChInformation_r9_tags_1,
	sizeof(asn_DEF_DL_AddReconfTransChInformation_r9_tags_1)
		/sizeof(asn_DEF_DL_AddReconfTransChInformation_r9_tags_1[0]), /* 1 */
	asn_DEF_DL_AddReconfTransChInformation_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_AddReconfTransChInformation_r9_tags_1)
		/sizeof(asn_DEF_DL_AddReconfTransChInformation_r9_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DL_AddReconfTransChInformation_r9_1,
	3,	/* Elements count */
	&asn_SPC_DL_AddReconfTransChInformation_r9_specs_1	/* Additional specs */
};

