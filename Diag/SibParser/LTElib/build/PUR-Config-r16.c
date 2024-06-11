/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "PUR-Config-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_startSFN_r16_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_startSubFrame_r16_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 9)) {
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
memb_hsfn_LSB_Info_r16_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 1)) {
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
memb_pur_TimeAlignmentTimer_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_oer_constraints_t asn_OER_type_pur_ImplicitReleaseAfter_r16_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pur_ImplicitReleaseAfter_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_startSFN_r16_constr_10 CC_NOTUSED = {
	{ 2, 1 }	/* (0..1023) */,
	-1};
static asn_per_constraints_t asn_PER_memb_startSFN_r16_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_startSubFrame_r16_constr_11 CC_NOTUSED = {
	{ 1, 1 }	/* (0..9) */,
	-1};
static asn_per_constraints_t asn_PER_memb_startSubFrame_r16_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_hsfn_LSB_Info_r16_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	1	/* (SIZE(1..1)) */};
static asn_per_constraints_t asn_PER_memb_hsfn_LSB_Info_r16_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (SIZE(1..1)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pur_NumOccasions_r16_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pur_NumOccasions_r16_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pur_ResponseWindowTimer_r16_constr_19 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pur_ResponseWindowTimer_r16_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_pur_TimeAlignmentTimer_r16_constr_17 CC_NOTUSED = {
	{ 1, 1 }	/* (1..8) */,
	-1};
static asn_per_constraints_t asn_PER_memb_pur_TimeAlignmentTimer_r16_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_pur_ImplicitReleaseAfter_r16_value2enum_3[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n8" },
	{ 3,	5,	"spare" }
};
static const unsigned int asn_MAP_pur_ImplicitReleaseAfter_r16_enum2value_3[] = {
	0,	/* n2(0) */
	1,	/* n4(1) */
	2,	/* n8(2) */
	3	/* spare(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_pur_ImplicitReleaseAfter_r16_specs_3 = {
	asn_MAP_pur_ImplicitReleaseAfter_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_pur_ImplicitReleaseAfter_r16_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pur_ImplicitReleaseAfter_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pur_ImplicitReleaseAfter_r16_3 = {
	"pur-ImplicitReleaseAfter-r16",
	"pur-ImplicitReleaseAfter-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_pur_ImplicitReleaseAfter_r16_tags_3,
	sizeof(asn_DEF_pur_ImplicitReleaseAfter_r16_tags_3)
		/sizeof(asn_DEF_pur_ImplicitReleaseAfter_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_pur_ImplicitReleaseAfter_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_pur_ImplicitReleaseAfter_r16_tags_3)
		/sizeof(asn_DEF_pur_ImplicitReleaseAfter_r16_tags_3[0]), /* 2 */
	{ &asn_OER_type_pur_ImplicitReleaseAfter_r16_constr_3, &asn_PER_type_pur_ImplicitReleaseAfter_r16_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pur_ImplicitReleaseAfter_r16_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pur_StartTimeParameters_r16_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUR_Config_r16__pur_StartTimeParameters_r16, periodicityAndOffset_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PUR_PeriodicityAndOffset_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodicityAndOffset-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUR_Config_r16__pur_StartTimeParameters_r16, startSFN_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_startSFN_r16_constr_10, &asn_PER_memb_startSFN_r16_constr_10,  memb_startSFN_r16_constraint_8 },
		0, 0, /* No default value */
		"startSFN-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUR_Config_r16__pur_StartTimeParameters_r16, startSubFrame_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_startSubFrame_r16_constr_11, &asn_PER_memb_startSubFrame_r16_constr_11,  memb_startSubFrame_r16_constraint_8 },
		0, 0, /* No default value */
		"startSubFrame-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUR_Config_r16__pur_StartTimeParameters_r16, hsfn_LSB_Info_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_hsfn_LSB_Info_r16_constr_12, &asn_PER_memb_hsfn_LSB_Info_r16_constr_12,  memb_hsfn_LSB_Info_r16_constraint_8 },
		0, 0, /* No default value */
		"hsfn-LSB-Info-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_pur_StartTimeParameters_r16_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_pur_StartTimeParameters_r16_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* periodicityAndOffset-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* startSFN-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* startSubFrame-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* hsfn-LSB-Info-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_pur_StartTimeParameters_r16_specs_8 = {
	sizeof(struct PUR_Config_r16__pur_StartTimeParameters_r16),
	offsetof(struct PUR_Config_r16__pur_StartTimeParameters_r16, _asn_ctx),
	asn_MAP_pur_StartTimeParameters_r16_tag2el_8,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pur_StartTimeParameters_r16_8 = {
	"pur-StartTimeParameters-r16",
	"pur-StartTimeParameters-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_pur_StartTimeParameters_r16_tags_8,
	sizeof(asn_DEF_pur_StartTimeParameters_r16_tags_8)
		/sizeof(asn_DEF_pur_StartTimeParameters_r16_tags_8[0]) - 1, /* 1 */
	asn_DEF_pur_StartTimeParameters_r16_tags_8,	/* Same as above */
	sizeof(asn_DEF_pur_StartTimeParameters_r16_tags_8)
		/sizeof(asn_DEF_pur_StartTimeParameters_r16_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_pur_StartTimeParameters_r16_8,
	4,	/* Elements count */
	&asn_SPC_pur_StartTimeParameters_r16_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pur_NumOccasions_r16_value2enum_13[] = {
	{ 0,	3,	"one" },
	{ 1,	8,	"infinite" }
};
static const unsigned int asn_MAP_pur_NumOccasions_r16_enum2value_13[] = {
	1,	/* infinite(1) */
	0	/* one(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pur_NumOccasions_r16_specs_13 = {
	asn_MAP_pur_NumOccasions_r16_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_pur_NumOccasions_r16_enum2value_13,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pur_NumOccasions_r16_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pur_NumOccasions_r16_13 = {
	"pur-NumOccasions-r16",
	"pur-NumOccasions-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_pur_NumOccasions_r16_tags_13,
	sizeof(asn_DEF_pur_NumOccasions_r16_tags_13)
		/sizeof(asn_DEF_pur_NumOccasions_r16_tags_13[0]) - 1, /* 1 */
	asn_DEF_pur_NumOccasions_r16_tags_13,	/* Same as above */
	sizeof(asn_DEF_pur_NumOccasions_r16_tags_13)
		/sizeof(asn_DEF_pur_NumOccasions_r16_tags_13[0]), /* 2 */
	{ &asn_OER_type_pur_NumOccasions_r16_constr_13, &asn_PER_type_pur_NumOccasions_r16_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pur_NumOccasions_r16_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pur_ResponseWindowTimer_r16_value2enum_19[] = {
	{ 0,	5,	"sf240" },
	{ 1,	5,	"sf480" },
	{ 2,	5,	"sf960" },
	{ 3,	6,	"sf1920" },
	{ 4,	6,	"sf3840" },
	{ 5,	6,	"sf5760" },
	{ 6,	6,	"sf7680" },
	{ 7,	7,	"sf10240" }
};
static const unsigned int asn_MAP_pur_ResponseWindowTimer_r16_enum2value_19[] = {
	7,	/* sf10240(7) */
	3,	/* sf1920(3) */
	0,	/* sf240(0) */
	4,	/* sf3840(4) */
	1,	/* sf480(1) */
	5,	/* sf5760(5) */
	6,	/* sf7680(6) */
	2	/* sf960(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_pur_ResponseWindowTimer_r16_specs_19 = {
	asn_MAP_pur_ResponseWindowTimer_r16_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_pur_ResponseWindowTimer_r16_enum2value_19,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pur_ResponseWindowTimer_r16_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pur_ResponseWindowTimer_r16_19 = {
	"pur-ResponseWindowTimer-r16",
	"pur-ResponseWindowTimer-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_pur_ResponseWindowTimer_r16_tags_19,
	sizeof(asn_DEF_pur_ResponseWindowTimer_r16_tags_19)
		/sizeof(asn_DEF_pur_ResponseWindowTimer_r16_tags_19[0]) - 1, /* 1 */
	asn_DEF_pur_ResponseWindowTimer_r16_tags_19,	/* Same as above */
	sizeof(asn_DEF_pur_ResponseWindowTimer_r16_tags_19)
		/sizeof(asn_DEF_pur_ResponseWindowTimer_r16_tags_19[0]), /* 2 */
	{ &asn_OER_type_pur_ResponseWindowTimer_r16_constr_19, &asn_PER_type_pur_ResponseWindowTimer_r16_constr_19, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pur_ResponseWindowTimer_r16_specs_19	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PUR_Config_r16_1[] = {
	{ ATF_POINTER, 3, offsetof(struct PUR_Config_r16, pur_ConfigID_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUR_ConfigID_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pur-ConfigID-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct PUR_Config_r16, pur_ImplicitReleaseAfter_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pur_ImplicitReleaseAfter_r16_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pur-ImplicitReleaseAfter-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct PUR_Config_r16, pur_StartTimeParameters_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_pur_StartTimeParameters_r16_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pur-StartTimeParameters-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUR_Config_r16, pur_NumOccasions_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pur_NumOccasions_r16_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pur-NumOccasions-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct PUR_Config_r16, pur_RNTI_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pur-RNTI-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct PUR_Config_r16, pur_TimeAlignmentTimer_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_pur_TimeAlignmentTimer_r16_constr_17, &asn_PER_memb_pur_TimeAlignmentTimer_r16_constr_17,  memb_pur_TimeAlignmentTimer_r16_constraint_1 },
		0, 0, /* No default value */
		"pur-TimeAlignmentTimer-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct PUR_Config_r16, pur_RSRP_ChangeThreshold_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SetupRelease_4114P17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pur-RSRP-ChangeThreshold-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct PUR_Config_r16, pur_ResponseWindowTimer_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pur_ResponseWindowTimer_r16_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pur-ResponseWindowTimer-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct PUR_Config_r16, pur_MPDCCH_Config_r16),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUR_MPDCCH_Config_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pur-MPDCCH-Config-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUR_Config_r16, pur_PDSCH_FreqHopping_r16),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pur-PDSCH-FreqHopping-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct PUR_Config_r16, pur_PUCCH_Config_r16),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUR_PUCCH_Config_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pur-PUCCH-Config-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct PUR_Config_r16, pur_PUSCH_Config_r16),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUR_PUSCH_Config_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pur-PUSCH-Config-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct PUR_Config_r16, pur_PDSCH_maxTBS_r17),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pur-PDSCH-maxTBS-r17"
		},
};
static const int asn_MAP_PUR_Config_r16_oms_1[] = { 0, 1, 2, 4, 5, 6, 7, 8, 10, 11, 12 };
static const ber_tlv_tag_t asn_DEF_PUR_Config_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PUR_Config_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pur-ConfigID-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pur-ImplicitReleaseAfter-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pur-StartTimeParameters-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pur-NumOccasions-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pur-RNTI-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* pur-TimeAlignmentTimer-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pur-RSRP-ChangeThreshold-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* pur-ResponseWindowTimer-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* pur-MPDCCH-Config-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* pur-PDSCH-FreqHopping-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* pur-PUCCH-Config-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* pur-PUSCH-Config-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* pur-PDSCH-maxTBS-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_PUR_Config_r16_specs_1 = {
	sizeof(struct PUR_Config_r16),
	offsetof(struct PUR_Config_r16, _asn_ctx),
	asn_MAP_PUR_Config_r16_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_PUR_Config_r16_oms_1,	/* Optional members */
	10, 1,	/* Root/Additions */
	12,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PUR_Config_r16 = {
	"PUR-Config-r16",
	"PUR-Config-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_PUR_Config_r16_tags_1,
	sizeof(asn_DEF_PUR_Config_r16_tags_1)
		/sizeof(asn_DEF_PUR_Config_r16_tags_1[0]), /* 1 */
	asn_DEF_PUR_Config_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUR_Config_r16_tags_1)
		/sizeof(asn_DEF_PUR_Config_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PUR_Config_r16_1,
	13,	/* Elements count */
	&asn_SPC_PUR_Config_r16_specs_1	/* Additional specs */
};

