/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UTRAN-GANSSReferenceTime.h"

static int
ls_Part_4_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static int
memb_ms_Part_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 80)) {
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
memb_ls_Part_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

static int
memb_gANSS_TimeId_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
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
memb_gANSS_TimeUncertainty_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 127)) {
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
memb_referenceSfn_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4095)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_ls_Part_constr_4 CC_NOTUSED = {
	{ 4, 1 }	/* (0..4294967295) */,
	-1};
static asn_per_constraints_t asn_PER_type_ls_Part_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms_Part_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..80) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms_Part_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  80 }	/* (0..80) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ls_Part_constr_4 CC_NOTUSED = {
	{ 4, 1 }	/* (0..4294967295) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ls_Part_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_mode_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_mode_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_gANSS_TimeId_constr_5 CC_NOTUSED = {
	{ 1, 1 }	/* (0..7) */,
	-1};
static asn_per_constraints_t asn_PER_memb_gANSS_TimeId_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_gANSS_TimeUncertainty_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (0..127) */,
	-1};
static asn_per_constraints_t asn_PER_memb_gANSS_TimeUncertainty_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_referenceSfn_constr_12 CC_NOTUSED = {
	{ 2, 1 }	/* (0..4095) */,
	-1};
static asn_per_constraints_t asn_PER_memb_referenceSfn_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  4095 }	/* (0..4095) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_specifics_t asn_SPC_ls_Part_specs_4 = {
	0,	0,	0,	0,	0,
	0,	/* Native long size */
	1	/* Unsigned representation */
};
static const ber_tlv_tag_t asn_DEF_ls_Part_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ls_Part_4 = {
	"ls-Part",
	"ls-Part",
	&asn_OP_NativeInteger,
	asn_DEF_ls_Part_tags_4,
	sizeof(asn_DEF_ls_Part_tags_4)
		/sizeof(asn_DEF_ls_Part_tags_4[0]) - 1, /* 1 */
	asn_DEF_ls_Part_tags_4,	/* Same as above */
	sizeof(asn_DEF_ls_Part_tags_4)
		/sizeof(asn_DEF_ls_Part_tags_4[0]), /* 2 */
	{ &asn_OER_type_ls_Part_constr_4, &asn_PER_type_ls_Part_constr_4, ls_Part_4_constraint },
	0, 0,	/* No members */
	&asn_SPC_ls_Part_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ue_GANSSTimingOfCellFrames_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UTRAN_GANSSReferenceTime__ue_GANSSTimingOfCellFrames, ms_Part),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms_Part_constr_3, &asn_PER_memb_ms_Part_constr_3,  memb_ms_Part_constraint_2 },
		0, 0, /* No default value */
		"ms-Part"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UTRAN_GANSSReferenceTime__ue_GANSSTimingOfCellFrames, ls_Part),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ls_Part_4,
		0,
		{ &asn_OER_memb_ls_Part_constr_4, &asn_PER_memb_ls_Part_constr_4,  memb_ls_Part_constraint_2 },
		0, 0, /* No default value */
		"ls-Part"
		},
};
static const ber_tlv_tag_t asn_DEF_ue_GANSSTimingOfCellFrames_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ue_GANSSTimingOfCellFrames_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ms-Part */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ls-Part */
};
static asn_SEQUENCE_specifics_t asn_SPC_ue_GANSSTimingOfCellFrames_specs_2 = {
	sizeof(struct UTRAN_GANSSReferenceTime__ue_GANSSTimingOfCellFrames),
	offsetof(struct UTRAN_GANSSReferenceTime__ue_GANSSTimingOfCellFrames, _asn_ctx),
	asn_MAP_ue_GANSSTimingOfCellFrames_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_GANSSTimingOfCellFrames_2 = {
	"ue-GANSSTimingOfCellFrames",
	"ue-GANSSTimingOfCellFrames",
	&asn_OP_SEQUENCE,
	asn_DEF_ue_GANSSTimingOfCellFrames_tags_2,
	sizeof(asn_DEF_ue_GANSSTimingOfCellFrames_tags_2)
		/sizeof(asn_DEF_ue_GANSSTimingOfCellFrames_tags_2[0]) - 1, /* 1 */
	asn_DEF_ue_GANSSTimingOfCellFrames_tags_2,	/* Same as above */
	sizeof(asn_DEF_ue_GANSSTimingOfCellFrames_tags_2)
		/sizeof(asn_DEF_ue_GANSSTimingOfCellFrames_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ue_GANSSTimingOfCellFrames_2,
	2,	/* Elements count */
	&asn_SPC_ue_GANSSTimingOfCellFrames_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_fdd_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UTRAN_GANSSReferenceTime__mode__fdd, primary_CPICH_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCPICH_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"primary-CPICH-Info"
		},
};
static const ber_tlv_tag_t asn_DEF_fdd_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* primary-CPICH-Info */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_8 = {
	sizeof(struct UTRAN_GANSSReferenceTime__mode__fdd),
	offsetof(struct UTRAN_GANSSReferenceTime__mode__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_8,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_8 = {
	"fdd",
	"fdd",
	&asn_OP_SEQUENCE,
	asn_DEF_fdd_tags_8,
	sizeof(asn_DEF_fdd_tags_8)
		/sizeof(asn_DEF_fdd_tags_8[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_8,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_8)
		/sizeof(asn_DEF_fdd_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_fdd_8,
	1,	/* Elements count */
	&asn_SPC_fdd_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UTRAN_GANSSReferenceTime__mode__tdd, cellParameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellParametersID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellParameters"
		},
};
static const ber_tlv_tag_t asn_DEF_tdd_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cellParameters */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_10 = {
	sizeof(struct UTRAN_GANSSReferenceTime__mode__tdd),
	offsetof(struct UTRAN_GANSSReferenceTime__mode__tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_10,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_10 = {
	"tdd",
	"tdd",
	&asn_OP_SEQUENCE,
	asn_DEF_tdd_tags_10,
	sizeof(asn_DEF_tdd_tags_10)
		/sizeof(asn_DEF_tdd_tags_10[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_10,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_10)
		/sizeof(asn_DEF_tdd_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_tdd_10,
	1,	/* Elements count */
	&asn_SPC_tdd_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mode_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UTRAN_GANSSReferenceTime__mode, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UTRAN_GANSSReferenceTime__mode, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_mode_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
static asn_CHOICE_specifics_t asn_SPC_mode_specs_7 = {
	sizeof(struct UTRAN_GANSSReferenceTime__mode),
	offsetof(struct UTRAN_GANSSReferenceTime__mode, _asn_ctx),
	offsetof(struct UTRAN_GANSSReferenceTime__mode, present),
	sizeof(((struct UTRAN_GANSSReferenceTime__mode *)0)->present),
	asn_MAP_mode_tag2el_7,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mode_7 = {
	"mode",
	"mode",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_mode_constr_7, &asn_PER_type_mode_constr_7, CHOICE_constraint },
	asn_MBR_mode_7,
	2,	/* Elements count */
	&asn_SPC_mode_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UTRAN_GANSSReferenceTime_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UTRAN_GANSSReferenceTime, ue_GANSSTimingOfCellFrames),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ue_GANSSTimingOfCellFrames_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-GANSSTimingOfCellFrames"
		},
	{ ATF_POINTER, 2, offsetof(struct UTRAN_GANSSReferenceTime, gANSS_TimeId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_gANSS_TimeId_constr_5, &asn_PER_memb_gANSS_TimeId_constr_5,  memb_gANSS_TimeId_constraint_1 },
		0, 0, /* No default value */
		"gANSS-TimeId"
		},
	{ ATF_POINTER, 1, offsetof(struct UTRAN_GANSSReferenceTime, gANSS_TimeUncertainty),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_gANSS_TimeUncertainty_constr_6, &asn_PER_memb_gANSS_TimeUncertainty_constr_6,  memb_gANSS_TimeUncertainty_constraint_1 },
		0, 0, /* No default value */
		"gANSS-TimeUncertainty"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UTRAN_GANSSReferenceTime, mode),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_mode_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UTRAN_GANSSReferenceTime, referenceSfn),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_referenceSfn_constr_12, &asn_PER_memb_referenceSfn_constr_12,  memb_referenceSfn_constraint_1 },
		0, 0, /* No default value */
		"referenceSfn"
		},
};
static const int asn_MAP_UTRAN_GANSSReferenceTime_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_UTRAN_GANSSReferenceTime_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UTRAN_GANSSReferenceTime_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-GANSSTimingOfCellFrames */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gANSS-TimeId */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gANSS-TimeUncertainty */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mode */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* referenceSfn */
};
asn_SEQUENCE_specifics_t asn_SPC_UTRAN_GANSSReferenceTime_specs_1 = {
	sizeof(struct UTRAN_GANSSReferenceTime),
	offsetof(struct UTRAN_GANSSReferenceTime, _asn_ctx),
	asn_MAP_UTRAN_GANSSReferenceTime_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_UTRAN_GANSSReferenceTime_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UTRAN_GANSSReferenceTime = {
	"UTRAN-GANSSReferenceTime",
	"UTRAN-GANSSReferenceTime",
	&asn_OP_SEQUENCE,
	asn_DEF_UTRAN_GANSSReferenceTime_tags_1,
	sizeof(asn_DEF_UTRAN_GANSSReferenceTime_tags_1)
		/sizeof(asn_DEF_UTRAN_GANSSReferenceTime_tags_1[0]), /* 1 */
	asn_DEF_UTRAN_GANSSReferenceTime_tags_1,	/* Same as above */
	sizeof(asn_DEF_UTRAN_GANSSReferenceTime_tags_1)
		/sizeof(asn_DEF_UTRAN_GANSSReferenceTime_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UTRAN_GANSSReferenceTime_1,
	5,	/* Elements count */
	&asn_SPC_UTRAN_GANSSReferenceTime_specs_1	/* Additional specs */
};

