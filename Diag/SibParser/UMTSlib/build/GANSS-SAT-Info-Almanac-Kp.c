/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "GANSS-SAT-Info-Almanac-Kp.h"

static int
memb_svId_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_ganss_alm_e_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_ganss_delta_I_alm_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_ganss_omegadot_alm_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_ganss_svstatusINAV_alm_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 4)) {
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
memb_ganss_svstatusFNAV_alm_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 2)) {
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
memb_ganss_delta_a_sqrt_alm_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 13)) {
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
memb_ganss_omegazero_alm_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_ganss_m_zero_alm_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_ganss_omega_alm_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_ganss_af_zero_alm_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_ganss_af_one_alm_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 13)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_svId_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..63) */,
	-1};
static asn_per_constraints_t asn_PER_memb_svId_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ganss_alm_e_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	11	/* (SIZE(11..11)) */};
static asn_per_constraints_t asn_PER_memb_ganss_alm_e_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  11,  11 }	/* (SIZE(11..11)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ganss_delta_I_alm_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	11	/* (SIZE(11..11)) */};
static asn_per_constraints_t asn_PER_memb_ganss_delta_I_alm_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  11,  11 }	/* (SIZE(11..11)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ganss_omegadot_alm_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	11	/* (SIZE(11..11)) */};
static asn_per_constraints_t asn_PER_memb_ganss_omegadot_alm_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  11,  11 }	/* (SIZE(11..11)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ganss_svstatusINAV_alm_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	4	/* (SIZE(4..4)) */};
static asn_per_constraints_t asn_PER_memb_ganss_svstatusINAV_alm_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ganss_svstatusFNAV_alm_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_memb_ganss_svstatusFNAV_alm_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ganss_delta_a_sqrt_alm_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	13	/* (SIZE(13..13)) */};
static asn_per_constraints_t asn_PER_memb_ganss_delta_a_sqrt_alm_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  13,  13 }	/* (SIZE(13..13)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ganss_omegazero_alm_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	16	/* (SIZE(16..16)) */};
static asn_per_constraints_t asn_PER_memb_ganss_omegazero_alm_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ganss_m_zero_alm_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	16	/* (SIZE(16..16)) */};
static asn_per_constraints_t asn_PER_memb_ganss_m_zero_alm_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ganss_omega_alm_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	16	/* (SIZE(16..16)) */};
static asn_per_constraints_t asn_PER_memb_ganss_omega_alm_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ganss_af_zero_alm_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	16	/* (SIZE(16..16)) */};
static asn_per_constraints_t asn_PER_memb_ganss_af_zero_alm_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ganss_af_one_alm_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	13	/* (SIZE(13..13)) */};
static asn_per_constraints_t asn_PER_memb_ganss_af_one_alm_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  13,  13 }	/* (SIZE(13..13)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_GANSS_SAT_Info_Almanac_Kp_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_Kp, svId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_svId_constr_2, &asn_PER_memb_svId_constr_2,  memb_svId_constraint_1 },
		0, 0, /* No default value */
		"svId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_Kp, ganss_alm_e),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_ganss_alm_e_constr_3, &asn_PER_memb_ganss_alm_e_constr_3,  memb_ganss_alm_e_constraint_1 },
		0, 0, /* No default value */
		"ganss-alm-e"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_Kp, ganss_delta_I_alm),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_ganss_delta_I_alm_constr_4, &asn_PER_memb_ganss_delta_I_alm_constr_4,  memb_ganss_delta_I_alm_constraint_1 },
		0, 0, /* No default value */
		"ganss-delta-I-alm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_Kp, ganss_omegadot_alm),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_ganss_omegadot_alm_constr_5, &asn_PER_memb_ganss_omegadot_alm_constr_5,  memb_ganss_omegadot_alm_constraint_1 },
		0, 0, /* No default value */
		"ganss-omegadot-alm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_Kp, ganss_svstatusINAV_alm),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_ganss_svstatusINAV_alm_constr_6, &asn_PER_memb_ganss_svstatusINAV_alm_constr_6,  memb_ganss_svstatusINAV_alm_constraint_1 },
		0, 0, /* No default value */
		"ganss-svstatusINAV-alm"
		},
	{ ATF_POINTER, 1, offsetof(struct GANSS_SAT_Info_Almanac_Kp, ganss_svstatusFNAV_alm),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_ganss_svstatusFNAV_alm_constr_7, &asn_PER_memb_ganss_svstatusFNAV_alm_constr_7,  memb_ganss_svstatusFNAV_alm_constraint_1 },
		0, 0, /* No default value */
		"ganss-svstatusFNAV-alm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_Kp, ganss_delta_a_sqrt_alm),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_ganss_delta_a_sqrt_alm_constr_8, &asn_PER_memb_ganss_delta_a_sqrt_alm_constr_8,  memb_ganss_delta_a_sqrt_alm_constraint_1 },
		0, 0, /* No default value */
		"ganss-delta-a-sqrt-alm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_Kp, ganss_omegazero_alm),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_ganss_omegazero_alm_constr_9, &asn_PER_memb_ganss_omegazero_alm_constr_9,  memb_ganss_omegazero_alm_constraint_1 },
		0, 0, /* No default value */
		"ganss-omegazero-alm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_Kp, ganss_m_zero_alm),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_ganss_m_zero_alm_constr_10, &asn_PER_memb_ganss_m_zero_alm_constr_10,  memb_ganss_m_zero_alm_constraint_1 },
		0, 0, /* No default value */
		"ganss-m-zero-alm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_Kp, ganss_omega_alm),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_ganss_omega_alm_constr_11, &asn_PER_memb_ganss_omega_alm_constr_11,  memb_ganss_omega_alm_constraint_1 },
		0, 0, /* No default value */
		"ganss-omega-alm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_Kp, ganss_af_zero_alm),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_ganss_af_zero_alm_constr_12, &asn_PER_memb_ganss_af_zero_alm_constr_12,  memb_ganss_af_zero_alm_constraint_1 },
		0, 0, /* No default value */
		"ganss-af-zero-alm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSS_SAT_Info_Almanac_Kp, ganss_af_one_alm),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_ganss_af_one_alm_constr_13, &asn_PER_memb_ganss_af_one_alm_constr_13,  memb_ganss_af_one_alm_constraint_1 },
		0, 0, /* No default value */
		"ganss-af-one-alm"
		},
};
static const int asn_MAP_GANSS_SAT_Info_Almanac_Kp_oms_1[] = { 5 };
static const ber_tlv_tag_t asn_DEF_GANSS_SAT_Info_Almanac_Kp_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GANSS_SAT_Info_Almanac_Kp_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* svId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ganss-alm-e */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ganss-delta-I-alm */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ganss-omegadot-alm */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ganss-svstatusINAV-alm */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ganss-svstatusFNAV-alm */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ganss-delta-a-sqrt-alm */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ganss-omegazero-alm */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ganss-m-zero-alm */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ganss-omega-alm */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ganss-af-zero-alm */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* ganss-af-one-alm */
};
asn_SEQUENCE_specifics_t asn_SPC_GANSS_SAT_Info_Almanac_Kp_specs_1 = {
	sizeof(struct GANSS_SAT_Info_Almanac_Kp),
	offsetof(struct GANSS_SAT_Info_Almanac_Kp, _asn_ctx),
	asn_MAP_GANSS_SAT_Info_Almanac_Kp_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_GANSS_SAT_Info_Almanac_Kp_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GANSS_SAT_Info_Almanac_Kp = {
	"GANSS-SAT-Info-Almanac-Kp",
	"GANSS-SAT-Info-Almanac-Kp",
	&asn_OP_SEQUENCE,
	asn_DEF_GANSS_SAT_Info_Almanac_Kp_tags_1,
	sizeof(asn_DEF_GANSS_SAT_Info_Almanac_Kp_tags_1)
		/sizeof(asn_DEF_GANSS_SAT_Info_Almanac_Kp_tags_1[0]), /* 1 */
	asn_DEF_GANSS_SAT_Info_Almanac_Kp_tags_1,	/* Same as above */
	sizeof(asn_DEF_GANSS_SAT_Info_Almanac_Kp_tags_1)
		/sizeof(asn_DEF_GANSS_SAT_Info_Almanac_Kp_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_GANSS_SAT_Info_Almanac_Kp_1,
	12,	/* Elements count */
	&asn_SPC_GANSS_SAT_Info_Almanac_Kp_specs_1	/* Additional specs */
};

