/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "UE-Positioning-OTDOA-ReferenceCellInfo.h"

static int
memb_sfn_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4095)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_modeSpecificInfo_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_positioningMode_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_positioningMode_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sfn_constr_2 CC_NOTUSED = {
	{ 2, 1 }	/* (0..4095) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sfn_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  4095 }	/* (0..4095) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo__fdd, primaryCPICH_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCPICH_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"primaryCPICH-Info"
		},
};
static const ber_tlv_tag_t asn_DEF_fdd_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* primaryCPICH-Info */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_4 = {
	sizeof(struct UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo__fdd),
	offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_4,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_4 = {
	"fdd",
	"fdd",
	&asn_OP_SEQUENCE,
	asn_DEF_fdd_tags_4,
	sizeof(asn_DEF_fdd_tags_4)
		/sizeof(asn_DEF_fdd_tags_4[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_4,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_4)
		/sizeof(asn_DEF_fdd_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_fdd_4,
	1,	/* Elements count */
	&asn_SPC_fdd_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo__tdd, cellAndChannelIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellAndChannelIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellAndChannelIdentity"
		},
};
static const ber_tlv_tag_t asn_DEF_tdd_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cellAndChannelIdentity */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_6 = {
	sizeof(struct UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo__tdd),
	offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo__tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_6,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_6 = {
	"tdd",
	"tdd",
	&asn_OP_SEQUENCE,
	asn_DEF_tdd_tags_6,
	sizeof(asn_DEF_tdd_tags_6)
		/sizeof(asn_DEF_tdd_tags_6[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_6,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_6)
		/sizeof(asn_DEF_tdd_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_tdd_6,
	1,	/* Elements count */
	&asn_SPC_tdd_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_3 = {
	sizeof(struct UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo),
	offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo, _asn_ctx),
	offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo, present),
	sizeof(((struct UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_3 = {
	"modeSpecificInfo",
	"modeSpecificInfo",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_modeSpecificInfo_constr_3, &asn_PER_type_modeSpecificInfo_constr_3, CHOICE_constraint },
	asn_MBR_modeSpecificInfo_3,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_3	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ueBased_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_ueBased_specs_10 = {
	sizeof(struct UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode__ueBased),
	offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode__ueBased, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ueBased_10 = {
	"ueBased",
	"ueBased",
	&asn_OP_SEQUENCE,
	asn_DEF_ueBased_tags_10,
	sizeof(asn_DEF_ueBased_tags_10)
		/sizeof(asn_DEF_ueBased_tags_10[0]) - 1, /* 1 */
	asn_DEF_ueBased_tags_10,	/* Same as above */
	sizeof(asn_DEF_ueBased_tags_10)
		/sizeof(asn_DEF_ueBased_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_ueBased_specs_10	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ueAssisted_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_ueAssisted_specs_11 = {
	sizeof(struct UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode__ueAssisted),
	offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode__ueAssisted, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ueAssisted_11 = {
	"ueAssisted",
	"ueAssisted",
	&asn_OP_SEQUENCE,
	asn_DEF_ueAssisted_tags_11,
	sizeof(asn_DEF_ueAssisted_tags_11)
		/sizeof(asn_DEF_ueAssisted_tags_11[0]) - 1, /* 1 */
	asn_DEF_ueAssisted_tags_11,	/* Same as above */
	sizeof(asn_DEF_ueAssisted_tags_11)
		/sizeof(asn_DEF_ueAssisted_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_ueAssisted_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_positioningMode_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode, choice.ueBased),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ueBased_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueBased"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode, choice.ueAssisted),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ueAssisted_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueAssisted"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_positioningMode_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ueBased */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ueAssisted */
};
static asn_CHOICE_specifics_t asn_SPC_positioningMode_specs_9 = {
	sizeof(struct UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode),
	offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode, _asn_ctx),
	offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode, present),
	sizeof(((struct UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode *)0)->present),
	asn_MAP_positioningMode_tag2el_9,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_positioningMode_9 = {
	"positioningMode",
	"positioningMode",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_positioningMode_constr_9, &asn_PER_type_positioningMode_constr_9, CHOICE_constraint },
	asn_MBR_positioningMode_9,
	2,	/* Elements count */
	&asn_SPC_positioningMode_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_Positioning_OTDOA_ReferenceCellInfo_1[] = {
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo, sfn),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sfn_constr_2, &asn_PER_memb_sfn_constr_2,  memb_sfn_constraint_1 },
		0, 0, /* No default value */
		"sfn"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"modeSpecificInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"frequencyInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo, positioningMode),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_positioningMode_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"positioningMode"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo, ue_positioning_IPDL_Paremeters),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_IPDL_Parameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-positioning-IPDL-Paremeters"
		},
};
static const int asn_MAP_UE_Positioning_OTDOA_ReferenceCellInfo_oms_1[] = { 0, 2, 4 };
static const ber_tlv_tag_t asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_Positioning_OTDOA_ReferenceCellInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sfn */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* modeSpecificInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* frequencyInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* positioningMode */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ue-positioning-IPDL-Paremeters */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_OTDOA_ReferenceCellInfo_specs_1 = {
	sizeof(struct UE_Positioning_OTDOA_ReferenceCellInfo),
	offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo, _asn_ctx),
	asn_MAP_UE_Positioning_OTDOA_ReferenceCellInfo_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_UE_Positioning_OTDOA_ReferenceCellInfo_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo = {
	"UE-Positioning-OTDOA-ReferenceCellInfo",
	"UE-Positioning-OTDOA-ReferenceCellInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo_tags_1,
	sizeof(asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo_tags_1)
		/sizeof(asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo_tags_1[0]), /* 1 */
	asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo_tags_1)
		/sizeof(asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_Positioning_OTDOA_ReferenceCellInfo_1,
	5,	/* Elements count */
	&asn_SPC_UE_Positioning_OTDOA_ReferenceCellInfo_specs_1	/* Additional specs */
};

