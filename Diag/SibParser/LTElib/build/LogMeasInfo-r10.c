/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "LogMeasInfo-r10.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_relativeTimeStamp_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7200)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_inDeviceCoexDetected_r13_constr_19 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_inDeviceCoexDetected_r13_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_anyCellSelectionDetected_r15_constr_24 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_anyCellSelectionDetected_r15_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_relativeTimeStamp_r10_constr_3 CC_NOTUSED = {
	{ 2, 1 }	/* (0..7200) */,
	-1};
static asn_per_constraints_t asn_PER_memb_relativeTimeStamp_r10_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 13,  13,  0,  7200 }	/* (0..7200) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_measResultServCell_r10_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LogMeasInfo_r10__measResultServCell_r10, rsrpResult_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrpResult-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LogMeasInfo_r10__measResultServCell_r10, rsrqResult_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrqResult-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_measResultServCell_r10_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResultServCell_r10_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrpResult-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rsrqResult-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultServCell_r10_specs_5 = {
	sizeof(struct LogMeasInfo_r10__measResultServCell_r10),
	offsetof(struct LogMeasInfo_r10__measResultServCell_r10, _asn_ctx),
	asn_MAP_measResultServCell_r10_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultServCell_r10_5 = {
	"measResultServCell-r10",
	"measResultServCell-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_measResultServCell_r10_tags_5,
	sizeof(asn_DEF_measResultServCell_r10_tags_5)
		/sizeof(asn_DEF_measResultServCell_r10_tags_5[0]) - 1, /* 1 */
	asn_DEF_measResultServCell_r10_tags_5,	/* Same as above */
	sizeof(asn_DEF_measResultServCell_r10_tags_5)
		/sizeof(asn_DEF_measResultServCell_r10_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_measResultServCell_r10_5,
	2,	/* Elements count */
	&asn_SPC_measResultServCell_r10_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measResultNeighCells_r10_8[] = {
	{ ATF_POINTER, 4, offsetof(struct LogMeasInfo_r10__measResultNeighCells_r10, measResultListEUTRA_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2EUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListEUTRA-r10"
		},
	{ ATF_POINTER, 3, offsetof(struct LogMeasInfo_r10__measResultNeighCells_r10, measResultListUTRA_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2UTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListUTRA-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct LogMeasInfo_r10__measResultNeighCells_r10, measResultListGERAN_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2GERAN_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListGERAN-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct LogMeasInfo_r10__measResultNeighCells_r10, measResultListCDMA2000_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2CDMA2000_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListCDMA2000-r10"
		},
};
static const int asn_MAP_measResultNeighCells_r10_oms_8[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_measResultNeighCells_r10_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResultNeighCells_r10_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measResultListEUTRA-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResultListUTRA-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measResultListGERAN-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* measResultListCDMA2000-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultNeighCells_r10_specs_8 = {
	sizeof(struct LogMeasInfo_r10__measResultNeighCells_r10),
	offsetof(struct LogMeasInfo_r10__measResultNeighCells_r10, _asn_ctx),
	asn_MAP_measResultNeighCells_r10_tag2el_8,
	4,	/* Count of tags in the map */
	asn_MAP_measResultNeighCells_r10_oms_8,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultNeighCells_r10_8 = {
	"measResultNeighCells-r10",
	"measResultNeighCells-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_measResultNeighCells_r10_tags_8,
	sizeof(asn_DEF_measResultNeighCells_r10_tags_8)
		/sizeof(asn_DEF_measResultNeighCells_r10_tags_8[0]) - 1, /* 1 */
	asn_DEF_measResultNeighCells_r10_tags_8,	/* Same as above */
	sizeof(asn_DEF_measResultNeighCells_r10_tags_8)
		/sizeof(asn_DEF_measResultNeighCells_r10_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_measResultNeighCells_r10_8,
	4,	/* Elements count */
	&asn_SPC_measResultNeighCells_r10_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_inDeviceCoexDetected_r13_value2enum_19[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_inDeviceCoexDetected_r13_enum2value_19[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_inDeviceCoexDetected_r13_specs_19 = {
	asn_MAP_inDeviceCoexDetected_r13_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_inDeviceCoexDetected_r13_enum2value_19,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_inDeviceCoexDetected_r13_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_inDeviceCoexDetected_r13_19 = {
	"inDeviceCoexDetected-r13",
	"inDeviceCoexDetected-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_inDeviceCoexDetected_r13_tags_19,
	sizeof(asn_DEF_inDeviceCoexDetected_r13_tags_19)
		/sizeof(asn_DEF_inDeviceCoexDetected_r13_tags_19[0]) - 1, /* 1 */
	asn_DEF_inDeviceCoexDetected_r13_tags_19,	/* Same as above */
	sizeof(asn_DEF_inDeviceCoexDetected_r13_tags_19)
		/sizeof(asn_DEF_inDeviceCoexDetected_r13_tags_19[0]), /* 2 */
	{ &asn_OER_type_inDeviceCoexDetected_r13_constr_19, &asn_PER_type_inDeviceCoexDetected_r13_constr_19, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_inDeviceCoexDetected_r13_specs_19	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_anyCellSelectionDetected_r15_value2enum_24[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_anyCellSelectionDetected_r15_enum2value_24[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_anyCellSelectionDetected_r15_specs_24 = {
	asn_MAP_anyCellSelectionDetected_r15_value2enum_24,	/* "tag" => N; sorted by tag */
	asn_MAP_anyCellSelectionDetected_r15_enum2value_24,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_anyCellSelectionDetected_r15_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_anyCellSelectionDetected_r15_24 = {
	"anyCellSelectionDetected-r15",
	"anyCellSelectionDetected-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_anyCellSelectionDetected_r15_tags_24,
	sizeof(asn_DEF_anyCellSelectionDetected_r15_tags_24)
		/sizeof(asn_DEF_anyCellSelectionDetected_r15_tags_24[0]) - 1, /* 1 */
	asn_DEF_anyCellSelectionDetected_r15_tags_24,	/* Same as above */
	sizeof(asn_DEF_anyCellSelectionDetected_r15_tags_24)
		/sizeof(asn_DEF_anyCellSelectionDetected_r15_tags_24[0]), /* 2 */
	{ &asn_OER_type_anyCellSelectionDetected_r15_constr_24, &asn_PER_type_anyCellSelectionDetected_r15_constr_24, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_anyCellSelectionDetected_r15_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measResultListNR_v1640_27[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LogMeasInfo_r10__measResultListNR_v1640, carrierFreqNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreqNR-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_measResultListNR_v1640_tags_27[] = {
	(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResultListNR_v1640_tag2el_27[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* carrierFreqNR-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultListNR_v1640_specs_27 = {
	sizeof(struct LogMeasInfo_r10__measResultListNR_v1640),
	offsetof(struct LogMeasInfo_r10__measResultListNR_v1640, _asn_ctx),
	asn_MAP_measResultListNR_v1640_tag2el_27,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultListNR_v1640_27 = {
	"measResultListNR-v1640",
	"measResultListNR-v1640",
	&asn_OP_SEQUENCE,
	asn_DEF_measResultListNR_v1640_tags_27,
	sizeof(asn_DEF_measResultListNR_v1640_tags_27)
		/sizeof(asn_DEF_measResultListNR_v1640_tags_27[0]) - 1, /* 1 */
	asn_DEF_measResultListNR_v1640_tags_27,	/* Same as above */
	sizeof(asn_DEF_measResultListNR_v1640_tags_27)
		/sizeof(asn_DEF_measResultListNR_v1640_tags_27[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_measResultListNR_v1640_27,
	1,	/* Elements count */
	&asn_SPC_measResultListNR_v1640_specs_27	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LogMeasInfo_r10_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LogMeasInfo_r10, locationInfo_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocationInfo_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"locationInfo-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LogMeasInfo_r10, relativeTimeStamp_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_relativeTimeStamp_r10_constr_3, &asn_PER_memb_relativeTimeStamp_r10_constr_3,  memb_relativeTimeStamp_r10_constraint_1 },
		0, 0, /* No default value */
		"relativeTimeStamp-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LogMeasInfo_r10, servCellIdentity_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellGlobalIdEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servCellIdentity-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LogMeasInfo_r10, measResultServCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_measResultServCell_r10_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultServCell-r10"
		},
	{ ATF_POINTER, 15, offsetof(struct LogMeasInfo_r10, measResultNeighCells_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_measResultNeighCells_r10_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultNeighCells-r10"
		},
	{ ATF_POINTER, 14, offsetof(struct LogMeasInfo_r10, measResultListEUTRA_v1090),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2EUTRA_v9e0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListEUTRA-v1090"
		},
	{ ATF_POINTER, 13, offsetof(struct LogMeasInfo_r10, measResultListMBSFN_r12),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultListMBSFN_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListMBSFN-r12"
		},
	{ ATF_POINTER, 12, offsetof(struct LogMeasInfo_r10, measResultServCell_v1250),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultServCell-v1250"
		},
	{ ATF_POINTER, 11, offsetof(struct LogMeasInfo_r10, servCellRSRQ_Type_r12),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Type_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servCellRSRQ-Type-r12"
		},
	{ ATF_POINTER, 10, offsetof(struct LogMeasInfo_r10, measResultListEUTRA_v1250),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2EUTRA_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListEUTRA-v1250"
		},
	{ ATF_POINTER, 9, offsetof(struct LogMeasInfo_r10, inDeviceCoexDetected_r13),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_inDeviceCoexDetected_r13_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"inDeviceCoexDetected-r13"
		},
	{ ATF_POINTER, 8, offsetof(struct LogMeasInfo_r10, measResultServCell_v1360),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range_v1360,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultServCell-v1360"
		},
	{ ATF_POINTER, 7, offsetof(struct LogMeasInfo_r10, logMeasResultListBT_r15),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogMeasResultListBT_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logMeasResultListBT-r15"
		},
	{ ATF_POINTER, 6, offsetof(struct LogMeasInfo_r10, logMeasResultListWLAN_r15),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogMeasResultListWLAN_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logMeasResultListWLAN-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct LogMeasInfo_r10, anyCellSelectionDetected_r15),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_anyCellSelectionDetected_r15_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"anyCellSelectionDetected-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct LogMeasInfo_r10, measResultListNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultCellListNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListNR-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct LogMeasInfo_r10, measResultListNR_v1640),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		0,
		&asn_DEF_measResultListNR_v1640_27,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListNR-v1640"
		},
	{ ATF_POINTER, 2, offsetof(struct LogMeasInfo_r10, measResultListExtNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultFreqListNR_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListExtNR-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LogMeasInfo_r10, uncomBarPreMeasResult_r17),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uncomBarPreMeasResult-r17"
		},
};
static const int asn_MAP_LogMeasInfo_r10_oms_1[] = { 0, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18 };
static const ber_tlv_tag_t asn_DEF_LogMeasInfo_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LogMeasInfo_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* locationInfo-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* relativeTimeStamp-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* servCellIdentity-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measResultServCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* measResultNeighCells-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* measResultListEUTRA-v1090 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* measResultListMBSFN-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* measResultServCell-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* servCellRSRQ-Type-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* measResultListEUTRA-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* inDeviceCoexDetected-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* measResultServCell-v1360 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* logMeasResultListBT-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* logMeasResultListWLAN-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* anyCellSelectionDetected-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* measResultListNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* measResultListNR-v1640 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* measResultListExtNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 } /* uncomBarPreMeasResult-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_LogMeasInfo_r10_specs_1 = {
	sizeof(struct LogMeasInfo_r10),
	offsetof(struct LogMeasInfo_r10, _asn_ctx),
	asn_MAP_LogMeasInfo_r10_tag2el_1,
	19,	/* Count of tags in the map */
	asn_MAP_LogMeasInfo_r10_oms_1,	/* Optional members */
	2, 14,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LogMeasInfo_r10 = {
	"LogMeasInfo-r10",
	"LogMeasInfo-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_LogMeasInfo_r10_tags_1,
	sizeof(asn_DEF_LogMeasInfo_r10_tags_1)
		/sizeof(asn_DEF_LogMeasInfo_r10_tags_1[0]), /* 1 */
	asn_DEF_LogMeasInfo_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_LogMeasInfo_r10_tags_1)
		/sizeof(asn_DEF_LogMeasInfo_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LogMeasInfo_r10_1,
	19,	/* Elements count */
	&asn_SPC_LogMeasInfo_r10_specs_1	/* Additional specs */
};

