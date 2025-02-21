/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "RRCConnectionRequest-v860ext-IEs.h"

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
static asn_oer_constraints_t asn_OER_type_supportOfCommonEDCH_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_supportOfCommonEDCH_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_multiCellSupport_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_multiCellSupport_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_supportOfMACiis_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_supportOfMACiis_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_supportOfSPSOperation_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_supportOfSPSOperation_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_supportOfCommonEDCH_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_supportOfCommonEDCH_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_supportOfCommonEDCH_specs_2 = {
	asn_MAP_supportOfCommonEDCH_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_supportOfCommonEDCH_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_supportOfCommonEDCH_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportOfCommonEDCH_2 = {
	"supportOfCommonEDCH",
	"supportOfCommonEDCH",
	&asn_OP_NativeEnumerated,
	asn_DEF_supportOfCommonEDCH_tags_2,
	sizeof(asn_DEF_supportOfCommonEDCH_tags_2)
		/sizeof(asn_DEF_supportOfCommonEDCH_tags_2[0]) - 1, /* 1 */
	asn_DEF_supportOfCommonEDCH_tags_2,	/* Same as above */
	sizeof(asn_DEF_supportOfCommonEDCH_tags_2)
		/sizeof(asn_DEF_supportOfCommonEDCH_tags_2[0]), /* 2 */
	{ &asn_OER_type_supportOfCommonEDCH_constr_2, &asn_PER_type_supportOfCommonEDCH_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportOfCommonEDCH_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_multiCellSupport_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_multiCellSupport_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_multiCellSupport_specs_4 = {
	asn_MAP_multiCellSupport_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_multiCellSupport_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_multiCellSupport_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multiCellSupport_4 = {
	"multiCellSupport",
	"multiCellSupport",
	&asn_OP_NativeEnumerated,
	asn_DEF_multiCellSupport_tags_4,
	sizeof(asn_DEF_multiCellSupport_tags_4)
		/sizeof(asn_DEF_multiCellSupport_tags_4[0]) - 1, /* 1 */
	asn_DEF_multiCellSupport_tags_4,	/* Same as above */
	sizeof(asn_DEF_multiCellSupport_tags_4)
		/sizeof(asn_DEF_multiCellSupport_tags_4[0]), /* 2 */
	{ &asn_OER_type_multiCellSupport_constr_4, &asn_PER_type_multiCellSupport_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_multiCellSupport_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_supportOfMACiis_value2enum_7[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_supportOfMACiis_enum2value_7[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_supportOfMACiis_specs_7 = {
	asn_MAP_supportOfMACiis_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_supportOfMACiis_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_supportOfMACiis_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportOfMACiis_7 = {
	"supportOfMACiis",
	"supportOfMACiis",
	&asn_OP_NativeEnumerated,
	asn_DEF_supportOfMACiis_tags_7,
	sizeof(asn_DEF_supportOfMACiis_tags_7)
		/sizeof(asn_DEF_supportOfMACiis_tags_7[0]) - 1, /* 1 */
	asn_DEF_supportOfMACiis_tags_7,	/* Same as above */
	sizeof(asn_DEF_supportOfMACiis_tags_7)
		/sizeof(asn_DEF_supportOfMACiis_tags_7[0]), /* 2 */
	{ &asn_OER_type_supportOfMACiis_constr_7, &asn_PER_type_supportOfMACiis_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportOfMACiis_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_supportOfSPSOperation_value2enum_9[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_supportOfSPSOperation_enum2value_9[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_supportOfSPSOperation_specs_9 = {
	asn_MAP_supportOfSPSOperation_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_supportOfSPSOperation_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_supportOfSPSOperation_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportOfSPSOperation_9 = {
	"supportOfSPSOperation",
	"supportOfSPSOperation",
	&asn_OP_NativeEnumerated,
	asn_DEF_supportOfSPSOperation_tags_9,
	sizeof(asn_DEF_supportOfSPSOperation_tags_9)
		/sizeof(asn_DEF_supportOfSPSOperation_tags_9[0]) - 1, /* 1 */
	asn_DEF_supportOfSPSOperation_tags_9,	/* Same as above */
	sizeof(asn_DEF_supportOfSPSOperation_tags_9)
		/sizeof(asn_DEF_supportOfSPSOperation_tags_9[0]), /* 2 */
	{ &asn_OER_type_supportOfSPSOperation_constr_9, &asn_PER_type_supportOfSPSOperation_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportOfSPSOperation_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCConnectionRequest_v860ext_IEs_1[] = {
	{ ATF_POINTER, 5, offsetof(struct RRCConnectionRequest_v860ext_IEs, supportOfCommonEDCH),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportOfCommonEDCH_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportOfCommonEDCH"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCConnectionRequest_v860ext_IEs, multiCellSupport),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_multiCellSupport_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiCellSupport"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionRequest_v860ext_IEs, pre_redirectionInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Pre_RedirectionInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pre-redirectionInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionRequest_v860ext_IEs, supportOfMACiis),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportOfMACiis_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportOfMACiis"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionRequest_v860ext_IEs, supportOfSPSOperation),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportOfSPSOperation_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportOfSPSOperation"
		},
};
static const int asn_MAP_RRCConnectionRequest_v860ext_IEs_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionRequest_v860ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionRequest_v860ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportOfCommonEDCH */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* multiCellSupport */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pre-redirectionInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* supportOfMACiis */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* supportOfSPSOperation */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionRequest_v860ext_IEs_specs_1 = {
	sizeof(struct RRCConnectionRequest_v860ext_IEs),
	offsetof(struct RRCConnectionRequest_v860ext_IEs, _asn_ctx),
	asn_MAP_RRCConnectionRequest_v860ext_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RRCConnectionRequest_v860ext_IEs_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionRequest_v860ext_IEs = {
	"RRCConnectionRequest-v860ext-IEs",
	"RRCConnectionRequest-v860ext-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionRequest_v860ext_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionRequest_v860ext_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionRequest_v860ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionRequest_v860ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionRequest_v860ext_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionRequest_v860ext_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionRequest_v860ext_IEs_1,
	5,	/* Elements count */
	&asn_SPC_RRCConnectionRequest_v860ext_IEs_specs_1	/* Additional specs */
};

