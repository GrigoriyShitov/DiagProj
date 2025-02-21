/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "CQI-ReportPeriodicSCell-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_k_r15_constraint_16(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_cqi_pmi_ConfigIndexDormant_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ri_ConfigIndexDormant_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_csi_SubframePatternDormant_r15_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_csi_SubframePatternDormant_r15_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_csi_ReportMode_r15_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_csi_ReportMode_r15_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_periodicityFactor_r15_constr_18 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_periodicityFactor_r15_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_k_r15_constr_17 CC_NOTUSED = {
	{ 1, 1 }	/* (1..4) */,
	-1};
static asn_per_constraints_t asn_PER_memb_k_r15_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_cqi_FormatIndicatorDormant_r15_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cqi_FormatIndicatorDormant_r15_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_cqi_pmi_ConfigIndexDormant_r15_constr_4 CC_NOTUSED = {
	{ 2, 1 }	/* (0..1023) */,
	-1};
static asn_per_constraints_t asn_PER_memb_cqi_pmi_ConfigIndexDormant_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ri_ConfigIndexDormant_r15_constr_5 CC_NOTUSED = {
	{ 2, 1 }	/* (0..1023) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ri_ConfigIndexDormant_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_CQI_ReportPeriodicSCell_r15_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_CQI_ReportPeriodicSCell_r15_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_setup_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodicSCell_r15__setup__csi_SubframePatternDormant_r15__setup, csi_MeasSubframeSet1_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasSubframePattern_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-MeasSubframeSet1-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodicSCell_r15__setup__csi_SubframePatternDormant_r15__setup, csi_MeasSubframeSet2_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasSubframePattern_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-MeasSubframeSet2-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-MeasSubframeSet1-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* csi-MeasSubframeSet2-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_8 = {
	sizeof(struct CQI_ReportPeriodicSCell_r15__setup__csi_SubframePatternDormant_r15__setup),
	offsetof(struct CQI_ReportPeriodicSCell_r15__setup__csi_SubframePatternDormant_r15__setup, _asn_ctx),
	asn_MAP_setup_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_8 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_8,
	sizeof(asn_DEF_setup_tags_8)
		/sizeof(asn_DEF_setup_tags_8[0]) - 1, /* 1 */
	asn_DEF_setup_tags_8,	/* Same as above */
	sizeof(asn_DEF_setup_tags_8)
		/sizeof(asn_DEF_setup_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_8,
	2,	/* Elements count */
	&asn_SPC_setup_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_csi_SubframePatternDormant_r15_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodicSCell_r15__setup__csi_SubframePatternDormant_r15, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodicSCell_r15__setup__csi_SubframePatternDormant_r15, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_csi_SubframePatternDormant_r15_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_csi_SubframePatternDormant_r15_specs_6 = {
	sizeof(struct CQI_ReportPeriodicSCell_r15__setup__csi_SubframePatternDormant_r15),
	offsetof(struct CQI_ReportPeriodicSCell_r15__setup__csi_SubframePatternDormant_r15, _asn_ctx),
	offsetof(struct CQI_ReportPeriodicSCell_r15__setup__csi_SubframePatternDormant_r15, present),
	sizeof(((struct CQI_ReportPeriodicSCell_r15__setup__csi_SubframePatternDormant_r15 *)0)->present),
	asn_MAP_csi_SubframePatternDormant_r15_tag2el_6,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_SubframePatternDormant_r15_6 = {
	"csi-SubframePatternDormant-r15",
	"csi-SubframePatternDormant-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_csi_SubframePatternDormant_r15_constr_6, &asn_PER_type_csi_SubframePatternDormant_r15_constr_6, CHOICE_constraint },
	asn_MBR_csi_SubframePatternDormant_r15_6,
	2,	/* Elements count */
	&asn_SPC_csi_SubframePatternDormant_r15_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_csi_ReportMode_r15_value2enum_13[] = {
	{ 0,	8,	"submode1" },
	{ 1,	8,	"submode2" }
};
static const unsigned int asn_MAP_csi_ReportMode_r15_enum2value_13[] = {
	0,	/* submode1(0) */
	1	/* submode2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_csi_ReportMode_r15_specs_13 = {
	asn_MAP_csi_ReportMode_r15_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_csi_ReportMode_r15_enum2value_13,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_csi_ReportMode_r15_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_ReportMode_r15_13 = {
	"csi-ReportMode-r15",
	"csi-ReportMode-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_csi_ReportMode_r15_tags_13,
	sizeof(asn_DEF_csi_ReportMode_r15_tags_13)
		/sizeof(asn_DEF_csi_ReportMode_r15_tags_13[0]) - 1, /* 1 */
	asn_DEF_csi_ReportMode_r15_tags_13,	/* Same as above */
	sizeof(asn_DEF_csi_ReportMode_r15_tags_13)
		/sizeof(asn_DEF_csi_ReportMode_r15_tags_13[0]), /* 2 */
	{ &asn_OER_type_csi_ReportMode_r15_constr_13, &asn_PER_type_csi_ReportMode_r15_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_csi_ReportMode_r15_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_widebandCQI_r15_12[] = {
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportPeriodicSCell_r15__setup__cqi_FormatIndicatorDormant_r15__widebandCQI_r15, csi_ReportMode_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_csi_ReportMode_r15_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-ReportMode-r15"
		},
};
static const int asn_MAP_widebandCQI_r15_oms_12[] = { 0 };
static const ber_tlv_tag_t asn_DEF_widebandCQI_r15_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_widebandCQI_r15_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* csi-ReportMode-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_widebandCQI_r15_specs_12 = {
	sizeof(struct CQI_ReportPeriodicSCell_r15__setup__cqi_FormatIndicatorDormant_r15__widebandCQI_r15),
	offsetof(struct CQI_ReportPeriodicSCell_r15__setup__cqi_FormatIndicatorDormant_r15__widebandCQI_r15, _asn_ctx),
	asn_MAP_widebandCQI_r15_tag2el_12,
	1,	/* Count of tags in the map */
	asn_MAP_widebandCQI_r15_oms_12,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_widebandCQI_r15_12 = {
	"widebandCQI-r15",
	"widebandCQI-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_widebandCQI_r15_tags_12,
	sizeof(asn_DEF_widebandCQI_r15_tags_12)
		/sizeof(asn_DEF_widebandCQI_r15_tags_12[0]) - 1, /* 1 */
	asn_DEF_widebandCQI_r15_tags_12,	/* Same as above */
	sizeof(asn_DEF_widebandCQI_r15_tags_12)
		/sizeof(asn_DEF_widebandCQI_r15_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_widebandCQI_r15_12,
	1,	/* Elements count */
	&asn_SPC_widebandCQI_r15_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_periodicityFactor_r15_value2enum_18[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" }
};
static const unsigned int asn_MAP_periodicityFactor_r15_enum2value_18[] = {
	0,	/* n2(0) */
	1	/* n4(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_periodicityFactor_r15_specs_18 = {
	asn_MAP_periodicityFactor_r15_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_periodicityFactor_r15_enum2value_18,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_periodicityFactor_r15_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_periodicityFactor_r15_18 = {
	"periodicityFactor-r15",
	"periodicityFactor-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_periodicityFactor_r15_tags_18,
	sizeof(asn_DEF_periodicityFactor_r15_tags_18)
		/sizeof(asn_DEF_periodicityFactor_r15_tags_18[0]) - 1, /* 1 */
	asn_DEF_periodicityFactor_r15_tags_18,	/* Same as above */
	sizeof(asn_DEF_periodicityFactor_r15_tags_18)
		/sizeof(asn_DEF_periodicityFactor_r15_tags_18[0]), /* 2 */
	{ &asn_OER_type_periodicityFactor_r15_constr_18, &asn_PER_type_periodicityFactor_r15_constr_18, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_periodicityFactor_r15_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_subbandCQI_r15_16[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodicSCell_r15__setup__cqi_FormatIndicatorDormant_r15__subbandCQI_r15, k_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_k_r15_constr_17, &asn_PER_memb_k_r15_constr_17,  memb_k_r15_constraint_16 },
		0, 0, /* No default value */
		"k-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodicSCell_r15__setup__cqi_FormatIndicatorDormant_r15__subbandCQI_r15, periodicityFactor_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_periodicityFactor_r15_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodicityFactor-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_subbandCQI_r15_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_subbandCQI_r15_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* k-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* periodicityFactor-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_subbandCQI_r15_specs_16 = {
	sizeof(struct CQI_ReportPeriodicSCell_r15__setup__cqi_FormatIndicatorDormant_r15__subbandCQI_r15),
	offsetof(struct CQI_ReportPeriodicSCell_r15__setup__cqi_FormatIndicatorDormant_r15__subbandCQI_r15, _asn_ctx),
	asn_MAP_subbandCQI_r15_tag2el_16,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subbandCQI_r15_16 = {
	"subbandCQI-r15",
	"subbandCQI-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_subbandCQI_r15_tags_16,
	sizeof(asn_DEF_subbandCQI_r15_tags_16)
		/sizeof(asn_DEF_subbandCQI_r15_tags_16[0]) - 1, /* 1 */
	asn_DEF_subbandCQI_r15_tags_16,	/* Same as above */
	sizeof(asn_DEF_subbandCQI_r15_tags_16)
		/sizeof(asn_DEF_subbandCQI_r15_tags_16[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_subbandCQI_r15_16,
	2,	/* Elements count */
	&asn_SPC_subbandCQI_r15_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cqi_FormatIndicatorDormant_r15_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodicSCell_r15__setup__cqi_FormatIndicatorDormant_r15, choice.widebandCQI_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_widebandCQI_r15_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"widebandCQI-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodicSCell_r15__setup__cqi_FormatIndicatorDormant_r15, choice.subbandCQI_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_subbandCQI_r15_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subbandCQI-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_cqi_FormatIndicatorDormant_r15_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* widebandCQI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* subbandCQI-r15 */
};
static asn_CHOICE_specifics_t asn_SPC_cqi_FormatIndicatorDormant_r15_specs_11 = {
	sizeof(struct CQI_ReportPeriodicSCell_r15__setup__cqi_FormatIndicatorDormant_r15),
	offsetof(struct CQI_ReportPeriodicSCell_r15__setup__cqi_FormatIndicatorDormant_r15, _asn_ctx),
	offsetof(struct CQI_ReportPeriodicSCell_r15__setup__cqi_FormatIndicatorDormant_r15, present),
	sizeof(((struct CQI_ReportPeriodicSCell_r15__setup__cqi_FormatIndicatorDormant_r15 *)0)->present),
	asn_MAP_cqi_FormatIndicatorDormant_r15_tag2el_11,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cqi_FormatIndicatorDormant_r15_11 = {
	"cqi-FormatIndicatorDormant-r15",
	"cqi-FormatIndicatorDormant-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_cqi_FormatIndicatorDormant_r15_constr_11, &asn_PER_type_cqi_FormatIndicatorDormant_r15_constr_11, CHOICE_constraint },
	asn_MBR_cqi_FormatIndicatorDormant_r15_11,
	2,	/* Elements count */
	&asn_SPC_cqi_FormatIndicatorDormant_r15_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodicSCell_r15__setup, cqi_pmi_ConfigIndexDormant_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_cqi_pmi_ConfigIndexDormant_r15_constr_4, &asn_PER_memb_cqi_pmi_ConfigIndexDormant_r15_constr_4,  memb_cqi_pmi_ConfigIndexDormant_r15_constraint_3 },
		0, 0, /* No default value */
		"cqi-pmi-ConfigIndexDormant-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct CQI_ReportPeriodicSCell_r15__setup, ri_ConfigIndexDormant_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ri_ConfigIndexDormant_r15_constr_5, &asn_PER_memb_ri_ConfigIndexDormant_r15_constr_5,  memb_ri_ConfigIndexDormant_r15_constraint_3 },
		0, 0, /* No default value */
		"ri-ConfigIndexDormant-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct CQI_ReportPeriodicSCell_r15__setup, csi_SubframePatternDormant_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_csi_SubframePatternDormant_r15_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-SubframePatternDormant-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportPeriodicSCell_r15__setup, cqi_FormatIndicatorDormant_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cqi_FormatIndicatorDormant_r15_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-FormatIndicatorDormant-r15"
		},
};
static const int asn_MAP_setup_oms_3[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cqi-pmi-ConfigIndexDormant-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ri-ConfigIndexDormant-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* csi-SubframePatternDormant-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* cqi-FormatIndicatorDormant-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct CQI_ReportPeriodicSCell_r15__setup),
	offsetof(struct CQI_ReportPeriodicSCell_r15__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	4,	/* Count of tags in the map */
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
	4,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CQI_ReportPeriodicSCell_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodicSCell_r15, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodicSCell_r15, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_CQI_ReportPeriodicSCell_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_CQI_ReportPeriodicSCell_r15_specs_1 = {
	sizeof(struct CQI_ReportPeriodicSCell_r15),
	offsetof(struct CQI_ReportPeriodicSCell_r15, _asn_ctx),
	offsetof(struct CQI_ReportPeriodicSCell_r15, present),
	sizeof(((struct CQI_ReportPeriodicSCell_r15 *)0)->present),
	asn_MAP_CQI_ReportPeriodicSCell_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_CQI_ReportPeriodicSCell_r15 = {
	"CQI-ReportPeriodicSCell-r15",
	"CQI-ReportPeriodicSCell-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_CQI_ReportPeriodicSCell_r15_constr_1, &asn_PER_type_CQI_ReportPeriodicSCell_r15_constr_1, CHOICE_constraint },
	asn_MBR_CQI_ReportPeriodicSCell_r15_1,
	2,	/* Elements count */
	&asn_SPC_CQI_ReportPeriodicSCell_r15_specs_1	/* Additional specs */
};

