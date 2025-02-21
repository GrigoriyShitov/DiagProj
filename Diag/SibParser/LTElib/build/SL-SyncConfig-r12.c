/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SL-SyncConfig-r12.h"

static int
memb_syncInfoReserved_r12_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 19)) {
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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_memb_syncInfoReserved_r12_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	19	/* (SIZE(19..19)) */};
static asn_per_constraints_t asn_PER_memb_syncInfoReserved_r12_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  19,  19 }	/* (SIZE(19..19)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_discSyncWindow_r12_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_discSyncWindow_r12_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_syncTxPeriodic_r13_constr_15 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_syncTxPeriodic_r13_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_gnss_Sync_r14_constr_18 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_gnss_Sync_r14_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_slss_TxDisabled_r15_constr_22 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_slss_TxDisabled_r15_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_txParameters_r12_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_SyncConfig_r12__txParameters_r12, syncTxParameters_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TxParameters_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncTxParameters-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_SyncConfig_r12__txParameters_r12, syncTxThreshIC_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_RangeSL_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncTxThreshIC-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_SyncConfig_r12__txParameters_r12, syncInfoReserved_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_syncInfoReserved_r12_constr_8, &asn_PER_memb_syncInfoReserved_r12_constr_8,  memb_syncInfoReserved_r12_constraint_5 },
		0, 0, /* No default value */
		"syncInfoReserved-r12"
		},
};
static const int asn_MAP_txParameters_r12_oms_5[] = { 2 };
static const ber_tlv_tag_t asn_DEF_txParameters_r12_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_txParameters_r12_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* syncTxParameters-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* syncTxThreshIC-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* syncInfoReserved-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_txParameters_r12_specs_5 = {
	sizeof(struct SL_SyncConfig_r12__txParameters_r12),
	offsetof(struct SL_SyncConfig_r12__txParameters_r12, _asn_ctx),
	asn_MAP_txParameters_r12_tag2el_5,
	3,	/* Count of tags in the map */
	asn_MAP_txParameters_r12_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_txParameters_r12_5 = {
	"txParameters-r12",
	"txParameters-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_txParameters_r12_tags_5,
	sizeof(asn_DEF_txParameters_r12_tags_5)
		/sizeof(asn_DEF_txParameters_r12_tags_5[0]) - 1, /* 1 */
	asn_DEF_txParameters_r12_tags_5,	/* Same as above */
	sizeof(asn_DEF_txParameters_r12_tags_5)
		/sizeof(asn_DEF_txParameters_r12_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_txParameters_r12_5,
	3,	/* Elements count */
	&asn_SPC_txParameters_r12_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_discSyncWindow_r12_value2enum_11[] = {
	{ 0,	2,	"w1" },
	{ 1,	2,	"w2" }
};
static const unsigned int asn_MAP_discSyncWindow_r12_enum2value_11[] = {
	0,	/* w1(0) */
	1	/* w2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_discSyncWindow_r12_specs_11 = {
	asn_MAP_discSyncWindow_r12_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_discSyncWindow_r12_enum2value_11,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_discSyncWindow_r12_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discSyncWindow_r12_11 = {
	"discSyncWindow-r12",
	"discSyncWindow-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_discSyncWindow_r12_tags_11,
	sizeof(asn_DEF_discSyncWindow_r12_tags_11)
		/sizeof(asn_DEF_discSyncWindow_r12_tags_11[0]) - 1, /* 1 */
	asn_DEF_discSyncWindow_r12_tags_11,	/* Same as above */
	sizeof(asn_DEF_discSyncWindow_r12_tags_11)
		/sizeof(asn_DEF_discSyncWindow_r12_tags_11[0]), /* 2 */
	{ &asn_OER_type_discSyncWindow_r12_constr_11, &asn_PER_type_discSyncWindow_r12_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_discSyncWindow_r12_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rxParamsNCell_r12_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_SyncConfig_r12__rxParamsNCell_r12, physCellId_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_SyncConfig_r12__rxParamsNCell_r12, discSyncWindow_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_discSyncWindow_r12_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discSyncWindow-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_rxParamsNCell_r12_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_rxParamsNCell_r12_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* discSyncWindow-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_rxParamsNCell_r12_specs_9 = {
	sizeof(struct SL_SyncConfig_r12__rxParamsNCell_r12),
	offsetof(struct SL_SyncConfig_r12__rxParamsNCell_r12, _asn_ctx),
	asn_MAP_rxParamsNCell_r12_tag2el_9,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rxParamsNCell_r12_9 = {
	"rxParamsNCell-r12",
	"rxParamsNCell-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_rxParamsNCell_r12_tags_9,
	sizeof(asn_DEF_rxParamsNCell_r12_tags_9)
		/sizeof(asn_DEF_rxParamsNCell_r12_tags_9[0]) - 1, /* 1 */
	asn_DEF_rxParamsNCell_r12_tags_9,	/* Same as above */
	sizeof(asn_DEF_rxParamsNCell_r12_tags_9)
		/sizeof(asn_DEF_rxParamsNCell_r12_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_rxParamsNCell_r12_9,
	2,	/* Elements count */
	&asn_SPC_rxParamsNCell_r12_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_syncTxPeriodic_r13_value2enum_15[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_syncTxPeriodic_r13_enum2value_15[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_syncTxPeriodic_r13_specs_15 = {
	asn_MAP_syncTxPeriodic_r13_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_syncTxPeriodic_r13_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_syncTxPeriodic_r13_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_syncTxPeriodic_r13_15 = {
	"syncTxPeriodic-r13",
	"syncTxPeriodic-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_syncTxPeriodic_r13_tags_15,
	sizeof(asn_DEF_syncTxPeriodic_r13_tags_15)
		/sizeof(asn_DEF_syncTxPeriodic_r13_tags_15[0]) - 1, /* 1 */
	asn_DEF_syncTxPeriodic_r13_tags_15,	/* Same as above */
	sizeof(asn_DEF_syncTxPeriodic_r13_tags_15)
		/sizeof(asn_DEF_syncTxPeriodic_r13_tags_15[0]), /* 2 */
	{ &asn_OER_type_syncTxPeriodic_r13_constr_15, &asn_PER_type_syncTxPeriodic_r13_constr_15, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_syncTxPeriodic_r13_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_gnss_Sync_r14_value2enum_18[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_gnss_Sync_r14_enum2value_18[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_gnss_Sync_r14_specs_18 = {
	asn_MAP_gnss_Sync_r14_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_gnss_Sync_r14_enum2value_18,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_gnss_Sync_r14_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gnss_Sync_r14_18 = {
	"gnss-Sync-r14",
	"gnss-Sync-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_gnss_Sync_r14_tags_18,
	sizeof(asn_DEF_gnss_Sync_r14_tags_18)
		/sizeof(asn_DEF_gnss_Sync_r14_tags_18[0]) - 1, /* 1 */
	asn_DEF_gnss_Sync_r14_tags_18,	/* Same as above */
	sizeof(asn_DEF_gnss_Sync_r14_tags_18)
		/sizeof(asn_DEF_gnss_Sync_r14_tags_18[0]), /* 2 */
	{ &asn_OER_type_gnss_Sync_r14_constr_18, &asn_PER_type_gnss_Sync_r14_constr_18, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_gnss_Sync_r14_specs_18	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_slss_TxDisabled_r15_value2enum_22[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_slss_TxDisabled_r15_enum2value_22[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_slss_TxDisabled_r15_specs_22 = {
	asn_MAP_slss_TxDisabled_r15_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_slss_TxDisabled_r15_enum2value_22,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_slss_TxDisabled_r15_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_slss_TxDisabled_r15_22 = {
	"slss-TxDisabled-r15",
	"slss-TxDisabled-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_slss_TxDisabled_r15_tags_22,
	sizeof(asn_DEF_slss_TxDisabled_r15_tags_22)
		/sizeof(asn_DEF_slss_TxDisabled_r15_tags_22[0]) - 1, /* 1 */
	asn_DEF_slss_TxDisabled_r15_tags_22,	/* Same as above */
	sizeof(asn_DEF_slss_TxDisabled_r15_tags_22)
		/sizeof(asn_DEF_slss_TxDisabled_r15_tags_22[0]), /* 2 */
	{ &asn_OER_type_slss_TxDisabled_r15_constr_22, &asn_PER_type_slss_TxDisabled_r15_constr_22, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_slss_TxDisabled_r15_specs_22	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_SyncConfig_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_SyncConfig_r12, syncCP_Len_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CP_Len_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncCP-Len-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_SyncConfig_r12, syncOffsetIndicator_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_OffsetIndicatorSync_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncOffsetIndicator-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_SyncConfig_r12, slssid_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SLSSID_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"slssid-r12"
		},
	{ ATF_POINTER, 8, offsetof(struct SL_SyncConfig_r12, txParameters_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_txParameters_r12_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"txParameters-r12"
		},
	{ ATF_POINTER, 7, offsetof(struct SL_SyncConfig_r12, rxParamsNCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_rxParamsNCell_r12_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rxParamsNCell-r12"
		},
	{ ATF_POINTER, 6, offsetof(struct SL_SyncConfig_r12, syncTxPeriodic_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_syncTxPeriodic_r13_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncTxPeriodic-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct SL_SyncConfig_r12, syncOffsetIndicator_v1430),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_OffsetIndicatorSync_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncOffsetIndicator-v1430"
		},
	{ ATF_POINTER, 4, offsetof(struct SL_SyncConfig_r12, gnss_Sync_r14),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_gnss_Sync_r14_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-Sync-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_SyncConfig_r12, syncOffsetIndicator2_r14),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_OffsetIndicatorSync_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncOffsetIndicator2-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_SyncConfig_r12, syncOffsetIndicator3_r14),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_OffsetIndicatorSync_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncOffsetIndicator3-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_SyncConfig_r12, slss_TxDisabled_r15),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_slss_TxDisabled_r15_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"slss-TxDisabled-r15"
		},
};
static const int asn_MAP_SL_SyncConfig_r12_oms_1[] = { 3, 4, 5, 6, 7, 8, 9, 10 };
static const ber_tlv_tag_t asn_DEF_SL_SyncConfig_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_SyncConfig_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* syncCP-Len-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* syncOffsetIndicator-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* slssid-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* txParameters-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* rxParamsNCell-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* syncTxPeriodic-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* syncOffsetIndicator-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* gnss-Sync-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* syncOffsetIndicator2-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* syncOffsetIndicator3-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* slss-TxDisabled-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_SyncConfig_r12_specs_1 = {
	sizeof(struct SL_SyncConfig_r12),
	offsetof(struct SL_SyncConfig_r12, _asn_ctx),
	asn_MAP_SL_SyncConfig_r12_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_SL_SyncConfig_r12_oms_1,	/* Optional members */
	2, 6,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_SyncConfig_r12 = {
	"SL-SyncConfig-r12",
	"SL-SyncConfig-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_SyncConfig_r12_tags_1,
	sizeof(asn_DEF_SL_SyncConfig_r12_tags_1)
		/sizeof(asn_DEF_SL_SyncConfig_r12_tags_1[0]), /* 1 */
	asn_DEF_SL_SyncConfig_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_SyncConfig_r12_tags_1)
		/sizeof(asn_DEF_SL_SyncConfig_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_SyncConfig_r12_1,
	11,	/* Elements count */
	&asn_SPC_SL_SyncConfig_r12_specs_1	/* Additional specs */
};

