/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "V2X-BandParametersEUTRA-NR-v1630.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_tx_Sidelink_r16_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_tx_Sidelink_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_rx_Sidelink_r16_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_rx_Sidelink_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_V2X_BandParametersEUTRA_NR_v1630_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_V2X_BandParametersEUTRA_NR_v1630_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_tx_Sidelink_r16_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_tx_Sidelink_r16_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_tx_Sidelink_r16_specs_4 = {
	asn_MAP_tx_Sidelink_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_tx_Sidelink_r16_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_tx_Sidelink_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tx_Sidelink_r16_4 = {
	"tx-Sidelink-r16",
	"tx-Sidelink-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_tx_Sidelink_r16_tags_4,
	sizeof(asn_DEF_tx_Sidelink_r16_tags_4)
		/sizeof(asn_DEF_tx_Sidelink_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_tx_Sidelink_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_tx_Sidelink_r16_tags_4)
		/sizeof(asn_DEF_tx_Sidelink_r16_tags_4[0]), /* 2 */
	{ &asn_OER_type_tx_Sidelink_r16_constr_4, &asn_PER_type_tx_Sidelink_r16_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_tx_Sidelink_r16_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_rx_Sidelink_r16_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_rx_Sidelink_r16_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rx_Sidelink_r16_specs_6 = {
	asn_MAP_rx_Sidelink_r16_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_rx_Sidelink_r16_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rx_Sidelink_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rx_Sidelink_r16_6 = {
	"rx-Sidelink-r16",
	"rx-Sidelink-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_rx_Sidelink_r16_tags_6,
	sizeof(asn_DEF_rx_Sidelink_r16_tags_6)
		/sizeof(asn_DEF_rx_Sidelink_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_rx_Sidelink_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_rx_Sidelink_r16_tags_6)
		/sizeof(asn_DEF_rx_Sidelink_r16_tags_6[0]), /* 2 */
	{ &asn_OER_type_rx_Sidelink_r16_constr_6, &asn_PER_type_rx_Sidelink_r16_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rx_Sidelink_r16_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_nr_3[] = {
	{ ATF_POINTER, 2, offsetof(struct V2X_BandParametersEUTRA_NR_v1630__nr, tx_Sidelink_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tx_Sidelink_r16_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tx-Sidelink-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct V2X_BandParametersEUTRA_NR_v1630__nr, rx_Sidelink_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rx_Sidelink_r16_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rx-Sidelink-r16"
		},
};
static const int asn_MAP_nr_oms_3[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_nr_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_nr_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tx-Sidelink-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rx-Sidelink-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_nr_specs_3 = {
	sizeof(struct V2X_BandParametersEUTRA_NR_v1630__nr),
	offsetof(struct V2X_BandParametersEUTRA_NR_v1630__nr, _asn_ctx),
	asn_MAP_nr_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_nr_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nr_3 = {
	"nr",
	"nr",
	&asn_OP_SEQUENCE,
	asn_DEF_nr_tags_3,
	sizeof(asn_DEF_nr_tags_3)
		/sizeof(asn_DEF_nr_tags_3[0]) - 1, /* 1 */
	asn_DEF_nr_tags_3,	/* Same as above */
	sizeof(asn_DEF_nr_tags_3)
		/sizeof(asn_DEF_nr_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_nr_3,
	2,	/* Elements count */
	&asn_SPC_nr_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_V2X_BandParametersEUTRA_NR_v1630_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct V2X_BandParametersEUTRA_NR_v1630, choice.eutra),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct V2X_BandParametersEUTRA_NR_v1630, choice.nr),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nr_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_V2X_BandParametersEUTRA_NR_v1630_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutra */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nr */
};
asn_CHOICE_specifics_t asn_SPC_V2X_BandParametersEUTRA_NR_v1630_specs_1 = {
	sizeof(struct V2X_BandParametersEUTRA_NR_v1630),
	offsetof(struct V2X_BandParametersEUTRA_NR_v1630, _asn_ctx),
	offsetof(struct V2X_BandParametersEUTRA_NR_v1630, present),
	sizeof(((struct V2X_BandParametersEUTRA_NR_v1630 *)0)->present),
	asn_MAP_V2X_BandParametersEUTRA_NR_v1630_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_V2X_BandParametersEUTRA_NR_v1630 = {
	"V2X-BandParametersEUTRA-NR-v1630",
	"V2X-BandParametersEUTRA-NR-v1630",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_V2X_BandParametersEUTRA_NR_v1630_constr_1, &asn_PER_type_V2X_BandParametersEUTRA_NR_v1630_constr_1, CHOICE_constraint },
	asn_MBR_V2X_BandParametersEUTRA_NR_v1630_1,
	2,	/* Elements count */
	&asn_SPC_V2X_BandParametersEUTRA_NR_v1630_specs_1	/* Additional specs */
};

