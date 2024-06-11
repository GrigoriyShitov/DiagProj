/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "MeasurementControlSysInfo.h"

static asn_oer_constraints_t asn_OER_type_cellSelectQualityMeasure_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cellSelectQualityMeasure_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_cellSelectQualityMeasure_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cellSelectQualityMeasure_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_use_of_HCS_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_use_of_HCS_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_cpich_RSCP_5[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_not_used__cellSelectQualityMeasure__cpich_RSCP, intraFreqMeasurementSysInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqMeasurementSysInfo_RSCP,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqMeasurementSysInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_not_used__cellSelectQualityMeasure__cpich_RSCP, interFreqMeasurementSysInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqMeasurementSysInfo_RSCP,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqMeasurementSysInfo"
		},
};
static const int asn_MAP_cpich_RSCP_oms_5[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_cpich_RSCP_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cpich_RSCP_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqMeasurementSysInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interFreqMeasurementSysInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_cpich_RSCP_specs_5 = {
	sizeof(struct MeasurementControlSysInfo__use_of_HCS__hcs_not_used__cellSelectQualityMeasure__cpich_RSCP),
	offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_not_used__cellSelectQualityMeasure__cpich_RSCP, _asn_ctx),
	asn_MAP_cpich_RSCP_tag2el_5,
	2,	/* Count of tags in the map */
	asn_MAP_cpich_RSCP_oms_5,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cpich_RSCP_5 = {
	"cpich-RSCP",
	"cpich-RSCP",
	&asn_OP_SEQUENCE,
	asn_DEF_cpich_RSCP_tags_5,
	sizeof(asn_DEF_cpich_RSCP_tags_5)
		/sizeof(asn_DEF_cpich_RSCP_tags_5[0]) - 1, /* 1 */
	asn_DEF_cpich_RSCP_tags_5,	/* Same as above */
	sizeof(asn_DEF_cpich_RSCP_tags_5)
		/sizeof(asn_DEF_cpich_RSCP_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cpich_RSCP_5,
	2,	/* Elements count */
	&asn_SPC_cpich_RSCP_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cpich_Ec_N0_8[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_not_used__cellSelectQualityMeasure__cpich_Ec_N0, intraFreqMeasurementSysInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqMeasurementSysInfo_ECN0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqMeasurementSysInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_not_used__cellSelectQualityMeasure__cpich_Ec_N0, interFreqMeasurementSysInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqMeasurementSysInfo_ECN0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqMeasurementSysInfo"
		},
};
static const int asn_MAP_cpich_Ec_N0_oms_8[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_cpich_Ec_N0_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cpich_Ec_N0_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqMeasurementSysInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interFreqMeasurementSysInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_cpich_Ec_N0_specs_8 = {
	sizeof(struct MeasurementControlSysInfo__use_of_HCS__hcs_not_used__cellSelectQualityMeasure__cpich_Ec_N0),
	offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_not_used__cellSelectQualityMeasure__cpich_Ec_N0, _asn_ctx),
	asn_MAP_cpich_Ec_N0_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_cpich_Ec_N0_oms_8,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cpich_Ec_N0_8 = {
	"cpich-Ec-N0",
	"cpich-Ec-N0",
	&asn_OP_SEQUENCE,
	asn_DEF_cpich_Ec_N0_tags_8,
	sizeof(asn_DEF_cpich_Ec_N0_tags_8)
		/sizeof(asn_DEF_cpich_Ec_N0_tags_8[0]) - 1, /* 1 */
	asn_DEF_cpich_Ec_N0_tags_8,	/* Same as above */
	sizeof(asn_DEF_cpich_Ec_N0_tags_8)
		/sizeof(asn_DEF_cpich_Ec_N0_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cpich_Ec_N0_8,
	2,	/* Elements count */
	&asn_SPC_cpich_Ec_N0_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellSelectQualityMeasure_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_not_used__cellSelectQualityMeasure, choice.cpich_RSCP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_cpich_RSCP_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cpich-RSCP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_not_used__cellSelectQualityMeasure, choice.cpich_Ec_N0),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cpich_Ec_N0_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cpich-Ec-N0"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_cellSelectQualityMeasure_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cpich-RSCP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cpich-Ec-N0 */
};
static asn_CHOICE_specifics_t asn_SPC_cellSelectQualityMeasure_specs_4 = {
	sizeof(struct MeasurementControlSysInfo__use_of_HCS__hcs_not_used__cellSelectQualityMeasure),
	offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_not_used__cellSelectQualityMeasure, _asn_ctx),
	offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_not_used__cellSelectQualityMeasure, present),
	sizeof(((struct MeasurementControlSysInfo__use_of_HCS__hcs_not_used__cellSelectQualityMeasure *)0)->present),
	asn_MAP_cellSelectQualityMeasure_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellSelectQualityMeasure_4 = {
	"cellSelectQualityMeasure",
	"cellSelectQualityMeasure",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_cellSelectQualityMeasure_constr_4, &asn_PER_type_cellSelectQualityMeasure_constr_4, CHOICE_constraint },
	asn_MBR_cellSelectQualityMeasure_4,
	2,	/* Elements count */
	&asn_SPC_cellSelectQualityMeasure_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_hcs_not_used_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_not_used, cellSelectQualityMeasure),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cellSelectQualityMeasure_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellSelectQualityMeasure"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_not_used, interRATMeasurementSysInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterRATMeasurementSysInfo_B,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interRATMeasurementSysInfo"
		},
};
static const int asn_MAP_hcs_not_used_oms_3[] = { 1 };
static const ber_tlv_tag_t asn_DEF_hcs_not_used_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_hcs_not_used_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellSelectQualityMeasure */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interRATMeasurementSysInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_hcs_not_used_specs_3 = {
	sizeof(struct MeasurementControlSysInfo__use_of_HCS__hcs_not_used),
	offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_not_used, _asn_ctx),
	asn_MAP_hcs_not_used_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_hcs_not_used_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_hcs_not_used_3 = {
	"hcs-not-used",
	"hcs-not-used",
	&asn_OP_SEQUENCE,
	asn_DEF_hcs_not_used_tags_3,
	sizeof(asn_DEF_hcs_not_used_tags_3)
		/sizeof(asn_DEF_hcs_not_used_tags_3[0]) - 1, /* 1 */
	asn_DEF_hcs_not_used_tags_3,	/* Same as above */
	sizeof(asn_DEF_hcs_not_used_tags_3)
		/sizeof(asn_DEF_hcs_not_used_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_hcs_not_used_3,
	2,	/* Elements count */
	&asn_SPC_hcs_not_used_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cpich_RSCP_14[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_used__cellSelectQualityMeasure__cpich_RSCP, intraFreqMeasurementSysInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqMeasurementSysInfo_HCS_RSCP,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqMeasurementSysInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_used__cellSelectQualityMeasure__cpich_RSCP, interFreqMeasurementSysInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqMeasurementSysInfo_HCS_RSCP,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqMeasurementSysInfo"
		},
};
static const int asn_MAP_cpich_RSCP_oms_14[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_cpich_RSCP_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cpich_RSCP_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqMeasurementSysInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interFreqMeasurementSysInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_cpich_RSCP_specs_14 = {
	sizeof(struct MeasurementControlSysInfo__use_of_HCS__hcs_used__cellSelectQualityMeasure__cpich_RSCP),
	offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_used__cellSelectQualityMeasure__cpich_RSCP, _asn_ctx),
	asn_MAP_cpich_RSCP_tag2el_14,
	2,	/* Count of tags in the map */
	asn_MAP_cpich_RSCP_oms_14,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cpich_RSCP_14 = {
	"cpich-RSCP",
	"cpich-RSCP",
	&asn_OP_SEQUENCE,
	asn_DEF_cpich_RSCP_tags_14,
	sizeof(asn_DEF_cpich_RSCP_tags_14)
		/sizeof(asn_DEF_cpich_RSCP_tags_14[0]) - 1, /* 1 */
	asn_DEF_cpich_RSCP_tags_14,	/* Same as above */
	sizeof(asn_DEF_cpich_RSCP_tags_14)
		/sizeof(asn_DEF_cpich_RSCP_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cpich_RSCP_14,
	2,	/* Elements count */
	&asn_SPC_cpich_RSCP_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cpich_Ec_N0_17[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_used__cellSelectQualityMeasure__cpich_Ec_N0, intraFreqMeasurementSysInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqMeasurementSysInfo_HCS_ECN0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqMeasurementSysInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_used__cellSelectQualityMeasure__cpich_Ec_N0, interFreqMeasurementSysInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqMeasurementSysInfo_HCS_ECN0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqMeasurementSysInfo"
		},
};
static const int asn_MAP_cpich_Ec_N0_oms_17[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_cpich_Ec_N0_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cpich_Ec_N0_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqMeasurementSysInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interFreqMeasurementSysInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_cpich_Ec_N0_specs_17 = {
	sizeof(struct MeasurementControlSysInfo__use_of_HCS__hcs_used__cellSelectQualityMeasure__cpich_Ec_N0),
	offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_used__cellSelectQualityMeasure__cpich_Ec_N0, _asn_ctx),
	asn_MAP_cpich_Ec_N0_tag2el_17,
	2,	/* Count of tags in the map */
	asn_MAP_cpich_Ec_N0_oms_17,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cpich_Ec_N0_17 = {
	"cpich-Ec-N0",
	"cpich-Ec-N0",
	&asn_OP_SEQUENCE,
	asn_DEF_cpich_Ec_N0_tags_17,
	sizeof(asn_DEF_cpich_Ec_N0_tags_17)
		/sizeof(asn_DEF_cpich_Ec_N0_tags_17[0]) - 1, /* 1 */
	asn_DEF_cpich_Ec_N0_tags_17,	/* Same as above */
	sizeof(asn_DEF_cpich_Ec_N0_tags_17)
		/sizeof(asn_DEF_cpich_Ec_N0_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cpich_Ec_N0_17,
	2,	/* Elements count */
	&asn_SPC_cpich_Ec_N0_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellSelectQualityMeasure_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_used__cellSelectQualityMeasure, choice.cpich_RSCP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_cpich_RSCP_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cpich-RSCP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_used__cellSelectQualityMeasure, choice.cpich_Ec_N0),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cpich_Ec_N0_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cpich-Ec-N0"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_cellSelectQualityMeasure_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cpich-RSCP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cpich-Ec-N0 */
};
static asn_CHOICE_specifics_t asn_SPC_cellSelectQualityMeasure_specs_13 = {
	sizeof(struct MeasurementControlSysInfo__use_of_HCS__hcs_used__cellSelectQualityMeasure),
	offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_used__cellSelectQualityMeasure, _asn_ctx),
	offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_used__cellSelectQualityMeasure, present),
	sizeof(((struct MeasurementControlSysInfo__use_of_HCS__hcs_used__cellSelectQualityMeasure *)0)->present),
	asn_MAP_cellSelectQualityMeasure_tag2el_13,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellSelectQualityMeasure_13 = {
	"cellSelectQualityMeasure",
	"cellSelectQualityMeasure",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_cellSelectQualityMeasure_constr_13, &asn_PER_type_cellSelectQualityMeasure_constr_13, CHOICE_constraint },
	asn_MBR_cellSelectQualityMeasure_13,
	2,	/* Elements count */
	&asn_SPC_cellSelectQualityMeasure_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_hcs_used_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_used, cellSelectQualityMeasure),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cellSelectQualityMeasure_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellSelectQualityMeasure"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_used, interRATMeasurementSysInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterRATMeasurementSysInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interRATMeasurementSysInfo"
		},
};
static const int asn_MAP_hcs_used_oms_12[] = { 1 };
static const ber_tlv_tag_t asn_DEF_hcs_used_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_hcs_used_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellSelectQualityMeasure */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interRATMeasurementSysInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_hcs_used_specs_12 = {
	sizeof(struct MeasurementControlSysInfo__use_of_HCS__hcs_used),
	offsetof(struct MeasurementControlSysInfo__use_of_HCS__hcs_used, _asn_ctx),
	asn_MAP_hcs_used_tag2el_12,
	2,	/* Count of tags in the map */
	asn_MAP_hcs_used_oms_12,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_hcs_used_12 = {
	"hcs-used",
	"hcs-used",
	&asn_OP_SEQUENCE,
	asn_DEF_hcs_used_tags_12,
	sizeof(asn_DEF_hcs_used_tags_12)
		/sizeof(asn_DEF_hcs_used_tags_12[0]) - 1, /* 1 */
	asn_DEF_hcs_used_tags_12,	/* Same as above */
	sizeof(asn_DEF_hcs_used_tags_12)
		/sizeof(asn_DEF_hcs_used_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_hcs_used_12,
	2,	/* Elements count */
	&asn_SPC_hcs_used_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_use_of_HCS_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementControlSysInfo__use_of_HCS, choice.hcs_not_used),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_hcs_not_used_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hcs-not-used"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementControlSysInfo__use_of_HCS, choice.hcs_used),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_hcs_used_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hcs-used"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_use_of_HCS_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hcs-not-used */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* hcs-used */
};
static asn_CHOICE_specifics_t asn_SPC_use_of_HCS_specs_2 = {
	sizeof(struct MeasurementControlSysInfo__use_of_HCS),
	offsetof(struct MeasurementControlSysInfo__use_of_HCS, _asn_ctx),
	offsetof(struct MeasurementControlSysInfo__use_of_HCS, present),
	sizeof(((struct MeasurementControlSysInfo__use_of_HCS *)0)->present),
	asn_MAP_use_of_HCS_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_use_of_HCS_2 = {
	"use-of-HCS",
	"use-of-HCS",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_use_of_HCS_constr_2, &asn_PER_type_use_of_HCS_constr_2, CHOICE_constraint },
	asn_MBR_use_of_HCS_2,
	2,	/* Elements count */
	&asn_SPC_use_of_HCS_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasurementControlSysInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementControlSysInfo, use_of_HCS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_use_of_HCS_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"use-of-HCS"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasurementControlSysInfo, trafficVolumeMeasSysInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrafficVolumeMeasSysInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trafficVolumeMeasSysInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasurementControlSysInfo, dummy),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_InternalMeasurementSysInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy"
		},
};
static const int asn_MAP_MeasurementControlSysInfo_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_MeasurementControlSysInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasurementControlSysInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* use-of-HCS */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trafficVolumeMeasSysInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dummy */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasurementControlSysInfo_specs_1 = {
	sizeof(struct MeasurementControlSysInfo),
	offsetof(struct MeasurementControlSysInfo, _asn_ctx),
	asn_MAP_MeasurementControlSysInfo_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MeasurementControlSysInfo_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasurementControlSysInfo = {
	"MeasurementControlSysInfo",
	"MeasurementControlSysInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasurementControlSysInfo_tags_1,
	sizeof(asn_DEF_MeasurementControlSysInfo_tags_1)
		/sizeof(asn_DEF_MeasurementControlSysInfo_tags_1[0]), /* 1 */
	asn_DEF_MeasurementControlSysInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasurementControlSysInfo_tags_1)
		/sizeof(asn_DEF_MeasurementControlSysInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasurementControlSysInfo_1,
	3,	/* Elements count */
	&asn_SPC_MeasurementControlSysInfo_specs_1	/* Additional specs */
};

