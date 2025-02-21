/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "RFC2507-Info.h"

static int
memb_f_MAX_PERIOD_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 65535)) {
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
memb_f_MAX_TIME_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 255)) {
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
memb_max_HEADER_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 60 && value <= 65535)) {
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
memb_tcp_SPACE_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 3 && value <= 255)) {
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
memb_non_TCP_SPACE_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 3 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_f_MAX_PERIOD_constr_2 CC_NOTUSED = {
	{ 2, 1 }	/* (1..65535) */,
	-1};
static asn_per_constraints_t asn_PER_memb_f_MAX_PERIOD_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (1..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_f_MAX_TIME_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (1..255) */,
	-1};
static asn_per_constraints_t asn_PER_memb_f_MAX_TIME_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (1..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_max_HEADER_constr_4 CC_NOTUSED = {
	{ 2, 1 }	/* (60..65535) */,
	-1};
static asn_per_constraints_t asn_PER_memb_max_HEADER_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  60,  65535 }	/* (60..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_tcp_SPACE_constr_5 CC_NOTUSED = {
	{ 1, 1 }	/* (3..255) */,
	-1};
static asn_per_constraints_t asn_PER_memb_tcp_SPACE_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  3,  255 }	/* (3..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_non_TCP_SPACE_constr_6 CC_NOTUSED = {
	{ 2, 1 }	/* (3..65535) */,
	-1};
static asn_per_constraints_t asn_PER_memb_non_TCP_SPACE_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  3,  65535 }	/* (3..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static int asn_DFL_2_cmp_256(const void *sptr) {
	const long *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 256 */
	return (*st != 256);
}
static int asn_DFL_2_set_256(void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 256 */
	*st = 256;
	return 0;
}
static int asn_DFL_3_cmp_5(const void *sptr) {
	const long *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 5 */
	return (*st != 5);
}
static int asn_DFL_3_set_5(void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 5 */
	*st = 5;
	return 0;
}
static int asn_DFL_4_cmp_168(const void *sptr) {
	const long *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 168 */
	return (*st != 168);
}
static int asn_DFL_4_set_168(void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 168 */
	*st = 168;
	return 0;
}
static int asn_DFL_5_cmp_15(const void *sptr) {
	const long *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 15 */
	return (*st != 15);
}
static int asn_DFL_5_set_15(void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 15 */
	*st = 15;
	return 0;
}
static int asn_DFL_6_cmp_15(const void *sptr) {
	const long *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 15 */
	return (*st != 15);
}
static int asn_DFL_6_set_15(void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 15 */
	*st = 15;
	return 0;
}
asn_TYPE_member_t asn_MBR_RFC2507_Info_1[] = {
	{ ATF_POINTER, 5, offsetof(struct RFC2507_Info, f_MAX_PERIOD),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_f_MAX_PERIOD_constr_2, &asn_PER_memb_f_MAX_PERIOD_constr_2,  memb_f_MAX_PERIOD_constraint_1 },
		&asn_DFL_2_cmp_256,	/* Compare DEFAULT 256 */
		&asn_DFL_2_set_256,	/* Set DEFAULT 256 */
		"f-MAX-PERIOD"
		},
	{ ATF_POINTER, 4, offsetof(struct RFC2507_Info, f_MAX_TIME),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_f_MAX_TIME_constr_3, &asn_PER_memb_f_MAX_TIME_constr_3,  memb_f_MAX_TIME_constraint_1 },
		&asn_DFL_3_cmp_5,	/* Compare DEFAULT 5 */
		&asn_DFL_3_set_5,	/* Set DEFAULT 5 */
		"f-MAX-TIME"
		},
	{ ATF_POINTER, 3, offsetof(struct RFC2507_Info, max_HEADER),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_max_HEADER_constr_4, &asn_PER_memb_max_HEADER_constr_4,  memb_max_HEADER_constraint_1 },
		&asn_DFL_4_cmp_168,	/* Compare DEFAULT 168 */
		&asn_DFL_4_set_168,	/* Set DEFAULT 168 */
		"max-HEADER"
		},
	{ ATF_POINTER, 2, offsetof(struct RFC2507_Info, tcp_SPACE),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_tcp_SPACE_constr_5, &asn_PER_memb_tcp_SPACE_constr_5,  memb_tcp_SPACE_constraint_1 },
		&asn_DFL_5_cmp_15,	/* Compare DEFAULT 15 */
		&asn_DFL_5_set_15,	/* Set DEFAULT 15 */
		"tcp-SPACE"
		},
	{ ATF_POINTER, 1, offsetof(struct RFC2507_Info, non_TCP_SPACE),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_non_TCP_SPACE_constr_6, &asn_PER_memb_non_TCP_SPACE_constr_6,  memb_non_TCP_SPACE_constraint_1 },
		&asn_DFL_6_cmp_15,	/* Compare DEFAULT 15 */
		&asn_DFL_6_set_15,	/* Set DEFAULT 15 */
		"non-TCP-SPACE"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RFC2507_Info, expectReordering),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExpectReordering,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"expectReordering"
		},
};
static const int asn_MAP_RFC2507_Info_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_RFC2507_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RFC2507_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* f-MAX-PERIOD */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* f-MAX-TIME */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* max-HEADER */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tcp-SPACE */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* non-TCP-SPACE */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* expectReordering */
};
asn_SEQUENCE_specifics_t asn_SPC_RFC2507_Info_specs_1 = {
	sizeof(struct RFC2507_Info),
	offsetof(struct RFC2507_Info, _asn_ctx),
	asn_MAP_RFC2507_Info_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_RFC2507_Info_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RFC2507_Info = {
	"RFC2507-Info",
	"RFC2507-Info",
	&asn_OP_SEQUENCE,
	asn_DEF_RFC2507_Info_tags_1,
	sizeof(asn_DEF_RFC2507_Info_tags_1)
		/sizeof(asn_DEF_RFC2507_Info_tags_1[0]), /* 1 */
	asn_DEF_RFC2507_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_RFC2507_Info_tags_1)
		/sizeof(asn_DEF_RFC2507_Info_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RFC2507_Info_1,
	6,	/* Elements count */
	&asn_SPC_RFC2507_Info_specs_1	/* Additional specs */
};

