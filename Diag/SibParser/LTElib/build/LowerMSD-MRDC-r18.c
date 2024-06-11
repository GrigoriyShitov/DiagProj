/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "LowerMSD-MRDC-r18.h"

static int
memb_msd_Information_r18_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 64)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_msd_Information_r18_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..64)) */};
static asn_per_constraints_t asn_PER_type_msd_Information_r18_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_msd_Information_r18_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..64)) */};
static asn_per_constraints_t asn_PER_memb_msd_Information_r18_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_msd_Information_r18_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_MSD_Information_r18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_msd_Information_r18_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_msd_Information_r18_specs_4 = {
	sizeof(struct LowerMSD_MRDC_r18__msd_Information_r18),
	offsetof(struct LowerMSD_MRDC_r18__msd_Information_r18, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_msd_Information_r18_4 = {
	"msd-Information-r18",
	"msd-Information-r18",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_msd_Information_r18_tags_4,
	sizeof(asn_DEF_msd_Information_r18_tags_4)
		/sizeof(asn_DEF_msd_Information_r18_tags_4[0]) - 1, /* 1 */
	asn_DEF_msd_Information_r18_tags_4,	/* Same as above */
	sizeof(asn_DEF_msd_Information_r18_tags_4)
		/sizeof(asn_DEF_msd_Information_r18_tags_4[0]), /* 2 */
	{ &asn_OER_type_msd_Information_r18_constr_4, &asn_PER_type_msd_Information_r18_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_msd_Information_r18_4,
	1,	/* Single element */
	&asn_SPC_msd_Information_r18_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LowerMSD_MRDC_r18_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LowerMSD_MRDC_r18, aggressorband1_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandIndicatorNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aggressorband1-r18"
		},
	{ ATF_POINTER, 1, offsetof(struct LowerMSD_MRDC_r18, aggressorband2_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandIndicator_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aggressorband2-r18"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LowerMSD_MRDC_r18, msd_Information_r18),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_msd_Information_r18_4,
		0,
		{ &asn_OER_memb_msd_Information_r18_constr_4, &asn_PER_memb_msd_Information_r18_constr_4,  memb_msd_Information_r18_constraint_1 },
		0, 0, /* No default value */
		"msd-Information-r18"
		},
};
static const int asn_MAP_LowerMSD_MRDC_r18_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LowerMSD_MRDC_r18_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LowerMSD_MRDC_r18_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* aggressorband1-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* aggressorband2-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* msd-Information-r18 */
};
asn_SEQUENCE_specifics_t asn_SPC_LowerMSD_MRDC_r18_specs_1 = {
	sizeof(struct LowerMSD_MRDC_r18),
	offsetof(struct LowerMSD_MRDC_r18, _asn_ctx),
	asn_MAP_LowerMSD_MRDC_r18_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LowerMSD_MRDC_r18_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LowerMSD_MRDC_r18 = {
	"LowerMSD-MRDC-r18",
	"LowerMSD-MRDC-r18",
	&asn_OP_SEQUENCE,
	asn_DEF_LowerMSD_MRDC_r18_tags_1,
	sizeof(asn_DEF_LowerMSD_MRDC_r18_tags_1)
		/sizeof(asn_DEF_LowerMSD_MRDC_r18_tags_1[0]), /* 1 */
	asn_DEF_LowerMSD_MRDC_r18_tags_1,	/* Same as above */
	sizeof(asn_DEF_LowerMSD_MRDC_r18_tags_1)
		/sizeof(asn_DEF_LowerMSD_MRDC_r18_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LowerMSD_MRDC_r18_1,
	3,	/* Elements count */
	&asn_SPC_LowerMSD_MRDC_r18_specs_1	/* Additional specs */
};

