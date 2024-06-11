/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "PhyLayerParameters-v1700.h"

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
static asn_oer_constraints_t asn_OER_type_ce_PDSCH_14HARQProcesses_r17_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ce_PDSCH_14HARQProcesses_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ce_PDSCH_14HARQProcesses_Alt2_r17_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ce_PDSCH_14HARQProcesses_Alt2_r17_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ce_PDSCH_MaxTBS_r17_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ce_PDSCH_MaxTBS_r17_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ce_PDSCH_14HARQProcesses_r17_value2enum_3[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_ce_PDSCH_14HARQProcesses_r17_enum2value_3[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ce_PDSCH_14HARQProcesses_r17_specs_3 = {
	asn_MAP_ce_PDSCH_14HARQProcesses_r17_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_PDSCH_14HARQProcesses_r17_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ce_PDSCH_14HARQProcesses_r17_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_PDSCH_14HARQProcesses_r17_3 = {
	"ce-PDSCH-14HARQProcesses-r17",
	"ce-PDSCH-14HARQProcesses-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_ce_PDSCH_14HARQProcesses_r17_tags_3,
	sizeof(asn_DEF_ce_PDSCH_14HARQProcesses_r17_tags_3)
		/sizeof(asn_DEF_ce_PDSCH_14HARQProcesses_r17_tags_3[0]) - 1, /* 1 */
	asn_DEF_ce_PDSCH_14HARQProcesses_r17_tags_3,	/* Same as above */
	sizeof(asn_DEF_ce_PDSCH_14HARQProcesses_r17_tags_3)
		/sizeof(asn_DEF_ce_PDSCH_14HARQProcesses_r17_tags_3[0]), /* 2 */
	{ &asn_OER_type_ce_PDSCH_14HARQProcesses_r17_constr_3, &asn_PER_type_ce_PDSCH_14HARQProcesses_r17_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_PDSCH_14HARQProcesses_r17_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ce_PDSCH_14HARQProcesses_Alt2_r17_value2enum_5[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_ce_PDSCH_14HARQProcesses_Alt2_r17_enum2value_5[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ce_PDSCH_14HARQProcesses_Alt2_r17_specs_5 = {
	asn_MAP_ce_PDSCH_14HARQProcesses_Alt2_r17_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_PDSCH_14HARQProcesses_Alt2_r17_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ce_PDSCH_14HARQProcesses_Alt2_r17_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_PDSCH_14HARQProcesses_Alt2_r17_5 = {
	"ce-PDSCH-14HARQProcesses-Alt2-r17",
	"ce-PDSCH-14HARQProcesses-Alt2-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_ce_PDSCH_14HARQProcesses_Alt2_r17_tags_5,
	sizeof(asn_DEF_ce_PDSCH_14HARQProcesses_Alt2_r17_tags_5)
		/sizeof(asn_DEF_ce_PDSCH_14HARQProcesses_Alt2_r17_tags_5[0]) - 1, /* 1 */
	asn_DEF_ce_PDSCH_14HARQProcesses_Alt2_r17_tags_5,	/* Same as above */
	sizeof(asn_DEF_ce_PDSCH_14HARQProcesses_Alt2_r17_tags_5)
		/sizeof(asn_DEF_ce_PDSCH_14HARQProcesses_Alt2_r17_tags_5[0]), /* 2 */
	{ &asn_OER_type_ce_PDSCH_14HARQProcesses_Alt2_r17_constr_5, &asn_PER_type_ce_PDSCH_14HARQProcesses_Alt2_r17_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_PDSCH_14HARQProcesses_Alt2_r17_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ce_PDSCH_MaxTBS_r17_value2enum_7[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_ce_PDSCH_MaxTBS_r17_enum2value_7[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ce_PDSCH_MaxTBS_r17_specs_7 = {
	asn_MAP_ce_PDSCH_MaxTBS_r17_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_PDSCH_MaxTBS_r17_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ce_PDSCH_MaxTBS_r17_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_PDSCH_MaxTBS_r17_7 = {
	"ce-PDSCH-MaxTBS-r17",
	"ce-PDSCH-MaxTBS-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_ce_PDSCH_MaxTBS_r17_tags_7,
	sizeof(asn_DEF_ce_PDSCH_MaxTBS_r17_tags_7)
		/sizeof(asn_DEF_ce_PDSCH_MaxTBS_r17_tags_7[0]) - 1, /* 1 */
	asn_DEF_ce_PDSCH_MaxTBS_r17_tags_7,	/* Same as above */
	sizeof(asn_DEF_ce_PDSCH_MaxTBS_r17_tags_7)
		/sizeof(asn_DEF_ce_PDSCH_MaxTBS_r17_tags_7[0]), /* 2 */
	{ &asn_OER_type_ce_PDSCH_MaxTBS_r17_constr_7, &asn_PER_type_ce_PDSCH_MaxTBS_r17_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_PDSCH_MaxTBS_r17_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ce_Capabilities_v1700_2[] = {
	{ ATF_POINTER, 3, offsetof(struct PhyLayerParameters_v1700__ce_Capabilities_v1700, ce_PDSCH_14HARQProcesses_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_PDSCH_14HARQProcesses_r17_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-PDSCH-14HARQProcesses-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct PhyLayerParameters_v1700__ce_Capabilities_v1700, ce_PDSCH_14HARQProcesses_Alt2_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_PDSCH_14HARQProcesses_Alt2_r17_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-PDSCH-14HARQProcesses-Alt2-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct PhyLayerParameters_v1700__ce_Capabilities_v1700, ce_PDSCH_MaxTBS_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_PDSCH_MaxTBS_r17_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-PDSCH-MaxTBS-r17"
		},
};
static const int asn_MAP_ce_Capabilities_v1700_oms_2[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ce_Capabilities_v1700_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ce_Capabilities_v1700_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ce-PDSCH-14HARQProcesses-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ce-PDSCH-14HARQProcesses-Alt2-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ce-PDSCH-MaxTBS-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ce_Capabilities_v1700_specs_2 = {
	sizeof(struct PhyLayerParameters_v1700__ce_Capabilities_v1700),
	offsetof(struct PhyLayerParameters_v1700__ce_Capabilities_v1700, _asn_ctx),
	asn_MAP_ce_Capabilities_v1700_tag2el_2,
	3,	/* Count of tags in the map */
	asn_MAP_ce_Capabilities_v1700_oms_2,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_Capabilities_v1700_2 = {
	"ce-Capabilities-v1700",
	"ce-Capabilities-v1700",
	&asn_OP_SEQUENCE,
	asn_DEF_ce_Capabilities_v1700_tags_2,
	sizeof(asn_DEF_ce_Capabilities_v1700_tags_2)
		/sizeof(asn_DEF_ce_Capabilities_v1700_tags_2[0]) - 1, /* 1 */
	asn_DEF_ce_Capabilities_v1700_tags_2,	/* Same as above */
	sizeof(asn_DEF_ce_Capabilities_v1700_tags_2)
		/sizeof(asn_DEF_ce_Capabilities_v1700_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ce_Capabilities_v1700_2,
	3,	/* Elements count */
	&asn_SPC_ce_Capabilities_v1700_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PhyLayerParameters_v1700_1[] = {
	{ ATF_POINTER, 1, offsetof(struct PhyLayerParameters_v1700, ce_Capabilities_v1700),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ce_Capabilities_v1700_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-Capabilities-v1700"
		},
};
static const int asn_MAP_PhyLayerParameters_v1700_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_PhyLayerParameters_v1700_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PhyLayerParameters_v1700_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ce-Capabilities-v1700 */
};
asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_v1700_specs_1 = {
	sizeof(struct PhyLayerParameters_v1700),
	offsetof(struct PhyLayerParameters_v1700, _asn_ctx),
	asn_MAP_PhyLayerParameters_v1700_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_PhyLayerParameters_v1700_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_v1700 = {
	"PhyLayerParameters-v1700",
	"PhyLayerParameters-v1700",
	&asn_OP_SEQUENCE,
	asn_DEF_PhyLayerParameters_v1700_tags_1,
	sizeof(asn_DEF_PhyLayerParameters_v1700_tags_1)
		/sizeof(asn_DEF_PhyLayerParameters_v1700_tags_1[0]), /* 1 */
	asn_DEF_PhyLayerParameters_v1700_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhyLayerParameters_v1700_tags_1)
		/sizeof(asn_DEF_PhyLayerParameters_v1700_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PhyLayerParameters_v1700_1,
	1,	/* Elements count */
	&asn_SPC_PhyLayerParameters_v1700_specs_1	/* Additional specs */
};

