/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "ACDC-ParametersPerPLMN-List.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_acdcApplicableForRoamer_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_acdcApplicableForRoamer_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ACDC_ParametersPerPLMN_List_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..6)) */};
asn_per_constraints_t asn_PER_type_ACDC_ParametersPerPLMN_List_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (SIZE(1..6)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_acdcApplicableForRoamer_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_acdcApplicableForRoamer_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_acdcApplicableForRoamer_specs_4 = {
	asn_MAP_acdcApplicableForRoamer_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_acdcApplicableForRoamer_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_acdcApplicableForRoamer_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_acdcApplicableForRoamer_4 = {
	"acdcApplicableForRoamer",
	"acdcApplicableForRoamer",
	&asn_OP_NativeEnumerated,
	asn_DEF_acdcApplicableForRoamer_tags_4,
	sizeof(asn_DEF_acdcApplicableForRoamer_tags_4)
		/sizeof(asn_DEF_acdcApplicableForRoamer_tags_4[0]) - 1, /* 1 */
	asn_DEF_acdcApplicableForRoamer_tags_4,	/* Same as above */
	sizeof(asn_DEF_acdcApplicableForRoamer_tags_4)
		/sizeof(asn_DEF_acdcApplicableForRoamer_tags_4[0]), /* 2 */
	{ &asn_OER_type_acdcApplicableForRoamer_constr_4, &asn_PER_type_acdcApplicableForRoamer_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_acdcApplicableForRoamer_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_POINTER, 2, offsetof(struct ACDC_ParametersPerPLMN_List__Member, plmnSpecificACDC_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpecificACDC_BarringInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmnSpecificACDC-Parameters"
		},
	{ ATF_POINTER, 1, offsetof(struct ACDC_ParametersPerPLMN_List__Member, acdcApplicableForRoamer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_acdcApplicableForRoamer_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"acdcApplicableForRoamer"
		},
};
static const int asn_MAP_Member_oms_2[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmnSpecificACDC-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* acdcApplicableForRoamer */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct ACDC_ParametersPerPLMN_List__Member),
	offsetof(struct ACDC_ParametersPerPLMN_List__Member, _asn_ctx),
	asn_MAP_Member_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_Member_oms_2,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
	&asn_OP_SEQUENCE,
	asn_DEF_Member_tags_2,
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	asn_DEF_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Member_2,
	2,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ACDC_ParametersPerPLMN_List_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ACDC_ParametersPerPLMN_List_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_ACDC_ParametersPerPLMN_List_specs_1 = {
	sizeof(struct ACDC_ParametersPerPLMN_List),
	offsetof(struct ACDC_ParametersPerPLMN_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_ACDC_ParametersPerPLMN_List = {
	"ACDC-ParametersPerPLMN-List",
	"ACDC-ParametersPerPLMN-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ACDC_ParametersPerPLMN_List_tags_1,
	sizeof(asn_DEF_ACDC_ParametersPerPLMN_List_tags_1)
		/sizeof(asn_DEF_ACDC_ParametersPerPLMN_List_tags_1[0]), /* 1 */
	asn_DEF_ACDC_ParametersPerPLMN_List_tags_1,	/* Same as above */
	sizeof(asn_DEF_ACDC_ParametersPerPLMN_List_tags_1)
		/sizeof(asn_DEF_ACDC_ParametersPerPLMN_List_tags_1[0]), /* 1 */
	{ &asn_OER_type_ACDC_ParametersPerPLMN_List_constr_1, &asn_PER_type_ACDC_ParametersPerPLMN_List_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_ACDC_ParametersPerPLMN_List_1,
	1,	/* Single element */
	&asn_SPC_ACDC_ParametersPerPLMN_List_specs_1	/* Additional specs */
};

