/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "CSI-Process-r11.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_setup_constraint_12(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 2)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_cqi_ReportPeriodicProcId_r11_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_alternativeCodebookEnabledFor4TXProc_r12_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_alternativeCodebookEnabledFor4TXProc_r12_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_setup_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2)) */};
static asn_per_constraints_t asn_PER_type_setup_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_setup_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2)) */};
static asn_per_constraints_t asn_PER_memb_setup_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_csi_IM_ConfigIdList_r12_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_csi_IM_ConfigIdList_r12_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_cqi_ReportAperiodicProc2_r12_constr_16 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cqi_ReportAperiodicProc2_r12_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_cqi_ReportAperiodicProc_v1310_constr_19 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cqi_ReportAperiodicProc_v1310_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_cqi_ReportAperiodicProc2_v1310_constr_22 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cqi_ReportAperiodicProc2_v1310_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_cqi_ReportPeriodicProcId_r11_constr_7 CC_NOTUSED = {
	{ 1, 1 }	/* (0..3) */,
	-1};
static asn_per_constraints_t asn_PER_memb_cqi_ReportPeriodicProcId_r11_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_alternativeCodebookEnabledFor4TXProc_r12_value2enum_10[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_alternativeCodebookEnabledFor4TXProc_r12_enum2value_10[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_alternativeCodebookEnabledFor4TXProc_r12_specs_10 = {
	asn_MAP_alternativeCodebookEnabledFor4TXProc_r12_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_alternativeCodebookEnabledFor4TXProc_r12_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_alternativeCodebookEnabledFor4TXProc_r12_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_alternativeCodebookEnabledFor4TXProc_r12_10 = {
	"alternativeCodebookEnabledFor4TXProc-r12",
	"alternativeCodebookEnabledFor4TXProc-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_alternativeCodebookEnabledFor4TXProc_r12_tags_10,
	sizeof(asn_DEF_alternativeCodebookEnabledFor4TXProc_r12_tags_10)
		/sizeof(asn_DEF_alternativeCodebookEnabledFor4TXProc_r12_tags_10[0]) - 1, /* 1 */
	asn_DEF_alternativeCodebookEnabledFor4TXProc_r12_tags_10,	/* Same as above */
	sizeof(asn_DEF_alternativeCodebookEnabledFor4TXProc_r12_tags_10)
		/sizeof(asn_DEF_alternativeCodebookEnabledFor4TXProc_r12_tags_10[0]), /* 2 */
	{ &asn_OER_type_alternativeCodebookEnabledFor4TXProc_r12_constr_10, &asn_PER_type_alternativeCodebookEnabledFor4TXProc_r12_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_alternativeCodebookEnabledFor4TXProc_r12_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_14[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_CSI_IM_ConfigId_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_setup_specs_14 = {
	sizeof(struct CSI_Process_r11__csi_IM_ConfigIdList_r12__setup),
	offsetof(struct CSI_Process_r11__csi_IM_ConfigIdList_r12__setup, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_14 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_setup_tags_14,
	sizeof(asn_DEF_setup_tags_14)
		/sizeof(asn_DEF_setup_tags_14[0]) - 1, /* 1 */
	asn_DEF_setup_tags_14,	/* Same as above */
	sizeof(asn_DEF_setup_tags_14)
		/sizeof(asn_DEF_setup_tags_14[0]), /* 2 */
	{ &asn_OER_type_setup_constr_14, &asn_PER_type_setup_constr_14, SEQUENCE_OF_constraint },
	asn_MBR_setup_14,
	1,	/* Single element */
	&asn_SPC_setup_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_csi_IM_ConfigIdList_r12_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_Process_r11__csi_IM_ConfigIdList_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_Process_r11__csi_IM_ConfigIdList_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_14,
		0,
		{ &asn_OER_memb_setup_constr_14, &asn_PER_memb_setup_constr_14,  memb_setup_constraint_12 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_csi_IM_ConfigIdList_r12_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_csi_IM_ConfigIdList_r12_specs_12 = {
	sizeof(struct CSI_Process_r11__csi_IM_ConfigIdList_r12),
	offsetof(struct CSI_Process_r11__csi_IM_ConfigIdList_r12, _asn_ctx),
	offsetof(struct CSI_Process_r11__csi_IM_ConfigIdList_r12, present),
	sizeof(((struct CSI_Process_r11__csi_IM_ConfigIdList_r12 *)0)->present),
	asn_MAP_csi_IM_ConfigIdList_r12_tag2el_12,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_IM_ConfigIdList_r12_12 = {
	"csi-IM-ConfigIdList-r12",
	"csi-IM-ConfigIdList-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_csi_IM_ConfigIdList_r12_constr_12, &asn_PER_type_csi_IM_ConfigIdList_r12_constr_12, CHOICE_constraint },
	asn_MBR_csi_IM_ConfigIdList_r12_12,
	2,	/* Elements count */
	&asn_SPC_csi_IM_ConfigIdList_r12_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cqi_ReportAperiodicProc2_r12_16[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_Process_r11__cqi_ReportAperiodicProc2_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_Process_r11__cqi_ReportAperiodicProc2_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportAperiodicProc_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_cqi_ReportAperiodicProc2_r12_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_cqi_ReportAperiodicProc2_r12_specs_16 = {
	sizeof(struct CSI_Process_r11__cqi_ReportAperiodicProc2_r12),
	offsetof(struct CSI_Process_r11__cqi_ReportAperiodicProc2_r12, _asn_ctx),
	offsetof(struct CSI_Process_r11__cqi_ReportAperiodicProc2_r12, present),
	sizeof(((struct CSI_Process_r11__cqi_ReportAperiodicProc2_r12 *)0)->present),
	asn_MAP_cqi_ReportAperiodicProc2_r12_tag2el_16,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cqi_ReportAperiodicProc2_r12_16 = {
	"cqi-ReportAperiodicProc2-r12",
	"cqi-ReportAperiodicProc2-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_cqi_ReportAperiodicProc2_r12_constr_16, &asn_PER_type_cqi_ReportAperiodicProc2_r12_constr_16, CHOICE_constraint },
	asn_MBR_cqi_ReportAperiodicProc2_r12_16,
	2,	/* Elements count */
	&asn_SPC_cqi_ReportAperiodicProc2_r12_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cqi_ReportAperiodicProc_v1310_19[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_Process_r11__cqi_ReportAperiodicProc_v1310, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_Process_r11__cqi_ReportAperiodicProc_v1310, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportAperiodicProc_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_cqi_ReportAperiodicProc_v1310_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_cqi_ReportAperiodicProc_v1310_specs_19 = {
	sizeof(struct CSI_Process_r11__cqi_ReportAperiodicProc_v1310),
	offsetof(struct CSI_Process_r11__cqi_ReportAperiodicProc_v1310, _asn_ctx),
	offsetof(struct CSI_Process_r11__cqi_ReportAperiodicProc_v1310, present),
	sizeof(((struct CSI_Process_r11__cqi_ReportAperiodicProc_v1310 *)0)->present),
	asn_MAP_cqi_ReportAperiodicProc_v1310_tag2el_19,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cqi_ReportAperiodicProc_v1310_19 = {
	"cqi-ReportAperiodicProc-v1310",
	"cqi-ReportAperiodicProc-v1310",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_cqi_ReportAperiodicProc_v1310_constr_19, &asn_PER_type_cqi_ReportAperiodicProc_v1310_constr_19, CHOICE_constraint },
	asn_MBR_cqi_ReportAperiodicProc_v1310_19,
	2,	/* Elements count */
	&asn_SPC_cqi_ReportAperiodicProc_v1310_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cqi_ReportAperiodicProc2_v1310_22[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_Process_r11__cqi_ReportAperiodicProc2_v1310, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_Process_r11__cqi_ReportAperiodicProc2_v1310, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportAperiodicProc_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_cqi_ReportAperiodicProc2_v1310_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_cqi_ReportAperiodicProc2_v1310_specs_22 = {
	sizeof(struct CSI_Process_r11__cqi_ReportAperiodicProc2_v1310),
	offsetof(struct CSI_Process_r11__cqi_ReportAperiodicProc2_v1310, _asn_ctx),
	offsetof(struct CSI_Process_r11__cqi_ReportAperiodicProc2_v1310, present),
	sizeof(((struct CSI_Process_r11__cqi_ReportAperiodicProc2_v1310 *)0)->present),
	asn_MAP_cqi_ReportAperiodicProc2_v1310_tag2el_22,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cqi_ReportAperiodicProc2_v1310_22 = {
	"cqi-ReportAperiodicProc2-v1310",
	"cqi-ReportAperiodicProc2-v1310",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_cqi_ReportAperiodicProc2_v1310_constr_22, &asn_PER_type_cqi_ReportAperiodicProc2_v1310_constr_22, CHOICE_constraint },
	asn_MBR_cqi_ReportAperiodicProc2_v1310_22,
	2,	/* Elements count */
	&asn_SPC_cqi_ReportAperiodicProc2_v1310_specs_22	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CSI_Process_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_Process_r11, csi_ProcessId_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_ProcessId_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-ProcessId-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_Process_r11, csi_RS_ConfigNZPId_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigNZPId_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-ConfigNZPId-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_Process_r11, csi_IM_ConfigId_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_IM_ConfigId_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-IM-ConfigId-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_Process_r11, p_C_AndCBSRList_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_C_AndCBSR_Pair_r13a,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p-C-AndCBSRList-r11"
		},
	{ ATF_POINTER, 15, offsetof(struct CSI_Process_r11, cqi_ReportBothProc_r11),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportBothProc_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportBothProc-r11"
		},
	{ ATF_POINTER, 14, offsetof(struct CSI_Process_r11, cqi_ReportPeriodicProcId_r11),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_cqi_ReportPeriodicProcId_r11_constr_7, &asn_PER_memb_cqi_ReportPeriodicProcId_r11_constr_7,  memb_cqi_ReportPeriodicProcId_r11_constraint_1 },
		0, 0, /* No default value */
		"cqi-ReportPeriodicProcId-r11"
		},
	{ ATF_POINTER, 13, offsetof(struct CSI_Process_r11, cqi_ReportAperiodicProc_r11),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportAperiodicProc_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportAperiodicProc-r11"
		},
	{ ATF_POINTER, 12, offsetof(struct CSI_Process_r11, alternativeCodebookEnabledFor4TXProc_r12),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_alternativeCodebookEnabledFor4TXProc_r12_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"alternativeCodebookEnabledFor4TXProc-r12"
		},
	{ ATF_POINTER, 11, offsetof(struct CSI_Process_r11, csi_IM_ConfigIdList_r12),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_csi_IM_ConfigIdList_r12_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-IM-ConfigIdList-r12"
		},
	{ ATF_POINTER, 10, offsetof(struct CSI_Process_r11, cqi_ReportAperiodicProc2_r12),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cqi_ReportAperiodicProc2_r12_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportAperiodicProc2-r12"
		},
	{ ATF_POINTER, 9, offsetof(struct CSI_Process_r11, cqi_ReportAperiodicProc_v1310),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cqi_ReportAperiodicProc_v1310_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportAperiodicProc-v1310"
		},
	{ ATF_POINTER, 8, offsetof(struct CSI_Process_r11, cqi_ReportAperiodicProc2_v1310),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cqi_ReportAperiodicProc2_v1310_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportAperiodicProc2-v1310"
		},
	{ ATF_POINTER, 7, offsetof(struct CSI_Process_r11, eMIMO_Type_r13),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigEMIMO_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eMIMO-Type-r13"
		},
	{ ATF_POINTER, 6, offsetof(struct CSI_Process_r11, dummy),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigEMIMO_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy"
		},
	{ ATF_POINTER, 5, offsetof(struct CSI_Process_r11, eMIMO_Hybrid_r14),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigEMIMO_Hybrid_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eMIMO-Hybrid-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct CSI_Process_r11, advancedCodebookEnabled_r14),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"advancedCodebookEnabled-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct CSI_Process_r11, eMIMO_Type_v1480),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigEMIMO_v1480,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eMIMO-Type-v1480"
		},
	{ ATF_POINTER, 2, offsetof(struct CSI_Process_r11, feCOMP_CSI_Enabled_v1530),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"feCOMP-CSI-Enabled-v1530"
		},
	{ ATF_POINTER, 1, offsetof(struct CSI_Process_r11, eMIMO_Type_v1530),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigEMIMO_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eMIMO-Type-v1530"
		},
};
static const int asn_MAP_CSI_Process_r11_oms_1[] = { 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18 };
static const ber_tlv_tag_t asn_DEF_CSI_Process_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CSI_Process_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-ProcessId-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* csi-RS-ConfigNZPId-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* csi-IM-ConfigId-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* p-C-AndCBSRList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* cqi-ReportBothProc-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* cqi-ReportPeriodicProcId-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* cqi-ReportAperiodicProc-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* alternativeCodebookEnabledFor4TXProc-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* csi-IM-ConfigIdList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* cqi-ReportAperiodicProc2-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* cqi-ReportAperiodicProc-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* cqi-ReportAperiodicProc2-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* eMIMO-Type-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* dummy */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* eMIMO-Hybrid-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* advancedCodebookEnabled-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* eMIMO-Type-v1480 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* feCOMP-CSI-Enabled-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 } /* eMIMO-Type-v1530 */
};
asn_SEQUENCE_specifics_t asn_SPC_CSI_Process_r11_specs_1 = {
	sizeof(struct CSI_Process_r11),
	offsetof(struct CSI_Process_r11, _asn_ctx),
	asn_MAP_CSI_Process_r11_tag2el_1,
	19,	/* Count of tags in the map */
	asn_MAP_CSI_Process_r11_oms_1,	/* Optional members */
	3, 12,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CSI_Process_r11 = {
	"CSI-Process-r11",
	"CSI-Process-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_CSI_Process_r11_tags_1,
	sizeof(asn_DEF_CSI_Process_r11_tags_1)
		/sizeof(asn_DEF_CSI_Process_r11_tags_1[0]), /* 1 */
	asn_DEF_CSI_Process_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSI_Process_r11_tags_1)
		/sizeof(asn_DEF_CSI_Process_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CSI_Process_r11_1,
	19,	/* Elements count */
	&asn_SPC_CSI_Process_r11_specs_1	/* Additional specs */
};

