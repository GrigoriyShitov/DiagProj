/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "GSM-CellGroup.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_arfcn_Spacing_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
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
memb_numberOfFollowingARFCNs_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_explicitListOfARFCNs_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size <= 31)) {
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
memb_variableBitMapOfARFCNs_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_bandIndicator_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_bandIndicator_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_explicitListOfARFCNs_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..31)) */};
static asn_per_constraints_t asn_PER_type_explicitListOfARFCNs_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (SIZE(0..31)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_arfcn_Spacing_constr_10 CC_NOTUSED = {
	{ 1, 1 }	/* (1..8) */,
	-1};
static asn_per_constraints_t asn_PER_memb_arfcn_Spacing_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_numberOfFollowingARFCNs_constr_11 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_numberOfFollowingARFCNs_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_explicitListOfARFCNs_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..31)) */};
static asn_per_constraints_t asn_PER_memb_explicitListOfARFCNs_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (SIZE(0..31)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_variableBitMapOfARFCNs_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_variableBitMapOfARFCNs_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_followingARFCNs_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_followingARFCNs_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_bandIndicator_value2enum_3[] = {
	{ 0,	7,	"dcs1800" },
	{ 1,	7,	"pcs1900" }
};
static const unsigned int asn_MAP_bandIndicator_enum2value_3[] = {
	0,	/* dcs1800(0) */
	1	/* pcs1900(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_bandIndicator_specs_3 = {
	asn_MAP_bandIndicator_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_bandIndicator_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_bandIndicator_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bandIndicator_3 = {
	"bandIndicator",
	"bandIndicator",
	&asn_OP_NativeEnumerated,
	asn_DEF_bandIndicator_tags_3,
	sizeof(asn_DEF_bandIndicator_tags_3)
		/sizeof(asn_DEF_bandIndicator_tags_3[0]) - 1, /* 1 */
	asn_DEF_bandIndicator_tags_3,	/* Same as above */
	sizeof(asn_DEF_bandIndicator_tags_3)
		/sizeof(asn_DEF_bandIndicator_tags_3[0]), /* 2 */
	{ &asn_OER_type_bandIndicator_constr_3, &asn_PER_type_bandIndicator_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_bandIndicator_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_explicitListOfARFCNs_7[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_BCCH_ARFCN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_explicitListOfARFCNs_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_explicitListOfARFCNs_specs_7 = {
	sizeof(struct GSM_CellGroup__followingARFCNs__explicitListOfARFCNs),
	offsetof(struct GSM_CellGroup__followingARFCNs__explicitListOfARFCNs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_explicitListOfARFCNs_7 = {
	"explicitListOfARFCNs",
	"explicitListOfARFCNs",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_explicitListOfARFCNs_tags_7,
	sizeof(asn_DEF_explicitListOfARFCNs_tags_7)
		/sizeof(asn_DEF_explicitListOfARFCNs_tags_7[0]) - 1, /* 1 */
	asn_DEF_explicitListOfARFCNs_tags_7,	/* Same as above */
	sizeof(asn_DEF_explicitListOfARFCNs_tags_7)
		/sizeof(asn_DEF_explicitListOfARFCNs_tags_7[0]), /* 2 */
	{ &asn_OER_type_explicitListOfARFCNs_constr_7, &asn_PER_type_explicitListOfARFCNs_constr_7, SEQUENCE_OF_constraint },
	asn_MBR_explicitListOfARFCNs_7,
	1,	/* Single element */
	&asn_SPC_explicitListOfARFCNs_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_equallySpacedARFCNs_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GSM_CellGroup__followingARFCNs__equallySpacedARFCNs, arfcn_Spacing),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_arfcn_Spacing_constr_10, &asn_PER_memb_arfcn_Spacing_constr_10,  memb_arfcn_Spacing_constraint_9 },
		0, 0, /* No default value */
		"arfcn-Spacing"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GSM_CellGroup__followingARFCNs__equallySpacedARFCNs, numberOfFollowingARFCNs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_numberOfFollowingARFCNs_constr_11, &asn_PER_memb_numberOfFollowingARFCNs_constr_11,  memb_numberOfFollowingARFCNs_constraint_9 },
		0, 0, /* No default value */
		"numberOfFollowingARFCNs"
		},
};
static const ber_tlv_tag_t asn_DEF_equallySpacedARFCNs_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_equallySpacedARFCNs_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* arfcn-Spacing */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* numberOfFollowingARFCNs */
};
static asn_SEQUENCE_specifics_t asn_SPC_equallySpacedARFCNs_specs_9 = {
	sizeof(struct GSM_CellGroup__followingARFCNs__equallySpacedARFCNs),
	offsetof(struct GSM_CellGroup__followingARFCNs__equallySpacedARFCNs, _asn_ctx),
	asn_MAP_equallySpacedARFCNs_tag2el_9,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_equallySpacedARFCNs_9 = {
	"equallySpacedARFCNs",
	"equallySpacedARFCNs",
	&asn_OP_SEQUENCE,
	asn_DEF_equallySpacedARFCNs_tags_9,
	sizeof(asn_DEF_equallySpacedARFCNs_tags_9)
		/sizeof(asn_DEF_equallySpacedARFCNs_tags_9[0]) - 1, /* 1 */
	asn_DEF_equallySpacedARFCNs_tags_9,	/* Same as above */
	sizeof(asn_DEF_equallySpacedARFCNs_tags_9)
		/sizeof(asn_DEF_equallySpacedARFCNs_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_equallySpacedARFCNs_9,
	2,	/* Elements count */
	&asn_SPC_equallySpacedARFCNs_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_continuousRangeOfARFCNs_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GSM_CellGroup__followingARFCNs__continuousRangeOfARFCNs, endingARFCN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BCCH_ARFCN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"endingARFCN"
		},
};
static const ber_tlv_tag_t asn_DEF_continuousRangeOfARFCNs_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_continuousRangeOfARFCNs_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* endingARFCN */
};
static asn_SEQUENCE_specifics_t asn_SPC_continuousRangeOfARFCNs_specs_13 = {
	sizeof(struct GSM_CellGroup__followingARFCNs__continuousRangeOfARFCNs),
	offsetof(struct GSM_CellGroup__followingARFCNs__continuousRangeOfARFCNs, _asn_ctx),
	asn_MAP_continuousRangeOfARFCNs_tag2el_13,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_continuousRangeOfARFCNs_13 = {
	"continuousRangeOfARFCNs",
	"continuousRangeOfARFCNs",
	&asn_OP_SEQUENCE,
	asn_DEF_continuousRangeOfARFCNs_tags_13,
	sizeof(asn_DEF_continuousRangeOfARFCNs_tags_13)
		/sizeof(asn_DEF_continuousRangeOfARFCNs_tags_13[0]) - 1, /* 1 */
	asn_DEF_continuousRangeOfARFCNs_tags_13,	/* Same as above */
	sizeof(asn_DEF_continuousRangeOfARFCNs_tags_13)
		/sizeof(asn_DEF_continuousRangeOfARFCNs_tags_13[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_continuousRangeOfARFCNs_13,
	1,	/* Elements count */
	&asn_SPC_continuousRangeOfARFCNs_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_followingARFCNs_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GSM_CellGroup__followingARFCNs, choice.explicitListOfARFCNs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_explicitListOfARFCNs_7,
		0,
		{ &asn_OER_memb_explicitListOfARFCNs_constr_7, &asn_PER_memb_explicitListOfARFCNs_constr_7,  memb_explicitListOfARFCNs_constraint_6 },
		0, 0, /* No default value */
		"explicitListOfARFCNs"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GSM_CellGroup__followingARFCNs, choice.equallySpacedARFCNs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_equallySpacedARFCNs_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"equallySpacedARFCNs"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GSM_CellGroup__followingARFCNs, choice.variableBitMapOfARFCNs),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_variableBitMapOfARFCNs_constr_12, &asn_PER_memb_variableBitMapOfARFCNs_constr_12,  memb_variableBitMapOfARFCNs_constraint_6 },
		0, 0, /* No default value */
		"variableBitMapOfARFCNs"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GSM_CellGroup__followingARFCNs, choice.continuousRangeOfARFCNs),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_continuousRangeOfARFCNs_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"continuousRangeOfARFCNs"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_followingARFCNs_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitListOfARFCNs */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* equallySpacedARFCNs */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* variableBitMapOfARFCNs */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* continuousRangeOfARFCNs */
};
static asn_CHOICE_specifics_t asn_SPC_followingARFCNs_specs_6 = {
	sizeof(struct GSM_CellGroup__followingARFCNs),
	offsetof(struct GSM_CellGroup__followingARFCNs, _asn_ctx),
	offsetof(struct GSM_CellGroup__followingARFCNs, present),
	sizeof(((struct GSM_CellGroup__followingARFCNs *)0)->present),
	asn_MAP_followingARFCNs_tag2el_6,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_followingARFCNs_6 = {
	"followingARFCNs",
	"followingARFCNs",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_followingARFCNs_constr_6, &asn_PER_type_followingARFCNs_constr_6, CHOICE_constraint },
	asn_MBR_followingARFCNs_6,
	4,	/* Elements count */
	&asn_SPC_followingARFCNs_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_GSM_CellGroup_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GSM_CellGroup, startingARFCN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BCCH_ARFCN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"startingARFCN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GSM_CellGroup, bandIndicator),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_bandIndicator_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandIndicator"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GSM_CellGroup, followingARFCNs),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_followingARFCNs_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"followingARFCNs"
		},
};
static const ber_tlv_tag_t asn_DEF_GSM_CellGroup_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GSM_CellGroup_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* startingARFCN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bandIndicator */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* followingARFCNs */
};
asn_SEQUENCE_specifics_t asn_SPC_GSM_CellGroup_specs_1 = {
	sizeof(struct GSM_CellGroup),
	offsetof(struct GSM_CellGroup, _asn_ctx),
	asn_MAP_GSM_CellGroup_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GSM_CellGroup = {
	"GSM-CellGroup",
	"GSM-CellGroup",
	&asn_OP_SEQUENCE,
	asn_DEF_GSM_CellGroup_tags_1,
	sizeof(asn_DEF_GSM_CellGroup_tags_1)
		/sizeof(asn_DEF_GSM_CellGroup_tags_1[0]), /* 1 */
	asn_DEF_GSM_CellGroup_tags_1,	/* Same as above */
	sizeof(asn_DEF_GSM_CellGroup_tags_1)
		/sizeof(asn_DEF_GSM_CellGroup_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_GSM_CellGroup_1,
	3,	/* Elements count */
	&asn_SPC_GSM_CellGroup_specs_1	/* Additional specs */
};

