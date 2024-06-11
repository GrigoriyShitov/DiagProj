/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "MeasObjectNR-r15.h"

static int
memb_quantityConfigSet_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 2)) {
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
memb_cellsForWhichToReportSFTD_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 3)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_cellsForWhichToReportSFTD_r15_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..3)) */};
static asn_per_constraints_t asn_PER_type_cellsForWhichToReportSFTD_r15_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_bandNR_r15_constr_16 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_bandNR_r15_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_quantityConfigSet_r15_constr_9 CC_NOTUSED = {
	{ 1, 1 }	/* (1..2) */,
	-1};
static asn_per_constraints_t asn_PER_memb_quantityConfigSet_r15_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (1..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_cellsForWhichToReportSFTD_r15_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..3)) */};
static asn_per_constraints_t asn_PER_memb_cellsForWhichToReportSFTD_r15_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
static int asn_DFL_6_cmp_0(const void *sptr) {
	const Q_OffsetRangeInterRAT_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_6_set_0(void **sptr) {
	Q_OffsetRangeInterRAT_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
static asn_TYPE_member_t asn_MBR_cellsForWhichToReportSFTD_r15_10[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PhysCellIdNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_cellsForWhichToReportSFTD_r15_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_cellsForWhichToReportSFTD_r15_specs_10 = {
	sizeof(struct MeasObjectNR_r15__cellsForWhichToReportSFTD_r15),
	offsetof(struct MeasObjectNR_r15__cellsForWhichToReportSFTD_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellsForWhichToReportSFTD_r15_10 = {
	"cellsForWhichToReportSFTD-r15",
	"cellsForWhichToReportSFTD-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_cellsForWhichToReportSFTD_r15_tags_10,
	sizeof(asn_DEF_cellsForWhichToReportSFTD_r15_tags_10)
		/sizeof(asn_DEF_cellsForWhichToReportSFTD_r15_tags_10[0]) - 1, /* 1 */
	asn_DEF_cellsForWhichToReportSFTD_r15_tags_10,	/* Same as above */
	sizeof(asn_DEF_cellsForWhichToReportSFTD_r15_tags_10)
		/sizeof(asn_DEF_cellsForWhichToReportSFTD_r15_tags_10[0]), /* 2 */
	{ &asn_OER_type_cellsForWhichToReportSFTD_r15_constr_10, &asn_PER_type_cellsForWhichToReportSFTD_r15_constr_10, SEQUENCE_OF_constraint },
	asn_MBR_cellsForWhichToReportSFTD_r15_10,
	1,	/* Single element */
	&asn_SPC_cellsForWhichToReportSFTD_r15_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_bandNR_r15_16[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectNR_r15__bandNR_r15, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectNR_r15__bandNR_r15, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandIndicatorNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_bandNR_r15_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_bandNR_r15_specs_16 = {
	sizeof(struct MeasObjectNR_r15__bandNR_r15),
	offsetof(struct MeasObjectNR_r15__bandNR_r15, _asn_ctx),
	offsetof(struct MeasObjectNR_r15__bandNR_r15, present),
	sizeof(((struct MeasObjectNR_r15__bandNR_r15 *)0)->present),
	asn_MAP_bandNR_r15_tag2el_16,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bandNR_r15_16 = {
	"bandNR-r15",
	"bandNR-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_bandNR_r15_constr_16, &asn_PER_type_bandNR_r15_constr_16, CHOICE_constraint },
	asn_MBR_bandNR_r15_16,
	2,	/* Elements count */
	&asn_SPC_bandNR_r15_specs_16	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasObjectNR_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectNR_r15, carrierFreq_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectNR_r15, rs_ConfigSSB_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RS_ConfigSSB_NR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rs-ConfigSSB-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct MeasObjectNR_r15, threshRS_Index_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdListNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshRS-Index-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasObjectNR_r15, maxRS_IndexCellQual_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxRS_IndexCellQualNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxRS-IndexCellQual-r15"
		},
	{ ATF_NOFLAGS, 3, offsetof(struct MeasObjectNR_r15, offsetFreq_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_OffsetRangeInterRAT,
		0,
		{ 0, 0, 0 },
		&asn_DFL_6_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_6_set_0,	/* Set DEFAULT 0 */
		"offsetFreq-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectNR_r15, excludedCellsToRemoveList_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"excludedCellsToRemoveList-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectNR_r15, excludedCellsToAddModList_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellsToAddModListNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"excludedCellsToAddModList-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectNR_r15, quantityConfigSet_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_quantityConfigSet_r15_constr_9, &asn_PER_memb_quantityConfigSet_r15_constr_9,  memb_quantityConfigSet_r15_constraint_1 },
		0, 0, /* No default value */
		"quantityConfigSet-r15"
		},
	{ ATF_POINTER, 8, offsetof(struct MeasObjectNR_r15, cellsForWhichToReportSFTD_r15),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_cellsForWhichToReportSFTD_r15_10,
		0,
		{ &asn_OER_memb_cellsForWhichToReportSFTD_r15_constr_10, &asn_PER_memb_cellsForWhichToReportSFTD_r15_constr_10,  memb_cellsForWhichToReportSFTD_r15_constraint_1 },
		0, 0, /* No default value */
		"cellsForWhichToReportSFTD-r15"
		},
	{ ATF_POINTER, 7, offsetof(struct MeasObjectNR_r15, cellForWhichToReportCGI_r15),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellForWhichToReportCGI-r15"
		},
	{ ATF_POINTER, 6, offsetof(struct MeasObjectNR_r15, deriveSSB_IndexFromCell_r15),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deriveSSB-IndexFromCell-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct MeasObjectNR_r15, ss_RSSI_Measurement_r15),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SS_RSSI_Measurement_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ss-RSSI-Measurement-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasObjectNR_r15, bandNR_r15),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_bandNR_r15_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandNR-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasObjectNR_r15, rmtc_ConfigNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SetupRelease_4114P23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rmtc-ConfigNR-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectNR_r15, cellsToRemoveList_r16),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellsToRemoveList-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectNR_r15, cellsToAddModList_r16),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellsToAddModListNR_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellsToAddModList-r16"
		},
};
static const int asn_MAP_MeasObjectNR_r15_oms_1[] = { 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14, 15 };
static const ber_tlv_tag_t asn_DEF_MeasObjectNR_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasObjectNR_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rs-ConfigSSB-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* threshRS-Index-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* maxRS-IndexCellQual-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* offsetFreq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* excludedCellsToRemoveList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* excludedCellsToAddModList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* quantityConfigSet-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* cellsForWhichToReportSFTD-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* cellForWhichToReportCGI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* deriveSSB-IndexFromCell-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ss-RSSI-Measurement-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* bandNR-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* rmtc-ConfigNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* cellsToRemoveList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 } /* cellsToAddModList-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasObjectNR_r15_specs_1 = {
	sizeof(struct MeasObjectNR_r15),
	offsetof(struct MeasObjectNR_r15, _asn_ctx),
	asn_MAP_MeasObjectNR_r15_tag2el_1,
	16,	/* Count of tags in the map */
	asn_MAP_MeasObjectNR_r15_oms_1,	/* Optional members */
	6, 7,	/* Root/Additions */
	9,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasObjectNR_r15 = {
	"MeasObjectNR-r15",
	"MeasObjectNR-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasObjectNR_r15_tags_1,
	sizeof(asn_DEF_MeasObjectNR_r15_tags_1)
		/sizeof(asn_DEF_MeasObjectNR_r15_tags_1[0]), /* 1 */
	asn_DEF_MeasObjectNR_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasObjectNR_r15_tags_1)
		/sizeof(asn_DEF_MeasObjectNR_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasObjectNR_r15_1,
	16,	/* Elements count */
	&asn_SPC_MeasObjectNR_r15_specs_1	/* Additional specs */
};

