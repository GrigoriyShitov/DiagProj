/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "RRC-InactiveConfig-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_ran_PagingCycle_r15_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ran_PagingCycle_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_periodic_RNAU_timer_r15_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_periodic_RNAU_timer_r15_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ran_PagingCycle_r15_value2enum_4[] = {
	{ 0,	4,	"rf32" },
	{ 1,	4,	"rf64" },
	{ 2,	5,	"rf128" },
	{ 3,	5,	"rf256" }
};
static const unsigned int asn_MAP_ran_PagingCycle_r15_enum2value_4[] = {
	2,	/* rf128(2) */
	3,	/* rf256(3) */
	0,	/* rf32(0) */
	1	/* rf64(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_ran_PagingCycle_r15_specs_4 = {
	asn_MAP_ran_PagingCycle_r15_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_ran_PagingCycle_r15_enum2value_4,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ran_PagingCycle_r15_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ran_PagingCycle_r15_4 = {
	"ran-PagingCycle-r15",
	"ran-PagingCycle-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_ran_PagingCycle_r15_tags_4,
	sizeof(asn_DEF_ran_PagingCycle_r15_tags_4)
		/sizeof(asn_DEF_ran_PagingCycle_r15_tags_4[0]) - 1, /* 1 */
	asn_DEF_ran_PagingCycle_r15_tags_4,	/* Same as above */
	sizeof(asn_DEF_ran_PagingCycle_r15_tags_4)
		/sizeof(asn_DEF_ran_PagingCycle_r15_tags_4[0]), /* 2 */
	{ &asn_OER_type_ran_PagingCycle_r15_constr_4, &asn_PER_type_ran_PagingCycle_r15_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ran_PagingCycle_r15_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_periodic_RNAU_timer_r15_value2enum_10[] = {
	{ 0,	4,	"min5" },
	{ 1,	5,	"min10" },
	{ 2,	5,	"min20" },
	{ 3,	5,	"min30" },
	{ 4,	5,	"min60" },
	{ 5,	6,	"min120" },
	{ 6,	6,	"min360" },
	{ 7,	6,	"min720" }
};
static const unsigned int asn_MAP_periodic_RNAU_timer_r15_enum2value_10[] = {
	1,	/* min10(1) */
	5,	/* min120(5) */
	2,	/* min20(2) */
	3,	/* min30(3) */
	6,	/* min360(6) */
	0,	/* min5(0) */
	4,	/* min60(4) */
	7	/* min720(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_periodic_RNAU_timer_r15_specs_10 = {
	asn_MAP_periodic_RNAU_timer_r15_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_periodic_RNAU_timer_r15_enum2value_10,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_periodic_RNAU_timer_r15_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_periodic_RNAU_timer_r15_10 = {
	"periodic-RNAU-timer-r15",
	"periodic-RNAU-timer-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_periodic_RNAU_timer_r15_tags_10,
	sizeof(asn_DEF_periodic_RNAU_timer_r15_tags_10)
		/sizeof(asn_DEF_periodic_RNAU_timer_r15_tags_10[0]) - 1, /* 1 */
	asn_DEF_periodic_RNAU_timer_r15_tags_10,	/* Same as above */
	sizeof(asn_DEF_periodic_RNAU_timer_r15_tags_10)
		/sizeof(asn_DEF_periodic_RNAU_timer_r15_tags_10[0]), /* 2 */
	{ &asn_OER_type_periodic_RNAU_timer_r15_constr_10, &asn_PER_type_periodic_RNAU_timer_r15_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_periodic_RNAU_timer_r15_specs_10	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_dummy_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_dummy_specs_20 = {
	sizeof(struct RRC_InactiveConfig_r15__dummy),
	offsetof(struct RRC_InactiveConfig_r15__dummy, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dummy_20 = {
	"dummy",
	"dummy",
	&asn_OP_SEQUENCE,
	asn_DEF_dummy_tags_20,
	sizeof(asn_DEF_dummy_tags_20)
		/sizeof(asn_DEF_dummy_tags_20[0]) - 1, /* 1 */
	asn_DEF_dummy_tags_20,	/* Same as above */
	sizeof(asn_DEF_dummy_tags_20)
		/sizeof(asn_DEF_dummy_tags_20[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_dummy_specs_20	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_InactiveConfig_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_InactiveConfig_r15, fullI_RNTI_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_I_RNTI_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fullI-RNTI-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_InactiveConfig_r15, shortI_RNTI_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ShortI_RNTI_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"shortI-RNTI-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct RRC_InactiveConfig_r15, ran_PagingCycle_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ran_PagingCycle_r15_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ran-PagingCycle-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct RRC_InactiveConfig_r15, ran_NotificationAreaInfo_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RAN_NotificationAreaInfo_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ran-NotificationAreaInfo-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct RRC_InactiveConfig_r15, periodic_RNAU_timer_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_periodic_RNAU_timer_r15_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodic-RNAU-timer-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct RRC_InactiveConfig_r15, nextHopChainingCount_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NextHopChainingCount,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nextHopChainingCount-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_InactiveConfig_r15, dummy),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_dummy_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy"
		},
};
static const int asn_MAP_RRC_InactiveConfig_r15_oms_1[] = { 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_RRC_InactiveConfig_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_InactiveConfig_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fullI-RNTI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* shortI-RNTI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ran-PagingCycle-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ran-NotificationAreaInfo-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* periodic-RNAU-timer-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* nextHopChainingCount-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* dummy */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_InactiveConfig_r15_specs_1 = {
	sizeof(struct RRC_InactiveConfig_r15),
	offsetof(struct RRC_InactiveConfig_r15, _asn_ctx),
	asn_MAP_RRC_InactiveConfig_r15_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_RRC_InactiveConfig_r15_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_InactiveConfig_r15 = {
	"RRC-InactiveConfig-r15",
	"RRC-InactiveConfig-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_InactiveConfig_r15_tags_1,
	sizeof(asn_DEF_RRC_InactiveConfig_r15_tags_1)
		/sizeof(asn_DEF_RRC_InactiveConfig_r15_tags_1[0]), /* 1 */
	asn_DEF_RRC_InactiveConfig_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_InactiveConfig_r15_tags_1)
		/sizeof(asn_DEF_RRC_InactiveConfig_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_InactiveConfig_r15_1,
	7,	/* Elements count */
	&asn_SPC_RRC_InactiveConfig_r15_specs_1	/* Additional specs */
};

