/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "InterFrequencyMeasurement-r9.h"

static int
memb_adjacentFrequencyIndex_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
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
memb_interBandFrequencyIndex_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_adjacentFrequencyIndex_constr_7 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_adjacentFrequencyIndex_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_interBandFrequencyIndex_constr_8 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_interBandFrequencyIndex_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_InterFrequencyMeasurement_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InterFrequencyMeasurement_r9, interFreqCellInfoList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqCellInfoList_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqCellInfoList"
		},
	{ ATF_POINTER, 6, offsetof(struct InterFrequencyMeasurement_r9, interFreqMeasQuantity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqMeasQuantity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqMeasQuantity"
		},
	{ ATF_POINTER, 5, offsetof(struct InterFrequencyMeasurement_r9, interFreqReportingQuantity),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqReportingQuantity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqReportingQuantity"
		},
	{ ATF_POINTER, 4, offsetof(struct InterFrequencyMeasurement_r9, measurementValidity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementValidity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measurementValidity"
		},
	{ ATF_POINTER, 3, offsetof(struct InterFrequencyMeasurement_r9, interFreqSetUpdate),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UE_AutonomousUpdateMode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqSetUpdate"
		},
	{ ATF_POINTER, 2, offsetof(struct InterFrequencyMeasurement_r9, adjacentFrequencyIndex),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_adjacentFrequencyIndex_constr_7, &asn_PER_memb_adjacentFrequencyIndex_constr_7,  memb_adjacentFrequencyIndex_constraint_1 },
		0, 0, /* No default value */
		"adjacentFrequencyIndex"
		},
	{ ATF_POINTER, 1, offsetof(struct InterFrequencyMeasurement_r9, interBandFrequencyIndex),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_interBandFrequencyIndex_constr_8, &asn_PER_memb_interBandFrequencyIndex_constr_8,  memb_interBandFrequencyIndex_constraint_1 },
		0, 0, /* No default value */
		"interBandFrequencyIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterFrequencyMeasurement_r9, reportCriteria),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_InterFreqReportCriteria_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportCriteria"
		},
};
static const int asn_MAP_InterFrequencyMeasurement_r9_oms_1[] = { 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_InterFrequencyMeasurement_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_InterFrequencyMeasurement_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqCellInfoList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* interFreqMeasQuantity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* interFreqReportingQuantity */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measurementValidity */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* interFreqSetUpdate */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* adjacentFrequencyIndex */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* interBandFrequencyIndex */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* reportCriteria */
};
asn_SEQUENCE_specifics_t asn_SPC_InterFrequencyMeasurement_r9_specs_1 = {
	sizeof(struct InterFrequencyMeasurement_r9),
	offsetof(struct InterFrequencyMeasurement_r9, _asn_ctx),
	asn_MAP_InterFrequencyMeasurement_r9_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_InterFrequencyMeasurement_r9_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_InterFrequencyMeasurement_r9 = {
	"InterFrequencyMeasurement-r9",
	"InterFrequencyMeasurement-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_InterFrequencyMeasurement_r9_tags_1,
	sizeof(asn_DEF_InterFrequencyMeasurement_r9_tags_1)
		/sizeof(asn_DEF_InterFrequencyMeasurement_r9_tags_1[0]), /* 1 */
	asn_DEF_InterFrequencyMeasurement_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_InterFrequencyMeasurement_r9_tags_1)
		/sizeof(asn_DEF_InterFrequencyMeasurement_r9_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_InterFrequencyMeasurement_r9_1,
	8,	/* Elements count */
	&asn_SPC_InterFrequencyMeasurement_r9_specs_1	/* Additional specs */
};

