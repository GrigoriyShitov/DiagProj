/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "CQI-ReportConfig-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_altCQI_Table_1024QAM_r15_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_altCQI_Table_1024QAM_r15_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_CQI_ReportConfig_r15_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_CQI_ReportConfig_r15_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_altCQI_Table_1024QAM_r15_value2enum_10[] = {
	{ 0,	12,	"allSubframes" },
	{ 1,	16,	"csi-SubframeSet1" },
	{ 2,	16,	"csi-SubframeSet2" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_altCQI_Table_1024QAM_r15_enum2value_10[] = {
	0,	/* allSubframes(0) */
	1,	/* csi-SubframeSet1(1) */
	2,	/* csi-SubframeSet2(2) */
	3	/* spare1(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_altCQI_Table_1024QAM_r15_specs_10 = {
	asn_MAP_altCQI_Table_1024QAM_r15_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_altCQI_Table_1024QAM_r15_enum2value_10,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_altCQI_Table_1024QAM_r15_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_altCQI_Table_1024QAM_r15_10 = {
	"altCQI-Table-1024QAM-r15",
	"altCQI-Table-1024QAM-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_altCQI_Table_1024QAM_r15_tags_10,
	sizeof(asn_DEF_altCQI_Table_1024QAM_r15_tags_10)
		/sizeof(asn_DEF_altCQI_Table_1024QAM_r15_tags_10[0]) - 1, /* 1 */
	asn_DEF_altCQI_Table_1024QAM_r15_tags_10,	/* Same as above */
	sizeof(asn_DEF_altCQI_Table_1024QAM_r15_tags_10)
		/sizeof(asn_DEF_altCQI_Table_1024QAM_r15_tags_10[0]), /* 2 */
	{ &asn_OER_type_altCQI_Table_1024QAM_r15_constr_10, &asn_PER_type_altCQI_Table_1024QAM_r15_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_altCQI_Table_1024QAM_r15_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_POINTER, 7, offsetof(struct CQI_ReportConfig_r15__setup, cqi_ReportConfig_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportConfig_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportConfig-r10"
		},
	{ ATF_POINTER, 6, offsetof(struct CQI_ReportConfig_r15__setup, cqi_ReportConfig_v1130),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportConfig_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportConfig-v1130"
		},
	{ ATF_POINTER, 5, offsetof(struct CQI_ReportConfig_r15__setup, cqi_ReportConfigPCell_v1250),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportConfig_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportConfigPCell-v1250"
		},
	{ ATF_POINTER, 4, offsetof(struct CQI_ReportConfig_r15__setup, cqi_ReportConfig_v1310),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportConfig_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportConfig-v1310"
		},
	{ ATF_POINTER, 3, offsetof(struct CQI_ReportConfig_r15__setup, cqi_ReportConfig_v1320),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportConfig_v1320,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportConfig-v1320"
		},
	{ ATF_POINTER, 2, offsetof(struct CQI_ReportConfig_r15__setup, cqi_ReportConfig_v1430),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportConfig_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportConfig-v1430"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportConfig_r15__setup, altCQI_Table_1024QAM_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_altCQI_Table_1024QAM_r15_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"altCQI-Table-1024QAM-r15"
		},
};
static const int asn_MAP_setup_oms_3[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cqi-ReportConfig-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cqi-ReportConfig-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cqi-ReportConfigPCell-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cqi-ReportConfig-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* cqi-ReportConfig-v1320 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* cqi-ReportConfig-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* altCQI-Table-1024QAM-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct CQI_ReportConfig_r15__setup),
	offsetof(struct CQI_ReportConfig_r15__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	7,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	7, 0,	/* Root/Additions */
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
	7,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CQI_ReportConfig_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportConfig_r15, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportConfig_r15, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_CQI_ReportConfig_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_CQI_ReportConfig_r15_specs_1 = {
	sizeof(struct CQI_ReportConfig_r15),
	offsetof(struct CQI_ReportConfig_r15, _asn_ctx),
	offsetof(struct CQI_ReportConfig_r15, present),
	sizeof(((struct CQI_ReportConfig_r15 *)0)->present),
	asn_MAP_CQI_ReportConfig_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_CQI_ReportConfig_r15 = {
	"CQI-ReportConfig-r15",
	"CQI-ReportConfig-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_CQI_ReportConfig_r15_constr_1, &asn_PER_type_CQI_ReportConfig_r15_constr_1, CHOICE_constraint },
	asn_MBR_CQI_ReportConfig_r15_1,
	2,	/* Elements count */
	&asn_SPC_CQI_ReportConfig_r15_specs_1	/* Additional specs */
};

