/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "OverheatingAssistance-r14.h"

static int
memb_reducedUE_CategoryDL_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 19)) {
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
memb_reducedUE_CategoryUL_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 21)) {
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
memb_reducedCCsDL_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_reducedCCsUL_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_oer_constraints_t asn_OER_memb_reducedUE_CategoryDL_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..19) */,
	-1};
static asn_per_constraints_t asn_PER_memb_reducedUE_CategoryDL_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  19 }	/* (0..19) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_reducedUE_CategoryUL_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (0..21) */,
	-1};
static asn_per_constraints_t asn_PER_memb_reducedUE_CategoryUL_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  21 }	/* (0..21) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_reducedCCsDL_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_reducedCCsDL_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_reducedCCsUL_constr_7 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_reducedCCsUL_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_reducedUE_Category_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OverheatingAssistance_r14__reducedUE_Category, reducedUE_CategoryDL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_reducedUE_CategoryDL_constr_3, &asn_PER_memb_reducedUE_CategoryDL_constr_3,  memb_reducedUE_CategoryDL_constraint_2 },
		0, 0, /* No default value */
		"reducedUE-CategoryDL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OverheatingAssistance_r14__reducedUE_Category, reducedUE_CategoryUL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_reducedUE_CategoryUL_constr_4, &asn_PER_memb_reducedUE_CategoryUL_constr_4,  memb_reducedUE_CategoryUL_constraint_2 },
		0, 0, /* No default value */
		"reducedUE-CategoryUL"
		},
};
static const ber_tlv_tag_t asn_DEF_reducedUE_Category_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_reducedUE_Category_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reducedUE-CategoryDL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reducedUE-CategoryUL */
};
static asn_SEQUENCE_specifics_t asn_SPC_reducedUE_Category_specs_2 = {
	sizeof(struct OverheatingAssistance_r14__reducedUE_Category),
	offsetof(struct OverheatingAssistance_r14__reducedUE_Category, _asn_ctx),
	asn_MAP_reducedUE_Category_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reducedUE_Category_2 = {
	"reducedUE-Category",
	"reducedUE-Category",
	&asn_OP_SEQUENCE,
	asn_DEF_reducedUE_Category_tags_2,
	sizeof(asn_DEF_reducedUE_Category_tags_2)
		/sizeof(asn_DEF_reducedUE_Category_tags_2[0]) - 1, /* 1 */
	asn_DEF_reducedUE_Category_tags_2,	/* Same as above */
	sizeof(asn_DEF_reducedUE_Category_tags_2)
		/sizeof(asn_DEF_reducedUE_Category_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_reducedUE_Category_2,
	2,	/* Elements count */
	&asn_SPC_reducedUE_Category_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_reducedMaxCCs_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OverheatingAssistance_r14__reducedMaxCCs, reducedCCsDL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_reducedCCsDL_constr_6, &asn_PER_memb_reducedCCsDL_constr_6,  memb_reducedCCsDL_constraint_5 },
		0, 0, /* No default value */
		"reducedCCsDL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OverheatingAssistance_r14__reducedMaxCCs, reducedCCsUL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_reducedCCsUL_constr_7, &asn_PER_memb_reducedCCsUL_constr_7,  memb_reducedCCsUL_constraint_5 },
		0, 0, /* No default value */
		"reducedCCsUL"
		},
};
static const ber_tlv_tag_t asn_DEF_reducedMaxCCs_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_reducedMaxCCs_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reducedCCsDL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reducedCCsUL */
};
static asn_SEQUENCE_specifics_t asn_SPC_reducedMaxCCs_specs_5 = {
	sizeof(struct OverheatingAssistance_r14__reducedMaxCCs),
	offsetof(struct OverheatingAssistance_r14__reducedMaxCCs, _asn_ctx),
	asn_MAP_reducedMaxCCs_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reducedMaxCCs_5 = {
	"reducedMaxCCs",
	"reducedMaxCCs",
	&asn_OP_SEQUENCE,
	asn_DEF_reducedMaxCCs_tags_5,
	sizeof(asn_DEF_reducedMaxCCs_tags_5)
		/sizeof(asn_DEF_reducedMaxCCs_tags_5[0]) - 1, /* 1 */
	asn_DEF_reducedMaxCCs_tags_5,	/* Same as above */
	sizeof(asn_DEF_reducedMaxCCs_tags_5)
		/sizeof(asn_DEF_reducedMaxCCs_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_reducedMaxCCs_5,
	2,	/* Elements count */
	&asn_SPC_reducedMaxCCs_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_OverheatingAssistance_r14_1[] = {
	{ ATF_POINTER, 2, offsetof(struct OverheatingAssistance_r14, reducedUE_Category),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_reducedUE_Category_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedUE-Category"
		},
	{ ATF_POINTER, 1, offsetof(struct OverheatingAssistance_r14, reducedMaxCCs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_reducedMaxCCs_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedMaxCCs"
		},
};
static const int asn_MAP_OverheatingAssistance_r14_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_OverheatingAssistance_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_OverheatingAssistance_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reducedUE-Category */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reducedMaxCCs */
};
asn_SEQUENCE_specifics_t asn_SPC_OverheatingAssistance_r14_specs_1 = {
	sizeof(struct OverheatingAssistance_r14),
	offsetof(struct OverheatingAssistance_r14, _asn_ctx),
	asn_MAP_OverheatingAssistance_r14_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_OverheatingAssistance_r14_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_OverheatingAssistance_r14 = {
	"OverheatingAssistance-r14",
	"OverheatingAssistance-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_OverheatingAssistance_r14_tags_1,
	sizeof(asn_DEF_OverheatingAssistance_r14_tags_1)
		/sizeof(asn_DEF_OverheatingAssistance_r14_tags_1[0]), /* 1 */
	asn_DEF_OverheatingAssistance_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_OverheatingAssistance_r14_tags_1)
		/sizeof(asn_DEF_OverheatingAssistance_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_OverheatingAssistance_r14_1,
	2,	/* Elements count */
	&asn_SPC_OverheatingAssistance_r14_specs_1	/* Additional specs */
};

