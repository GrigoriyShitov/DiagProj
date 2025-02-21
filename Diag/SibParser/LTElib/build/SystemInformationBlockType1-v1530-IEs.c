/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SystemInformationBlockType1-v1530-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_cellAccessRelatedInfoList_5GC_r15_constraint_15(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 6)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
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
static asn_oer_constraints_t asn_OER_type_hsdn_Cell_r15_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_hsdn_Cell_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_crs_IntfMitigNumPRBs_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_crs_IntfMitigNumPRBs_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_crs_IntfMitigConfig_r15_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_crs_IntfMitigConfig_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_cellBarred_CRS_r15_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cellBarred_CRS_r15_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_cellBarred_5GC_r15_constr_16 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cellBarred_5GC_r15_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_cellBarred_5GC_CRS_r15_constr_19 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cellBarred_5GC_CRS_r15_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_cellAccessRelatedInfoList_5GC_r15_constr_22 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..6)) */};
static asn_per_constraints_t asn_PER_type_cellAccessRelatedInfoList_5GC_r15_constr_22 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (SIZE(1..6)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_cellAccessRelatedInfoList_5GC_r15_constr_22 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..6)) */};
static asn_per_constraints_t asn_PER_memb_cellAccessRelatedInfoList_5GC_r15_constr_22 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (SIZE(1..6)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ims_EmergencySupport5GC_r15_constr_24 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ims_EmergencySupport5GC_r15_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_eCallOverIMS_Support5GC_r15_constr_26 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_eCallOverIMS_Support5GC_r15_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_hsdn_Cell_r15_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_hsdn_Cell_r15_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_hsdn_Cell_r15_specs_2 = {
	asn_MAP_hsdn_Cell_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_hsdn_Cell_r15_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_hsdn_Cell_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_hsdn_Cell_r15_2 = {
	"hsdn-Cell-r15",
	"hsdn-Cell-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_hsdn_Cell_r15_tags_2,
	sizeof(asn_DEF_hsdn_Cell_r15_tags_2)
		/sizeof(asn_DEF_hsdn_Cell_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_hsdn_Cell_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_hsdn_Cell_r15_tags_2)
		/sizeof(asn_DEF_hsdn_Cell_r15_tags_2[0]), /* 2 */
	{ &asn_OER_type_hsdn_Cell_r15_constr_2, &asn_PER_type_hsdn_Cell_r15_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_hsdn_Cell_r15_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_crs_IntfMitigNumPRBs_value2enum_7[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n24" }
};
static const unsigned int asn_MAP_crs_IntfMitigNumPRBs_enum2value_7[] = {
	1,	/* n24(1) */
	0	/* n6(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_crs_IntfMitigNumPRBs_specs_7 = {
	asn_MAP_crs_IntfMitigNumPRBs_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_crs_IntfMitigNumPRBs_enum2value_7,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_crs_IntfMitigNumPRBs_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_crs_IntfMitigNumPRBs_7 = {
	"crs-IntfMitigNumPRBs",
	"crs-IntfMitigNumPRBs",
	&asn_OP_NativeEnumerated,
	asn_DEF_crs_IntfMitigNumPRBs_tags_7,
	sizeof(asn_DEF_crs_IntfMitigNumPRBs_tags_7)
		/sizeof(asn_DEF_crs_IntfMitigNumPRBs_tags_7[0]) - 1, /* 1 */
	asn_DEF_crs_IntfMitigNumPRBs_tags_7,	/* Same as above */
	sizeof(asn_DEF_crs_IntfMitigNumPRBs_tags_7)
		/sizeof(asn_DEF_crs_IntfMitigNumPRBs_tags_7[0]), /* 2 */
	{ &asn_OER_type_crs_IntfMitigNumPRBs_constr_7, &asn_PER_type_crs_IntfMitigNumPRBs_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_crs_IntfMitigNumPRBs_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_crs_IntfMitigConfig_r15_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_v1530_IEs__crs_IntfMitigConfig_r15, choice.crs_IntfMitigEnabled),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crs-IntfMitigEnabled"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_v1530_IEs__crs_IntfMitigConfig_r15, choice.crs_IntfMitigNumPRBs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_crs_IntfMitigNumPRBs_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crs-IntfMitigNumPRBs"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_crs_IntfMitigConfig_r15_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* crs-IntfMitigEnabled */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* crs-IntfMitigNumPRBs */
};
static asn_CHOICE_specifics_t asn_SPC_crs_IntfMitigConfig_r15_specs_5 = {
	sizeof(struct SystemInformationBlockType1_v1530_IEs__crs_IntfMitigConfig_r15),
	offsetof(struct SystemInformationBlockType1_v1530_IEs__crs_IntfMitigConfig_r15, _asn_ctx),
	offsetof(struct SystemInformationBlockType1_v1530_IEs__crs_IntfMitigConfig_r15, present),
	sizeof(((struct SystemInformationBlockType1_v1530_IEs__crs_IntfMitigConfig_r15 *)0)->present),
	asn_MAP_crs_IntfMitigConfig_r15_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_crs_IntfMitigConfig_r15_5 = {
	"crs-IntfMitigConfig-r15",
	"crs-IntfMitigConfig-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_crs_IntfMitigConfig_r15_constr_5, &asn_PER_type_crs_IntfMitigConfig_r15_constr_5, CHOICE_constraint },
	asn_MBR_crs_IntfMitigConfig_r15_5,
	2,	/* Elements count */
	&asn_SPC_crs_IntfMitigConfig_r15_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cellBarred_CRS_r15_value2enum_10[] = {
	{ 0,	6,	"barred" },
	{ 1,	9,	"notBarred" }
};
static const unsigned int asn_MAP_cellBarred_CRS_r15_enum2value_10[] = {
	0,	/* barred(0) */
	1	/* notBarred(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_cellBarred_CRS_r15_specs_10 = {
	asn_MAP_cellBarred_CRS_r15_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_cellBarred_CRS_r15_enum2value_10,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cellBarred_CRS_r15_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellBarred_CRS_r15_10 = {
	"cellBarred-CRS-r15",
	"cellBarred-CRS-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_cellBarred_CRS_r15_tags_10,
	sizeof(asn_DEF_cellBarred_CRS_r15_tags_10)
		/sizeof(asn_DEF_cellBarred_CRS_r15_tags_10[0]) - 1, /* 1 */
	asn_DEF_cellBarred_CRS_r15_tags_10,	/* Same as above */
	sizeof(asn_DEF_cellBarred_CRS_r15_tags_10)
		/sizeof(asn_DEF_cellBarred_CRS_r15_tags_10[0]), /* 2 */
	{ &asn_OER_type_cellBarred_CRS_r15_constr_10, &asn_PER_type_cellBarred_CRS_r15_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cellBarred_CRS_r15_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cellBarred_5GC_r15_value2enum_16[] = {
	{ 0,	6,	"barred" },
	{ 1,	9,	"notBarred" }
};
static const unsigned int asn_MAP_cellBarred_5GC_r15_enum2value_16[] = {
	0,	/* barred(0) */
	1	/* notBarred(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_cellBarred_5GC_r15_specs_16 = {
	asn_MAP_cellBarred_5GC_r15_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_cellBarred_5GC_r15_enum2value_16,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cellBarred_5GC_r15_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellBarred_5GC_r15_16 = {
	"cellBarred-5GC-r15",
	"cellBarred-5GC-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_cellBarred_5GC_r15_tags_16,
	sizeof(asn_DEF_cellBarred_5GC_r15_tags_16)
		/sizeof(asn_DEF_cellBarred_5GC_r15_tags_16[0]) - 1, /* 1 */
	asn_DEF_cellBarred_5GC_r15_tags_16,	/* Same as above */
	sizeof(asn_DEF_cellBarred_5GC_r15_tags_16)
		/sizeof(asn_DEF_cellBarred_5GC_r15_tags_16[0]), /* 2 */
	{ &asn_OER_type_cellBarred_5GC_r15_constr_16, &asn_PER_type_cellBarred_5GC_r15_constr_16, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cellBarred_5GC_r15_specs_16	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cellBarred_5GC_CRS_r15_value2enum_19[] = {
	{ 0,	6,	"barred" },
	{ 1,	9,	"notBarred" }
};
static const unsigned int asn_MAP_cellBarred_5GC_CRS_r15_enum2value_19[] = {
	0,	/* barred(0) */
	1	/* notBarred(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_cellBarred_5GC_CRS_r15_specs_19 = {
	asn_MAP_cellBarred_5GC_CRS_r15_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_cellBarred_5GC_CRS_r15_enum2value_19,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cellBarred_5GC_CRS_r15_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellBarred_5GC_CRS_r15_19 = {
	"cellBarred-5GC-CRS-r15",
	"cellBarred-5GC-CRS-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_cellBarred_5GC_CRS_r15_tags_19,
	sizeof(asn_DEF_cellBarred_5GC_CRS_r15_tags_19)
		/sizeof(asn_DEF_cellBarred_5GC_CRS_r15_tags_19[0]) - 1, /* 1 */
	asn_DEF_cellBarred_5GC_CRS_r15_tags_19,	/* Same as above */
	sizeof(asn_DEF_cellBarred_5GC_CRS_r15_tags_19)
		/sizeof(asn_DEF_cellBarred_5GC_CRS_r15_tags_19[0]), /* 2 */
	{ &asn_OER_type_cellBarred_5GC_CRS_r15_constr_19, &asn_PER_type_cellBarred_5GC_CRS_r15_constr_19, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cellBarred_5GC_CRS_r15_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellAccessRelatedInfoList_5GC_r15_22[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CellAccessRelatedInfo_5GC_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_cellAccessRelatedInfoList_5GC_r15_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_cellAccessRelatedInfoList_5GC_r15_specs_22 = {
	sizeof(struct SystemInformationBlockType1_v1530_IEs__cellAccessRelatedInfo_5GC_r15__cellAccessRelatedInfoList_5GC_r15),
	offsetof(struct SystemInformationBlockType1_v1530_IEs__cellAccessRelatedInfo_5GC_r15__cellAccessRelatedInfoList_5GC_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellAccessRelatedInfoList_5GC_r15_22 = {
	"cellAccessRelatedInfoList-5GC-r15",
	"cellAccessRelatedInfoList-5GC-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_cellAccessRelatedInfoList_5GC_r15_tags_22,
	sizeof(asn_DEF_cellAccessRelatedInfoList_5GC_r15_tags_22)
		/sizeof(asn_DEF_cellAccessRelatedInfoList_5GC_r15_tags_22[0]) - 1, /* 1 */
	asn_DEF_cellAccessRelatedInfoList_5GC_r15_tags_22,	/* Same as above */
	sizeof(asn_DEF_cellAccessRelatedInfoList_5GC_r15_tags_22)
		/sizeof(asn_DEF_cellAccessRelatedInfoList_5GC_r15_tags_22[0]), /* 2 */
	{ &asn_OER_type_cellAccessRelatedInfoList_5GC_r15_constr_22, &asn_PER_type_cellAccessRelatedInfoList_5GC_r15_constr_22, SEQUENCE_OF_constraint },
	asn_MBR_cellAccessRelatedInfoList_5GC_r15_22,
	1,	/* Single element */
	&asn_SPC_cellAccessRelatedInfoList_5GC_r15_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellAccessRelatedInfo_5GC_r15_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_v1530_IEs__cellAccessRelatedInfo_5GC_r15, cellBarred_5GC_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cellBarred_5GC_r15_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellBarred-5GC-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_v1530_IEs__cellAccessRelatedInfo_5GC_r15, cellBarred_5GC_CRS_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cellBarred_5GC_CRS_r15_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellBarred-5GC-CRS-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_v1530_IEs__cellAccessRelatedInfo_5GC_r15, cellAccessRelatedInfoList_5GC_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_cellAccessRelatedInfoList_5GC_r15_22,
		0,
		{ &asn_OER_memb_cellAccessRelatedInfoList_5GC_r15_constr_22, &asn_PER_memb_cellAccessRelatedInfoList_5GC_r15_constr_22,  memb_cellAccessRelatedInfoList_5GC_r15_constraint_15 },
		0, 0, /* No default value */
		"cellAccessRelatedInfoList-5GC-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_cellAccessRelatedInfo_5GC_r15_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cellAccessRelatedInfo_5GC_r15_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellBarred-5GC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellBarred-5GC-CRS-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cellAccessRelatedInfoList-5GC-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellAccessRelatedInfo_5GC_r15_specs_15 = {
	sizeof(struct SystemInformationBlockType1_v1530_IEs__cellAccessRelatedInfo_5GC_r15),
	offsetof(struct SystemInformationBlockType1_v1530_IEs__cellAccessRelatedInfo_5GC_r15, _asn_ctx),
	asn_MAP_cellAccessRelatedInfo_5GC_r15_tag2el_15,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellAccessRelatedInfo_5GC_r15_15 = {
	"cellAccessRelatedInfo-5GC-r15",
	"cellAccessRelatedInfo-5GC-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_cellAccessRelatedInfo_5GC_r15_tags_15,
	sizeof(asn_DEF_cellAccessRelatedInfo_5GC_r15_tags_15)
		/sizeof(asn_DEF_cellAccessRelatedInfo_5GC_r15_tags_15[0]) - 1, /* 1 */
	asn_DEF_cellAccessRelatedInfo_5GC_r15_tags_15,	/* Same as above */
	sizeof(asn_DEF_cellAccessRelatedInfo_5GC_r15_tags_15)
		/sizeof(asn_DEF_cellAccessRelatedInfo_5GC_r15_tags_15[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cellAccessRelatedInfo_5GC_r15_15,
	3,	/* Elements count */
	&asn_SPC_cellAccessRelatedInfo_5GC_r15_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ims_EmergencySupport5GC_r15_value2enum_24[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_ims_EmergencySupport5GC_r15_enum2value_24[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ims_EmergencySupport5GC_r15_specs_24 = {
	asn_MAP_ims_EmergencySupport5GC_r15_value2enum_24,	/* "tag" => N; sorted by tag */
	asn_MAP_ims_EmergencySupport5GC_r15_enum2value_24,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ims_EmergencySupport5GC_r15_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ims_EmergencySupport5GC_r15_24 = {
	"ims-EmergencySupport5GC-r15",
	"ims-EmergencySupport5GC-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_ims_EmergencySupport5GC_r15_tags_24,
	sizeof(asn_DEF_ims_EmergencySupport5GC_r15_tags_24)
		/sizeof(asn_DEF_ims_EmergencySupport5GC_r15_tags_24[0]) - 1, /* 1 */
	asn_DEF_ims_EmergencySupport5GC_r15_tags_24,	/* Same as above */
	sizeof(asn_DEF_ims_EmergencySupport5GC_r15_tags_24)
		/sizeof(asn_DEF_ims_EmergencySupport5GC_r15_tags_24[0]), /* 2 */
	{ &asn_OER_type_ims_EmergencySupport5GC_r15_constr_24, &asn_PER_type_ims_EmergencySupport5GC_r15_constr_24, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ims_EmergencySupport5GC_r15_specs_24	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_eCallOverIMS_Support5GC_r15_value2enum_26[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_eCallOverIMS_Support5GC_r15_enum2value_26[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_eCallOverIMS_Support5GC_r15_specs_26 = {
	asn_MAP_eCallOverIMS_Support5GC_r15_value2enum_26,	/* "tag" => N; sorted by tag */
	asn_MAP_eCallOverIMS_Support5GC_r15_enum2value_26,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_eCallOverIMS_Support5GC_r15_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eCallOverIMS_Support5GC_r15_26 = {
	"eCallOverIMS-Support5GC-r15",
	"eCallOverIMS-Support5GC-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_eCallOverIMS_Support5GC_r15_tags_26,
	sizeof(asn_DEF_eCallOverIMS_Support5GC_r15_tags_26)
		/sizeof(asn_DEF_eCallOverIMS_Support5GC_r15_tags_26[0]) - 1, /* 1 */
	asn_DEF_eCallOverIMS_Support5GC_r15_tags_26,	/* Same as above */
	sizeof(asn_DEF_eCallOverIMS_Support5GC_r15_tags_26)
		/sizeof(asn_DEF_eCallOverIMS_Support5GC_r15_tags_26[0]), /* 2 */
	{ &asn_OER_type_eCallOverIMS_Support5GC_r15_constr_26, &asn_PER_type_eCallOverIMS_Support5GC_r15_constr_26, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_eCallOverIMS_Support5GC_r15_specs_26	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_v1530_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType1_v1530_IEs, hsdn_Cell_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_hsdn_Cell_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hsdn-Cell-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType1_v1530_IEs, cellSelectionInfoCE_v1530),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellSelectionInfoCE_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellSelectionInfoCE-v1530"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1_v1530_IEs, crs_IntfMitigConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_crs_IntfMitigConfig_r15_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crs-IntfMitigConfig-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_v1530_IEs, cellBarred_CRS_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cellBarred_CRS_r15_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellBarred-CRS-r15"
		},
	{ ATF_POINTER, 6, offsetof(struct SystemInformationBlockType1_v1530_IEs, plmn_IdentityList_v1530),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_IdentityList_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-IdentityList-v1530"
		},
	{ ATF_POINTER, 5, offsetof(struct SystemInformationBlockType1_v1530_IEs, posSchedulingInfoList_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PosSchedulingInfoList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSchedulingInfoList-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType1_v1530_IEs, cellAccessRelatedInfo_5GC_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_cellAccessRelatedInfo_5GC_r15_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellAccessRelatedInfo-5GC-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType1_v1530_IEs, ims_EmergencySupport5GC_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ims_EmergencySupport5GC_r15_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ims-EmergencySupport5GC-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType1_v1530_IEs, eCallOverIMS_Support5GC_r15),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_eCallOverIMS_Support5GC_r15_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eCallOverIMS-Support5GC-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1_v1530_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType1_v1540_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformationBlockType1_v1530_IEs_oms_1[] = { 0, 1, 2, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType1_v1530_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType1_v1530_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hsdn-Cell-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellSelectionInfoCE-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* crs-IntfMitigConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cellBarred-CRS-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* plmn-IdentityList-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* posSchedulingInfoList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* cellAccessRelatedInfo-5GC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ims-EmergencySupport5GC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* eCallOverIMS-Support5GC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_v1530_IEs_specs_1 = {
	sizeof(struct SystemInformationBlockType1_v1530_IEs),
	offsetof(struct SystemInformationBlockType1_v1530_IEs, _asn_ctx),
	asn_MAP_SystemInformationBlockType1_v1530_IEs_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType1_v1530_IEs_oms_1,	/* Optional members */
	9, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v1530_IEs = {
	"SystemInformationBlockType1-v1530-IEs",
	"SystemInformationBlockType1-v1530-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType1_v1530_IEs_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType1_v1530_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_v1530_IEs_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType1_v1530_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType1_v1530_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_v1530_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType1_v1530_IEs_1,
	10,	/* Elements count */
	&asn_SPC_SystemInformationBlockType1_v1530_IEs_specs_1	/* Additional specs */
};

