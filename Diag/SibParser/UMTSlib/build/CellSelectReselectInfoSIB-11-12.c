/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "CellSelectReselectInfoSIB-11-12.h"

static asn_oer_constraints_t asn_OER_type_modeSpecificInfo_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static int asn_DFL_2_cmp_0(const void *sptr) {
	const Q_OffsetS_N_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_2_set_0(void **sptr) {
	Q_OffsetS_N_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
static asn_TYPE_member_t asn_MBR_fdd_7[] = {
	{ ATF_POINTER, 2, offsetof(struct CellSelectReselectInfoSIB_11_12__modeSpecificInfo__fdd, q_QualMin),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_QualMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-QualMin"
		},
	{ ATF_POINTER, 1, offsetof(struct CellSelectReselectInfoSIB_11_12__modeSpecificInfo__fdd, q_RxlevMin),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxlevMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-RxlevMin"
		},
};
static const int asn_MAP_fdd_oms_7[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_fdd_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* q-QualMin */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* q-RxlevMin */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_7 = {
	sizeof(struct CellSelectReselectInfoSIB_11_12__modeSpecificInfo__fdd),
	offsetof(struct CellSelectReselectInfoSIB_11_12__modeSpecificInfo__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_7,
	2,	/* Count of tags in the map */
	asn_MAP_fdd_oms_7,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_7 = {
	"fdd",
	"fdd",
	&asn_OP_SEQUENCE,
	asn_DEF_fdd_tags_7,
	sizeof(asn_DEF_fdd_tags_7)
		/sizeof(asn_DEF_fdd_tags_7[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_7,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_7)
		/sizeof(asn_DEF_fdd_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_fdd_7,
	2,	/* Elements count */
	&asn_SPC_fdd_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_10[] = {
	{ ATF_POINTER, 1, offsetof(struct CellSelectReselectInfoSIB_11_12__modeSpecificInfo__tdd, q_RxlevMin),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxlevMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-RxlevMin"
		},
};
static const int asn_MAP_tdd_oms_10[] = { 0 };
static const ber_tlv_tag_t asn_DEF_tdd_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* q-RxlevMin */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_10 = {
	sizeof(struct CellSelectReselectInfoSIB_11_12__modeSpecificInfo__tdd),
	offsetof(struct CellSelectReselectInfoSIB_11_12__modeSpecificInfo__tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_10,
	1,	/* Count of tags in the map */
	asn_MAP_tdd_oms_10,	/* Optional members */
	1, 0,	/* Root/Additions */
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

static asn_TYPE_member_t asn_MBR_gsm_12[] = {
	{ ATF_POINTER, 1, offsetof(struct CellSelectReselectInfoSIB_11_12__modeSpecificInfo__gsm, q_RxlevMin),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxlevMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-RxlevMin"
		},
};
static const int asn_MAP_gsm_oms_12[] = { 0 };
static const ber_tlv_tag_t asn_DEF_gsm_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_gsm_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* q-RxlevMin */
};
static asn_SEQUENCE_specifics_t asn_SPC_gsm_specs_12 = {
	sizeof(struct CellSelectReselectInfoSIB_11_12__modeSpecificInfo__gsm),
	offsetof(struct CellSelectReselectInfoSIB_11_12__modeSpecificInfo__gsm, _asn_ctx),
	asn_MAP_gsm_tag2el_12,
	1,	/* Count of tags in the map */
	asn_MAP_gsm_oms_12,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gsm_12 = {
	"gsm",
	"gsm",
	&asn_OP_SEQUENCE,
	asn_DEF_gsm_tags_12,
	sizeof(asn_DEF_gsm_tags_12)
		/sizeof(asn_DEF_gsm_tags_12[0]) - 1, /* 1 */
	asn_DEF_gsm_tags_12,	/* Same as above */
	sizeof(asn_DEF_gsm_tags_12)
		/sizeof(asn_DEF_gsm_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_gsm_12,
	1,	/* Elements count */
	&asn_SPC_gsm_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectReselectInfoSIB_11_12__modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectReselectInfoSIB_11_12__modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectReselectInfoSIB_11_12__modeSpecificInfo, choice.gsm),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_gsm_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gsm"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tdd */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* gsm */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_6 = {
	sizeof(struct CellSelectReselectInfoSIB_11_12__modeSpecificInfo),
	offsetof(struct CellSelectReselectInfoSIB_11_12__modeSpecificInfo, _asn_ctx),
	offsetof(struct CellSelectReselectInfoSIB_11_12__modeSpecificInfo, present),
	sizeof(((struct CellSelectReselectInfoSIB_11_12__modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_6,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_6 = {
	"modeSpecificInfo",
	"modeSpecificInfo",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_modeSpecificInfo_constr_6, &asn_PER_type_modeSpecificInfo_constr_6, CHOICE_constraint },
	asn_MBR_modeSpecificInfo_6,
	3,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CellSelectReselectInfoSIB_11_12_1[] = {
	{ ATF_NOFLAGS, 4, offsetof(struct CellSelectReselectInfoSIB_11_12, q_Offset1S_N),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_OffsetS_N,
		0,
		{ 0, 0, 0 },
		&asn_DFL_2_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_2_set_0,	/* Set DEFAULT 0 */
		"q-Offset1S-N"
		},
	{ ATF_POINTER, 3, offsetof(struct CellSelectReselectInfoSIB_11_12, q_Offset2S_N),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_OffsetS_N,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-Offset2S-N"
		},
	{ ATF_POINTER, 2, offsetof(struct CellSelectReselectInfoSIB_11_12, maxAllowedUL_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxAllowedUL_TX_Power,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxAllowedUL-TX-Power"
		},
	{ ATF_POINTER, 1, offsetof(struct CellSelectReselectInfoSIB_11_12, hcs_NeighbouringCellInformation_RSCP),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HCS_NeighbouringCellInformation_RSCP,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hcs-NeighbouringCellInformation-RSCP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectReselectInfoSIB_11_12, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"modeSpecificInfo"
		},
};
static const int asn_MAP_CellSelectReselectInfoSIB_11_12_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_CellSelectReselectInfoSIB_11_12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellSelectReselectInfoSIB_11_12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* q-Offset1S-N */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* q-Offset2S-N */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maxAllowedUL-TX-Power */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* hcs-NeighbouringCellInformation-RSCP */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* modeSpecificInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_CellSelectReselectInfoSIB_11_12_specs_1 = {
	sizeof(struct CellSelectReselectInfoSIB_11_12),
	offsetof(struct CellSelectReselectInfoSIB_11_12, _asn_ctx),
	asn_MAP_CellSelectReselectInfoSIB_11_12_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_CellSelectReselectInfoSIB_11_12_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CellSelectReselectInfoSIB_11_12 = {
	"CellSelectReselectInfoSIB-11-12",
	"CellSelectReselectInfoSIB-11-12",
	&asn_OP_SEQUENCE,
	asn_DEF_CellSelectReselectInfoSIB_11_12_tags_1,
	sizeof(asn_DEF_CellSelectReselectInfoSIB_11_12_tags_1)
		/sizeof(asn_DEF_CellSelectReselectInfoSIB_11_12_tags_1[0]), /* 1 */
	asn_DEF_CellSelectReselectInfoSIB_11_12_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellSelectReselectInfoSIB_11_12_tags_1)
		/sizeof(asn_DEF_CellSelectReselectInfoSIB_11_12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CellSelectReselectInfoSIB_11_12_1,
	5,	/* Elements count */
	&asn_SPC_CellSelectReselectInfoSIB_11_12_specs_1	/* Additional specs */
};

