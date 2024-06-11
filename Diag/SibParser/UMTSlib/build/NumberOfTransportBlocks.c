/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "NumberOfTransportBlocks.h"

static int
memb_small_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 17)) {
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
memb_large_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 18 && value <= 512)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_small_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (2..17) */,
	-1};
static asn_per_constraints_t asn_PER_memb_small_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  2,  17 }	/* (2..17) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_large_constr_5 CC_NOTUSED = {
	{ 2, 1 }	/* (18..512) */,
	-1};
static asn_per_constraints_t asn_PER_memb_large_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  18,  512 }	/* (18..512) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_NumberOfTransportBlocks_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_NumberOfTransportBlocks_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NumberOfTransportBlocks_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NumberOfTransportBlocks, choice.zero),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"zero"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NumberOfTransportBlocks, choice.one),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"one"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NumberOfTransportBlocks, choice.small),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_small_constr_4, &asn_PER_memb_small_constr_4,  memb_small_constraint_1 },
		0, 0, /* No default value */
		"small"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NumberOfTransportBlocks, choice.large),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_large_constr_5, &asn_PER_memb_large_constr_5,  memb_large_constraint_1 },
		0, 0, /* No default value */
		"large"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NumberOfTransportBlocks_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* zero */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* one */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* small */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* large */
};
asn_CHOICE_specifics_t asn_SPC_NumberOfTransportBlocks_specs_1 = {
	sizeof(struct NumberOfTransportBlocks),
	offsetof(struct NumberOfTransportBlocks, _asn_ctx),
	offsetof(struct NumberOfTransportBlocks, present),
	sizeof(((struct NumberOfTransportBlocks *)0)->present),
	asn_MAP_NumberOfTransportBlocks_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NumberOfTransportBlocks = {
	"NumberOfTransportBlocks",
	"NumberOfTransportBlocks",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_NumberOfTransportBlocks_constr_1, &asn_PER_type_NumberOfTransportBlocks_constr_1, CHOICE_constraint },
	asn_MBR_NumberOfTransportBlocks_1,
	4,	/* Elements count */
	&asn_SPC_NumberOfTransportBlocks_specs_1	/* Additional specs */
};

