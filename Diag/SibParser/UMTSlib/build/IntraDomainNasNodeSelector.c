/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "IntraDomainNasNodeSelector.h"

static int
memb_futurecoding_constraint_7(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_cn_Type_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cn_Type_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_futurecoding_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	15	/* (SIZE(15..15)) */};
static asn_per_constraints_t asn_PER_memb_futurecoding_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  15,  15 }	/* (SIZE(15..15)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_version_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_version_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_cn_Type_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IntraDomainNasNodeSelector__version__release99__cn_Type, choice.gsm_Map_IDNNS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Gsm_map_IDNNS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gsm-Map-IDNNS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntraDomainNasNodeSelector__version__release99__cn_Type, choice.ansi_41_IDNNS),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ansi_41_IDNNS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ansi-41-IDNNS"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_cn_Type_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gsm-Map-IDNNS */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ansi-41-IDNNS */
};
static asn_CHOICE_specifics_t asn_SPC_cn_Type_specs_4 = {
	sizeof(struct IntraDomainNasNodeSelector__version__release99__cn_Type),
	offsetof(struct IntraDomainNasNodeSelector__version__release99__cn_Type, _asn_ctx),
	offsetof(struct IntraDomainNasNodeSelector__version__release99__cn_Type, present),
	sizeof(((struct IntraDomainNasNodeSelector__version__release99__cn_Type *)0)->present),
	asn_MAP_cn_Type_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cn_Type_4 = {
	"cn-Type",
	"cn-Type",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_cn_Type_constr_4, &asn_PER_type_cn_Type_constr_4, CHOICE_constraint },
	asn_MBR_cn_Type_4,
	2,	/* Elements count */
	&asn_SPC_cn_Type_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_release99_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IntraDomainNasNodeSelector__version__release99, cn_Type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cn_Type_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cn-Type"
		},
};
static const ber_tlv_tag_t asn_DEF_release99_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_release99_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cn-Type */
};
static asn_SEQUENCE_specifics_t asn_SPC_release99_specs_3 = {
	sizeof(struct IntraDomainNasNodeSelector__version__release99),
	offsetof(struct IntraDomainNasNodeSelector__version__release99, _asn_ctx),
	asn_MAP_release99_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_release99_3 = {
	"release99",
	"release99",
	&asn_OP_SEQUENCE,
	asn_DEF_release99_tags_3,
	sizeof(asn_DEF_release99_tags_3)
		/sizeof(asn_DEF_release99_tags_3[0]) - 1, /* 1 */
	asn_DEF_release99_tags_3,	/* Same as above */
	sizeof(asn_DEF_release99_tags_3)
		/sizeof(asn_DEF_release99_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_release99_3,
	1,	/* Elements count */
	&asn_SPC_release99_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_later_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IntraDomainNasNodeSelector__version__later, futurecoding),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_futurecoding_constr_8, &asn_PER_memb_futurecoding_constr_8,  memb_futurecoding_constraint_7 },
		0, 0, /* No default value */
		"futurecoding"
		},
};
static const ber_tlv_tag_t asn_DEF_later_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_later_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* futurecoding */
};
static asn_SEQUENCE_specifics_t asn_SPC_later_specs_7 = {
	sizeof(struct IntraDomainNasNodeSelector__version__later),
	offsetof(struct IntraDomainNasNodeSelector__version__later, _asn_ctx),
	asn_MAP_later_tag2el_7,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_later_7 = {
	"later",
	"later",
	&asn_OP_SEQUENCE,
	asn_DEF_later_tags_7,
	sizeof(asn_DEF_later_tags_7)
		/sizeof(asn_DEF_later_tags_7[0]) - 1, /* 1 */
	asn_DEF_later_tags_7,	/* Same as above */
	sizeof(asn_DEF_later_tags_7)
		/sizeof(asn_DEF_later_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_later_7,
	1,	/* Elements count */
	&asn_SPC_later_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_version_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IntraDomainNasNodeSelector__version, choice.release99),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_release99_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release99"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntraDomainNasNodeSelector__version, choice.later),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_later_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"later"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_version_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release99 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* later */
};
static asn_CHOICE_specifics_t asn_SPC_version_specs_2 = {
	sizeof(struct IntraDomainNasNodeSelector__version),
	offsetof(struct IntraDomainNasNodeSelector__version, _asn_ctx),
	offsetof(struct IntraDomainNasNodeSelector__version, present),
	sizeof(((struct IntraDomainNasNodeSelector__version *)0)->present),
	asn_MAP_version_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_version_2 = {
	"version",
	"version",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_version_constr_2, &asn_PER_type_version_constr_2, CHOICE_constraint },
	asn_MBR_version_2,
	2,	/* Elements count */
	&asn_SPC_version_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_IntraDomainNasNodeSelector_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IntraDomainNasNodeSelector, version),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_version_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"version"
		},
};
static const ber_tlv_tag_t asn_DEF_IntraDomainNasNodeSelector_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IntraDomainNasNodeSelector_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* version */
};
asn_SEQUENCE_specifics_t asn_SPC_IntraDomainNasNodeSelector_specs_1 = {
	sizeof(struct IntraDomainNasNodeSelector),
	offsetof(struct IntraDomainNasNodeSelector, _asn_ctx),
	asn_MAP_IntraDomainNasNodeSelector_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_IntraDomainNasNodeSelector = {
	"IntraDomainNasNodeSelector",
	"IntraDomainNasNodeSelector",
	&asn_OP_SEQUENCE,
	asn_DEF_IntraDomainNasNodeSelector_tags_1,
	sizeof(asn_DEF_IntraDomainNasNodeSelector_tags_1)
		/sizeof(asn_DEF_IntraDomainNasNodeSelector_tags_1[0]), /* 1 */
	asn_DEF_IntraDomainNasNodeSelector_tags_1,	/* Same as above */
	sizeof(asn_DEF_IntraDomainNasNodeSelector_tags_1)
		/sizeof(asn_DEF_IntraDomainNasNodeSelector_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_IntraDomainNasNodeSelector_1,
	1,	/* Elements count */
	&asn_SPC_IntraDomainNasNodeSelector_specs_1	/* Additional specs */
};

