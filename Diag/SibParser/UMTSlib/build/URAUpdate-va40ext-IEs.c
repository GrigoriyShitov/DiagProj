/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "URAUpdate-va40ext-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_loggedMeasAvailable_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_loggedMeasAvailable_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_loggedANRResultsAvailable_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_loggedANRResultsAvailable_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_loggedMeasAvailable_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_loggedMeasAvailable_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_loggedMeasAvailable_specs_2 = {
	asn_MAP_loggedMeasAvailable_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_loggedMeasAvailable_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_loggedMeasAvailable_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_loggedMeasAvailable_2 = {
	"loggedMeasAvailable",
	"loggedMeasAvailable",
	&asn_OP_NativeEnumerated,
	asn_DEF_loggedMeasAvailable_tags_2,
	sizeof(asn_DEF_loggedMeasAvailable_tags_2)
		/sizeof(asn_DEF_loggedMeasAvailable_tags_2[0]) - 1, /* 1 */
	asn_DEF_loggedMeasAvailable_tags_2,	/* Same as above */
	sizeof(asn_DEF_loggedMeasAvailable_tags_2)
		/sizeof(asn_DEF_loggedMeasAvailable_tags_2[0]), /* 2 */
	{ &asn_OER_type_loggedMeasAvailable_constr_2, &asn_PER_type_loggedMeasAvailable_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_loggedMeasAvailable_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_loggedANRResultsAvailable_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_loggedANRResultsAvailable_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_loggedANRResultsAvailable_specs_4 = {
	asn_MAP_loggedANRResultsAvailable_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_loggedANRResultsAvailable_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_loggedANRResultsAvailable_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_loggedANRResultsAvailable_4 = {
	"loggedANRResultsAvailable",
	"loggedANRResultsAvailable",
	&asn_OP_NativeEnumerated,
	asn_DEF_loggedANRResultsAvailable_tags_4,
	sizeof(asn_DEF_loggedANRResultsAvailable_tags_4)
		/sizeof(asn_DEF_loggedANRResultsAvailable_tags_4[0]) - 1, /* 1 */
	asn_DEF_loggedANRResultsAvailable_tags_4,	/* Same as above */
	sizeof(asn_DEF_loggedANRResultsAvailable_tags_4)
		/sizeof(asn_DEF_loggedANRResultsAvailable_tags_4[0]), /* 2 */
	{ &asn_OER_type_loggedANRResultsAvailable_constr_4, &asn_PER_type_loggedANRResultsAvailable_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_loggedANRResultsAvailable_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_URAUpdate_va40ext_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct URAUpdate_va40ext_IEs, loggedMeasAvailable),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_loggedMeasAvailable_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"loggedMeasAvailable"
		},
	{ ATF_POINTER, 1, offsetof(struct URAUpdate_va40ext_IEs, loggedANRResultsAvailable),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_loggedANRResultsAvailable_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"loggedANRResultsAvailable"
		},
};
static const int asn_MAP_URAUpdate_va40ext_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_URAUpdate_va40ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_URAUpdate_va40ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* loggedMeasAvailable */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* loggedANRResultsAvailable */
};
asn_SEQUENCE_specifics_t asn_SPC_URAUpdate_va40ext_IEs_specs_1 = {
	sizeof(struct URAUpdate_va40ext_IEs),
	offsetof(struct URAUpdate_va40ext_IEs, _asn_ctx),
	asn_MAP_URAUpdate_va40ext_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_URAUpdate_va40ext_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_URAUpdate_va40ext_IEs = {
	"URAUpdate-va40ext-IEs",
	"URAUpdate-va40ext-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_URAUpdate_va40ext_IEs_tags_1,
	sizeof(asn_DEF_URAUpdate_va40ext_IEs_tags_1)
		/sizeof(asn_DEF_URAUpdate_va40ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_URAUpdate_va40ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_URAUpdate_va40ext_IEs_tags_1)
		/sizeof(asn_DEF_URAUpdate_va40ext_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_URAUpdate_va40ext_IEs_1,
	2,	/* Elements count */
	&asn_SPC_URAUpdate_va40ext_IEs_specs_1	/* Additional specs */
};

