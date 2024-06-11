/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "ReferenceTime-r15.h"

static int
memb_refDays_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 72999)) {
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
memb_refSeconds_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 86399)) {
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
memb_refMilliSeconds_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 999)) {
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
memb_refQuarterMicroSeconds_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3999)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_refDays_r15_constr_2 CC_NOTUSED = {
	{ 4, 1 }	/* (0..72999) */,
	-1};
static asn_per_constraints_t asn_PER_memb_refDays_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 17, -1,  0,  72999 }	/* (0..72999) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_refSeconds_r15_constr_3 CC_NOTUSED = {
	{ 4, 1 }	/* (0..86399) */,
	-1};
static asn_per_constraints_t asn_PER_memb_refSeconds_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 17, -1,  0,  86399 }	/* (0..86399) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_refMilliSeconds_r15_constr_4 CC_NOTUSED = {
	{ 2, 1 }	/* (0..999) */,
	-1};
static asn_per_constraints_t asn_PER_memb_refMilliSeconds_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  999 }	/* (0..999) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_refQuarterMicroSeconds_r15_constr_5 CC_NOTUSED = {
	{ 2, 1 }	/* (0..3999) */,
	-1};
static asn_per_constraints_t asn_PER_memb_refQuarterMicroSeconds_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  3999 }	/* (0..3999) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ReferenceTime_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReferenceTime_r15, refDays_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_refDays_r15_constr_2, &asn_PER_memb_refDays_r15_constr_2,  memb_refDays_r15_constraint_1 },
		0, 0, /* No default value */
		"refDays-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReferenceTime_r15, refSeconds_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_refSeconds_r15_constr_3, &asn_PER_memb_refSeconds_r15_constr_3,  memb_refSeconds_r15_constraint_1 },
		0, 0, /* No default value */
		"refSeconds-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReferenceTime_r15, refMilliSeconds_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_refMilliSeconds_r15_constr_4, &asn_PER_memb_refMilliSeconds_r15_constr_4,  memb_refMilliSeconds_r15_constraint_1 },
		0, 0, /* No default value */
		"refMilliSeconds-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReferenceTime_r15, refQuarterMicroSeconds_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_refQuarterMicroSeconds_r15_constr_5, &asn_PER_memb_refQuarterMicroSeconds_r15_constr_5,  memb_refQuarterMicroSeconds_r15_constraint_1 },
		0, 0, /* No default value */
		"refQuarterMicroSeconds-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_ReferenceTime_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReferenceTime_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* refDays-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* refSeconds-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* refMilliSeconds-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* refQuarterMicroSeconds-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_ReferenceTime_r15_specs_1 = {
	sizeof(struct ReferenceTime_r15),
	offsetof(struct ReferenceTime_r15, _asn_ctx),
	asn_MAP_ReferenceTime_r15_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReferenceTime_r15 = {
	"ReferenceTime-r15",
	"ReferenceTime-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_ReferenceTime_r15_tags_1,
	sizeof(asn_DEF_ReferenceTime_r15_tags_1)
		/sizeof(asn_DEF_ReferenceTime_r15_tags_1[0]), /* 1 */
	asn_DEF_ReferenceTime_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReferenceTime_r15_tags_1)
		/sizeof(asn_DEF_ReferenceTime_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ReferenceTime_r15_1,
	4,	/* Elements count */
	&asn_SPC_ReferenceTime_r15_specs_1	/* Additional specs */
};

