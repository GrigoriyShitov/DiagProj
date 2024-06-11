/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SPDCCH-Elements-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_numberRB_InFreq_domain_r15_constraint_17(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 100)) {
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
memb_resourceBlockAssignment_r15_constraint_17(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 98)) {
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
memb_NativeInteger_constraint_21(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 49)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_spdcch_SetConfigId_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
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
memb_spdcch_NoOfSymbols_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_dmrs_ScramblingSequenceInt_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 503)) {
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
memb_dci7_CandidatesPerAL_PDCCH_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 4)) {
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
memb_dci7_CandidateSetsPerAL_SPDCCH_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 2)) {
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
memb_subslotApplicability_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 5)) {
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
memb_al_StartingPointSPDCCH_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_spdcch_SetReferenceSig_r15_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_spdcch_SetReferenceSig_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_transmissionType_r15_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_transmissionType_r15_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_dci7_CandidatesPerAL_PDCCH_r15_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_dci7_CandidatesPerAL_PDCCH_r15_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_dci7_CandidateSetsPerAL_SPDCCH_r15_constr_15 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2)) */};
static asn_per_constraints_t asn_PER_type_dci7_CandidateSetsPerAL_SPDCCH_r15_constr_15 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_numberRB_InFreq_domain_r15_constr_18 CC_NOTUSED = {
	{ 1, 1 }	/* (2..100) */,
	-1};
static asn_per_constraints_t asn_PER_memb_numberRB_InFreq_domain_r15_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  2,  100 }	/* (2..100) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_resourceBlockAssignment_r15_constr_19 CC_NOTUSED = {
	{ 0, 0 },
	98	/* (SIZE(98..98)) */};
static asn_per_constraints_t asn_PER_memb_resourceBlockAssignment_r15_constr_19 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  98,  98 }	/* (SIZE(98..98)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_Member_constr_22 CC_NOTUSED = {
	{ 1, 1 }	/* (0..49) */,
	-1};
static asn_per_constraints_t asn_PER_memb_Member_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  49 }	/* (0..49) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_al_StartingPointSPDCCH_r15_constr_21 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_al_StartingPointSPDCCH_r15_constr_21 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_subframeType_r15_constr_23 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_subframeType_r15_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_rateMatchingMode_r15_constr_27 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_rateMatchingMode_r15_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_spdcch_SetConfigId_r15_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (0..3) */,
	-1};
static asn_per_constraints_t asn_PER_memb_spdcch_SetConfigId_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_spdcch_NoOfSymbols_r15_constr_11 CC_NOTUSED = {
	{ 1, 1 }	/* (1..2) */,
	-1};
static asn_per_constraints_t asn_PER_memb_spdcch_NoOfSymbols_r15_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (1..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_dmrs_ScramblingSequenceInt_r15_constr_12 CC_NOTUSED = {
	{ 2, 1 }	/* (0..503) */,
	-1};
static asn_per_constraints_t asn_PER_memb_dmrs_ScramblingSequenceInt_r15_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  503 }	/* (0..503) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_dci7_CandidatesPerAL_PDCCH_r15_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_dci7_CandidatesPerAL_PDCCH_r15_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_dci7_CandidateSetsPerAL_SPDCCH_r15_constr_15 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2)) */};
static asn_per_constraints_t asn_PER_memb_dci7_CandidateSetsPerAL_SPDCCH_r15_constr_15 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_subslotApplicability_r15_constr_20 CC_NOTUSED = {
	{ 0, 0 },
	5	/* (SIZE(5..5)) */};
