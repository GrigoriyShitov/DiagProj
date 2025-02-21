/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "OctetModeRLC-SizeInfoType2.h"

static int
memb_sizeType1_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_sizeType2_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_sizeType3_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 56)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_sizeType1_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sizeType1_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sizeType2_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..63) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sizeType2_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sizeType3_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (0..56) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sizeType3_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  56 }	/* (0..56) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_OctetModeRLC_SizeInfoType2_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_OctetModeRLC_SizeInfoType2_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_OctetModeRLC_SizeInfoType2_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OctetModeRLC_SizeInfoType2, choice.sizeType1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sizeType1_constr_2, &asn_PER_memb_sizeType1_constr_2,  memb_sizeType1_constraint_1 },
		0, 0, /* No default value */
		"sizeType1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OctetModeRLC_SizeInfoType2, choice.sizeType2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sizeType2_constr_3, &asn_PER_memb_sizeType2_constr_3,  memb_sizeType2_constraint_1 },
		0, 0, /* No default value */
		"sizeType2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OctetModeRLC_SizeInfoType2, choice.sizeType3),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sizeType3_constr_4, &asn_PER_memb_sizeType3_constr_4,  memb_sizeType3_constraint_1 },
		0, 0, /* No default value */
		"sizeType3"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_OctetModeRLC_SizeInfoType2_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sizeType1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sizeType2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sizeType3 */
};
asn_CHOICE_specifics_t asn_SPC_OctetModeRLC_SizeInfoType2_specs_1 = {
	sizeof(struct OctetModeRLC_SizeInfoType2),
	offsetof(struct OctetModeRLC_SizeInfoType2, _asn_ctx),
	offsetof(struct OctetModeRLC_SizeInfoType2, present),
	sizeof(((struct OctetModeRLC_SizeInfoType2 *)0)->present),
	asn_MAP_OctetModeRLC_SizeInfoType2_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_OctetModeRLC_SizeInfoType2 = {
	"OctetModeRLC-SizeInfoType2",
	"OctetModeRLC-SizeInfoType2",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_OctetModeRLC_SizeInfoType2_constr_1, &asn_PER_type_OctetModeRLC_SizeInfoType2_constr_1, CHOICE_constraint },
	asn_MBR_OctetModeRLC_SizeInfoType2_1,
	3,	/* Elements count */
	&asn_SPC_OctetModeRLC_SizeInfoType2_specs_1	/* Additional specs */
};

