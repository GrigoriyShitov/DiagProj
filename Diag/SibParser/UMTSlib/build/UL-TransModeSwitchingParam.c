/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UL-TransModeSwitchingParam.h"

static int
memb_k_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32)) {
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
memb_l_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32)) {
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
memb_m_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_k_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (1..32) */,
	-1};
static asn_per_constraints_t asn_PER_memb_k_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_l_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (1..32) */,
	-1};
static asn_per_constraints_t asn_PER_memb_l_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_m_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (1..32) */,
	-1};
static asn_per_constraints_t asn_PER_memb_m_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UL_TransModeSwitchingParam_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_TransModeSwitchingParam, k),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_k_constr_2, &asn_PER_memb_k_constr_2,  memb_k_constraint_1 },
		0, 0, /* No default value */
		"k"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_TransModeSwitchingParam, l),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_l_constr_3, &asn_PER_memb_l_constr_3,  memb_l_constraint_1 },
		0, 0, /* No default value */
		"l"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_TransModeSwitchingParam, m),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_m_constr_4, &asn_PER_memb_m_constr_4,  memb_m_constraint_1 },
		0, 0, /* No default value */
		"m"
		},
};
static const ber_tlv_tag_t asn_DEF_UL_TransModeSwitchingParam_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UL_TransModeSwitchingParam_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* k */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* l */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* m */
};
asn_SEQUENCE_specifics_t asn_SPC_UL_TransModeSwitchingParam_specs_1 = {
	sizeof(struct UL_TransModeSwitchingParam),
	offsetof(struct UL_TransModeSwitchingParam, _asn_ctx),
	asn_MAP_UL_TransModeSwitchingParam_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UL_TransModeSwitchingParam = {
	"UL-TransModeSwitchingParam",
	"UL-TransModeSwitchingParam",
	&asn_OP_SEQUENCE,
	asn_DEF_UL_TransModeSwitchingParam_tags_1,
	sizeof(asn_DEF_UL_TransModeSwitchingParam_tags_1)
		/sizeof(asn_DEF_UL_TransModeSwitchingParam_tags_1[0]), /* 1 */
	asn_DEF_UL_TransModeSwitchingParam_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_TransModeSwitchingParam_tags_1)
		/sizeof(asn_DEF_UL_TransModeSwitchingParam_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UL_TransModeSwitchingParam_1,
	3,	/* Elements count */
	&asn_SPC_UL_TransModeSwitchingParam_specs_1	/* Additional specs */
};

