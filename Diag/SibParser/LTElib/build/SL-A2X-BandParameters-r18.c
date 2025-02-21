/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SL-A2X-BandParameters-r18.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_sl_A2X_Service_r18_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sl_A2X_Service_r18_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_sl_A2X_Service_r18_value2enum_5[] = {
	{ 0,	4,	"brid" },
	{ 1,	3,	"daa" },
	{ 2,	10,	"bridAndDAA" }
};
static const unsigned int asn_MAP_sl_A2X_Service_r18_enum2value_5[] = {
	0,	/* brid(0) */
	2,	/* bridAndDAA(2) */
	1	/* daa(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_A2X_Service_r18_specs_5 = {
	asn_MAP_sl_A2X_Service_r18_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_A2X_Service_r18_enum2value_5,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_A2X_Service_r18_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_A2X_Service_r18_5 = {
	"sl-A2X-Service-r18",
	"sl-A2X-Service-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_A2X_Service_r18_tags_5,
	sizeof(asn_DEF_sl_A2X_Service_r18_tags_5)
		/sizeof(asn_DEF_sl_A2X_Service_r18_tags_5[0]) - 1, /* 1 */
	asn_DEF_sl_A2X_Service_r18_tags_5,	/* Same as above */
	sizeof(asn_DEF_sl_A2X_Service_r18_tags_5)
		/sizeof(asn_DEF_sl_A2X_Service_r18_tags_5[0]), /* 2 */
	{ &asn_OER_type_sl_A2X_Service_r18_constr_5, &asn_PER_type_sl_A2X_Service_r18_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_A2X_Service_r18_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_A2X_BandParameters_r18_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_A2X_BandParameters_r18, a2x_FreqBandEUTRA_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandIndicator_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"a2x-FreqBandEUTRA-r18"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_A2X_BandParameters_r18, a2x_BandParametersTxSL_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandParametersTxA2X_r18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"a2x-BandParametersTxSL-r18"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_A2X_BandParameters_r18, a2x_BandParametersRxSL_r18),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandParametersRxA2X_r18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"a2x-BandParametersRxSL-r18"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_A2X_BandParameters_r18, sl_A2X_Service_r18),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_A2X_Service_r18_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-A2X-Service-r18"
		},
};
static const int asn_MAP_SL_A2X_BandParameters_r18_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_SL_A2X_BandParameters_r18_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_A2X_BandParameters_r18_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* a2x-FreqBandEUTRA-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* a2x-BandParametersTxSL-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* a2x-BandParametersRxSL-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* sl-A2X-Service-r18 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_A2X_BandParameters_r18_specs_1 = {
	sizeof(struct SL_A2X_BandParameters_r18),
	offsetof(struct SL_A2X_BandParameters_r18, _asn_ctx),
	asn_MAP_SL_A2X_BandParameters_r18_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SL_A2X_BandParameters_r18_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_A2X_BandParameters_r18 = {
	"SL-A2X-BandParameters-r18",
	"SL-A2X-BandParameters-r18",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_A2X_BandParameters_r18_tags_1,
	sizeof(asn_DEF_SL_A2X_BandParameters_r18_tags_1)
		/sizeof(asn_DEF_SL_A2X_BandParameters_r18_tags_1[0]), /* 1 */
	asn_DEF_SL_A2X_BandParameters_r18_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_A2X_BandParameters_r18_tags_1)
		/sizeof(asn_DEF_SL_A2X_BandParameters_r18_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_A2X_BandParameters_r18_1,
	4,	/* Elements count */
	&asn_SPC_SL_A2X_BandParameters_r18_specs_1	/* Additional specs */
};

