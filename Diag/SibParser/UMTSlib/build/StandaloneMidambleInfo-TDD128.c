/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "StandaloneMidambleInfo-TDD128.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_midambleConfiguration_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_midambleShift_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
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
memb_timeSlotInformation_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_subframeNum_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1)) {
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
memb_referenceBeta_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -15 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_repetitionPeriod_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_repetitionPeriod_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_midambleConfiguration_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (1..8) */,
	-1};
static asn_per_constraints_t asn_PER_memb_midambleConfiguration_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_midambleShift_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..15) */,
	-1};
static asn_per_constraints_t asn_PER_memb_midambleShift_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_timeSlotInformation_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	5	/* (SIZE(5..5)) */};
static asn_per_constraints_t asn_PER_memb_timeSlotInformation_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  5,  5 }	/* (SIZE(5..5)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_subframeNum_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (0..1) */,
	-1};
static asn_per_constraints_t asn_PER_memb_subframeNum_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_referenceBeta_constr_16 CC_NOTUSED = {
	{ 1, 0 }	/* (-15..16) */,
	-1};
static asn_per_constraints_t asn_PER_memb_referenceBeta_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -15,  16 }	/* (-15..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_repetitionPeriod_value2enum_7[] = {
	{ 0,	2,	"v1" },
	{ 1,	2,	"v2" },
	{ 2,	2,	"v4" },
	{ 3,	2,	"v8" },
	{ 4,	3,	"v16" },
	{ 5,	3,	"v32" },
	{ 6,	3,	"v64" },
	{ 7,	5,	"spare" }
};
static const unsigned int asn_MAP_repetitionPeriod_enum2value_7[] = {
	7,	/* spare(7) */
	0,	/* v1(0) */
	4,	/* v16(4) */
	1,	/* v2(1) */
	5,	/* v32(5) */
	2,	/* v4(2) */
	6,	/* v64(6) */
	3	/* v8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_repetitionPeriod_specs_7 = {
	asn_MAP_repetitionPeriod_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_repetitionPeriod_enum2value_7,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_repetitionPeriod_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_repetitionPeriod_7 = {
	"repetitionPeriod",
	"repetitionPeriod",
	&asn_OP_NativeEnumerated,
	asn_DEF_repetitionPeriod_tags_7,
	sizeof(asn_DEF_repetitionPeriod_tags_7)
		/sizeof(asn_DEF_repetitionPeriod_tags_7[0]) - 1, /* 1 */
	asn_DEF_repetitionPeriod_tags_7,	/* Same as above */
	sizeof(asn_DEF_repetitionPeriod_tags_7)
		/sizeof(asn_DEF_repetitionPeriod_tags_7[0]), /* 2 */
	{ &asn_OER_type_repetitionPeriod_constr_7, &asn_PER_type_repetitionPeriod_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_repetitionPeriod_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_StandaloneMidambleInfo_TDD128_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct StandaloneMidambleInfo_TDD128, midambleConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_midambleConfiguration_constr_2, &asn_PER_memb_midambleConfiguration_constr_2,  memb_midambleConfiguration_constraint_1 },
		0, 0, /* No default value */
		"midambleConfiguration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StandaloneMidambleInfo_TDD128, midambleShift),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_midambleShift_constr_3, &asn_PER_memb_midambleShift_constr_3,  memb_midambleShift_constraint_1 },
		0, 0, /* No default value */
		"midambleShift"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StandaloneMidambleInfo_TDD128, timeSlotInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_timeSlotInformation_constr_4, &asn_PER_memb_timeSlotInformation_constr_4,  memb_timeSlotInformation_constraint_1 },
		0, 0, /* No default value */
		"timeSlotInformation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StandaloneMidambleInfo_TDD128, activationTime),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActivationTime,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"activationTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StandaloneMidambleInfo_TDD128, subframeNum),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_subframeNum_constr_6, &asn_PER_memb_subframeNum_constr_6,  memb_subframeNum_constraint_1 },
		0, 0, /* No default value */
		"subframeNum"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StandaloneMidambleInfo_TDD128, repetitionPeriod),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_repetitionPeriod_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"repetitionPeriod"
		},
	{ ATF_POINTER, 1, offsetof(struct StandaloneMidambleInfo_TDD128, referenceBeta),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_referenceBeta_constr_16, &asn_PER_memb_referenceBeta_constr_16,  memb_referenceBeta_constraint_1 },
		0, 0, /* No default value */
		"referenceBeta"
		},
};
static const int asn_MAP_StandaloneMidambleInfo_TDD128_oms_1[] = { 6 };
static const ber_tlv_tag_t asn_DEF_StandaloneMidambleInfo_TDD128_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_StandaloneMidambleInfo_TDD128_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* midambleConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* midambleShift */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* timeSlotInformation */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* activationTime */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* subframeNum */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* repetitionPeriod */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* referenceBeta */
};
asn_SEQUENCE_specifics_t asn_SPC_StandaloneMidambleInfo_TDD128_specs_1 = {
	sizeof(struct StandaloneMidambleInfo_TDD128),
	offsetof(struct StandaloneMidambleInfo_TDD128, _asn_ctx),
	asn_MAP_StandaloneMidambleInfo_TDD128_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_StandaloneMidambleInfo_TDD128_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_StandaloneMidambleInfo_TDD128 = {
	"StandaloneMidambleInfo-TDD128",
	"StandaloneMidambleInfo-TDD128",
	&asn_OP_SEQUENCE,
	asn_DEF_StandaloneMidambleInfo_TDD128_tags_1,
	sizeof(asn_DEF_StandaloneMidambleInfo_TDD128_tags_1)
		/sizeof(asn_DEF_StandaloneMidambleInfo_TDD128_tags_1[0]), /* 1 */
	asn_DEF_StandaloneMidambleInfo_TDD128_tags_1,	/* Same as above */
	sizeof(asn_DEF_StandaloneMidambleInfo_TDD128_tags_1)
		/sizeof(asn_DEF_StandaloneMidambleInfo_TDD128_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_StandaloneMidambleInfo_TDD128_1,
	7,	/* Elements count */
	&asn_SPC_StandaloneMidambleInfo_TDD128_specs_1	/* Additional specs */
};

