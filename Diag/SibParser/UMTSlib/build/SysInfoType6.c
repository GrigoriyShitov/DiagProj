/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SysInfoType6.h"

static asn_oer_constraints_t asn_OER_type_modeSpecificInfo_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType6__modeSpecificInfo__fdd, aich_PowerOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AICH_PowerOffset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aich-PowerOffset"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType6__modeSpecificInfo__fdd, dummy),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSICH_PowerOffset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy"
		},
};
static const int asn_MAP_fdd_oms_4[] = { 1 };
static const ber_tlv_tag_t asn_DEF_fdd_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* aich-PowerOffset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dummy */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_4 = {
	sizeof(struct SysInfoType6__modeSpecificInfo__fdd),
	offsetof(struct SysInfoType6__modeSpecificInfo__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_fdd_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
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
	2,	/* Elements count */
	&asn_SPC_fdd_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_7[] = {
	{ ATF_POINTER, 2, offsetof(struct SysInfoType6__modeSpecificInfo__tdd, pusch_SysInfoList_SFN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_SysInfoList_SFN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-SysInfoList-SFN"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType6__modeSpecificInfo__tdd, pdsch_SysInfoList_SFN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_SysInfoList_SFN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-SysInfoList-SFN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType6__modeSpecificInfo__tdd, openLoopPowerControl_TDD),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OpenLoopPowerControl_TDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"openLoopPowerControl-TDD"
		},
};
static const int asn_MAP_tdd_oms_7[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_tdd_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pusch-SysInfoList-SFN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdsch-SysInfoList-SFN */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* openLoopPowerControl-TDD */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_7 = {
	sizeof(struct SysInfoType6__modeSpecificInfo__tdd),
	offsetof(struct SysInfoType6__modeSpecificInfo__tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_7,
	3,	/* Count of tags in the map */
	asn_MAP_tdd_oms_7,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_7 = {
	"tdd",
	"tdd",
	&asn_OP_SEQUENCE,
	asn_DEF_tdd_tags_7,
	sizeof(asn_DEF_tdd_tags_7)
		/sizeof(asn_DEF_tdd_tags_7[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_7,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_7)
		/sizeof(asn_DEF_tdd_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_tdd_7,
	3,	/* Elements count */
	&asn_SPC_tdd_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType6__modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType6__modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_7,
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
	sizeof(struct SysInfoType6__modeSpecificInfo),
	offsetof(struct SysInfoType6__modeSpecificInfo, _asn_ctx),
	offsetof(struct SysInfoType6__modeSpecificInfo, present),
	sizeof(((struct SysInfoType6__modeSpecificInfo *)0)->present),
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

static asn_TYPE_member_t asn_MBR_va80NonCriticalExtensions_27[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions__v690nonCriticalExtensions__v770NonCriticalExtensions__va40NonCriticalExtensions__va80NonCriticalExtensions, sysInfoType6_va80ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType6_va80ext_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sysInfoType6-va80ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions__v690nonCriticalExtensions__v770NonCriticalExtensions__va40NonCriticalExtensions__va80NonCriticalExtensions, ve30NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType6_NonCriticalExtensions_ve30_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ve30NonCriticalExtensions"
		},
};
static const int asn_MAP_va80NonCriticalExtensions_oms_27[] = { 1 };
static const ber_tlv_tag_t asn_DEF_va80NonCriticalExtensions_tags_27[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_va80NonCriticalExtensions_tag2el_27[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType6-va80ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ve30NonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_va80NonCriticalExtensions_specs_27 = {
	sizeof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions__v690nonCriticalExtensions__v770NonCriticalExtensions__va40NonCriticalExtensions__va80NonCriticalExtensions),
	offsetof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions__v690nonCriticalExtensions__v770NonCriticalExtensions__va40NonCriticalExtensions__va80NonCriticalExtensions, _asn_ctx),
	asn_MAP_va80NonCriticalExtensions_tag2el_27,
	2,	/* Count of tags in the map */
	asn_MAP_va80NonCriticalExtensions_oms_27,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_va80NonCriticalExtensions_27 = {
	"va80NonCriticalExtensions",
	"va80NonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_va80NonCriticalExtensions_tags_27,
	sizeof(asn_DEF_va80NonCriticalExtensions_tags_27)
		/sizeof(asn_DEF_va80NonCriticalExtensions_tags_27[0]) - 1, /* 1 */
	asn_DEF_va80NonCriticalExtensions_tags_27,	/* Same as above */
	sizeof(asn_DEF_va80NonCriticalExtensions_tags_27)
		/sizeof(asn_DEF_va80NonCriticalExtensions_tags_27[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_va80NonCriticalExtensions_27,
	2,	/* Elements count */
	&asn_SPC_va80NonCriticalExtensions_specs_27	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_va40NonCriticalExtensions_25[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions__v690nonCriticalExtensions__v770NonCriticalExtensions__va40NonCriticalExtensions, sysInfoType6_va40ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType6_va40ext_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sysInfoType6-va40ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions__v690nonCriticalExtensions__v770NonCriticalExtensions__va40NonCriticalExtensions, va80NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_va80NonCriticalExtensions_27,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"va80NonCriticalExtensions"
		},
};
static const int asn_MAP_va40NonCriticalExtensions_oms_25[] = { 1 };
static const ber_tlv_tag_t asn_DEF_va40NonCriticalExtensions_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_va40NonCriticalExtensions_tag2el_25[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType6-va40ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* va80NonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_va40NonCriticalExtensions_specs_25 = {
	sizeof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions__v690nonCriticalExtensions__v770NonCriticalExtensions__va40NonCriticalExtensions),
	offsetof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions__v690nonCriticalExtensions__v770NonCriticalExtensions__va40NonCriticalExtensions, _asn_ctx),
	asn_MAP_va40NonCriticalExtensions_tag2el_25,
	2,	/* Count of tags in the map */
	asn_MAP_va40NonCriticalExtensions_oms_25,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_va40NonCriticalExtensions_25 = {
	"va40NonCriticalExtensions",
	"va40NonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_va40NonCriticalExtensions_tags_25,
	sizeof(asn_DEF_va40NonCriticalExtensions_tags_25)
		/sizeof(asn_DEF_va40NonCriticalExtensions_tags_25[0]) - 1, /* 1 */
	asn_DEF_va40NonCriticalExtensions_tags_25,	/* Same as above */
	sizeof(asn_DEF_va40NonCriticalExtensions_tags_25)
		/sizeof(asn_DEF_va40NonCriticalExtensions_tags_25[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_va40NonCriticalExtensions_25,
	2,	/* Elements count */
	&asn_SPC_va40NonCriticalExtensions_specs_25	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v770NonCriticalExtensions_23[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions__v690nonCriticalExtensions__v770NonCriticalExtensions, sysInfoType6_v770ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType6_v770ext_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sysInfoType6-v770ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions__v690nonCriticalExtensions__v770NonCriticalExtensions, va40NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_va40NonCriticalExtensions_25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"va40NonCriticalExtensions"
		},
};
static const int asn_MAP_v770NonCriticalExtensions_oms_23[] = { 1 };
static const ber_tlv_tag_t asn_DEF_v770NonCriticalExtensions_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_v770NonCriticalExtensions_tag2el_23[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType6-v770ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* va40NonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_v770NonCriticalExtensions_specs_23 = {
	sizeof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions__v690nonCriticalExtensions__v770NonCriticalExtensions),
	offsetof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions__v690nonCriticalExtensions__v770NonCriticalExtensions, _asn_ctx),
	asn_MAP_v770NonCriticalExtensions_tag2el_23,
	2,	/* Count of tags in the map */
	asn_MAP_v770NonCriticalExtensions_oms_23,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v770NonCriticalExtensions_23 = {
	"v770NonCriticalExtensions",
	"v770NonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_v770NonCriticalExtensions_tags_23,
	sizeof(asn_DEF_v770NonCriticalExtensions_tags_23)
		/sizeof(asn_DEF_v770NonCriticalExtensions_tags_23[0]) - 1, /* 1 */
	asn_DEF_v770NonCriticalExtensions_tags_23,	/* Same as above */
	sizeof(asn_DEF_v770NonCriticalExtensions_tags_23)
		/sizeof(asn_DEF_v770NonCriticalExtensions_tags_23[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_v770NonCriticalExtensions_23,
	2,	/* Elements count */
	&asn_SPC_v770NonCriticalExtensions_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v690nonCriticalExtensions_21[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions__v690nonCriticalExtensions, sysInfoType6_v690ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType6_v690ext_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sysInfoType6-v690ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions__v690nonCriticalExtensions, v770NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v770NonCriticalExtensions_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v770NonCriticalExtensions"
		},
};
static const int asn_MAP_v690nonCriticalExtensions_oms_21[] = { 1 };
static const ber_tlv_tag_t asn_DEF_v690nonCriticalExtensions_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_v690nonCriticalExtensions_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType6-v690ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v770NonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_v690nonCriticalExtensions_specs_21 = {
	sizeof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions__v690nonCriticalExtensions),
	offsetof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions__v690nonCriticalExtensions, _asn_ctx),
	asn_MAP_v690nonCriticalExtensions_tag2el_21,
	2,	/* Count of tags in the map */
	asn_MAP_v690nonCriticalExtensions_oms_21,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v690nonCriticalExtensions_21 = {
	"v690nonCriticalExtensions",
	"v690nonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_v690nonCriticalExtensions_tags_21,
	sizeof(asn_DEF_v690nonCriticalExtensions_tags_21)
		/sizeof(asn_DEF_v690nonCriticalExtensions_tags_21[0]) - 1, /* 1 */
	asn_DEF_v690nonCriticalExtensions_tags_21,	/* Same as above */
	sizeof(asn_DEF_v690nonCriticalExtensions_tags_21)
		/sizeof(asn_DEF_v690nonCriticalExtensions_tags_21[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_v690nonCriticalExtensions_21,
	2,	/* Elements count */
	&asn_SPC_v690nonCriticalExtensions_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v650nonCriticalExtensions_19[] = {
	{ ATF_POINTER, 2, offsetof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions, sysInfoType6_v650ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType6_v650ext_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sysInfoType6-v650ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions, v690nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v690nonCriticalExtensions_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v690nonCriticalExtensions"
		},
};
static const int asn_MAP_v650nonCriticalExtensions_oms_19[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_v650nonCriticalExtensions_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_v650nonCriticalExtensions_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType6-v650ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v690nonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_v650nonCriticalExtensions_specs_19 = {
	sizeof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions),
	offsetof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v650nonCriticalExtensions, _asn_ctx),
	asn_MAP_v650nonCriticalExtensions_tag2el_19,
	2,	/* Count of tags in the map */
	asn_MAP_v650nonCriticalExtensions_oms_19,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v650nonCriticalExtensions_19 = {
	"v650nonCriticalExtensions",
	"v650nonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_v650nonCriticalExtensions_tags_19,
	sizeof(asn_DEF_v650nonCriticalExtensions_tags_19)
		/sizeof(asn_DEF_v650nonCriticalExtensions_tags_19[0]) - 1, /* 1 */
	asn_DEF_v650nonCriticalExtensions_tags_19,	/* Same as above */
	sizeof(asn_DEF_v650nonCriticalExtensions_tags_19)
		/sizeof(asn_DEF_v650nonCriticalExtensions_tags_19[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_v650nonCriticalExtensions_19,
	2,	/* Elements count */
	&asn_SPC_v650nonCriticalExtensions_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v590NonCriticalExtensions_17[] = {
	{ ATF_POINTER, 2, offsetof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions, sysInfoType6_v590ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType6_v590ext_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sysInfoType6-v590ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions, v650nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v650nonCriticalExtensions_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v650nonCriticalExtensions"
		},
};
static const int asn_MAP_v590NonCriticalExtensions_oms_17[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_v590NonCriticalExtensions_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_v590NonCriticalExtensions_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType6-v590ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v650nonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_v590NonCriticalExtensions_specs_17 = {
	sizeof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions),
	offsetof(struct SysInfoType6__v4b0NonCriticalExtensions__v590NonCriticalExtensions, _asn_ctx),
	asn_MAP_v590NonCriticalExtensions_tag2el_17,
	2,	/* Count of tags in the map */
	asn_MAP_v590NonCriticalExtensions_oms_17,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v590NonCriticalExtensions_17 = {
	"v590NonCriticalExtensions",
	"v590NonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_v590NonCriticalExtensions_tags_17,
	sizeof(asn_DEF_v590NonCriticalExtensions_tags_17)
		/sizeof(asn_DEF_v590NonCriticalExtensions_tags_17[0]) - 1, /* 1 */
	asn_DEF_v590NonCriticalExtensions_tags_17,	/* Same as above */
	sizeof(asn_DEF_v590NonCriticalExtensions_tags_17)
		/sizeof(asn_DEF_v590NonCriticalExtensions_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_v590NonCriticalExtensions_17,
	2,	/* Elements count */
	&asn_SPC_v590NonCriticalExtensions_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v4b0NonCriticalExtensions_15[] = {
	{ ATF_POINTER, 2, offsetof(struct SysInfoType6__v4b0NonCriticalExtensions, sysInfoType6_v4b0ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType6_v4b0ext_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sysInfoType6-v4b0ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType6__v4b0NonCriticalExtensions, v590NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v590NonCriticalExtensions_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v590NonCriticalExtensions"
		},
};
static const int asn_MAP_v4b0NonCriticalExtensions_oms_15[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_v4b0NonCriticalExtensions_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_v4b0NonCriticalExtensions_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType6-v4b0ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v590NonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_v4b0NonCriticalExtensions_specs_15 = {
	sizeof(struct SysInfoType6__v4b0NonCriticalExtensions),
	offsetof(struct SysInfoType6__v4b0NonCriticalExtensions, _asn_ctx),
	asn_MAP_v4b0NonCriticalExtensions_tag2el_15,
	2,	/* Count of tags in the map */
	asn_MAP_v4b0NonCriticalExtensions_oms_15,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v4b0NonCriticalExtensions_15 = {
	"v4b0NonCriticalExtensions",
	"v4b0NonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_v4b0NonCriticalExtensions_tags_15,
	sizeof(asn_DEF_v4b0NonCriticalExtensions_tags_15)
		/sizeof(asn_DEF_v4b0NonCriticalExtensions_tags_15[0]) - 1, /* 1 */
	asn_DEF_v4b0NonCriticalExtensions_tags_15,	/* Same as above */
	sizeof(asn_DEF_v4b0NonCriticalExtensions_tags_15)
		/sizeof(asn_DEF_v4b0NonCriticalExtensions_tags_15[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_v4b0NonCriticalExtensions_15,
	2,	/* Elements count */
	&asn_SPC_v4b0NonCriticalExtensions_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SysInfoType6_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType6, pich_PowerOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PICH_PowerOffset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pich-PowerOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType6, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"modeSpecificInfo"
		},
	{ ATF_POINTER, 5, offsetof(struct SysInfoType6, primaryCCPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PrimaryCCPCH_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"primaryCCPCH-Info"
		},
	{ ATF_POINTER, 4, offsetof(struct SysInfoType6, prach_SystemInformationList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_SystemInformationList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prach-SystemInformationList"
		},
	{ ATF_POINTER, 3, offsetof(struct SysInfoType6, sCCPCH_SystemInformationList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCCPCH_SystemInformationList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCCPCH-SystemInformationList"
		},
	{ ATF_POINTER, 2, offsetof(struct SysInfoType6, cbs_DRX_Level1Information),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CBS_DRX_Level1Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cbs-DRX-Level1Information"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType6, v4b0NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_v4b0NonCriticalExtensions_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v4b0NonCriticalExtensions"
		},
};
static const int asn_MAP_SysInfoType6_oms_1[] = { 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_SysInfoType6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SysInfoType6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pich-PowerOffset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* modeSpecificInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* primaryCCPCH-Info */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* prach-SystemInformationList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sCCPCH-SystemInformationList */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* cbs-DRX-Level1Information */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* v4b0NonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_SysInfoType6_specs_1 = {
	sizeof(struct SysInfoType6),
	offsetof(struct SysInfoType6, _asn_ctx),
	asn_MAP_SysInfoType6_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_SysInfoType6_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType6 = {
	"SysInfoType6",
	"SysInfoType6",
	&asn_OP_SEQUENCE,
	asn_DEF_SysInfoType6_tags_1,
	sizeof(asn_DEF_SysInfoType6_tags_1)
		/sizeof(asn_DEF_SysInfoType6_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType6_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType6_tags_1)
		/sizeof(asn_DEF_SysInfoType6_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SysInfoType6_1,
	7,	/* Elements count */
	&asn_SPC_SysInfoType6_specs_1	/* Additional specs */
};

