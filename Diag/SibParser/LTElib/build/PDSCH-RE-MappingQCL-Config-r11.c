/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "PDSCH-RE-MappingQCL-Config-r11.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_crs_FreqShift_r11_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 5)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_crs_FreqShift_v1530_constraint_30(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 5)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_crs_PortsCount_r11_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_crs_PortsCount_r11_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_mbsfn_SubframeConfigList_r11_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_mbsfn_SubframeConfigList_r11_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pdsch_Start_r11_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pdsch_Start_r11_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_crs_FreqShift_r11_constr_9 CC_NOTUSED = {
	{ 1, 1 }	/* (0..5) */,
	-1};
static asn_per_constraints_t asn_PER_memb_crs_FreqShift_r11_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_mbsfn_SubframeConfigList_v1430_constr_24 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_mbsfn_SubframeConfigList_v1430_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_crs_PortsCount_v1530_constr_31 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_crs_PortsCount_v1530_constr_31 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pdsch_Start_v1530_constr_39 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pdsch_Start_v1530_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_crs_FreqShift_v1530_constr_36 CC_NOTUSED = {
	{ 1, 1 }	/* (0..5) */,
	-1};
static asn_per_constraints_t asn_PER_memb_crs_FreqShift_v1530_constr_36 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_codewordOneConfig_v1530_constr_28 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_codewordOneConfig_v1530_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_crs_PortsCount_r11_value2enum_4[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_crs_PortsCount_r11_enum2value_4[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n4(2) */
	3	/* spare1(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_crs_PortsCount_r11_specs_4 = {
	asn_MAP_crs_PortsCount_r11_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_crs_PortsCount_r11_enum2value_4,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_crs_PortsCount_r11_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_crs_PortsCount_r11_4 = {
	"crs-PortsCount-r11",
	"crs-PortsCount-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_crs_PortsCount_r11_tags_4,
	sizeof(asn_DEF_crs_PortsCount_r11_tags_4)
		/sizeof(asn_DEF_crs_PortsCount_r11_tags_4[0]) - 1, /* 1 */
	asn_DEF_crs_PortsCount_r11_tags_4,	/* Same as above */
	sizeof(asn_DEF_crs_PortsCount_r11_tags_4)
		/sizeof(asn_DEF_crs_PortsCount_r11_tags_4[0]), /* 2 */
	{ &asn_OER_type_crs_PortsCount_r11_constr_4, &asn_PER_type_crs_PortsCount_r11_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_crs_PortsCount_r11_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11__setup, subframeConfigList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFN_SubframeConfigList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframeConfigList"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* subframeConfigList */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_12 = {
	sizeof(struct PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11__setup),
	offsetof(struct PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11__setup, _asn_ctx),
	asn_MAP_setup_tag2el_12,
	1,	/* Count of tags in the map */
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
	1,	/* Elements count */
	&asn_SPC_setup_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mbsfn_SubframeConfigList_r11_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_mbsfn_SubframeConfigList_r11_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_mbsfn_SubframeConfigList_r11_specs_10 = {
	sizeof(struct PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11),
	offsetof(struct PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11, _asn_ctx),
	offsetof(struct PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11, present),
	sizeof(((struct PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11 *)0)->present),
	asn_MAP_mbsfn_SubframeConfigList_r11_tag2el_10,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mbsfn_SubframeConfigList_r11_10 = {
	"mbsfn-SubframeConfigList-r11",
	"mbsfn-SubframeConfigList-r11",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_mbsfn_SubframeConfigList_r11_constr_10, &asn_PER_type_mbsfn_SubframeConfigList_r11_constr_10, CHOICE_constraint },
	asn_MBR_mbsfn_SubframeConfigList_r11_10,
	2,	/* Elements count */
	&asn_SPC_mbsfn_SubframeConfigList_r11_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pdsch_Start_r11_value2enum_14[] = {
	{ 0,	8,	"reserved" },
	{ 1,	2,	"n1" },
	{ 2,	2,	"n2" },
	{ 3,	2,	"n3" },
	{ 4,	2,	"n4" },
	{ 5,	8,	"assigned" }
};
static const unsigned int asn_MAP_pdsch_Start_r11_enum2value_14[] = {
	5,	/* assigned(5) */
	1,	/* n1(1) */
	2,	/* n2(2) */
	3,	/* n3(3) */
	4,	/* n4(4) */
	0	/* reserved(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pdsch_Start_r11_specs_14 = {
	asn_MAP_pdsch_Start_r11_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_pdsch_Start_r11_enum2value_14,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pdsch_Start_r11_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdsch_Start_r11_14 = {
	"pdsch-Start-r11",
	"pdsch-Start-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_pdsch_Start_r11_tags_14,
	sizeof(asn_DEF_pdsch_Start_r11_tags_14)
		/sizeof(asn_DEF_pdsch_Start_r11_tags_14[0]) - 1, /* 1 */
	asn_DEF_pdsch_Start_r11_tags_14,	/* Same as above */
	sizeof(asn_DEF_pdsch_Start_r11_tags_14)
		/sizeof(asn_DEF_pdsch_Start_r11_tags_14[0]), /* 2 */
	{ &asn_OER_type_pdsch_Start_r11_constr_14, &asn_PER_type_pdsch_Start_r11_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pdsch_Start_r11_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_optionalSetOfFields_r11_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11, crs_PortsCount_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_crs_PortsCount_r11_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crs-PortsCount-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11, crs_FreqShift_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_crs_FreqShift_r11_constr_9, &asn_PER_memb_crs_FreqShift_r11_constr_9,  memb_crs_FreqShift_r11_constraint_3 },
		0, 0, /* No default value */
		"crs-FreqShift-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11, mbsfn_SubframeConfigList_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_mbsfn_SubframeConfigList_r11_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbsfn-SubframeConfigList-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11, pdsch_Start_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pdsch_Start_r11_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-Start-r11"
		},
};
static const int asn_MAP_optionalSetOfFields_r11_oms_3[] = { 2 };
static const ber_tlv_tag_t asn_DEF_optionalSetOfFields_r11_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_optionalSetOfFields_r11_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* crs-PortsCount-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* crs-FreqShift-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mbsfn-SubframeConfigList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* pdsch-Start-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_optionalSetOfFields_r11_specs_3 = {
	sizeof(struct PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11),
	offsetof(struct PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11, _asn_ctx),
	asn_MAP_optionalSetOfFields_r11_tag2el_3,
	4,	/* Count of tags in the map */
	asn_MAP_optionalSetOfFields_r11_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_optionalSetOfFields_r11_3 = {
	"optionalSetOfFields-r11",
	"optionalSetOfFields-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_optionalSetOfFields_r11_tags_3,
	sizeof(asn_DEF_optionalSetOfFields_r11_tags_3)
		/sizeof(asn_DEF_optionalSetOfFields_r11_tags_3[0]) - 1, /* 1 */
	asn_DEF_optionalSetOfFields_r11_tags_3,	/* Same as above */
	sizeof(asn_DEF_optionalSetOfFields_r11_tags_3)
		/sizeof(asn_DEF_optionalSetOfFields_r11_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_optionalSetOfFields_r11_3,
	4,	/* Elements count */
	&asn_SPC_optionalSetOfFields_r11_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_26[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__mbsfn_SubframeConfigList_v1430__setup, subframeConfigList_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFN_SubframeConfigList_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframeConfigList-v1430"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_26[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* subframeConfigList-v1430 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_26 = {
	sizeof(struct PDSCH_RE_MappingQCL_Config_r11__mbsfn_SubframeConfigList_v1430__setup),
	offsetof(struct PDSCH_RE_MappingQCL_Config_r11__mbsfn_SubframeConfigList_v1430__setup, _asn_ctx),
	asn_MAP_setup_tag2el_26,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_26 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_26,
	sizeof(asn_DEF_setup_tags_26)
		/sizeof(asn_DEF_setup_tags_26[0]) - 1, /* 1 */
	asn_DEF_setup_tags_26,	/* Same as above */
	sizeof(asn_DEF_setup_tags_26)
		/sizeof(asn_DEF_setup_tags_26[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_26,
	1,	/* Elements count */
	&asn_SPC_setup_specs_26	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mbsfn_SubframeConfigList_v1430_24[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__mbsfn_SubframeConfigList_v1430, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__mbsfn_SubframeConfigList_v1430, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_mbsfn_SubframeConfigList_v1430_tag2el_24[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_mbsfn_SubframeConfigList_v1430_specs_24 = {
	sizeof(struct PDSCH_RE_MappingQCL_Config_r11__mbsfn_SubframeConfigList_v1430),
	offsetof(struct PDSCH_RE_MappingQCL_Config_r11__mbsfn_SubframeConfigList_v1430, _asn_ctx),
	offsetof(struct PDSCH_RE_MappingQCL_Config_r11__mbsfn_SubframeConfigList_v1430, present),
	sizeof(((struct PDSCH_RE_MappingQCL_Config_r11__mbsfn_SubframeConfigList_v1430 *)0)->present),
	asn_MAP_mbsfn_SubframeConfigList_v1430_tag2el_24,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mbsfn_SubframeConfigList_v1430_24 = {
	"mbsfn-SubframeConfigList-v1430",
	"mbsfn-SubframeConfigList-v1430",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_mbsfn_SubframeConfigList_v1430_constr_24, &asn_PER_type_mbsfn_SubframeConfigList_v1430_constr_24, CHOICE_constraint },
	asn_MBR_mbsfn_SubframeConfigList_v1430_24,
	2,	/* Elements count */
	&asn_SPC_mbsfn_SubframeConfigList_v1430_specs_24	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_crs_PortsCount_v1530_value2enum_31[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_crs_PortsCount_v1530_enum2value_31[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n4(2) */
	3	/* spare1(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_crs_PortsCount_v1530_specs_31 = {
	asn_MAP_crs_PortsCount_v1530_value2enum_31,	/* "tag" => N; sorted by tag */
	asn_MAP_crs_PortsCount_v1530_enum2value_31,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_crs_PortsCount_v1530_tags_31[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_crs_PortsCount_v1530_31 = {
	"crs-PortsCount-v1530",
	"crs-PortsCount-v1530",
	&asn_OP_NativeEnumerated,
	asn_DEF_crs_PortsCount_v1530_tags_31,
	sizeof(asn_DEF_crs_PortsCount_v1530_tags_31)
		/sizeof(asn_DEF_crs_PortsCount_v1530_tags_31[0]) - 1, /* 1 */
	asn_DEF_crs_PortsCount_v1530_tags_31,	/* Same as above */
	sizeof(asn_DEF_crs_PortsCount_v1530_tags_31)
		/sizeof(asn_DEF_crs_PortsCount_v1530_tags_31[0]), /* 2 */
	{ &asn_OER_type_crs_PortsCount_v1530_constr_31, &asn_PER_type_crs_PortsCount_v1530_constr_31, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_crs_PortsCount_v1530_specs_31	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pdsch_Start_v1530_value2enum_39[] = {
	{ 0,	8,	"reserved" },
	{ 1,	2,	"n1" },
	{ 2,	2,	"n2" },
	{ 3,	2,	"n3" },
	{ 4,	2,	"n4" },
	{ 5,	8,	"assigned" }
};
static const unsigned int asn_MAP_pdsch_Start_v1530_enum2value_39[] = {
	5,	/* assigned(5) */
	1,	/* n1(1) */
	2,	/* n2(2) */
	3,	/* n3(3) */
	4,	/* n4(4) */
	0	/* reserved(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pdsch_Start_v1530_specs_39 = {
	asn_MAP_pdsch_Start_v1530_value2enum_39,	/* "tag" => N; sorted by tag */
	asn_MAP_pdsch_Start_v1530_enum2value_39,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pdsch_Start_v1530_tags_39[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdsch_Start_v1530_39 = {
	"pdsch-Start-v1530",
	"pdsch-Start-v1530",
	&asn_OP_NativeEnumerated,
	asn_DEF_pdsch_Start_v1530_tags_39,
	sizeof(asn_DEF_pdsch_Start_v1530_tags_39)
		/sizeof(asn_DEF_pdsch_Start_v1530_tags_39[0]) - 1, /* 1 */
	asn_DEF_pdsch_Start_v1530_tags_39,	/* Same as above */
	sizeof(asn_DEF_pdsch_Start_v1530_tags_39)
		/sizeof(asn_DEF_pdsch_Start_v1530_tags_39[0]), /* 2 */
	{ &asn_OER_type_pdsch_Start_v1530_constr_39, &asn_PER_type_pdsch_Start_v1530_constr_39, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pdsch_Start_v1530_specs_39	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_30[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__codewordOneConfig_v1530__setup, crs_PortsCount_v1530),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_crs_PortsCount_v1530_31,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crs-PortsCount-v1530"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__codewordOneConfig_v1530__setup, crs_FreqShift_v1530),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_crs_FreqShift_v1530_constr_36, &asn_PER_memb_crs_FreqShift_v1530_constr_36,  memb_crs_FreqShift_v1530_constraint_30 },
		0, 0, /* No default value */
		"crs-FreqShift-v1530"
		},
	{ ATF_POINTER, 2, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__codewordOneConfig_v1530__setup, mbsfn_SubframeConfigList_v1530),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFN_SubframeConfigList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbsfn-SubframeConfigList-v1530"
		},
	{ ATF_POINTER, 1, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__codewordOneConfig_v1530__setup, mbsfn_SubframeConfigListExt_v1530),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFN_SubframeConfigList_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbsfn-SubframeConfigListExt-v1530"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__codewordOneConfig_v1530__setup, pdsch_Start_v1530),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pdsch_Start_v1530_39,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-Start-v1530"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__codewordOneConfig_v1530__setup, csi_RS_ConfigZPId_v1530),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigZPId_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-ConfigZPId-v1530"
		},
	{ ATF_POINTER, 1, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__codewordOneConfig_v1530__setup, qcl_CSI_RS_ConfigNZPId_v1530),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigNZPId_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qcl-CSI-RS-ConfigNZPId-v1530"
		},
};
static const int asn_MAP_setup_oms_30[] = { 2, 3, 6 };
static const ber_tlv_tag_t asn_DEF_setup_tags_30[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_30[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* crs-PortsCount-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* crs-FreqShift-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mbsfn-SubframeConfigList-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mbsfn-SubframeConfigListExt-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pdsch-Start-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* csi-RS-ConfigZPId-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* qcl-CSI-RS-ConfigNZPId-v1530 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_30 = {
	sizeof(struct PDSCH_RE_MappingQCL_Config_r11__codewordOneConfig_v1530__setup),
	offsetof(struct PDSCH_RE_MappingQCL_Config_r11__codewordOneConfig_v1530__setup, _asn_ctx),
	asn_MAP_setup_tag2el_30,
	7,	/* Count of tags in the map */
	asn_MAP_setup_oms_30,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_30 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_30,
	sizeof(asn_DEF_setup_tags_30)
		/sizeof(asn_DEF_setup_tags_30[0]) - 1, /* 1 */
	asn_DEF_setup_tags_30,	/* Same as above */
	sizeof(asn_DEF_setup_tags_30)
		/sizeof(asn_DEF_setup_tags_30[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_30,
	7,	/* Elements count */
	&asn_SPC_setup_specs_30	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_codewordOneConfig_v1530_28[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__codewordOneConfig_v1530, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_RE_MappingQCL_Config_r11__codewordOneConfig_v1530, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_30,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_codewordOneConfig_v1530_tag2el_28[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_codewordOneConfig_v1530_specs_28 = {
	sizeof(struct PDSCH_RE_MappingQCL_Config_r11__codewordOneConfig_v1530),
	offsetof(struct PDSCH_RE_MappingQCL_Config_r11__codewordOneConfig_v1530, _asn_ctx),
	offsetof(struct PDSCH_RE_MappingQCL_Config_r11__codewordOneConfig_v1530, present),
	sizeof(((struct PDSCH_RE_MappingQCL_Config_r11__codewordOneConfig_v1530 *)0)->present),
	asn_MAP_codewordOneConfig_v1530_tag2el_28,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_codewordOneConfig_v1530_28 = {
	"codewordOneConfig-v1530",
	"codewordOneConfig-v1530",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_codewordOneConfig_v1530_constr_28, &asn_PER_type_codewordOneConfig_v1530_constr_28, CHOICE_constraint },
	asn_MBR_codewordOneConfig_v1530_28,
	2,	/* Elements count */
	&asn_SPC_codewordOneConfig_v1530_specs_28	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDSCH_RE_MappingQCL_Config_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_RE_MappingQCL_Config_r11, pdsch_RE_MappingQCL_ConfigId_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_RE_MappingQCL_ConfigId_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-RE-MappingQCL-ConfigId-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct PDSCH_RE_MappingQCL_Config_r11, optionalSetOfFields_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_optionalSetOfFields_r11_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"optionalSetOfFields-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_RE_MappingQCL_Config_r11, csi_RS_ConfigZPId_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigZPId_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-ConfigZPId-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct PDSCH_RE_MappingQCL_Config_r11, qcl_CSI_RS_ConfigNZPId_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigNZPId_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qcl-CSI-RS-ConfigNZPId-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct PDSCH_RE_MappingQCL_Config_r11, mbsfn_SubframeConfigList_v1430),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_mbsfn_SubframeConfigList_v1430_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbsfn-SubframeConfigList-v1430"
		},
	{ ATF_POINTER, 1, offsetof(struct PDSCH_RE_MappingQCL_Config_r11, codewordOneConfig_v1530),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_codewordOneConfig_v1530_28,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"codewordOneConfig-v1530"
		},
};
static const int asn_MAP_PDSCH_RE_MappingQCL_Config_r11_oms_1[] = { 1, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_PDSCH_RE_MappingQCL_Config_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDSCH_RE_MappingQCL_Config_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdsch-RE-MappingQCL-ConfigId-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* optionalSetOfFields-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* csi-RS-ConfigZPId-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* qcl-CSI-RS-ConfigNZPId-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* mbsfn-SubframeConfigList-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* codewordOneConfig-v1530 */
};
asn_SEQUENCE_specifics_t asn_SPC_PDSCH_RE_MappingQCL_Config_r11_specs_1 = {
	sizeof(struct PDSCH_RE_MappingQCL_Config_r11),
	offsetof(struct PDSCH_RE_MappingQCL_Config_r11, _asn_ctx),
	asn_MAP_PDSCH_RE_MappingQCL_Config_r11_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_PDSCH_RE_MappingQCL_Config_r11_oms_1,	/* Optional members */
	2, 2,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDSCH_RE_MappingQCL_Config_r11 = {
	"PDSCH-RE-MappingQCL-Config-r11",
	"PDSCH-RE-MappingQCL-Config-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_PDSCH_RE_MappingQCL_Config_r11_tags_1,
	sizeof(asn_DEF_PDSCH_RE_MappingQCL_Config_r11_tags_1)
		/sizeof(asn_DEF_PDSCH_RE_MappingQCL_Config_r11_tags_1[0]), /* 1 */
	asn_DEF_PDSCH_RE_MappingQCL_Config_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDSCH_RE_MappingQCL_Config_r11_tags_1)
		/sizeof(asn_DEF_PDSCH_RE_MappingQCL_Config_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDSCH_RE_MappingQCL_Config_r11_1,
	6,	/* Elements count */
	&asn_SPC_PDSCH_RE_MappingQCL_Config_r11_specs_1	/* Additional specs */
};

