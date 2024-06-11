/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "DL-TS-ChannelisationCodesShort.h"

static int
memb_bitmap_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_bitmap_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	16	/* (SIZE(16..16)) */};
static asn_per_constraints_t asn_PER_memb_bitmap_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_codesRepresentation_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_codesRepresentation_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_consecutive_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_TS_ChannelisationCodesShort__codesRepresentation__consecutive, firstChannelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_TS_ChannelisationCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"firstChannelisationCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_TS_ChannelisationCodesShort__codesRepresentation__consecutive, lastChannelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_TS_ChannelisationCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lastChannelisationCode"
		},
};
static const ber_tlv_tag_t asn_DEF_consecutive_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_consecutive_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* firstChannelisationCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* lastChannelisationCode */
};
static asn_SEQUENCE_specifics_t asn_SPC_consecutive_specs_3 = {
	sizeof(struct DL_TS_ChannelisationCodesShort__codesRepresentation__consecutive),
	offsetof(struct DL_TS_ChannelisationCodesShort__codesRepresentation__consecutive, _asn_ctx),
	asn_MAP_consecutive_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_consecutive_3 = {
	"consecutive",
	"consecutive",
	&asn_OP_SEQUENCE,
	asn_DEF_consecutive_tags_3,
	sizeof(asn_DEF_consecutive_tags_3)
		/sizeof(asn_DEF_consecutive_tags_3[0]) - 1, /* 1 */
	asn_DEF_consecutive_tags_3,	/* Same as above */
	sizeof(asn_DEF_consecutive_tags_3)
		/sizeof(asn_DEF_consecutive_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_consecutive_3,
	2,	/* Elements count */
	&asn_SPC_consecutive_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_codesRepresentation_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_TS_ChannelisationCodesShort__codesRepresentation, choice.consecutive),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_consecutive_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"consecutive"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_TS_ChannelisationCodesShort__codesRepresentation, choice.bitmap),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_bitmap_constr_6, &asn_PER_memb_bitmap_constr_6,  memb_bitmap_constraint_2 },
		0, 0, /* No default value */
		"bitmap"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_codesRepresentation_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* consecutive */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* bitmap */
};
static asn_CHOICE_specifics_t asn_SPC_codesRepresentation_specs_2 = {
	sizeof(struct DL_TS_ChannelisationCodesShort__codesRepresentation),
	offsetof(struct DL_TS_ChannelisationCodesShort__codesRepresentation, _asn_ctx),
	offsetof(struct DL_TS_ChannelisationCodesShort__codesRepresentation, present),
	sizeof(((struct DL_TS_ChannelisationCodesShort__codesRepresentation *)0)->present),
	asn_MAP_codesRepresentation_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_codesRepresentation_2 = {
	"codesRepresentation",
	"codesRepresentation",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_codesRepresentation_constr_2, &asn_PER_type_codesRepresentation_constr_2, CHOICE_constraint },
	asn_MBR_codesRepresentation_2,
	2,	/* Elements count */
	&asn_SPC_codesRepresentation_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DL_TS_ChannelisationCodesShort_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_TS_ChannelisationCodesShort, codesRepresentation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_codesRepresentation_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"codesRepresentation"
		},
};
static const ber_tlv_tag_t asn_DEF_DL_TS_ChannelisationCodesShort_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DL_TS_ChannelisationCodesShort_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* codesRepresentation */
};
asn_SEQUENCE_specifics_t asn_SPC_DL_TS_ChannelisationCodesShort_specs_1 = {
	sizeof(struct DL_TS_ChannelisationCodesShort),
	offsetof(struct DL_TS_ChannelisationCodesShort, _asn_ctx),
	asn_MAP_DL_TS_ChannelisationCodesShort_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DL_TS_ChannelisationCodesShort = {
	"DL-TS-ChannelisationCodesShort",
	"DL-TS-ChannelisationCodesShort",
	&asn_OP_SEQUENCE,
	asn_DEF_DL_TS_ChannelisationCodesShort_tags_1,
	sizeof(asn_DEF_DL_TS_ChannelisationCodesShort_tags_1)
		/sizeof(asn_DEF_DL_TS_ChannelisationCodesShort_tags_1[0]), /* 1 */
	asn_DEF_DL_TS_ChannelisationCodesShort_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_TS_ChannelisationCodesShort_tags_1)
		/sizeof(asn_DEF_DL_TS_ChannelisationCodesShort_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DL_TS_ChannelisationCodesShort_1,
	1,	/* Elements count */
	&asn_SPC_DL_TS_ChannelisationCodesShort_specs_1	/* Additional specs */
};

