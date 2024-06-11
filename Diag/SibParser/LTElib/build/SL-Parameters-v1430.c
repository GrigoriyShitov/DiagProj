/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SL-Parameters-v1430.h"

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
memb_v2x_numberTxRxTiming_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_zoneBasedPoolSelection_r14_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_zoneBasedPoolSelection_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ue_AutonomousWithFullSensing_r14_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ue_AutonomousWithFullSensing_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ue_AutonomousWithPartialSensing_r14_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ue_AutonomousWithPartialSensing_r14_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_sl_CongestionControl_r14_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sl_CongestionControl_r14_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_v2x_TxWithShortResvInterval_r14_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_v2x_TxWithShortResvInterval_r14_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_v2x_nonAdjacentPSCCH_PSSCH_r14_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_v2x_nonAdjacentPSCCH_PSSCH_r14_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_slss_TxRx_r14_constr_15 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_slss_TxRx_r14_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_v2x_numberTxRxTiming_r14_constr_12 CC_NOTUSED = {
	{ 1, 1 }	/* (1..16) */,
	-1};
static asn_per_constraints_t asn_PER_memb_v2x_numberTxRxTiming_r14_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_zoneBasedPoolSelection_r14_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_zoneBasedPoolSelection_r14_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_zoneBasedPoolSelection_r14_specs_2 = {
	asn_MAP_zoneBasedPoolSelection_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_zoneBasedPoolSelection_r14_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_zoneBasedPoolSelection_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_zoneBasedPoolSelection_r14_2 = {
	"zoneBasedPoolSelection-r14",
	"zoneBasedPoolSelection-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_zoneBasedPoolSelection_r14_tags_2,
	sizeof(asn_DEF_zoneBasedPoolSelection_r14_tags_2)
		/sizeof(asn_DEF_zoneBasedPoolSelection_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_zoneBasedPoolSelection_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_zoneBasedPoolSelection_r14_tags_2)
		/sizeof(asn_DEF_zoneBasedPoolSelection_r14_tags_2[0]), /* 2 */
	{ &asn_OER_type_zoneBasedPoolSelection_r14_constr_2, &asn_PER_type_zoneBasedPoolSelection_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_zoneBasedPoolSelection_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ue_AutonomousWithFullSensing_r14_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_ue_AutonomousWithFullSensing_r14_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_AutonomousWithFullSensing_r14_specs_4 = {
	asn_MAP_ue_AutonomousWithFullSensing_r14_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_AutonomousWithFullSensing_r14_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_AutonomousWithFullSensing_r14_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_AutonomousWithFullSensing_r14_4 = {
	"ue-AutonomousWithFullSensing-r14",
	"ue-AutonomousWithFullSensing-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_AutonomousWithFullSensing_r14_tags_4,
	sizeof(asn_DEF_ue_AutonomousWithFullSensing_r14_tags_4)
		/sizeof(asn_DEF_ue_AutonomousWithFullSensing_r14_tags_4[0]) - 1, /* 1 */
	asn_DEF_ue_AutonomousWithFullSensing_r14_tags_4,	/* Same as above */
	sizeof(asn_DEF_ue_AutonomousWithFullSensing_r14_tags_4)
		/sizeof(asn_DEF_ue_AutonomousWithFullSensing_r14_tags_4[0]), /* 2 */
	{ &asn_OER_type_ue_AutonomousWithFullSensing_r14_constr_4, &asn_PER_type_ue_AutonomousWithFullSensing_r14_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_AutonomousWithFullSensing_r14_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ue_AutonomousWithPartialSensing_r14_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_ue_AutonomousWithPartialSensing_r14_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_AutonomousWithPartialSensing_r14_specs_6 = {
	asn_MAP_ue_AutonomousWithPartialSensing_r14_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_AutonomousWithPartialSensing_r14_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_AutonomousWithPartialSensing_r14_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_AutonomousWithPartialSensing_r14_6 = {
	"ue-AutonomousWithPartialSensing-r14",
	"ue-AutonomousWithPartialSensing-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_AutonomousWithPartialSensing_r14_tags_6,
	sizeof(asn_DEF_ue_AutonomousWithPartialSensing_r14_tags_6)
		/sizeof(asn_DEF_ue_AutonomousWithPartialSensing_r14_tags_6[0]) - 1, /* 1 */
	asn_DEF_ue_AutonomousWithPartialSensing_r14_tags_6,	/* Same as above */
	sizeof(asn_DEF_ue_AutonomousWithPartialSensing_r14_tags_6)
		/sizeof(asn_DEF_ue_AutonomousWithPartialSensing_r14_tags_6[0]), /* 2 */
	{ &asn_OER_type_ue_AutonomousWithPartialSensing_r14_constr_6, &asn_PER_type_ue_AutonomousWithPartialSensing_r14_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_AutonomousWithPartialSensing_r14_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sl_CongestionControl_r14_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_sl_CongestionControl_r14_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_CongestionControl_r14_specs_8 = {
	asn_MAP_sl_CongestionControl_r14_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_CongestionControl_r14_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_CongestionControl_r14_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_CongestionControl_r14_8 = {
	"sl-CongestionControl-r14",
	"sl-CongestionControl-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_CongestionControl_r14_tags_8,
	sizeof(asn_DEF_sl_CongestionControl_r14_tags_8)
		/sizeof(asn_DEF_sl_CongestionControl_r14_tags_8[0]) - 1, /* 1 */
	asn_DEF_sl_CongestionControl_r14_tags_8,	/* Same as above */
	sizeof(asn_DEF_sl_CongestionControl_r14_tags_8)
		/sizeof(asn_DEF_sl_CongestionControl_r14_tags_8[0]), /* 2 */
	{ &asn_OER_type_sl_CongestionControl_r14_constr_8, &asn_PER_type_sl_CongestionControl_r14_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_CongestionControl_r14_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_v2x_TxWithShortResvInterval_r14_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_v2x_TxWithShortResvInterval_r14_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_v2x_TxWithShortResvInterval_r14_specs_10 = {
	asn_MAP_v2x_TxWithShortResvInterval_r14_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_v2x_TxWithShortResvInterval_r14_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_v2x_TxWithShortResvInterval_r14_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v2x_TxWithShortResvInterval_r14_10 = {
	"v2x-TxWithShortResvInterval-r14",
	"v2x-TxWithShortResvInterval-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_v2x_TxWithShortResvInterval_r14_tags_10,
	sizeof(asn_DEF_v2x_TxWithShortResvInterval_r14_tags_10)
		/sizeof(asn_DEF_v2x_TxWithShortResvInterval_r14_tags_10[0]) - 1, /* 1 */
	asn_DEF_v2x_TxWithShortResvInterval_r14_tags_10,	/* Same as above */
	sizeof(asn_DEF_v2x_TxWithShortResvInterval_r14_tags_10)
		/sizeof(asn_DEF_v2x_TxWithShortResvInterval_r14_tags_10[0]), /* 2 */
	{ &asn_OER_type_v2x_TxWithShortResvInterval_r14_constr_10, &asn_PER_type_v2x_TxWithShortResvInterval_r14_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_v2x_TxWithShortResvInterval_r14_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_v2x_nonAdjacentPSCCH_PSSCH_r14_value2enum_13[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_v2x_nonAdjacentPSCCH_PSSCH_r14_enum2value_13[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_v2x_nonAdjacentPSCCH_PSSCH_r14_specs_13 = {
	asn_MAP_v2x_nonAdjacentPSCCH_PSSCH_r14_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_v2x_nonAdjacentPSCCH_PSSCH_r14_enum2value_13,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_v2x_nonAdjacentPSCCH_PSSCH_r14_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v2x_nonAdjacentPSCCH_PSSCH_r14_13 = {
	"v2x-nonAdjacentPSCCH-PSSCH-r14",
	"v2x-nonAdjacentPSCCH-PSSCH-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_v2x_nonAdjacentPSCCH_PSSCH_r14_tags_13,
	sizeof(asn_DEF_v2x_nonAdjacentPSCCH_PSSCH_r14_tags_13)
		/sizeof(asn_DEF_v2x_nonAdjacentPSCCH_PSSCH_r14_tags_13[0]) - 1, /* 1 */
	asn_DEF_v2x_nonAdjacentPSCCH_PSSCH_r14_tags_13,	/* Same as above */
	sizeof(asn_DEF_v2x_nonAdjacentPSCCH_PSSCH_r14_tags_13)
		/sizeof(asn_DEF_v2x_nonAdjacentPSCCH_PSSCH_r14_tags_13[0]), /* 2 */
	{ &asn_OER_type_v2x_nonAdjacentPSCCH_PSSCH_r14_constr_13, &asn_PER_type_v2x_nonAdjacentPSCCH_PSSCH_r14_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_v2x_nonAdjacentPSCCH_PSSCH_r14_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_slss_TxRx_r14_value2enum_15[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_slss_TxRx_r14_enum2value_15[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_slss_TxRx_r14_specs_15 = {
	asn_MAP_slss_TxRx_r14_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_slss_TxRx_r14_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_slss_TxRx_r14_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_slss_TxRx_r14_15 = {
	"slss-TxRx-r14",
	"slss-TxRx-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_slss_TxRx_r14_tags_15,
	sizeof(asn_DEF_slss_TxRx_r14_tags_15)
		/sizeof(asn_DEF_slss_TxRx_r14_tags_15[0]) - 1, /* 1 */
	asn_DEF_slss_TxRx_r14_tags_15,	/* Same as above */
	sizeof(asn_DEF_slss_TxRx_r14_tags_15)
		/sizeof(asn_DEF_slss_TxRx_r14_tags_15[0]), /* 2 */
	{ &asn_OER_type_slss_TxRx_r14_constr_15, &asn_PER_type_slss_TxRx_r14_constr_15, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_slss_TxRx_r14_specs_15	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_Parameters_v1430_1[] = {
	{ ATF_POINTER, 9, offsetof(struct SL_Parameters_v1430, zoneBasedPoolSelection_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_zoneBasedPoolSelection_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"zoneBasedPoolSelection-r14"
		},
	{ ATF_POINTER, 8, offsetof(struct SL_Parameters_v1430, ue_AutonomousWithFullSensing_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_AutonomousWithFullSensing_r14_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-AutonomousWithFullSensing-r14"
		},
	{ ATF_POINTER, 7, offsetof(struct SL_Parameters_v1430, ue_AutonomousWithPartialSensing_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_AutonomousWithPartialSensing_r14_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-AutonomousWithPartialSensing-r14"
		},
	{ ATF_POINTER, 6, offsetof(struct SL_Parameters_v1430, sl_CongestionControl_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_CongestionControl_r14_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-CongestionControl-r14"
		},
	{ ATF_POINTER, 5, offsetof(struct SL_Parameters_v1430, v2x_TxWithShortResvInterval_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_v2x_TxWithShortResvInterval_r14_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-TxWithShortResvInterval-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct SL_Parameters_v1430, v2x_numberTxRxTiming_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_v2x_numberTxRxTiming_r14_constr_12, &asn_PER_memb_v2x_numberTxRxTiming_r14_constr_12,  memb_v2x_numberTxRxTiming_r14_constraint_1 },
		0, 0, /* No default value */
		"v2x-numberTxRxTiming-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_Parameters_v1430, v2x_nonAdjacentPSCCH_PSSCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_v2x_nonAdjacentPSCCH_PSSCH_r14_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-nonAdjacentPSCCH-PSSCH-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_Parameters_v1430, slss_TxRx_r14),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_slss_TxRx_r14_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"slss-TxRx-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_Parameters_v1430, v2x_SupportedBandCombinationList_r14),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_V2X_SupportedBandCombination_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-SupportedBandCombinationList-r14"
		},
};
static const int asn_MAP_SL_Parameters_v1430_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_SL_Parameters_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_Parameters_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* zoneBasedPoolSelection-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ue-AutonomousWithFullSensing-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ue-AutonomousWithPartialSensing-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-CongestionControl-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* v2x-TxWithShortResvInterval-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* v2x-numberTxRxTiming-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* v2x-nonAdjacentPSCCH-PSSCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* slss-TxRx-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* v2x-SupportedBandCombinationList-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_Parameters_v1430_specs_1 = {
	sizeof(struct SL_Parameters_v1430),
	offsetof(struct SL_Parameters_v1430, _asn_ctx),
	asn_MAP_SL_Parameters_v1430_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_SL_Parameters_v1430_oms_1,	/* Optional members */
	9, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_Parameters_v1430 = {
	"SL-Parameters-v1430",
	"SL-Parameters-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_Parameters_v1430_tags_1,
	sizeof(asn_DEF_SL_Parameters_v1430_tags_1)
		/sizeof(asn_DEF_SL_Parameters_v1430_tags_1[0]), /* 1 */
	asn_DEF_SL_Parameters_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_Parameters_v1430_tags_1)
		/sizeof(asn_DEF_SL_Parameters_v1430_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_Parameters_v1430_1,
	9,	/* Elements count */
	&asn_SPC_SL_Parameters_v1430_specs_1	/* Additional specs */
};

