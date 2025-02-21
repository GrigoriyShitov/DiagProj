/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "ThresholdUTRA.h"

static int
memb_utra_RSCP_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -5 && value <= 91)) {
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
memb_utra_EcN0_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 49)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_utra_RSCP_constr_2 CC_NOTUSED = {
	{ 1, 0 }	/* (-5..91) */,
	-1};
static asn_per_constraints_t asn_PER_memb_utra_RSCP_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -5,  91 }	/* (-5..91) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_utra_EcN0_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..49) */,
	-1};
static asn_per_constraints_t asn_PER_memb_utra_EcN0_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  49 }	/* (0..49) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ThresholdUTRA_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ThresholdUTRA_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ThresholdUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ThresholdUTRA, choice.utra_RSCP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_utra_RSCP_constr_2, &asn_PER_memb_utra_RSCP_constr_2,  memb_utra_RSCP_constraint_1 },
		0, 0, /* No default value */
		"utra-RSCP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ThresholdUTRA, choice.utra_EcN0),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_utra_EcN0_constr_3, &asn_PER_memb_utra_EcN0_constr_3,  memb_utra_EcN0_constraint_1 },
		0, 0, /* No default value */
		"utra-EcN0"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ThresholdUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* utra-RSCP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* utra-EcN0 */
};
asn_CHOICE_specifics_t asn_SPC_ThresholdUTRA_specs_1 = {
	sizeof(struct ThresholdUTRA),
	offsetof(struct ThresholdUTRA, _asn_ctx),
	offsetof(struct ThresholdUTRA, present),
	sizeof(((struct ThresholdUTRA *)0)->present),
	asn_MAP_ThresholdUTRA_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ThresholdUTRA = {
	"ThresholdUTRA",
	"ThresholdUTRA",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ThresholdUTRA_constr_1, &asn_PER_type_ThresholdUTRA_constr_1, CHOICE_constraint },
	asn_MBR_ThresholdUTRA_1,
	2,	/* Elements count */
	&asn_SPC_ThresholdUTRA_specs_1	/* Additional specs */
};

