/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "GANSS-SAT-Info-Almanac-BDSkp.h"

static int
memb_svID_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
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
memb_bdsAlmToa_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
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
memb_bdsAlmSqrtA_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 24)) {
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
memb_bdsAlmE_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 17)) {
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
memb_bdsAlmW_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 24)) {
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
memb_bdsAlmM0_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 24)) {
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
memb_bdsAlmOmega0_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 24)) {
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
memb_bdsAlmOmegaDot_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 17)) {
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
memb_bdsAlmDeltaI_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 16)) {
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
memb_bdsAlmA0_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 11)) {
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
memb_bdsAlmA1_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 11)) {
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
memb_bdsSvHealth_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 9)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_svID_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..63) */,
	-1};
static asn_per_constraints_t asn_PER_memb_svID_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_bdsAlmToa_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_memb_bdsAlmToa_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_bdsAlmSqrtA_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	24	/* (SIZE(24..24)) */};
static asn_per_constraints_t asn_PER_memb_bdsAlmSqrtA_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  24,  24 }	/* (SIZE(24..24)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_bdsAlmE_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	17	/* (SIZE(17..17)) */};
static asn_per_constraints_t asn_PER_memb_bdsAlmE_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  17,  17 }	/* (SIZE(17..17)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_bdsAlmW_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	24	/* (SIZE(24..24)) */};
static asn_per_constraints_t asn_PER_memb_bdsAlmW_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  24,  24 }	/* (SIZE(24..24)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_bdsAlmM0_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	24	/* (SIZE(24..24)) */};
static asn_per_constraints_t asn_PER_memb_bdsAlmM0_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  24,  24 }	/* (SIZE(24..24)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_bdsAlmOmega0_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	24	/* (SIZE(24..24)) */};
static asn_per_constraints_t asn_PER_memb_bdsAlmOmega0_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  24,  24 }	/* (SIZE(24..24)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_bdsAlmOmegaDot_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	17	/* (SIZE(17..17)) */};
static asn_per_constraints_t asn_PER_memb_bdsAlmOmegaDot_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  17,  17 }	/* (SIZE(17..17)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_bdsAlmDeltaI_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	16	/* (SIZE(16..16)) */};
static asn_per_constraints_t asn_PER_memb_bdsAlmDeltaI_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_bdsAlmA0_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	11	/* (SIZE(11..11)) */};
static asn_per_constraints_t asn_PER_memb_bdsAlmA0_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  11,  11 }	/* (SIZE(11..11)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_bdsAlmA1_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	11	/* (SIZE(11..11)) */};
static asn_per_constraints_t asn_PER_memb_bdsAlmA1_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  11,  11 }	/* (SIZE(11..11)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_bdsSvHealth_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	9	/* (SIZE(9..9)) */};
static asn_per_constraints_t asn_PER_memb_bdsSvHealth_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  9,  9 }	/* (SIZE(9..9)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_GANSS_SAT_Info_Almanac_BDSkp_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_BDSkp, svID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_svID_constr_2, &asn_PER_memb_svID_constr_2,  memb_svID_constraint_1 },
		0, 0, /* No default value */
		"svID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_BDSkp, bdsAlmToa),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_bdsAlmToa_constr_3, &asn_PER_memb_bdsAlmToa_constr_3,  memb_bdsAlmToa_constraint_1 },
		0, 0, /* No default value */
		"bdsAlmToa"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_BDSkp, bdsAlmSqrtA),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_bdsAlmSqrtA_constr_4, &asn_PER_memb_bdsAlmSqrtA_constr_4,  memb_bdsAlmSqrtA_constraint_1 },
		0, 0, /* No default value */
		"bdsAlmSqrtA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_BDSkp, bdsAlmE),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_bdsAlmE_constr_5, &asn_PER_memb_bdsAlmE_constr_5,  memb_bdsAlmE_constraint_1 },
		0, 0, /* No default value */
		"bdsAlmE"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_BDSkp, bdsAlmW),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_bdsAlmW_constr_6, &asn_PER_memb_bdsAlmW_constr_6,  memb_bdsAlmW_constraint_1 },
		0, 0, /* No default value */
		"bdsAlmW"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_BDSkp, bdsAlmM0),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_bdsAlmM0_constr_7, &asn_PER_memb_bdsAlmM0_constr_7,  memb_bdsAlmM0_constraint_1 },
		0, 0, /* No default value */
		"bdsAlmM0"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_BDSkp, bdsAlmOmega0),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_bdsAlmOmega0_constr_8, &asn_PER_memb_bdsAlmOmega0_constr_8,  memb_bdsAlmOmega0_constraint_1 },
		0, 0, /* No default value */
		"bdsAlmOmega0"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_BDSkp, bdsAlmOmegaDot),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_bdsAlmOmegaDot_constr_9, &asn_PER_memb_bdsAlmOmegaDot_constr_9,  memb_bdsAlmOmegaDot_constraint_1 },
		0, 0, /* No default value */
		"bdsAlmOmegaDot"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_BDSkp, bdsAlmDeltaI),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_bdsAlmDeltaI_constr_10, &asn_PER_memb_bdsAlmDeltaI_constr_10,  memb_bdsAlmDeltaI_constraint_1 },
		0, 0, /* No default value */
		"bdsAlmDeltaI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_BDSkp, bdsAlmA0),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_bdsAlmA0_constr_11, &asn_PER_memb_bdsAlmA0_constr_11,  memb_bdsAlmA0_constraint_1 },
		0, 0, /* No default value */
		"bdsAlmA0"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_BDSkp, bdsAlmA1),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_bdsAlmA1_constr_12, &asn_PER_memb_bdsAlmA1_constr_12,  memb_bdsAlmA1_constraint_1 },
		0, 0, /* No default value */
		"bdsAlmA1"
		},
	{ ATF_POINTER, 1, offsetof(struct GANSS_SAT_Info_Almanac_BDSkp, bdsSvHealth),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_bdsSvHealth_constr_13, &asn_PER_memb_bdsSvHealth_constr_13,  memb_bdsSvHealth_constraint_1 },
		0, 0, /* No default value */
		"bdsSvHealth"
		},
};
static const int asn_MAP_GANSS_SAT_Info_Almanac_BDSkp_oms_1[] = { 11 };
static const ber_tlv_tag_t asn_DEF_GANSS_SAT_Info_Almanac_BDSkp_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GANSS_SAT_Info_Almanac_BDSkp_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* svID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bdsAlmToa */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bdsAlmSqrtA */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* bdsAlmE */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* bdsAlmW */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* bdsAlmM0 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* bdsAlmOmega0 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* bdsAlmOmegaDot */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* bdsAlmDeltaI */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* bdsAlmA0 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* bdsAlmA1 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* bdsSvHealth */
};
asn_SEQUENCE_specifics_t asn_SPC_GANSS_SAT_Info_Almanac_BDSkp_specs_1 = {
	sizeof(struct GANSS_SAT_Info_Almanac_BDSkp),
	offsetof(struct GANSS_SAT_Info_Almanac_BDSkp, _asn_ctx),
	asn_MAP_GANSS_SAT_Info_Almanac_BDSkp_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_GANSS_SAT_Info_Almanac_BDSkp_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GANSS_SAT_Info_Almanac_BDSkp = {
	"GANSS-SAT-Info-Almanac-BDSkp",
	"GANSS-SAT-Info-Almanac-BDSkp",
	&asn_OP_SEQUENCE,
	asn_DEF_GANSS_SAT_Info_Almanac_BDSkp_tags_1,
	sizeof(asn_DEF_GANSS_SAT_Info_Almanac_BDSkp_tags_1)
		/sizeof(asn_DEF_GANSS_SAT_Info_Almanac_BDSkp_tags_1[0]), /* 1 */
	asn_DEF_GANSS_SAT_Info_Almanac_BDSkp_tags_1,	/* Same as above */
	sizeof(asn_DEF_GANSS_SAT_Info_Almanac_BDSkp_tags_1)
		/sizeof(asn_DEF_GANSS_SAT_Info_Almanac_BDSkp_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_GANSS_SAT_Info_Almanac_BDSkp_1,
	12,	/* Elements count */
	&asn_SPC_GANSS_SAT_Info_Almanac_BDSkp_specs_1	/* Additional specs */
};

