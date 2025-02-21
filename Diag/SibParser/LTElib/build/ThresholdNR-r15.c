/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "ThresholdNR-r15.h"

static asn_oer_constraints_t asn_OER_type_ThresholdNR_r15_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ThresholdNR_r15_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ThresholdNR_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ThresholdNR_r15, choice.nr_RSRP_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_RangeNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-RSRP-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ThresholdNR_r15, choice.nr_RSRQ_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_RangeNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-RSRQ-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ThresholdNR_r15, choice.nr_SINR_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RS_SINR_RangeNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-SINR-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ThresholdNR_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-RSRP-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nr-RSRQ-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nr-SINR-r15 */
};
asn_CHOICE_specifics_t asn_SPC_ThresholdNR_r15_specs_1 = {
	sizeof(struct ThresholdNR_r15),
	offsetof(struct ThresholdNR_r15, _asn_ctx),
	offsetof(struct ThresholdNR_r15, present),
	sizeof(((struct ThresholdNR_r15 *)0)->present),
	asn_MAP_ThresholdNR_r15_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ThresholdNR_r15 = {
	"ThresholdNR-r15",
	"ThresholdNR-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ThresholdNR_r15_constr_1, &asn_PER_type_ThresholdNR_r15_constr_1, CHOICE_constraint },
	asn_MBR_ThresholdNR_r15_1,
	3,	/* Elements count */
	&asn_SPC_ThresholdNR_r15_specs_1	/* Additional specs */
};

