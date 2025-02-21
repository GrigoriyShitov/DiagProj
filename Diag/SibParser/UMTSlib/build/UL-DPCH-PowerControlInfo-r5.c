/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UL-DPCH-PowerControlInfo-r5.h"

static asn_oer_constraints_t asn_OER_type_tddOption_constr_15 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_tddOption_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ul_OL_PC_Signalling_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ul_OL_PC_Signalling_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_UL_DPCH_PowerControlInfo_r5_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_UL_DPCH_PowerControlInfo_r5_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo_r5__fdd, dpcch_PowerOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DPCCH_PowerOffset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dpcch-PowerOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo_r5__fdd, pc_Preamble),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PC_Preamble,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pc-Preamble"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo_r5__fdd, sRB_delay),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRB_delay,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sRB-delay"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo_r5__fdd, powerControlAlgorithm),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PowerControlAlgorithm,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"powerControlAlgorithm"
		},
	{ ATF_POINTER, 3, offsetof(struct UL_DPCH_PowerControlInfo_r5__fdd, deltaACK),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaACK,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaACK"
		},
	{ ATF_POINTER, 2, offsetof(struct UL_DPCH_PowerControlInfo_r5__fdd, deltaNACK),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaNACK,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaNACK"
		},
	{ ATF_POINTER, 1, offsetof(struct UL_DPCH_PowerControlInfo_r5__fdd, ack_NACK_repetition_factor),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ACK_NACK_repetitionFactor,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ack-NACK-repetition-factor"
		},
};
static const int asn_MAP_fdd_oms_2[] = { 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_fdd_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dpcch-PowerOffset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pc-Preamble */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sRB-delay */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* powerControlAlgorithm */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* deltaACK */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* deltaNACK */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ack-NACK-repetition-factor */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_2 = {
	sizeof(struct UL_DPCH_PowerControlInfo_r5__fdd),
	offsetof(struct UL_DPCH_PowerControlInfo_r5__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_2,
	7,	/* Count of tags in the map */
	asn_MAP_fdd_oms_2,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_2 = {
	"fdd",
	"fdd",
	&asn_OP_SEQUENCE,
	asn_DEF_fdd_tags_2,
	sizeof(asn_DEF_fdd_tags_2)
		/sizeof(asn_DEF_fdd_tags_2[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_2,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_2)
		/sizeof(asn_DEF_fdd_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_fdd_2,
	7,	/* Elements count */
	&asn_SPC_fdd_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd384_16[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption__tdd384, individualTS_InterferenceList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IndividualTS_InterferenceList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"individualTS-InterferenceList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption__tdd384, dpch_ConstantValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConstantValue,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dpch-ConstantValue"
		},
};
static const ber_tlv_tag_t asn_DEF_tdd384_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd384_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* individualTS-InterferenceList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dpch-ConstantValue */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd384_specs_16 = {
	sizeof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption__tdd384),
	offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption__tdd384, _asn_ctx),
	asn_MAP_tdd384_tag2el_16,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd384_16 = {
	"tdd384",
	"tdd384",
	&asn_OP_SEQUENCE,
	asn_DEF_tdd384_tags_16,
	sizeof(asn_DEF_tdd384_tags_16)
		/sizeof(asn_DEF_tdd384_tags_16[0]) - 1, /* 1 */
	asn_DEF_tdd384_tags_16,	/* Same as above */
	sizeof(asn_DEF_tdd384_tags_16)
		/sizeof(asn_DEF_tdd384_tags_16[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_tdd384_16,
	2,	/* Elements count */
	&asn_SPC_tdd384_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd128_19[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption__tdd128, tpc_StepSize),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TPC_StepSizeTDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tpc-StepSize"
		},
};
static const ber_tlv_tag_t asn_DEF_tdd128_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd128_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tpc-StepSize */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128_specs_19 = {
	sizeof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption__tdd128),
	offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption__tdd128, _asn_ctx),
	asn_MAP_tdd128_tag2el_19,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_19 = {
	"tdd128",
	"tdd128",
	&asn_OP_SEQUENCE,
	asn_DEF_tdd128_tags_19,
	sizeof(asn_DEF_tdd128_tags_19)
		/sizeof(asn_DEF_tdd128_tags_19[0]) - 1, /* 1 */
	asn_DEF_tdd128_tags_19,	/* Same as above */
	sizeof(asn_DEF_tdd128_tags_19)
		/sizeof(asn_DEF_tdd128_tags_19[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_tdd128_19,
	1,	/* Elements count */
	&asn_SPC_tdd128_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tddOption_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption, choice.tdd384),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_tdd384_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd384"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption, choice.tdd128),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd128_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd128"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_tddOption_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd384 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd128 */
};
static asn_CHOICE_specifics_t asn_SPC_tddOption_specs_15 = {
	sizeof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption),
	offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption, _asn_ctx),
	offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption, present),
	sizeof(((struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption *)0)->present),
	asn_MAP_tddOption_tag2el_15,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tddOption_15 = {
	"tddOption",
	"tddOption",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_tddOption_constr_15, &asn_PER_type_tddOption_constr_15, CHOICE_constraint },
	asn_MBR_tddOption_15,
	2,	/* Elements count */
	&asn_SPC_tddOption_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_individuallySignalled_14[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling__individuallySignalled, tddOption),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tddOption_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tddOption"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling__individuallySignalled, primaryCCPCH_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCCPCH_TX_Power,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"primaryCCPCH-TX-Power"
		},
};
static const ber_tlv_tag_t asn_DEF_individuallySignalled_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_individuallySignalled_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tddOption */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* primaryCCPCH-TX-Power */
};
static asn_SEQUENCE_specifics_t asn_SPC_individuallySignalled_specs_14 = {
	sizeof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling__individuallySignalled),
	offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling__individuallySignalled, _asn_ctx),
	asn_MAP_individuallySignalled_tag2el_14,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_individuallySignalled_14 = {
	"individuallySignalled",
	"individuallySignalled",
	&asn_OP_SEQUENCE,
	asn_DEF_individuallySignalled_tags_14,
	sizeof(asn_DEF_individuallySignalled_tags_14)
		/sizeof(asn_DEF_individuallySignalled_tags_14[0]) - 1, /* 1 */
	asn_DEF_individuallySignalled_tags_14,	/* Same as above */
	sizeof(asn_DEF_individuallySignalled_tags_14)
		/sizeof(asn_DEF_individuallySignalled_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_individuallySignalled_14,
	2,	/* Elements count */
	&asn_SPC_individuallySignalled_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ul_OL_PC_Signalling_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling, choice.broadcast_UL_OL_PC_info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"broadcast-UL-OL-PC-info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling, choice.individuallySignalled),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_individuallySignalled_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"individuallySignalled"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ul_OL_PC_Signalling_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* broadcast-UL-OL-PC-info */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* individuallySignalled */
};
static asn_CHOICE_specifics_t asn_SPC_ul_OL_PC_Signalling_specs_12 = {
	sizeof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling),
	offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling, _asn_ctx),
	offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling, present),
	sizeof(((struct UL_DPCH_PowerControlInfo_r5__tdd__ul_OL_PC_Signalling *)0)->present),
	asn_MAP_ul_OL_PC_Signalling_tag2el_12,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_OL_PC_Signalling_12 = {
	"ul-OL-PC-Signalling",
	"ul-OL-PC-Signalling",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ul_OL_PC_Signalling_constr_12, &asn_PER_type_ul_OL_PC_Signalling_constr_12, CHOICE_constraint },
	asn_MBR_ul_OL_PC_Signalling_12,
	2,	/* Elements count */
	&asn_SPC_ul_OL_PC_Signalling_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_10[] = {
	{ ATF_POINTER, 1, offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd, ul_TargetSIR),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_TargetSIR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-TargetSIR"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd, ul_OL_PC_Signalling),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ul_OL_PC_Signalling_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-OL-PC-Signalling"
		},
};
static const int asn_MAP_tdd_oms_10[] = { 0 };
static const ber_tlv_tag_t asn_DEF_tdd_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-TargetSIR */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ul-OL-PC-Signalling */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_10 = {
	sizeof(struct UL_DPCH_PowerControlInfo_r5__tdd),
	offsetof(struct UL_DPCH_PowerControlInfo_r5__tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_10,
	2,	/* Count of tags in the map */
	asn_MAP_tdd_oms_10,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_10 = {
	"tdd",
	"tdd",
	&asn_OP_SEQUENCE,
	asn_DEF_tdd_tags_10,
	sizeof(asn_DEF_tdd_tags_10)
		/sizeof(asn_DEF_tdd_tags_10[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_10,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_10)
		/sizeof(asn_DEF_tdd_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_tdd_10,
	2,	/* Elements count */
	&asn_SPC_tdd_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UL_DPCH_PowerControlInfo_r5_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo_r5, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo_r5, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_UL_DPCH_PowerControlInfo_r5_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
asn_CHOICE_specifics_t asn_SPC_UL_DPCH_PowerControlInfo_r5_specs_1 = {
	sizeof(struct UL_DPCH_PowerControlInfo_r5),
	offsetof(struct UL_DPCH_PowerControlInfo_r5, _asn_ctx),
	offsetof(struct UL_DPCH_PowerControlInfo_r5, present),
	sizeof(((struct UL_DPCH_PowerControlInfo_r5 *)0)->present),
	asn_MAP_UL_DPCH_PowerControlInfo_r5_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UL_DPCH_PowerControlInfo_r5 = {
	"UL-DPCH-PowerControlInfo-r5",
	"UL-DPCH-PowerControlInfo-r5",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_UL_DPCH_PowerControlInfo_r5_constr_1, &asn_PER_type_UL_DPCH_PowerControlInfo_r5_constr_1, CHOICE_constraint },
	asn_MBR_UL_DPCH_PowerControlInfo_r5_1,
	2,	/* Elements count */
	&asn_SPC_UL_DPCH_PowerControlInfo_r5_specs_1	/* Additional specs */
};

