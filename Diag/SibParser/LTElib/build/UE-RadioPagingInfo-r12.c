/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UE-RadioPagingInfo-r12.h"

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
memb_ue_Category_v1250_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value == 0)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_ue_CategoryDL_v1310_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ue_CategoryDL_v1310_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ce_ModeA_r13_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ce_ModeA_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ce_ModeB_r13_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ce_ModeB_r13_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_wakeUpSignal_r15_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_wakeUpSignal_r15_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_wakeUpSignal_TDD_r15_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_wakeUpSignal_TDD_r15_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_wakeUpSignalMinGap_eDRX_r15_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_wakeUpSignalMinGap_eDRX_r15_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_wakeUpSignalMinGap_eDRX_TDD_r15_constr_19 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_wakeUpSignalMinGap_eDRX_TDD_r15_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ue_CategoryDL_v1610_constr_24 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ue_CategoryDL_v1610_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_groupWakeUpSignal_r16_constr_26 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_groupWakeUpSignal_r16_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_groupWakeUpSignalTDD_r16_constr_28 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_groupWakeUpSignalTDD_r16_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_groupWakeUpSignalAlternation_r16_constr_30 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_groupWakeUpSignalAlternation_r16_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_groupWakeUpSignalAlternationTDD_r16_constr_32 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_groupWakeUpSignalAlternationTDD_r16_constr_32 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_inactiveStatePO_Determination_r17_constr_34 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_inactiveStatePO_Determination_r17_constr_34 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ue_Category_v1250_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..0) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ue_Category_v1250_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ue_CategoryDL_v1310_value2enum_4[] = {
	{ 0,	2,	"m1" }
};
static const unsigned int asn_MAP_ue_CategoryDL_v1310_enum2value_4[] = {
	0	/* m1(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_CategoryDL_v1310_specs_4 = {
	asn_MAP_ue_CategoryDL_v1310_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_CategoryDL_v1310_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_CategoryDL_v1310_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_CategoryDL_v1310_4 = {
	"ue-CategoryDL-v1310",
	"ue-CategoryDL-v1310",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_CategoryDL_v1310_tags_4,
	sizeof(asn_DEF_ue_CategoryDL_v1310_tags_4)
		/sizeof(asn_DEF_ue_CategoryDL_v1310_tags_4[0]) - 1, /* 1 */
	asn_DEF_ue_CategoryDL_v1310_tags_4,	/* Same as above */
	sizeof(asn_DEF_ue_CategoryDL_v1310_tags_4)
		/sizeof(asn_DEF_ue_CategoryDL_v1310_tags_4[0]), /* 2 */
	{ &asn_OER_type_ue_CategoryDL_v1310_constr_4, &asn_PER_type_ue_CategoryDL_v1310_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_CategoryDL_v1310_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ce_ModeA_r13_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_ce_ModeA_r13_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ce_ModeA_r13_specs_6 = {
	asn_MAP_ce_ModeA_r13_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_ModeA_r13_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ce_ModeA_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_ModeA_r13_6 = {
	"ce-ModeA-r13",
	"ce-ModeA-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_ce_ModeA_r13_tags_6,
	sizeof(asn_DEF_ce_ModeA_r13_tags_6)
		/sizeof(asn_DEF_ce_ModeA_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_ce_ModeA_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_ce_ModeA_r13_tags_6)
		/sizeof(asn_DEF_ce_ModeA_r13_tags_6[0]), /* 2 */
	{ &asn_OER_type_ce_ModeA_r13_constr_6, &asn_PER_type_ce_ModeA_r13_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_ModeA_r13_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ce_ModeB_r13_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_ce_ModeB_r13_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ce_ModeB_r13_specs_8 = {
	asn_MAP_ce_ModeB_r13_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_ModeB_r13_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ce_ModeB_r13_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_ModeB_r13_8 = {
	"ce-ModeB-r13",
	"ce-ModeB-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_ce_ModeB_r13_tags_8,
	sizeof(asn_DEF_ce_ModeB_r13_tags_8)
		/sizeof(asn_DEF_ce_ModeB_r13_tags_8[0]) - 1, /* 1 */
	asn_DEF_ce_ModeB_r13_tags_8,	/* Same as above */
	sizeof(asn_DEF_ce_ModeB_r13_tags_8)
		/sizeof(asn_DEF_ce_ModeB_r13_tags_8[0]), /* 2 */
	{ &asn_OER_type_ce_ModeB_r13_constr_8, &asn_PER_type_ce_ModeB_r13_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_ModeB_r13_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_wakeUpSignal_r15_value2enum_10[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_wakeUpSignal_r15_enum2value_10[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_wakeUpSignal_r15_specs_10 = {
	asn_MAP_wakeUpSignal_r15_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_wakeUpSignal_r15_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_wakeUpSignal_r15_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_wakeUpSignal_r15_10 = {
	"wakeUpSignal-r15",
	"wakeUpSignal-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_wakeUpSignal_r15_tags_10,
	sizeof(asn_DEF_wakeUpSignal_r15_tags_10)
		/sizeof(asn_DEF_wakeUpSignal_r15_tags_10[0]) - 1, /* 1 */
	asn_DEF_wakeUpSignal_r15_tags_10,	/* Same as above */
	sizeof(asn_DEF_wakeUpSignal_r15_tags_10)
		/sizeof(asn_DEF_wakeUpSignal_r15_tags_10[0]), /* 2 */
	{ &asn_OER_type_wakeUpSignal_r15_constr_10, &asn_PER_type_wakeUpSignal_r15_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_wakeUpSignal_r15_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_wakeUpSignal_TDD_r15_value2enum_12[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_wakeUpSignal_TDD_r15_enum2value_12[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_wakeUpSignal_TDD_r15_specs_12 = {
	asn_MAP_wakeUpSignal_TDD_r15_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_wakeUpSignal_TDD_r15_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_wakeUpSignal_TDD_r15_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_wakeUpSignal_TDD_r15_12 = {
	"wakeUpSignal-TDD-r15",
	"wakeUpSignal-TDD-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_wakeUpSignal_TDD_r15_tags_12,
	sizeof(asn_DEF_wakeUpSignal_TDD_r15_tags_12)
		/sizeof(asn_DEF_wakeUpSignal_TDD_r15_tags_12[0]) - 1, /* 1 */
	asn_DEF_wakeUpSignal_TDD_r15_tags_12,	/* Same as above */
	sizeof(asn_DEF_wakeUpSignal_TDD_r15_tags_12)
		/sizeof(asn_DEF_wakeUpSignal_TDD_r15_tags_12[0]), /* 2 */
	{ &asn_OER_type_wakeUpSignal_TDD_r15_constr_12, &asn_PER_type_wakeUpSignal_TDD_r15_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_wakeUpSignal_TDD_r15_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_wakeUpSignalMinGap_eDRX_r15_value2enum_14[] = {
	{ 0,	4,	"ms40" },
	{ 1,	5,	"ms240" },
	{ 2,	6,	"ms1000" },
	{ 3,	6,	"ms2000" }
};
static const unsigned int asn_MAP_wakeUpSignalMinGap_eDRX_r15_enum2value_14[] = {
	2,	/* ms1000(2) */
	3,	/* ms2000(3) */
	1,	/* ms240(1) */
	0	/* ms40(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_wakeUpSignalMinGap_eDRX_r15_specs_14 = {
	asn_MAP_wakeUpSignalMinGap_eDRX_r15_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_wakeUpSignalMinGap_eDRX_r15_enum2value_14,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_wakeUpSignalMinGap_eDRX_r15_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_wakeUpSignalMinGap_eDRX_r15_14 = {
	"wakeUpSignalMinGap-eDRX-r15",
	"wakeUpSignalMinGap-eDRX-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_wakeUpSignalMinGap_eDRX_r15_tags_14,
	sizeof(asn_DEF_wakeUpSignalMinGap_eDRX_r15_tags_14)
		/sizeof(asn_DEF_wakeUpSignalMinGap_eDRX_r15_tags_14[0]) - 1, /* 1 */
	asn_DEF_wakeUpSignalMinGap_eDRX_r15_tags_14,	/* Same as above */
	sizeof(asn_DEF_wakeUpSignalMinGap_eDRX_r15_tags_14)
		/sizeof(asn_DEF_wakeUpSignalMinGap_eDRX_r15_tags_14[0]), /* 2 */
	{ &asn_OER_type_wakeUpSignalMinGap_eDRX_r15_constr_14, &asn_PER_type_wakeUpSignalMinGap_eDRX_r15_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_wakeUpSignalMinGap_eDRX_r15_specs_14	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_wakeUpSignalMinGap_eDRX_TDD_r15_value2enum_19[] = {
	{ 0,	4,	"ms40" },
	{ 1,	5,	"ms240" },
	{ 2,	6,	"ms1000" },
	{ 3,	6,	"ms2000" }
};
static const unsigned int asn_MAP_wakeUpSignalMinGap_eDRX_TDD_r15_enum2value_19[] = {
	2,	/* ms1000(2) */
	3,	/* ms2000(3) */
	1,	/* ms240(1) */
	0	/* ms40(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_wakeUpSignalMinGap_eDRX_TDD_r15_specs_19 = {
	asn_MAP_wakeUpSignalMinGap_eDRX_TDD_r15_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_wakeUpSignalMinGap_eDRX_TDD_r15_enum2value_19,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_wakeUpSignalMinGap_eDRX_TDD_r15_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_wakeUpSignalMinGap_eDRX_TDD_r15_19 = {
	"wakeUpSignalMinGap-eDRX-TDD-r15",
	"wakeUpSignalMinGap-eDRX-TDD-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_wakeUpSignalMinGap_eDRX_TDD_r15_tags_19,
	sizeof(asn_DEF_wakeUpSignalMinGap_eDRX_TDD_r15_tags_19)
		/sizeof(asn_DEF_wakeUpSignalMinGap_eDRX_TDD_r15_tags_19[0]) - 1, /* 1 */
	asn_DEF_wakeUpSignalMinGap_eDRX_TDD_r15_tags_19,	/* Same as above */
	sizeof(asn_DEF_wakeUpSignalMinGap_eDRX_TDD_r15_tags_19)
		/sizeof(asn_DEF_wakeUpSignalMinGap_eDRX_TDD_r15_tags_19[0]), /* 2 */
	{ &asn_OER_type_wakeUpSignalMinGap_eDRX_TDD_r15_constr_19, &asn_PER_type_wakeUpSignalMinGap_eDRX_TDD_r15_constr_19, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_wakeUpSignalMinGap_eDRX_TDD_r15_specs_19	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ue_CategoryDL_v1610_value2enum_24[] = {
	{ 0,	2,	"m2" }
};
static const unsigned int asn_MAP_ue_CategoryDL_v1610_enum2value_24[] = {
	0	/* m2(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_CategoryDL_v1610_specs_24 = {
	asn_MAP_ue_CategoryDL_v1610_value2enum_24,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_CategoryDL_v1610_enum2value_24,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_CategoryDL_v1610_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_CategoryDL_v1610_24 = {
	"ue-CategoryDL-v1610",
	"ue-CategoryDL-v1610",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_CategoryDL_v1610_tags_24,
	sizeof(asn_DEF_ue_CategoryDL_v1610_tags_24)
		/sizeof(asn_DEF_ue_CategoryDL_v1610_tags_24[0]) - 1, /* 1 */
	asn_DEF_ue_CategoryDL_v1610_tags_24,	/* Same as above */
	sizeof(asn_DEF_ue_CategoryDL_v1610_tags_24)
		/sizeof(asn_DEF_ue_CategoryDL_v1610_tags_24[0]), /* 2 */
	{ &asn_OER_type_ue_CategoryDL_v1610_constr_24, &asn_PER_type_ue_CategoryDL_v1610_constr_24, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_CategoryDL_v1610_specs_24	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_groupWakeUpSignal_r16_value2enum_26[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_groupWakeUpSignal_r16_enum2value_26[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_groupWakeUpSignal_r16_specs_26 = {
	asn_MAP_groupWakeUpSignal_r16_value2enum_26,	/* "tag" => N; sorted by tag */
	asn_MAP_groupWakeUpSignal_r16_enum2value_26,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_groupWakeUpSignal_r16_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_groupWakeUpSignal_r16_26 = {
	"groupWakeUpSignal-r16",
	"groupWakeUpSignal-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_groupWakeUpSignal_r16_tags_26,
	sizeof(asn_DEF_groupWakeUpSignal_r16_tags_26)
		/sizeof(asn_DEF_groupWakeUpSignal_r16_tags_26[0]) - 1, /* 1 */
	asn_DEF_groupWakeUpSignal_r16_tags_26,	/* Same as above */
	sizeof(asn_DEF_groupWakeUpSignal_r16_tags_26)
		/sizeof(asn_DEF_groupWakeUpSignal_r16_tags_26[0]), /* 2 */
	{ &asn_OER_type_groupWakeUpSignal_r16_constr_26, &asn_PER_type_groupWakeUpSignal_r16_constr_26, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_groupWakeUpSignal_r16_specs_26	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_groupWakeUpSignalTDD_r16_value2enum_28[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_groupWakeUpSignalTDD_r16_enum2value_28[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_groupWakeUpSignalTDD_r16_specs_28 = {
	asn_MAP_groupWakeUpSignalTDD_r16_value2enum_28,	/* "tag" => N; sorted by tag */
	asn_MAP_groupWakeUpSignalTDD_r16_enum2value_28,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_groupWakeUpSignalTDD_r16_tags_28[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_groupWakeUpSignalTDD_r16_28 = {
	"groupWakeUpSignalTDD-r16",
	"groupWakeUpSignalTDD-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_groupWakeUpSignalTDD_r16_tags_28,
	sizeof(asn_DEF_groupWakeUpSignalTDD_r16_tags_28)
		/sizeof(asn_DEF_groupWakeUpSignalTDD_r16_tags_28[0]) - 1, /* 1 */
	asn_DEF_groupWakeUpSignalTDD_r16_tags_28,	/* Same as above */
	sizeof(asn_DEF_groupWakeUpSignalTDD_r16_tags_28)
		/sizeof(asn_DEF_groupWakeUpSignalTDD_r16_tags_28[0]), /* 2 */
	{ &asn_OER_type_groupWakeUpSignalTDD_r16_constr_28, &asn_PER_type_groupWakeUpSignalTDD_r16_constr_28, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_groupWakeUpSignalTDD_r16_specs_28	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_groupWakeUpSignalAlternation_r16_value2enum_30[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_groupWakeUpSignalAlternation_r16_enum2value_30[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_groupWakeUpSignalAlternation_r16_specs_30 = {
	asn_MAP_groupWakeUpSignalAlternation_r16_value2enum_30,	/* "tag" => N; sorted by tag */
	asn_MAP_groupWakeUpSignalAlternation_r16_enum2value_30,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_groupWakeUpSignalAlternation_r16_tags_30[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_groupWakeUpSignalAlternation_r16_30 = {
	"groupWakeUpSignalAlternation-r16",
	"groupWakeUpSignalAlternation-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_groupWakeUpSignalAlternation_r16_tags_30,
	sizeof(asn_DEF_groupWakeUpSignalAlternation_r16_tags_30)
		/sizeof(asn_DEF_groupWakeUpSignalAlternation_r16_tags_30[0]) - 1, /* 1 */
	asn_DEF_groupWakeUpSignalAlternation_r16_tags_30,	/* Same as above */
	sizeof(asn_DEF_groupWakeUpSignalAlternation_r16_tags_30)
		/sizeof(asn_DEF_groupWakeUpSignalAlternation_r16_tags_30[0]), /* 2 */
	{ &asn_OER_type_groupWakeUpSignalAlternation_r16_constr_30, &asn_PER_type_groupWakeUpSignalAlternation_r16_constr_30, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_groupWakeUpSignalAlternation_r16_specs_30	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_groupWakeUpSignalAlternationTDD_r16_value2enum_32[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_groupWakeUpSignalAlternationTDD_r16_enum2value_32[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_groupWakeUpSignalAlternationTDD_r16_specs_32 = {
	asn_MAP_groupWakeUpSignalAlternationTDD_r16_value2enum_32,	/* "tag" => N; sorted by tag */
	asn_MAP_groupWakeUpSignalAlternationTDD_r16_enum2value_32,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_groupWakeUpSignalAlternationTDD_r16_tags_32[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_groupWakeUpSignalAlternationTDD_r16_32 = {
	"groupWakeUpSignalAlternationTDD-r16",
	"groupWakeUpSignalAlternationTDD-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_groupWakeUpSignalAlternationTDD_r16_tags_32,
	sizeof(asn_DEF_groupWakeUpSignalAlternationTDD_r16_tags_32)
		/sizeof(asn_DEF_groupWakeUpSignalAlternationTDD_r16_tags_32[0]) - 1, /* 1 */
	asn_DEF_groupWakeUpSignalAlternationTDD_r16_tags_32,	/* Same as above */
	sizeof(asn_DEF_groupWakeUpSignalAlternationTDD_r16_tags_32)
		/sizeof(asn_DEF_groupWakeUpSignalAlternationTDD_r16_tags_32[0]), /* 2 */
	{ &asn_OER_type_groupWakeUpSignalAlternationTDD_r16_constr_32, &asn_PER_type_groupWakeUpSignalAlternationTDD_r16_constr_32, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_groupWakeUpSignalAlternationTDD_r16_specs_32	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_inactiveStatePO_Determination_r17_value2enum_34[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_inactiveStatePO_Determination_r17_enum2value_34[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_inactiveStatePO_Determination_r17_specs_34 = {
	asn_MAP_inactiveStatePO_Determination_r17_value2enum_34,	/* "tag" => N; sorted by tag */
	asn_MAP_inactiveStatePO_Determination_r17_enum2value_34,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_inactiveStatePO_Determination_r17_tags_34[] = {
	(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_inactiveStatePO_Determination_r17_34 = {
	"inactiveStatePO-Determination-r17",
	"inactiveStatePO-Determination-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_inactiveStatePO_Determination_r17_tags_34,
	sizeof(asn_DEF_inactiveStatePO_Determination_r17_tags_34)
		/sizeof(asn_DEF_inactiveStatePO_Determination_r17_tags_34[0]) - 1, /* 1 */
	asn_DEF_inactiveStatePO_Determination_r17_tags_34,	/* Same as above */
	sizeof(asn_DEF_inactiveStatePO_Determination_r17_tags_34)
		/sizeof(asn_DEF_inactiveStatePO_Determination_r17_tags_34[0]), /* 2 */
	{ &asn_OER_type_inactiveStatePO_Determination_r17_constr_34, &asn_PER_type_inactiveStatePO_Determination_r17_constr_34, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_inactiveStatePO_Determination_r17_specs_34	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_RadioPagingInfo_r12_1[] = {
	{ ATF_POINTER, 14, offsetof(struct UE_RadioPagingInfo_r12, ue_Category_v1250),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ue_Category_v1250_constr_2, &asn_PER_memb_ue_Category_v1250_constr_2,  memb_ue_Category_v1250_constraint_1 },
		0, 0, /* No default value */
		"ue-Category-v1250"
		},
	{ ATF_POINTER, 13, offsetof(struct UE_RadioPagingInfo_r12, ue_CategoryDL_v1310),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_CategoryDL_v1310_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-CategoryDL-v1310"
		},
	{ ATF_POINTER, 12, offsetof(struct UE_RadioPagingInfo_r12, ce_ModeA_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_ModeA_r13_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-ModeA-r13"
		},
	{ ATF_POINTER, 11, offsetof(struct UE_RadioPagingInfo_r12, ce_ModeB_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_ModeB_r13_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-ModeB-r13"
		},
	{ ATF_POINTER, 10, offsetof(struct UE_RadioPagingInfo_r12, wakeUpSignal_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_wakeUpSignal_r15_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wakeUpSignal-r15"
		},
	{ ATF_POINTER, 9, offsetof(struct UE_RadioPagingInfo_r12, wakeUpSignal_TDD_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_wakeUpSignal_TDD_r15_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wakeUpSignal-TDD-r15"
		},
	{ ATF_POINTER, 8, offsetof(struct UE_RadioPagingInfo_r12, wakeUpSignalMinGap_eDRX_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_wakeUpSignalMinGap_eDRX_r15_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wakeUpSignalMinGap-eDRX-r15"
		},
	{ ATF_POINTER, 7, offsetof(struct UE_RadioPagingInfo_r12, wakeUpSignalMinGap_eDRX_TDD_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_wakeUpSignalMinGap_eDRX_TDD_r15_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wakeUpSignalMinGap-eDRX-TDD-r15"
		},
	{ ATF_POINTER, 6, offsetof(struct UE_RadioPagingInfo_r12, ue_CategoryDL_v1610),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_CategoryDL_v1610_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-CategoryDL-v1610"
		},
	{ ATF_POINTER, 5, offsetof(struct UE_RadioPagingInfo_r12, groupWakeUpSignal_r16),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_groupWakeUpSignal_r16_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"groupWakeUpSignal-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_RadioPagingInfo_r12, groupWakeUpSignalTDD_r16),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_groupWakeUpSignalTDD_r16_28,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"groupWakeUpSignalTDD-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_RadioPagingInfo_r12, groupWakeUpSignalAlternation_r16),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_groupWakeUpSignalAlternation_r16_30,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"groupWakeUpSignalAlternation-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_RadioPagingInfo_r12, groupWakeUpSignalAlternationTDD_r16),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_groupWakeUpSignalAlternationTDD_r16_32,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"groupWakeUpSignalAlternationTDD-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_RadioPagingInfo_r12, inactiveStatePO_Determination_r17),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_inactiveStatePO_Determination_r17_34,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"inactiveStatePO-Determination-r17"
		},
};
static const int asn_MAP_UE_RadioPagingInfo_r12_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
static const ber_tlv_tag_t asn_DEF_UE_RadioPagingInfo_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_RadioPagingInfo_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-Category-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ue-CategoryDL-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ce-ModeA-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ce-ModeB-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* wakeUpSignal-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* wakeUpSignal-TDD-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* wakeUpSignalMinGap-eDRX-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* wakeUpSignalMinGap-eDRX-TDD-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ue-CategoryDL-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* groupWakeUpSignal-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* groupWakeUpSignalTDD-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* groupWakeUpSignalAlternation-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* groupWakeUpSignalAlternationTDD-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 } /* inactiveStatePO-Determination-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_RadioPagingInfo_r12_specs_1 = {
	sizeof(struct UE_RadioPagingInfo_r12),
	offsetof(struct UE_RadioPagingInfo_r12, _asn_ctx),
	asn_MAP_UE_RadioPagingInfo_r12_tag2el_1,
	14,	/* Count of tags in the map */
	asn_MAP_UE_RadioPagingInfo_r12_oms_1,	/* Optional members */
	1, 13,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_RadioPagingInfo_r12 = {
	"UE-RadioPagingInfo-r12",
	"UE-RadioPagingInfo-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_RadioPagingInfo_r12_tags_1,
	sizeof(asn_DEF_UE_RadioPagingInfo_r12_tags_1)
		/sizeof(asn_DEF_UE_RadioPagingInfo_r12_tags_1[0]), /* 1 */
	asn_DEF_UE_RadioPagingInfo_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_RadioPagingInfo_r12_tags_1)
		/sizeof(asn_DEF_UE_RadioPagingInfo_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_RadioPagingInfo_r12_1,
	14,	/* Elements count */
	&asn_SPC_UE_RadioPagingInfo_r12_specs_1	/* Additional specs */
};

