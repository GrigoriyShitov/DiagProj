/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "AccessServiceClass-TDD.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_subchannels_constraint_17(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 4)) {
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
memb_subchannels_constraint_23(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
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
memb_channelisationCodeIndices_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_subchannels_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_subchannels_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_subchannels_constr_18 CC_NOTUSED = {
	{ 0, 0 },
	4	/* (SIZE(4..4)) */};
static asn_per_constraints_t asn_PER_memb_subchannels_constr_18 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_subchannels_constr_24 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_memb_subchannels_constr_24 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_subchannelSize_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_subchannelSize_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_channelisationCodeIndices_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_memb_channelisationCodeIndices_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_subchannels_value2enum_14[] = {
	{ 0,	6,	"subch0" },
	{ 1,	6,	"subch1" }
};
static const unsigned int asn_MAP_subchannels_enum2value_14[] = {
	0,	/* subch0(0) */
	1	/* subch1(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_subchannels_specs_14 = {
	asn_MAP_subchannels_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_subchannels_enum2value_14,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_subchannels_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subchannels_14 = {
	"subchannels",
	"subchannels",
	&asn_OP_NativeEnumerated,
	asn_DEF_subchannels_tags_14,
	sizeof(asn_DEF_subchannels_tags_14)
		/sizeof(asn_DEF_subchannels_tags_14[0]) - 1, /* 1 */
	asn_DEF_subchannels_tags_14,	/* Same as above */
	sizeof(asn_DEF_subchannels_tags_14)
		/sizeof(asn_DEF_subchannels_tags_14[0]), /* 2 */
	{ &asn_OER_type_subchannels_constr_14, &asn_PER_type_subchannels_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_subchannels_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_size2_13[] = {
	{ ATF_POINTER, 1, offsetof(struct AccessServiceClass_TDD__subchannelSize__size2, subchannels),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_subchannels_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subchannels"
		},
};
static const int asn_MAP_size2_oms_13[] = { 0 };
static const ber_tlv_tag_t asn_DEF_size2_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_size2_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* subchannels */
};
static asn_SEQUENCE_specifics_t asn_SPC_size2_specs_13 = {
	sizeof(struct AccessServiceClass_TDD__subchannelSize__size2),
	offsetof(struct AccessServiceClass_TDD__subchannelSize__size2, _asn_ctx),
	asn_MAP_size2_tag2el_13,
	1,	/* Count of tags in the map */
	asn_MAP_size2_oms_13,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_size2_13 = {
	"size2",
	"size2",
	&asn_OP_SEQUENCE,
	asn_DEF_size2_tags_13,
	sizeof(asn_DEF_size2_tags_13)
		/sizeof(asn_DEF_size2_tags_13[0]) - 1, /* 1 */
	asn_DEF_size2_tags_13,	/* Same as above */
	sizeof(asn_DEF_size2_tags_13)
		/sizeof(asn_DEF_size2_tags_13[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_size2_13,
	1,	/* Elements count */
	&asn_SPC_size2_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_size4_17[] = {
	{ ATF_POINTER, 1, offsetof(struct AccessServiceClass_TDD__subchannelSize__size4, subchannels),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_subchannels_constr_18, &asn_PER_memb_subchannels_constr_18,  memb_subchannels_constraint_17 },
		0, 0, /* No default value */
		"subchannels"
		},
};
static const int asn_MAP_size4_oms_17[] = { 0 };
static const ber_tlv_tag_t asn_DEF_size4_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_size4_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* subchannels */
};
static asn_SEQUENCE_specifics_t asn_SPC_size4_specs_17 = {
	sizeof(struct AccessServiceClass_TDD__subchannelSize__size4),
	offsetof(struct AccessServiceClass_TDD__subchannelSize__size4, _asn_ctx),
	asn_MAP_size4_tag2el_17,
	1,	/* Count of tags in the map */
	asn_MAP_size4_oms_17,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_size4_17 = {
	"size4",
	"size4",
	&asn_OP_SEQUENCE,
	asn_DEF_size4_tags_17,
	sizeof(asn_DEF_size4_tags_17)
		/sizeof(asn_DEF_size4_tags_17[0]) - 1, /* 1 */
	asn_DEF_size4_tags_17,	/* Same as above */
	sizeof(asn_DEF_size4_tags_17)
		/sizeof(asn_DEF_size4_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_size4_17,
	1,	/* Elements count */
	&asn_SPC_size4_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_size8_23[] = {
	{ ATF_POINTER, 1, offsetof(struct AccessServiceClass_TDD__subchannelSize__size8, subchannels),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_subchannels_constr_24, &asn_PER_memb_subchannels_constr_24,  memb_subchannels_constraint_23 },
		0, 0, /* No default value */
		"subchannels"
		},
};
static const int asn_MAP_size8_oms_23[] = { 0 };
static const ber_tlv_tag_t asn_DEF_size8_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_size8_tag2el_23[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* subchannels */
};
static asn_SEQUENCE_specifics_t asn_SPC_size8_specs_23 = {
	sizeof(struct AccessServiceClass_TDD__subchannelSize__size8),
	offsetof(struct AccessServiceClass_TDD__subchannelSize__size8, _asn_ctx),
	asn_MAP_size8_tag2el_23,
	1,	/* Count of tags in the map */
	asn_MAP_size8_oms_23,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_size8_23 = {
	"size8",
	"size8",
	&asn_OP_SEQUENCE,
	asn_DEF_size8_tags_23,
	sizeof(asn_DEF_size8_tags_23)
		/sizeof(asn_DEF_size8_tags_23[0]) - 1, /* 1 */
	asn_DEF_size8_tags_23,	/* Same as above */
	sizeof(asn_DEF_size8_tags_23)
		/sizeof(asn_DEF_size8_tags_23[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_size8_23,
	1,	/* Elements count */
	&asn_SPC_size8_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_subchannelSize_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AccessServiceClass_TDD__subchannelSize, choice.size1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"size1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccessServiceClass_TDD__subchannelSize, choice.size2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_size2_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"size2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccessServiceClass_TDD__subchannelSize, choice.size4),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_size4_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"size4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccessServiceClass_TDD__subchannelSize, choice.size8),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_size8_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"size8"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_subchannelSize_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* size1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* size2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* size4 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* size8 */
};
static asn_CHOICE_specifics_t asn_SPC_subchannelSize_specs_11 = {
	sizeof(struct AccessServiceClass_TDD__subchannelSize),
	offsetof(struct AccessServiceClass_TDD__subchannelSize, _asn_ctx),
	offsetof(struct AccessServiceClass_TDD__subchannelSize, present),
	sizeof(((struct AccessServiceClass_TDD__subchannelSize *)0)->present),
	asn_MAP_subchannelSize_tag2el_11,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subchannelSize_11 = {
	"subchannelSize",
	"subchannelSize",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_subchannelSize_constr_11, &asn_PER_type_subchannelSize_constr_11, CHOICE_constraint },
	asn_MBR_subchannelSize_11,
	4,	/* Elements count */
	&asn_SPC_subchannelSize_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_AccessServiceClass_TDD_1[] = {
	{ ATF_POINTER, 1, offsetof(struct AccessServiceClass_TDD, channelisationCodeIndices),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_channelisationCodeIndices_constr_2, &asn_PER_memb_channelisationCodeIndices_constr_2,  memb_channelisationCodeIndices_constraint_1 },
		0, 0, /* No default value */
		"channelisationCodeIndices"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccessServiceClass_TDD, subchannelSize),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_subchannelSize_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subchannelSize"
		},
};
static const int asn_MAP_AccessServiceClass_TDD_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_AccessServiceClass_TDD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AccessServiceClass_TDD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* channelisationCodeIndices */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* subchannelSize */
};
asn_SEQUENCE_specifics_t asn_SPC_AccessServiceClass_TDD_specs_1 = {
	sizeof(struct AccessServiceClass_TDD),
	offsetof(struct AccessServiceClass_TDD, _asn_ctx),
	asn_MAP_AccessServiceClass_TDD_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_AccessServiceClass_TDD_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AccessServiceClass_TDD = {
	"AccessServiceClass-TDD",
	"AccessServiceClass-TDD",
	&asn_OP_SEQUENCE,
	asn_DEF_AccessServiceClass_TDD_tags_1,
	sizeof(asn_DEF_AccessServiceClass_TDD_tags_1)
		/sizeof(asn_DEF_AccessServiceClass_TDD_tags_1[0]), /* 1 */
	asn_DEF_AccessServiceClass_TDD_tags_1,	/* Same as above */
	sizeof(asn_DEF_AccessServiceClass_TDD_tags_1)
		/sizeof(asn_DEF_AccessServiceClass_TDD_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AccessServiceClass_TDD_1,
	2,	/* Elements count */
	&asn_SPC_AccessServiceClass_TDD_specs_1	/* Additional specs */
};

