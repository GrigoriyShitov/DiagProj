/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "RS-ConfigSSB-NR-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_ssb_PositionQCL_CellsToRemoveListNR_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 32)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ssb_PositionQCL_CellsToRemoveListNR_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 32)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_subcarrierSpacingSSB_r15_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_subcarrierSpacingSSB_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ssb_ToMeasure_r15_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ssb_ToMeasure_r15_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ssb_PositionQCL_CellsToRemoveListNR_r16_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_type_ssb_PositionQCL_CellsToRemoveListNR_r16_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_subcarrierSpacingSSB_r17_constr_16 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_subcarrierSpacingSSB_r17_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ssb_PositionQCL_CellsToRemoveListNR_r17_constr_21 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_type_ssb_PositionQCL_CellsToRemoveListNR_r17_constr_21 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ssb_PositionQCL_CellsToRemoveListNR_r16_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_memb_ssb_PositionQCL_CellsToRemoveListNR_r16_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ssb_PositionQCL_CellsToRemoveListNR_r17_constr_21 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_memb_ssb_PositionQCL_CellsToRemoveListNR_r17_constr_21 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_subcarrierSpacingSSB_r15_value2enum_3[] = {
	{ 0,	5,	"kHz15" },
	{ 1,	5,	"kHz30" },
	{ 2,	6,	"kHz120" },
	{ 3,	6,	"kHz240" }
};
static const unsigned int asn_MAP_subcarrierSpacingSSB_r15_enum2value_3[] = {
	2,	/* kHz120(2) */
	0,	/* kHz15(0) */
	3,	/* kHz240(3) */
	1	/* kHz30(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_subcarrierSpacingSSB_r15_specs_3 = {
	asn_MAP_subcarrierSpacingSSB_r15_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_subcarrierSpacingSSB_r15_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_subcarrierSpacingSSB_r15_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subcarrierSpacingSSB_r15_3 = {
	"subcarrierSpacingSSB-r15",
	"subcarrierSpacingSSB-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_subcarrierSpacingSSB_r15_tags_3,
	sizeof(asn_DEF_subcarrierSpacingSSB_r15_tags_3)
		/sizeof(asn_DEF_subcarrierSpacingSSB_r15_tags_3[0]) - 1, /* 1 */
	asn_DEF_subcarrierSpacingSSB_r15_tags_3,	/* Same as above */
	sizeof(asn_DEF_subcarrierSpacingSSB_r15_tags_3)
		/sizeof(asn_DEF_subcarrierSpacingSSB_r15_tags_3[0]), /* 2 */
	{ &asn_OER_type_subcarrierSpacingSSB_r15_constr_3, &asn_PER_type_subcarrierSpacingSSB_r15_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_subcarrierSpacingSSB_r15_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ssb_ToMeasure_r15_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RS_ConfigSSB_NR_r15__ssb_ToMeasure_r15, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RS_ConfigSSB_NR_r15__ssb_ToMeasure_r15, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SSB_ToMeasure_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ssb_ToMeasure_r15_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_ssb_ToMeasure_r15_specs_9 = {
	sizeof(struct RS_ConfigSSB_NR_r15__ssb_ToMeasure_r15),
	offsetof(struct RS_ConfigSSB_NR_r15__ssb_ToMeasure_r15, _asn_ctx),
	offsetof(struct RS_ConfigSSB_NR_r15__ssb_ToMeasure_r15, present),
	sizeof(((struct RS_ConfigSSB_NR_r15__ssb_ToMeasure_r15 *)0)->present),
	asn_MAP_ssb_ToMeasure_r15_tag2el_9,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ssb_ToMeasure_r15_9 = {
	"ssb-ToMeasure-r15",
	"ssb-ToMeasure-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ssb_ToMeasure_r15_constr_9, &asn_PER_type_ssb_ToMeasure_r15_constr_9, CHOICE_constraint },
	asn_MBR_ssb_ToMeasure_r15_9,
	2,	/* Elements count */
	&asn_SPC_ssb_ToMeasure_r15_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ssb_PositionQCL_CellsToRemoveListNR_r16_14[] = {
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
static const ber_tlv_tag_t asn_DEF_ssb_PositionQCL_CellsToRemoveListNR_r16_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ssb_PositionQCL_CellsToRemoveListNR_r16_specs_14 = {
	sizeof(struct RS_ConfigSSB_NR_r15__ssb_PositionQCL_CellsToRemoveListNR_r16),
	offsetof(struct RS_ConfigSSB_NR_r15__ssb_PositionQCL_CellsToRemoveListNR_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ssb_PositionQCL_CellsToRemoveListNR_r16_14 = {
	"ssb-PositionQCL-CellsToRemoveListNR-r16",
	"ssb-PositionQCL-CellsToRemoveListNR-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ssb_PositionQCL_CellsToRemoveListNR_r16_tags_14,
	sizeof(asn_DEF_ssb_PositionQCL_CellsToRemoveListNR_r16_tags_14)
		/sizeof(asn_DEF_ssb_PositionQCL_CellsToRemoveListNR_r16_tags_14[0]) - 1, /* 1 */
	asn_DEF_ssb_PositionQCL_CellsToRemoveListNR_r16_tags_14,	/* Same as above */
	sizeof(asn_DEF_ssb_PositionQCL_CellsToRemoveListNR_r16_tags_14)
		/sizeof(asn_DEF_ssb_PositionQCL_CellsToRemoveListNR_r16_tags_14[0]), /* 2 */
	{ &asn_OER_type_ssb_PositionQCL_CellsToRemoveListNR_r16_constr_14, &asn_PER_type_ssb_PositionQCL_CellsToRemoveListNR_r16_constr_14, SEQUENCE_OF_constraint },
	asn_MBR_ssb_PositionQCL_CellsToRemoveListNR_r16_14,
	1,	/* Single element */
	&asn_SPC_ssb_PositionQCL_CellsToRemoveListNR_r16_specs_14	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_subcarrierSpacingSSB_r17_value2enum_16[] = {
	{ 0,	6,	"kHz480" },
	{ 1,	6,	"kHz960" }
};
static const unsigned int asn_MAP_subcarrierSpacingSSB_r17_enum2value_16[] = {
	0,	/* kHz480(0) */
	1	/* kHz960(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_subcarrierSpacingSSB_r17_specs_16 = {
	asn_MAP_subcarrierSpacingSSB_r17_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_subcarrierSpacingSSB_r17_enum2value_16,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_subcarrierSpacingSSB_r17_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subcarrierSpacingSSB_r17_16 = {
	"subcarrierSpacingSSB-r17",
	"subcarrierSpacingSSB-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_subcarrierSpacingSSB_r17_tags_16,
	sizeof(asn_DEF_subcarrierSpacingSSB_r17_tags_16)
		/sizeof(asn_DEF_subcarrierSpacingSSB_r17_tags_16[0]) - 1, /* 1 */
	asn_DEF_subcarrierSpacingSSB_r17_tags_16,	/* Same as above */
	sizeof(asn_DEF_subcarrierSpacingSSB_r17_tags_16)
		/sizeof(asn_DEF_subcarrierSpacingSSB_r17_tags_16[0]), /* 2 */
	{ &asn_OER_type_subcarrierSpacingSSB_r17_constr_16, &asn_PER_type_subcarrierSpacingSSB_r17_constr_16, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_subcarrierSpacingSSB_r17_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ssb_PositionQCL_CellsToRemoveListNR_r17_21[] = {
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
static const ber_tlv_tag_t asn_DEF_ssb_PositionQCL_CellsToRemoveListNR_r17_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ssb_PositionQCL_CellsToRemoveListNR_r17_specs_21 = {
	sizeof(struct RS_ConfigSSB_NR_r15__ssb_PositionQCL_CellsToRemoveListNR_r17),
	offsetof(struct RS_ConfigSSB_NR_r15__ssb_PositionQCL_CellsToRemoveListNR_r17, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ssb_PositionQCL_CellsToRemoveListNR_r17_21 = {
	"ssb-PositionQCL-CellsToRemoveListNR-r17",
	"ssb-PositionQCL-CellsToRemoveListNR-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ssb_PositionQCL_CellsToRemoveListNR_r17_tags_21,
	sizeof(asn_DEF_ssb_PositionQCL_CellsToRemoveListNR_r17_tags_21)
		/sizeof(asn_DEF_ssb_PositionQCL_CellsToRemoveListNR_r17_tags_21[0]) - 1, /* 1 */
	asn_DEF_ssb_PositionQCL_CellsToRemoveListNR_r17_tags_21,	/* Same as above */
	sizeof(asn_DEF_ssb_PositionQCL_CellsToRemoveListNR_r17_tags_21)
		/sizeof(asn_DEF_ssb_PositionQCL_CellsToRemoveListNR_r17_tags_21[0]), /* 2 */
	{ &asn_OER_type_ssb_PositionQCL_CellsToRemoveListNR_r17_constr_21, &asn_PER_type_ssb_PositionQCL_CellsToRemoveListNR_r17_constr_21, SEQUENCE_OF_constraint },
	asn_MBR_ssb_PositionQCL_CellsToRemoveListNR_r17_21,
	1,	/* Single element */
	&asn_SPC_ssb_PositionQCL_CellsToRemoveListNR_r17_specs_21	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RS_ConfigSSB_NR_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RS_ConfigSSB_NR_r15, measTimingConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MTC_SSB_NR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measTimingConfig-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RS_ConfigSSB_NR_r15, subcarrierSpacingSSB_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_subcarrierSpacingSSB_r15_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subcarrierSpacingSSB-r15"
		},
	{ ATF_POINTER, 8, offsetof(struct RS_ConfigSSB_NR_r15, ssb_ToMeasure_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ssb_ToMeasure_r15_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-ToMeasure-r15"
		},
	{ ATF_POINTER, 7, offsetof(struct RS_ConfigSSB_NR_r15, ssb_PositionQCL_CommonNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_PositionQCL_RelationNR_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-PositionQCL-CommonNR-r16"
		},
	{ ATF_POINTER, 6, offsetof(struct RS_ConfigSSB_NR_r15, ssb_PositionQCL_CellsToAddModListNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_PositionQCL_CellsToAddModListNR_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-PositionQCL-CellsToAddModListNR-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct RS_ConfigSSB_NR_r15, ssb_PositionQCL_CellsToRemoveListNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_ssb_PositionQCL_CellsToRemoveListNR_r16_14,
		0,
		{ &asn_OER_memb_ssb_PositionQCL_CellsToRemoveListNR_r16_constr_14, &asn_PER_memb_ssb_PositionQCL_CellsToRemoveListNR_r16_constr_14,  memb_ssb_PositionQCL_CellsToRemoveListNR_r16_constraint_1 },
		0, 0, /* No default value */
		"ssb-PositionQCL-CellsToRemoveListNR-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct RS_ConfigSSB_NR_r15, subcarrierSpacingSSB_r17),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_subcarrierSpacingSSB_r17_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subcarrierSpacingSSB-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct RS_ConfigSSB_NR_r15, ssb_PositionQCL_CommonNR_r17),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_PositionQCL_RelationNR_r17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-PositionQCL-CommonNR-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct RS_ConfigSSB_NR_r15, ssb_PositionQCL_CellsToAddModListNR_r17),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_PositionQCL_CellsToAddModListNR_r17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-PositionQCL-CellsToAddModListNR-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct RS_ConfigSSB_NR_r15, ssb_PositionQCL_CellsToRemoveListNR_r17),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_ssb_PositionQCL_CellsToRemoveListNR_r17_21,
		0,
		{ &asn_OER_memb_ssb_PositionQCL_CellsToRemoveListNR_r17_constr_21, &asn_PER_memb_ssb_PositionQCL_CellsToRemoveListNR_r17_constr_21,  memb_ssb_PositionQCL_CellsToRemoveListNR_r17_constraint_1 },
		0, 0, /* No default value */
		"ssb-PositionQCL-CellsToRemoveListNR-r17"
		},
};
static const int asn_MAP_RS_ConfigSSB_NR_r15_oms_1[] = { 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_RS_ConfigSSB_NR_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RS_ConfigSSB_NR_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measTimingConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* subcarrierSpacingSSB-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ssb-ToMeasure-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ssb-PositionQCL-CommonNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ssb-PositionQCL-CellsToAddModListNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ssb-PositionQCL-CellsToRemoveListNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* subcarrierSpacingSSB-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ssb-PositionQCL-CommonNR-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ssb-PositionQCL-CellsToAddModListNR-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* ssb-PositionQCL-CellsToRemoveListNR-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_RS_ConfigSSB_NR_r15_specs_1 = {
	sizeof(struct RS_ConfigSSB_NR_r15),
	offsetof(struct RS_ConfigSSB_NR_r15, _asn_ctx),
	asn_MAP_RS_ConfigSSB_NR_r15_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_RS_ConfigSSB_NR_r15_oms_1,	/* Optional members */
	0, 8,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RS_ConfigSSB_NR_r15 = {
	"RS-ConfigSSB-NR-r15",
	"RS-ConfigSSB-NR-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_RS_ConfigSSB_NR_r15_tags_1,
	sizeof(asn_DEF_RS_ConfigSSB_NR_r15_tags_1)
		/sizeof(asn_DEF_RS_ConfigSSB_NR_r15_tags_1[0]), /* 1 */
	asn_DEF_RS_ConfigSSB_NR_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_RS_ConfigSSB_NR_r15_tags_1)
		/sizeof(asn_DEF_RS_ConfigSSB_NR_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RS_ConfigSSB_NR_r15_1,
	10,	/* Elements count */
	&asn_SPC_RS_ConfigSSB_NR_r15_specs_1	/* Additional specs */
};

