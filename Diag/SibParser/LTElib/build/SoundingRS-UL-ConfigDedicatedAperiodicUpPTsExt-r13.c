/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SoundingRS-UL-ConfigDedicatedAperiodicUpPTsExt-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_srs_ConfigIndexAp_r13_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_srs_ConfigApDCI_Format4_r13_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 3)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_srs_UpPtsAdd_r13_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_srs_UpPtsAdd_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_srs_ConfigApDCI_Format4_r13_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..3)) */};
static asn_per_constraints_t asn_PER_type_srs_ConfigApDCI_Format4_r13_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_srs_ActivateAp_r13_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_srs_ActivateAp_r13_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_srs_ConfigIndexAp_r13_constr_7 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_srs_ConfigIndexAp_r13_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_srs_ConfigApDCI_Format4_r13_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..3)) */};
static asn_per_constraints_t asn_PER_memb_srs_ConfigApDCI_Format4_r13_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_srs_UpPtsAdd_r13_value2enum_4[] = {
	{ 0,	4,	"sym2" },
	{ 1,	4,	"sym4" }
};
static const unsigned int asn_MAP_srs_UpPtsAdd_r13_enum2value_4[] = {
	0,	/* sym2(0) */
	1	/* sym4(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_srs_UpPtsAdd_r13_specs_4 = {
	asn_MAP_srs_UpPtsAdd_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_srs_UpPtsAdd_r13_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_srs_UpPtsAdd_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_UpPtsAdd_r13_4 = {
	"srs-UpPtsAdd-r13",
	"srs-UpPtsAdd-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_srs_UpPtsAdd_r13_tags_4,
	sizeof(asn_DEF_srs_UpPtsAdd_r13_tags_4)
		/sizeof(asn_DEF_srs_UpPtsAdd_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_srs_UpPtsAdd_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_srs_UpPtsAdd_r13_tags_4)
		/sizeof(asn_DEF_srs_UpPtsAdd_r13_tags_4[0]), /* 2 */
	{ &asn_OER_type_srs_UpPtsAdd_r13_constr_4, &asn_PER_type_srs_UpPtsAdd_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srs_UpPtsAdd_r13_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_srs_ConfigApDCI_Format4_r13_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SRS_ConfigAp_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_srs_ConfigApDCI_Format4_r13_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_srs_ConfigApDCI_Format4_r13_specs_8 = {
	sizeof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ConfigApDCI_Format4_r13),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ConfigApDCI_Format4_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_ConfigApDCI_Format4_r13_8 = {
	"srs-ConfigApDCI-Format4-r13",
	"srs-ConfigApDCI-Format4-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_srs_ConfigApDCI_Format4_r13_tags_8,
	sizeof(asn_DEF_srs_ConfigApDCI_Format4_r13_tags_8)
		/sizeof(asn_DEF_srs_ConfigApDCI_Format4_r13_tags_8[0]) - 1, /* 1 */
	asn_DEF_srs_ConfigApDCI_Format4_r13_tags_8,	/* Same as above */
	sizeof(asn_DEF_srs_ConfigApDCI_Format4_r13_tags_8)
		/sizeof(asn_DEF_srs_ConfigApDCI_Format4_r13_tags_8[0]), /* 2 */
	{ &asn_OER_type_srs_ConfigApDCI_Format4_r13_constr_8, &asn_PER_type_srs_ConfigApDCI_Format4_r13_constr_8, SEQUENCE_OF_constraint },
	asn_MBR_srs_ConfigApDCI_Format4_r13_8,
	1,	/* Single element */
	&asn_SPC_srs_ConfigApDCI_Format4_r13_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13__setup, srs_ConfigApDCI_Format0_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRS_ConfigAp_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-ConfigApDCI-Format0-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13__setup, srs_ConfigApDCI_Format1a2b2c_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRS_ConfigAp_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-ConfigApDCI-Format1a2b2c-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-ConfigApDCI-Format0-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* srs-ConfigApDCI-Format1a2b2c-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_12 = {
	sizeof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13__setup),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13__setup, _asn_ctx),
	asn_MAP_setup_tag2el_12,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_12 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_12,
	sizeof(asn_DEF_setup_tags_12)
		/sizeof(asn_DEF_setup_tags_12[0]) - 1, /* 1 */
	asn_DEF_setup_tags_12,	/* Same as above */
	sizeof(asn_DEF_setup_tags_12)
		/sizeof(asn_DEF_setup_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_12,
	2,	/* Elements count */
	&asn_SPC_setup_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_srs_ActivateAp_r13_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_srs_ActivateAp_r13_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_srs_ActivateAp_r13_specs_10 = {
	sizeof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13, _asn_ctx),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13, present),
	sizeof(((struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13 *)0)->present),
	asn_MAP_srs_ActivateAp_r13_tag2el_10,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_ActivateAp_r13_10 = {
	"srs-ActivateAp-r13",
	"srs-ActivateAp-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_srs_ActivateAp_r13_constr_10, &asn_PER_type_srs_ActivateAp_r13_constr_10, CHOICE_constraint },
	asn_MBR_srs_ActivateAp_r13_10,
	2,	/* Elements count */
	&asn_SPC_srs_ActivateAp_r13_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup, srs_UpPtsAdd_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srs_UpPtsAdd_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-UpPtsAdd-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup, srs_ConfigIndexAp_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_srs_ConfigIndexAp_r13_constr_7, &asn_PER_memb_srs_ConfigIndexAp_r13_constr_7,  memb_srs_ConfigIndexAp_r13_constraint_3 },
		0, 0, /* No default value */
		"srs-ConfigIndexAp-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup, srs_ConfigApDCI_Format4_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_srs_ConfigApDCI_Format4_r13_8,
		0,
		{ &asn_OER_memb_srs_ConfigApDCI_Format4_r13_constr_8, &asn_PER_memb_srs_ConfigApDCI_Format4_r13_constr_8,  memb_srs_ConfigApDCI_Format4_r13_constraint_3 },
		0, 0, /* No default value */
		"srs-ConfigApDCI-Format4-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup, srs_ActivateAp_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_srs_ActivateAp_r13_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-ActivateAp-r13"
		},
};
static const int asn_MAP_setup_oms_3[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-UpPtsAdd-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* srs-ConfigIndexAp-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* srs-ConfigApDCI-Format4-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* srs-ActivateAp-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	4,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_3,
	4,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_specs_1 = {
	sizeof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13, _asn_ctx),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13, present),
	sizeof(((struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13 *)0)->present),
	asn_MAP_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13 = {
	"SoundingRS-UL-ConfigDedicatedAperiodicUpPTsExt-r13",
	"SoundingRS-UL-ConfigDedicatedAperiodicUpPTsExt-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_constr_1, &asn_PER_type_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_constr_1, CHOICE_constraint },
	asn_MBR_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_1,
	2,	/* Elements count */
	&asn_SPC_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_specs_1	/* Additional specs */
};

