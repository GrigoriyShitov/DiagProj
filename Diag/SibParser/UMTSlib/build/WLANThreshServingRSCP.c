/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "WLANThreshServingRSCP.h"

static int
memb_threshServingLow_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -60 && value <= -13)) {
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
memb_threshServingHigh_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -60 && value <= -13)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_threshServingLow_constr_2 CC_NOTUSED = {
	{ 1, 0 }	/* (-60..-13) */,
	-1};
static asn_per_constraints_t asn_PER_memb_threshServingLow_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6, -60, -13 }	/* (-60..-13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_threshServingHigh_constr_3 CC_NOTUSED = {
	{ 1, 0 }	/* (-60..-13) */,
	-1};
static asn_per_constraints_t asn_PER_memb_threshServingHigh_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6, -60, -13 }	/* (-60..-13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_WLANThreshServingRSCP_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct WLANThreshServingRSCP, threshServingLow),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_threshServingLow_constr_2, &asn_PER_memb_threshServingLow_constr_2,  memb_threshServingLow_constraint_1 },
		0, 0, /* No default value */
		"threshServingLow"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WLANThreshServingRSCP, threshServingHigh),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_threshServingHigh_constr_3, &asn_PER_memb_threshServingHigh_constr_3,  memb_threshServingHigh_constraint_1 },
		0, 0, /* No default value */
		"threshServingHigh"
		},
};
static const ber_tlv_tag_t asn_DEF_WLANThreshServingRSCP_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_WLANThreshServingRSCP_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* threshServingLow */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* threshServingHigh */
};
asn_SEQUENCE_specifics_t asn_SPC_WLANThreshServingRSCP_specs_1 = {
	sizeof(struct WLANThreshServingRSCP),
	offsetof(struct WLANThreshServingRSCP, _asn_ctx),
	asn_MAP_WLANThreshServingRSCP_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_WLANThreshServingRSCP = {
	"WLANThreshServingRSCP",
	"WLANThreshServingRSCP",
	&asn_OP_SEQUENCE,
	asn_DEF_WLANThreshServingRSCP_tags_1,
	sizeof(asn_DEF_WLANThreshServingRSCP_tags_1)
		/sizeof(asn_DEF_WLANThreshServingRSCP_tags_1[0]), /* 1 */
	asn_DEF_WLANThreshServingRSCP_tags_1,	/* Same as above */
	sizeof(asn_DEF_WLANThreshServingRSCP_tags_1)
		/sizeof(asn_DEF_WLANThreshServingRSCP_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_WLANThreshServingRSCP_1,
	2,	/* Elements count */
	&asn_SPC_WLANThreshServingRSCP_specs_1	/* Additional specs */
};

