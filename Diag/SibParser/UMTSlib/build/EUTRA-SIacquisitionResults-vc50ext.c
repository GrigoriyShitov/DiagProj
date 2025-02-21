/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "EUTRA-SIacquisitionResults-vc50ext.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_csgMemberIndication_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_csgMemberIndication_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_primaryPLMNSuitable_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_primaryPLMNSuitable_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_csgMemberIndication_value2enum_4[] = {
	{ 0,	6,	"member" }
};
static const unsigned int asn_MAP_csgMemberIndication_enum2value_4[] = {
	0	/* member(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_csgMemberIndication_specs_4 = {
	asn_MAP_csgMemberIndication_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_csgMemberIndication_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_csgMemberIndication_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csgMemberIndication_4 = {
	"csgMemberIndication",
	"csgMemberIndication",
	&asn_OP_NativeEnumerated,
	asn_DEF_csgMemberIndication_tags_4,
	sizeof(asn_DEF_csgMemberIndication_tags_4)
		/sizeof(asn_DEF_csgMemberIndication_tags_4[0]) - 1, /* 1 */
	asn_DEF_csgMemberIndication_tags_4,	/* Same as above */
	sizeof(asn_DEF_csgMemberIndication_tags_4)
		/sizeof(asn_DEF_csgMemberIndication_tags_4[0]), /* 2 */
	{ &asn_OER_type_csgMemberIndication_constr_4, &asn_PER_type_csgMemberIndication_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_csgMemberIndication_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_primaryPLMNSuitable_value2enum_7[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_primaryPLMNSuitable_enum2value_7[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_primaryPLMNSuitable_specs_7 = {
	asn_MAP_primaryPLMNSuitable_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_primaryPLMNSuitable_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_primaryPLMNSuitable_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_primaryPLMNSuitable_7 = {
	"primaryPLMNSuitable",
	"primaryPLMNSuitable",
	&asn_OP_NativeEnumerated,
	asn_DEF_primaryPLMNSuitable_tags_7,
	sizeof(asn_DEF_primaryPLMNSuitable_tags_7)
		/sizeof(asn_DEF_primaryPLMNSuitable_tags_7[0]) - 1, /* 1 */
	asn_DEF_primaryPLMNSuitable_tags_7,	/* Same as above */
	sizeof(asn_DEF_primaryPLMNSuitable_tags_7)
		/sizeof(asn_DEF_primaryPLMNSuitable_tags_7[0]), /* 2 */
	{ &asn_OER_type_primaryPLMNSuitable_constr_7, &asn_PER_type_primaryPLMNSuitable_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_primaryPLMNSuitable_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_EUTRA_SIacquisitionResults_vc50ext_1[] = {
	{ ATF_POINTER, 5, offsetof(struct EUTRA_SIacquisitionResults_vc50ext, cgiInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CGI_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cgiInfo"
		},
	{ ATF_POINTER, 4, offsetof(struct EUTRA_SIacquisitionResults_vc50ext, csgIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSG_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csgIdentity"
		},
	{ ATF_POINTER, 3, offsetof(struct EUTRA_SIacquisitionResults_vc50ext, csgMemberIndication),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_csgMemberIndication_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csgMemberIndication"
		},
	{ ATF_POINTER, 2, offsetof(struct EUTRA_SIacquisitionResults_vc50ext, csgMemberPLMN),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_CSGMemberPLMNList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csgMemberPLMN"
		},
	{ ATF_POINTER, 1, offsetof(struct EUTRA_SIacquisitionResults_vc50ext, primaryPLMNSuitable),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_primaryPLMNSuitable_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"primaryPLMNSuitable"
		},
};
static const int asn_MAP_EUTRA_SIacquisitionResults_vc50ext_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_EUTRA_SIacquisitionResults_vc50ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EUTRA_SIacquisitionResults_vc50ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cgiInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* csgIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* csgMemberIndication */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* csgMemberPLMN */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* primaryPLMNSuitable */
};
asn_SEQUENCE_specifics_t asn_SPC_EUTRA_SIacquisitionResults_vc50ext_specs_1 = {
	sizeof(struct EUTRA_SIacquisitionResults_vc50ext),
	offsetof(struct EUTRA_SIacquisitionResults_vc50ext, _asn_ctx),
	asn_MAP_EUTRA_SIacquisitionResults_vc50ext_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_EUTRA_SIacquisitionResults_vc50ext_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EUTRA_SIacquisitionResults_vc50ext = {
	"EUTRA-SIacquisitionResults-vc50ext",
	"EUTRA-SIacquisitionResults-vc50ext",
	&asn_OP_SEQUENCE,
	asn_DEF_EUTRA_SIacquisitionResults_vc50ext_tags_1,
	sizeof(asn_DEF_EUTRA_SIacquisitionResults_vc50ext_tags_1)
		/sizeof(asn_DEF_EUTRA_SIacquisitionResults_vc50ext_tags_1[0]), /* 1 */
	asn_DEF_EUTRA_SIacquisitionResults_vc50ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_EUTRA_SIacquisitionResults_vc50ext_tags_1)
		/sizeof(asn_DEF_EUTRA_SIacquisitionResults_vc50ext_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EUTRA_SIacquisitionResults_vc50ext_1,
	5,	/* Elements count */
	&asn_SPC_EUTRA_SIacquisitionResults_vc50ext_specs_1	/* Additional specs */
};

