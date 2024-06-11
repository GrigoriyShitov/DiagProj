/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "PDSCH-ConfigDedicated-v1430.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_ce_PDSCH_MaxBandwidth_r14_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ce_PDSCH_MaxBandwidth_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ce_PDSCH_TenProcesses_r14_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ce_PDSCH_TenProcesses_r14_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ce_HARQ_AckBundling_r14_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ce_HARQ_AckBundling_r14_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ce_SchedulingEnhancement_r14_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ce_SchedulingEnhancement_r14_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_tbsIndexAlt2_r14_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_tbsIndexAlt2_r14_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ce_PDSCH_MaxBandwidth_r14_value2enum_2[] = {
	{ 0,	3,	"bw5" },
	{ 1,	4,	"bw20" }
};
static const unsigned int asn_MAP_ce_PDSCH_MaxBandwidth_r14_enum2value_2[] = {
	1,	/* bw20(1) */
	0	/* bw5(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ce_PDSCH_MaxBandwidth_r14_specs_2 = {
	asn_MAP_ce_PDSCH_MaxBandwidth_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_PDSCH_MaxBandwidth_r14_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ce_PDSCH_MaxBandwidth_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_PDSCH_MaxBandwidth_r14_2 = {
	"ce-PDSCH-MaxBandwidth-r14",
	"ce-PDSCH-MaxBandwidth-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_ce_PDSCH_MaxBandwidth_r14_tags_2,
	sizeof(asn_DEF_ce_PDSCH_MaxBandwidth_r14_tags_2)
		/sizeof(asn_DEF_ce_PDSCH_MaxBandwidth_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_ce_PDSCH_MaxBandwidth_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_ce_PDSCH_MaxBandwidth_r14_tags_2)
		/sizeof(asn_DEF_ce_PDSCH_MaxBandwidth_r14_tags_2[0]), /* 2 */
	{ &asn_OER_type_ce_PDSCH_MaxBandwidth_r14_constr_2, &asn_PER_type_ce_PDSCH_MaxBandwidth_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_PDSCH_MaxBandwidth_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ce_PDSCH_TenProcesses_r14_value2enum_5[] = {
	{ 0,	2,	"on" }
};
static const unsigned int asn_MAP_ce_PDSCH_TenProcesses_r14_enum2value_5[] = {
	0	/* on(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ce_PDSCH_TenProcesses_r14_specs_5 = {
	asn_MAP_ce_PDSCH_TenProcesses_r14_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_PDSCH_TenProcesses_r14_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ce_PDSCH_TenProcesses_r14_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_PDSCH_TenProcesses_r14_5 = {
	"ce-PDSCH-TenProcesses-r14",
	"ce-PDSCH-TenProcesses-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_ce_PDSCH_TenProcesses_r14_tags_5,
	sizeof(asn_DEF_ce_PDSCH_TenProcesses_r14_tags_5)
		/sizeof(asn_DEF_ce_PDSCH_TenProcesses_r14_tags_5[0]) - 1, /* 1 */
	asn_DEF_ce_PDSCH_TenProcesses_r14_tags_5,	/* Same as above */
	sizeof(asn_DEF_ce_PDSCH_TenProcesses_r14_tags_5)
		/sizeof(asn_DEF_ce_PDSCH_TenProcesses_r14_tags_5[0]), /* 2 */
	{ &asn_OER_type_ce_PDSCH_TenProcesses_r14_constr_5, &asn_PER_type_ce_PDSCH_TenProcesses_r14_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_PDSCH_TenProcesses_r14_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ce_HARQ_AckBundling_r14_value2enum_7[] = {
	{ 0,	2,	"on" }
};
static const unsigned int asn_MAP_ce_HARQ_AckBundling_r14_enum2value_7[] = {
	0	/* on(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ce_HARQ_AckBundling_r14_specs_7 = {
	asn_MAP_ce_HARQ_AckBundling_r14_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_HARQ_AckBundling_r14_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ce_HARQ_AckBundling_r14_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_HARQ_AckBundling_r14_7 = {
	"ce-HARQ-AckBundling-r14",
	"ce-HARQ-AckBundling-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_ce_HARQ_AckBundling_r14_tags_7,
	sizeof(asn_DEF_ce_HARQ_AckBundling_r14_tags_7)
		/sizeof(asn_DEF_ce_HARQ_AckBundling_r14_tags_7[0]) - 1, /* 1 */
	asn_DEF_ce_HARQ_AckBundling_r14_tags_7,	/* Same as above */
	sizeof(asn_DEF_ce_HARQ_AckBundling_r14_tags_7)
		/sizeof(asn_DEF_ce_HARQ_AckBundling_r14_tags_7[0]), /* 2 */
	{ &asn_OER_type_ce_HARQ_AckBundling_r14_constr_7, &asn_PER_type_ce_HARQ_AckBundling_r14_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_HARQ_AckBundling_r14_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ce_SchedulingEnhancement_r14_value2enum_9[] = {
	{ 0,	6,	"range1" },
	{ 1,	6,	"range2" }
};
static const unsigned int asn_MAP_ce_SchedulingEnhancement_r14_enum2value_9[] = {
	0,	/* range1(0) */
	1	/* range2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_ce_SchedulingEnhancement_r14_specs_9 = {
	asn_MAP_ce_SchedulingEnhancement_r14_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_SchedulingEnhancement_r14_enum2value_9,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ce_SchedulingEnhancement_r14_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_SchedulingEnhancement_r14_9 = {
	"ce-SchedulingEnhancement-r14",
	"ce-SchedulingEnhancement-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_ce_SchedulingEnhancement_r14_tags_9,
	sizeof(asn_DEF_ce_SchedulingEnhancement_r14_tags_9)
		/sizeof(asn_DEF_ce_SchedulingEnhancement_r14_tags_9[0]) - 1, /* 1 */
	asn_DEF_ce_SchedulingEnhancement_r14_tags_9,	/* Same as above */
	sizeof(asn_DEF_ce_SchedulingEnhancement_r14_tags_9)
		/sizeof(asn_DEF_ce_SchedulingEnhancement_r14_tags_9[0]), /* 2 */
	{ &asn_OER_type_ce_SchedulingEnhancement_r14_constr_9, &asn_PER_type_ce_SchedulingEnhancement_r14_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_SchedulingEnhancement_r14_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_tbsIndexAlt2_r14_value2enum_12[] = {
	{ 0,	3,	"b33" }
};
static const unsigned int asn_MAP_tbsIndexAlt2_r14_enum2value_12[] = {
	0	/* b33(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_tbsIndexAlt2_r14_specs_12 = {
	asn_MAP_tbsIndexAlt2_r14_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_tbsIndexAlt2_r14_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_tbsIndexAlt2_r14_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tbsIndexAlt2_r14_12 = {
	"tbsIndexAlt2-r14",
	"tbsIndexAlt2-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_tbsIndexAlt2_r14_tags_12,
	sizeof(asn_DEF_tbsIndexAlt2_r14_tags_12)
		/sizeof(asn_DEF_tbsIndexAlt2_r14_tags_12[0]) - 1, /* 1 */
	asn_DEF_tbsIndexAlt2_r14_tags_12,	/* Same as above */
	sizeof(asn_DEF_tbsIndexAlt2_r14_tags_12)
		/sizeof(asn_DEF_tbsIndexAlt2_r14_tags_12[0]), /* 2 */
	{ &asn_OER_type_tbsIndexAlt2_r14_constr_12, &asn_PER_type_tbsIndexAlt2_r14_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_tbsIndexAlt2_r14_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDSCH_ConfigDedicated_v1430_1[] = {
	{ ATF_POINTER, 5, offsetof(struct PDSCH_ConfigDedicated_v1430, ce_PDSCH_MaxBandwidth_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_PDSCH_MaxBandwidth_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-PDSCH-MaxBandwidth-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct PDSCH_ConfigDedicated_v1430, ce_PDSCH_TenProcesses_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_PDSCH_TenProcesses_r14_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-PDSCH-TenProcesses-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct PDSCH_ConfigDedicated_v1430, ce_HARQ_AckBundling_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_HARQ_AckBundling_r14_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-HARQ-AckBundling-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct PDSCH_ConfigDedicated_v1430, ce_SchedulingEnhancement_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_SchedulingEnhancement_r14_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-SchedulingEnhancement-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct PDSCH_ConfigDedicated_v1430, tbsIndexAlt2_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tbsIndexAlt2_r14_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tbsIndexAlt2-r14"
		},
};
static const int asn_MAP_PDSCH_ConfigDedicated_v1430_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_PDSCH_ConfigDedicated_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDSCH_ConfigDedicated_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ce-PDSCH-MaxBandwidth-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ce-PDSCH-TenProcesses-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ce-HARQ-AckBundling-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ce-SchedulingEnhancement-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* tbsIndexAlt2-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_PDSCH_ConfigDedicated_v1430_specs_1 = {
	sizeof(struct PDSCH_ConfigDedicated_v1430),
	offsetof(struct PDSCH_ConfigDedicated_v1430, _asn_ctx),
	asn_MAP_PDSCH_ConfigDedicated_v1430_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_PDSCH_ConfigDedicated_v1430_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDSCH_ConfigDedicated_v1430 = {
	"PDSCH-ConfigDedicated-v1430",
	"PDSCH-ConfigDedicated-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_PDSCH_ConfigDedicated_v1430_tags_1,
	sizeof(asn_DEF_PDSCH_ConfigDedicated_v1430_tags_1)
		/sizeof(asn_DEF_PDSCH_ConfigDedicated_v1430_tags_1[0]), /* 1 */
	asn_DEF_PDSCH_ConfigDedicated_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDSCH_ConfigDedicated_v1430_tags_1)
		/sizeof(asn_DEF_PDSCH_ConfigDedicated_v1430_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDSCH_ConfigDedicated_v1430_1,
	5,	/* Elements count */
	&asn_SPC_PDSCH_ConfigDedicated_v1430_specs_1	/* Additional specs */
};

