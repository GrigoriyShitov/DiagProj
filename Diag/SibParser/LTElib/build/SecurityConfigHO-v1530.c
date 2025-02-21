/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SecurityConfigHO-v1530.h"

static asn_oer_constraints_t asn_OER_type_handoverType_v1530_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_handoverType_v1530_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_intra5GC_3[] = {
	{ ATF_POINTER, 1, offsetof(struct SecurityConfigHO_v1530__handoverType_v1530__intra5GC, securityAlgorithmConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityAlgorithmConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"securityAlgorithmConfig-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityConfigHO_v1530__handoverType_v1530__intra5GC, keyChangeIndicator_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"keyChangeIndicator-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityConfigHO_v1530__handoverType_v1530__intra5GC, nextHopChainingCount_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NextHopChainingCount,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nextHopChainingCount-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SecurityConfigHO_v1530__handoverType_v1530__intra5GC, nas_Container_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nas-Container-r15"
		},
};
static const int asn_MAP_intra5GC_oms_3[] = { 0, 3 };
static const ber_tlv_tag_t asn_DEF_intra5GC_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_intra5GC_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* securityAlgorithmConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* keyChangeIndicator-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nextHopChainingCount-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nas-Container-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_intra5GC_specs_3 = {
	sizeof(struct SecurityConfigHO_v1530__handoverType_v1530__intra5GC),
	offsetof(struct SecurityConfigHO_v1530__handoverType_v1530__intra5GC, _asn_ctx),
	asn_MAP_intra5GC_tag2el_3,
	4,	/* Count of tags in the map */
	asn_MAP_intra5GC_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_intra5GC_3 = {
	"intra5GC",
	"intra5GC",
	&asn_OP_SEQUENCE,
	asn_DEF_intra5GC_tags_3,
	sizeof(asn_DEF_intra5GC_tags_3)
		/sizeof(asn_DEF_intra5GC_tags_3[0]) - 1, /* 1 */
	asn_DEF_intra5GC_tags_3,	/* Same as above */
	sizeof(asn_DEF_intra5GC_tags_3)
		/sizeof(asn_DEF_intra5GC_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_intra5GC_3,
	4,	/* Elements count */
	&asn_SPC_intra5GC_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_fivegc_ToEPC_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityConfigHO_v1530__handoverType_v1530__fivegc_ToEPC, securityAlgorithmConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityAlgorithmConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"securityAlgorithmConfig-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityConfigHO_v1530__handoverType_v1530__fivegc_ToEPC, nextHopChainingCount_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NextHopChainingCount,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nextHopChainingCount-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_fivegc_ToEPC_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fivegc_ToEPC_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* securityAlgorithmConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nextHopChainingCount-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fivegc_ToEPC_specs_8 = {
	sizeof(struct SecurityConfigHO_v1530__handoverType_v1530__fivegc_ToEPC),
	offsetof(struct SecurityConfigHO_v1530__handoverType_v1530__fivegc_ToEPC, _asn_ctx),
	asn_MAP_fivegc_ToEPC_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fivegc_ToEPC_8 = {
	"fivegc-ToEPC",
	"fivegc-ToEPC",
	&asn_OP_SEQUENCE,
	asn_DEF_fivegc_ToEPC_tags_8,
	sizeof(asn_DEF_fivegc_ToEPC_tags_8)
		/sizeof(asn_DEF_fivegc_ToEPC_tags_8[0]) - 1, /* 1 */
	asn_DEF_fivegc_ToEPC_tags_8,	/* Same as above */
	sizeof(asn_DEF_fivegc_ToEPC_tags_8)
		/sizeof(asn_DEF_fivegc_ToEPC_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_fivegc_ToEPC_8,
	2,	/* Elements count */
	&asn_SPC_fivegc_ToEPC_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_epc_To5GC_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityConfigHO_v1530__handoverType_v1530__epc_To5GC, securityAlgorithmConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityAlgorithmConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"securityAlgorithmConfig-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityConfigHO_v1530__handoverType_v1530__epc_To5GC, nas_Container_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nas-Container-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_epc_To5GC_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_epc_To5GC_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* securityAlgorithmConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nas-Container-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_epc_To5GC_specs_11 = {
	sizeof(struct SecurityConfigHO_v1530__handoverType_v1530__epc_To5GC),
	offsetof(struct SecurityConfigHO_v1530__handoverType_v1530__epc_To5GC, _asn_ctx),
	asn_MAP_epc_To5GC_tag2el_11,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_epc_To5GC_11 = {
	"epc-To5GC",
	"epc-To5GC",
	&asn_OP_SEQUENCE,
	asn_DEF_epc_To5GC_tags_11,
	sizeof(asn_DEF_epc_To5GC_tags_11)
		/sizeof(asn_DEF_epc_To5GC_tags_11[0]) - 1, /* 1 */
	asn_DEF_epc_To5GC_tags_11,	/* Same as above */
	sizeof(asn_DEF_epc_To5GC_tags_11)
		/sizeof(asn_DEF_epc_To5GC_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_epc_To5GC_11,
	2,	/* Elements count */
	&asn_SPC_epc_To5GC_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_handoverType_v1530_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityConfigHO_v1530__handoverType_v1530, choice.intra5GC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_intra5GC_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intra5GC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityConfigHO_v1530__handoverType_v1530, choice.fivegc_ToEPC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_fivegc_ToEPC_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fivegc-ToEPC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityConfigHO_v1530__handoverType_v1530, choice.epc_To5GC),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_epc_To5GC_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"epc-To5GC"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_handoverType_v1530_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intra5GC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* fivegc-ToEPC */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* epc-To5GC */
};
static asn_CHOICE_specifics_t asn_SPC_handoverType_v1530_specs_2 = {
	sizeof(struct SecurityConfigHO_v1530__handoverType_v1530),
	offsetof(struct SecurityConfigHO_v1530__handoverType_v1530, _asn_ctx),
	offsetof(struct SecurityConfigHO_v1530__handoverType_v1530, present),
	sizeof(((struct SecurityConfigHO_v1530__handoverType_v1530 *)0)->present),
	asn_MAP_handoverType_v1530_tag2el_2,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_handoverType_v1530_2 = {
	"handoverType-v1530",
	"handoverType-v1530",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_handoverType_v1530_constr_2, &asn_PER_type_handoverType_v1530_constr_2, CHOICE_constraint },
	asn_MBR_handoverType_v1530_2,
	3,	/* Elements count */
	&asn_SPC_handoverType_v1530_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SecurityConfigHO_v1530_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityConfigHO_v1530, handoverType_v1530),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_handoverType_v1530_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"handoverType-v1530"
		},
};
static const ber_tlv_tag_t asn_DEF_SecurityConfigHO_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SecurityConfigHO_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* handoverType-v1530 */
};
asn_SEQUENCE_specifics_t asn_SPC_SecurityConfigHO_v1530_specs_1 = {
	sizeof(struct SecurityConfigHO_v1530),
	offsetof(struct SecurityConfigHO_v1530, _asn_ctx),
	asn_MAP_SecurityConfigHO_v1530_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SecurityConfigHO_v1530 = {
	"SecurityConfigHO-v1530",
	"SecurityConfigHO-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_SecurityConfigHO_v1530_tags_1,
	sizeof(asn_DEF_SecurityConfigHO_v1530_tags_1)
		/sizeof(asn_DEF_SecurityConfigHO_v1530_tags_1[0]), /* 1 */
	asn_DEF_SecurityConfigHO_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_SecurityConfigHO_v1530_tags_1)
		/sizeof(asn_DEF_SecurityConfigHO_v1530_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SecurityConfigHO_v1530_1,
	1,	/* Elements count */
	&asn_SPC_SecurityConfigHO_v1530_specs_1	/* Additional specs */
};