static asn_per_constraints_t asn_PER_memb_subslotApplicability_r15_constr_20 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  5,  5 }	/* (SIZE(5..5)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_al_StartingPointSPDCCH_r15_constr_21 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_al_StartingPointSPDCCH_r15_constr_21 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_SPDCCH_Elements_r15_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_SPDCCH_Elements_r15_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_spdcch_SetReferenceSig_r15_value2enum_5[] = {
	{ 0,	3,	"crs" },
	{ 1,	4,	"dmrs" }
};
static const unsigned int asn_MAP_spdcch_SetReferenceSig_r15_enum2value_5[] = {
	0,	/* crs(0) */
	1	/* dmrs(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_spdcch_SetReferenceSig_r15_specs_5 = {
	asn_MAP_spdcch_SetReferenceSig_r15_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_spdcch_SetReferenceSig_r15_enum2value_5,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_spdcch_SetReferenceSig_r15_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_spdcch_SetReferenceSig_r15_5 = {
	"spdcch-SetReferenceSig-r15",
	"spdcch-SetReferenceSig-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_spdcch_SetReferenceSig_r15_tags_5,
	sizeof(asn_DEF_spdcch_SetReferenceSig_r15_tags_5)
		/sizeof(asn_DEF_spdcch_SetReferenceSig_r15_tags_5[0]) - 1, /* 1 */
	asn_DEF_spdcch_SetReferenceSig_r15_tags_5,	/* Same as above */
	sizeof(asn_DEF_spdcch_SetReferenceSig_r15_tags_5)
		/sizeof(asn_DEF_spdcch_SetReferenceSig_r15_tags_5[0]), /* 2 */
	{ &asn_OER_type_spdcch_SetReferenceSig_r15_constr_5, &asn_PER_type_spdcch_SetReferenceSig_r15_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_spdcch_SetReferenceSig_r15_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_transmissionType_r15_value2enum_8[] = {
	{ 0,	9,	"localised" },
	{ 1,	11,	"distributed" }
};
static const unsigned int asn_MAP_transmissionType_r15_enum2value_8[] = {
	1,	/* distributed(1) */
	0	/* localised(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_transmissionType_r15_specs_8 = {
	asn_MAP_transmissionType_r15_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_transmissionType_r15_enum2value_8,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_transmissionType_r15_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_transmissionType_r15_8 = {
	"transmissionType-r15",
	"transmissionType-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_transmissionType_r15_tags_8,
	sizeof(asn_DEF_transmissionType_r15_tags_8)
		/sizeof(asn_DEF_transmissionType_r15_tags_8[0]) - 1, /* 1 */
	asn_DEF_transmissionType_r15_tags_8,	/* Same as above */
	sizeof(asn_DEF_transmissionType_r15_tags_8)
		/sizeof(asn_DEF_transmissionType_r15_tags_8[0]), /* 2 */
	{ &asn_OER_type_transmissionType_r15_constr_8, &asn_PER_type_transmissionType_r15_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_transmissionType_r15_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_dci7_CandidatesPerAL_PDCCH_r15_13[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_DCI7_Candidates_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_dci7_CandidatesPerAL_PDCCH_r15_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_dci7_CandidatesPerAL_PDCCH_r15_specs_13 = {
	sizeof(struct SPDCCH_Elements_r15__setup__dci7_CandidatesPerAL_PDCCH_r15),
	offsetof(struct SPDCCH_Elements_r15__setup__dci7_CandidatesPerAL_PDCCH_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dci7_CandidatesPerAL_PDCCH_r15_13 = {
	"dci7-CandidatesPerAL-PDCCH-r15",
	"dci7-CandidatesPerAL-PDCCH-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_dci7_CandidatesPerAL_PDCCH_r15_tags_13,
	sizeof(asn_DEF_dci7_CandidatesPerAL_PDCCH_r15_tags_13)
		/sizeof(asn_DEF_dci7_CandidatesPerAL_PDCCH_r15_tags_13[0]) - 1, /* 1 */
	asn_DEF_dci7_CandidatesPerAL_PDCCH_r15_tags_13,	/* Same as above */
	sizeof(asn_DEF_dci7_CandidatesPerAL_PDCCH_r15_tags_13)
		/sizeof(asn_DEF_dci7_CandidatesPerAL_PDCCH_r15_tags_13[0]), /* 2 */
	{ &asn_OER_type_dci7_CandidatesPerAL_PDCCH_r15_constr_13, &asn_PER_type_dci7_CandidatesPerAL_PDCCH_r15_constr_13, SEQUENCE_OF_constraint },
	asn_MBR_dci7_CandidatesPerAL_PDCCH_r15_13,
	1,	/* Single element */
	&asn_SPC_dci7_CandidatesPerAL_PDCCH_r15_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_dci7_CandidateSetsPerAL_SPDCCH_r15_15[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_DCI7_CandidatesPerAL_SPDCCH_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_dci7_CandidateSetsPerAL_SPDCCH_r15_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_dci7_CandidateSetsPerAL_SPDCCH_r15_specs_15 = {
	sizeof(struct SPDCCH_Elements_r15__setup__dci7_CandidateSetsPerAL_SPDCCH_r15),
	offsetof(struct SPDCCH_Elements_r15__setup__dci7_CandidateSetsPerAL_SPDCCH_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dci7_CandidateSetsPerAL_SPDCCH_r15_15 = {
	"dci7-CandidateSetsPerAL-SPDCCH-r15",
	"dci7-CandidateSetsPerAL-SPDCCH-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_dci7_CandidateSetsPerAL_SPDCCH_r15_tags_15,
	sizeof(asn_DEF_dci7_CandidateSetsPerAL_SPDCCH_r15_tags_15)
		/sizeof(asn_DEF_dci7_CandidateSetsPerAL_SPDCCH_r15_tags_15[0]) - 1, /* 1 */
	asn_DEF_dci7_CandidateSetsPerAL_SPDCCH_r15_tags_15,	/* Same as above */
	sizeof(asn_DEF_dci7_CandidateSetsPerAL_SPDCCH_r15_tags_15)
		/sizeof(asn_DEF_dci7_CandidateSetsPerAL_SPDCCH_r15_tags_15[0]), /* 2 */
	{ &asn_OER_type_dci7_CandidateSetsPerAL_SPDCCH_r15_constr_15, &asn_PER_type_dci7_CandidateSetsPerAL_SPDCCH_r15_constr_15, SEQUENCE_OF_constraint },
	asn_MBR_dci7_CandidateSetsPerAL_SPDCCH_r15_15,
	1,	/* Single element */
	&asn_SPC_dci7_CandidateSetsPerAL_SPDCCH_r15_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_resourceBlockAssignment_r15_17[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SPDCCH_Elements_r15__setup__resourceBlockAssignment_r15, numberRB_InFreq_domain_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_numberRB_InFreq_domain_r15_constr_18, &asn_PER_memb_numberRB_InFreq_domain_r15_constr_18,  memb_numberRB_InFreq_domain_r15_constraint_17 },
		0, 0, /* No default value */
		"numberRB-InFreq-domain-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SPDCCH_Elements_r15__setup__resourceBlockAssignment_r15, resourceBlockAssignment_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_resourceBlockAssignment_r15_constr_19, &asn_PER_memb_resourceBlockAssignment_r15_constr_19,  memb_resourceBlockAssignment_r15_constraint_17 },
		0, 0, /* No default value */
		"resourceBlockAssignment-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_resourceBlockAssignment_r15_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_resourceBlockAssignment_r15_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* numberRB-InFreq-domain-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* resourceBlockAssignment-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_resourceBlockAssignment_r15_specs_17 = {
	sizeof(struct SPDCCH_Elements_r15__setup__resourceBlockAssignment_r15),
	offsetof(struct SPDCCH_Elements_r15__setup__resourceBlockAssignment_r15, _asn_ctx),
	asn_MAP_resourceBlockAssignment_r15_tag2el_17,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_resourceBlockAssignment_r15_17 = {
	"resourceBlockAssignment-r15",
	"resourceBlockAssignment-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_resourceBlockAssignment_r15_tags_17,
	sizeof(asn_DEF_resourceBlockAssignment_r15_tags_17)
		/sizeof(asn_DEF_resourceBlockAssignment_r15_tags_17[0]) - 1, /* 1 */
	asn_DEF_resourceBlockAssignment_r15_tags_17,	/* Same as above */
	sizeof(asn_DEF_resourceBlockAssignment_r15_tags_17)
		/sizeof(asn_DEF_resourceBlockAssignment_r15_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_resourceBlockAssignment_r15_17,
	2,	/* Elements count */
	&asn_SPC_resourceBlockAssignment_r15_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_al_StartingPointSPDCCH_r15_21[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_Member_constr_22, &asn_PER_memb_Member_constr_22,  memb_NativeInteger_constraint_21 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_al_StartingPointSPDCCH_r15_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_al_StartingPointSPDCCH_r15_specs_21 = {
	sizeof(struct SPDCCH_Elements_r15__setup__al_StartingPointSPDCCH_r15),
	offsetof(struct SPDCCH_Elements_r15__setup__al_StartingPointSPDCCH_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_al_StartingPointSPDCCH_r15_21 = {
	"al-StartingPointSPDCCH-r15",
	"al-StartingPointSPDCCH-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_al_StartingPointSPDCCH_r15_tags_21,
	sizeof(asn_DEF_al_StartingPointSPDCCH_r15_tags_21)
		/sizeof(asn_DEF_al_StartingPointSPDCCH_r15_tags_21[0]) - 1, /* 1 */
	asn_DEF_al_StartingPointSPDCCH_r15_tags_21,	/* Same as above */
	sizeof(asn_DEF_al_StartingPointSPDCCH_r15_tags_21)
		/sizeof(asn_DEF_al_StartingPointSPDCCH_r15_tags_21[0]), /* 2 */
	{ &asn_OER_type_al_StartingPointSPDCCH_r15_constr_21, &asn_PER_type_al_StartingPointSPDCCH_r15_constr_21, SEQUENCE_OF_constraint },
	asn_MBR_al_StartingPointSPDCCH_r15_21,
	1,	/* Single element */
	&asn_SPC_al_StartingPointSPDCCH_r15_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_subframeType_r15_value2enum_23[] = {
	{ 0,	5,	"mbsfn" },
	{ 1,	8,	"nonmbsfn" },
	{ 2,	3,	"all" }
};
static const unsigned int asn_MAP_subframeType_r15_enum2value_23[] = {
	2,	/* all(2) */
	0,	/* mbsfn(0) */
	1	/* nonmbsfn(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_subframeType_r15_specs_23 = {
	asn_MAP_subframeType_r15_value2enum_23,	/* "tag" => N; sorted by tag */
	asn_MAP_subframeType_r15_enum2value_23,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_subframeType_r15_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subframeType_r15_23 = {
	"subframeType-r15",
	"subframeType-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_subframeType_r15_tags_23,
	sizeof(asn_DEF_subframeType_r15_tags_23)
		/sizeof(asn_DEF_subframeType_r15_tags_23[0]) - 1, /* 1 */
	asn_DEF_subframeType_r15_tags_23,	/* Same as above */
	sizeof(asn_DEF_subframeType_r15_tags_23)
		/sizeof(asn_DEF_subframeType_r15_tags_23[0]), /* 2 */
	{ &asn_OER_type_subframeType_r15_constr_23, &asn_PER_type_subframeType_r15_constr_23, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_subframeType_r15_specs_23	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_rateMatchingMode_r15_value2enum_27[] = {
	{ 0,	2,	"m1" },
	{ 1,	2,	"m2" },
	{ 2,	2,	"m3" },
	{ 3,	2,	"m4" }
};
static const unsigned int asn_MAP_rateMatchingMode_r15_enum2value_27[] = {
	0,	/* m1(0) */
	1,	/* m2(1) */
	2,	/* m3(2) */
	3	/* m4(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_rateMatchingMode_r15_specs_27 = {
	asn_MAP_rateMatchingMode_r15_value2enum_27,	/* "tag" => N; sorted by tag */
	asn_MAP_rateMatchingMode_r15_enum2value_27,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rateMatchingMode_r15_tags_27[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rateMatchingMode_r15_27 = {
	"rateMatchingMode-r15",
	"rateMatchingMode-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_rateMatchingMode_r15_tags_27,
	sizeof(asn_DEF_rateMatchingMode_r15_tags_27)
		/sizeof(asn_DEF_rateMatchingMode_r15_tags_27[0]) - 1, /* 1 */
	asn_DEF_rateMatchingMode_r15_tags_27,	/* Same as above */
	sizeof(asn_DEF_rateMatchingMode_r15_tags_27)
		/sizeof(asn_DEF_rateMatchingMode_r15_tags_27[0]), /* 2 */
	{ &asn_OER_type_rateMatchingMode_r15_constr_27, &asn_PER_type_rateMatchingMode_r15_constr_27, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rateMatchingMode_r15_specs_27	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_POINTER, 12, offsetof(struct SPDCCH_Elements_r15__setup, spdcch_SetConfigId_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_spdcch_SetConfigId_r15_constr_4, &asn_PER_memb_spdcch_SetConfigId_r15_constr_4,  memb_spdcch_SetConfigId_r15_constraint_3 },
		0, 0, /* No default value */
		"spdcch-SetConfigId-r15"
		},
	{ ATF_POINTER, 11, offsetof(struct SPDCCH_Elements_r15__setup, spdcch_SetReferenceSig_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_spdcch_SetReferenceSig_r15_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spdcch-SetReferenceSig-r15"
		},
	{ ATF_POINTER, 10, offsetof(struct SPDCCH_Elements_r15__setup, transmissionType_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_transmissionType_r15_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transmissionType-r15"
		},
	{ ATF_POINTER, 9, offsetof(struct SPDCCH_Elements_r15__setup, spdcch_NoOfSymbols_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_spdcch_NoOfSymbols_r15_constr_11, &asn_PER_memb_spdcch_NoOfSymbols_r15_constr_11,  memb_spdcch_NoOfSymbols_r15_constraint_3 },
		0, 0, /* No default value */
		"spdcch-NoOfSymbols-r15"
		},
	{ ATF_POINTER, 8, offsetof(struct SPDCCH_Elements_r15__setup, dmrs_ScramblingSequenceInt_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_dmrs_ScramblingSequenceInt_r15_constr_12, &asn_PER_memb_dmrs_ScramblingSequenceInt_r15_constr_12,  memb_dmrs_ScramblingSequenceInt_r15_constraint_3 },
		0, 0, /* No default value */
		"dmrs-ScramblingSequenceInt-r15"
		},
	{ ATF_POINTER, 7, offsetof(struct SPDCCH_Elements_r15__setup, dci7_CandidatesPerAL_PDCCH_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_dci7_CandidatesPerAL_PDCCH_r15_13,
		0,
		{ &asn_OER_memb_dci7_CandidatesPerAL_PDCCH_r15_constr_13, &asn_PER_memb_dci7_CandidatesPerAL_PDCCH_r15_constr_13,  memb_dci7_CandidatesPerAL_PDCCH_r15_constraint_3 },
		0, 0, /* No default value */
		"dci7-CandidatesPerAL-PDCCH-r15"
		},
	{ ATF_POINTER, 6, offsetof(struct SPDCCH_Elements_r15__setup, dci7_CandidateSetsPerAL_SPDCCH_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_dci7_CandidateSetsPerAL_SPDCCH_r15_15,
		0,
		{ &asn_OER_memb_dci7_CandidateSetsPerAL_SPDCCH_r15_constr_15, &asn_PER_memb_dci7_CandidateSetsPerAL_SPDCCH_r15_constr_15,  memb_dci7_CandidateSetsPerAL_SPDCCH_r15_constraint_3 },
		0, 0, /* No default value */
		"dci7-CandidateSetsPerAL-SPDCCH-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct SPDCCH_Elements_r15__setup, resourceBlockAssignment_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_resourceBlockAssignment_r15_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resourceBlockAssignment-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct SPDCCH_Elements_r15__setup, subslotApplicability_r15),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_subslotApplicability_r15_constr_20, &asn_PER_memb_subslotApplicability_r15_constr_20,  memb_subslotApplicability_r15_constraint_3 },
		0, 0, /* No default value */
		"subslotApplicability-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct SPDCCH_Elements_r15__setup, al_StartingPointSPDCCH_r15),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_al_StartingPointSPDCCH_r15_21,
		0,
		{ &asn_OER_memb_al_StartingPointSPDCCH_r15_constr_21, &asn_PER_memb_al_StartingPointSPDCCH_r15_constr_21,  memb_al_StartingPointSPDCCH_r15_constraint_3 },
		0, 0, /* No default value */
		"al-StartingPointSPDCCH-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct SPDCCH_Elements_r15__setup, subframeType_r15),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_subframeType_r15_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframeType-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SPDCCH_Elements_r15__setup, rateMatchingMode_r15),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rateMatchingMode_r15_27,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rateMatchingMode-r15"
		},
};
static const int asn_MAP_setup_oms_3[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* spdcch-SetConfigId-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* spdcch-SetReferenceSig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* transmissionType-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* spdcch-NoOfSymbols-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dmrs-ScramblingSequenceInt-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dci7-CandidatesPerAL-PDCCH-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* dci7-CandidateSetsPerAL-SPDCCH-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* resourceBlockAssignment-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* subslotApplicability-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* al-StartingPointSPDCCH-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* subframeType-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* rateMatchingMode-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct SPDCCH_Elements_r15__setup),
	offsetof(struct SPDCCH_Elements_r15__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	12,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	12, 0,	/* Root/Additions */
	12,	/* First extension addition */
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
	12,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SPDCCH_Elements_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SPDCCH_Elements_r15, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SPDCCH_Elements_r15, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SPDCCH_Elements_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_SPDCCH_Elements_r15_specs_1 = {
	sizeof(struct SPDCCH_Elements_r15),
	offsetof(struct SPDCCH_Elements_r15, _asn_ctx),
	offsetof(struct SPDCCH_Elements_r15, present),
	sizeof(((struct SPDCCH_Elements_r15 *)0)->present),
	asn_MAP_SPDCCH_Elements_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SPDCCH_Elements_r15 = {
	"SPDCCH-Elements-r15",
	"SPDCCH-Elements-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_SPDCCH_Elements_r15_constr_1, &asn_PER_type_SPDCCH_Elements_r15_constr_1, CHOICE_constraint },
	asn_MBR_SPDCCH_Elements_r15_1,
	2,	/* Elements count */
	&asn_SPC_SPDCCH_Elements_r15_specs_1	/* Additional specs */
};

