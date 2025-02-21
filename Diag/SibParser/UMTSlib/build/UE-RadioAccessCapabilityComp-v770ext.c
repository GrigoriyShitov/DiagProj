/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UE-RadioAccessCapabilityComp-v770ext.h"

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
static asn_oer_constraints_t asn_OER_type_securityCapabilityIndication_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_securityCapabilityIndication_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ganssSupportIndication_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ganssSupportIndication_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_mac_ehsSupport_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_mac_ehsSupport_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_securityCapabilityIndication_value2enum_3[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_securityCapabilityIndication_enum2value_3[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_securityCapabilityIndication_specs_3 = {
	asn_MAP_securityCapabilityIndication_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_securityCapabilityIndication_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_securityCapabilityIndication_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_securityCapabilityIndication_3 = {
	"securityCapabilityIndication",
	"securityCapabilityIndication",
	&asn_OP_NativeEnumerated,
	asn_DEF_securityCapabilityIndication_tags_3,
	sizeof(asn_DEF_securityCapabilityIndication_tags_3)
		/sizeof(asn_DEF_securityCapabilityIndication_tags_3[0]) - 1, /* 1 */
	asn_DEF_securityCapabilityIndication_tags_3,	/* Same as above */
	sizeof(asn_DEF_securityCapabilityIndication_tags_3)
		/sizeof(asn_DEF_securityCapabilityIndication_tags_3[0]), /* 2 */
	{ &asn_OER_type_securityCapabilityIndication_constr_3, &asn_PER_type_securityCapabilityIndication_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_securityCapabilityIndication_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ganssSupportIndication_value2enum_5[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_ganssSupportIndication_enum2value_5[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ganssSupportIndication_specs_5 = {
	asn_MAP_ganssSupportIndication_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_ganssSupportIndication_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ganssSupportIndication_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ganssSupportIndication_5 = {
	"ganssSupportIndication",
	"ganssSupportIndication",
	&asn_OP_NativeEnumerated,
	asn_DEF_ganssSupportIndication_tags_5,
	sizeof(asn_DEF_ganssSupportIndication_tags_5)
		/sizeof(asn_DEF_ganssSupportIndication_tags_5[0]) - 1, /* 1 */
	asn_DEF_ganssSupportIndication_tags_5,	/* Same as above */
	sizeof(asn_DEF_ganssSupportIndication_tags_5)
		/sizeof(asn_DEF_ganssSupportIndication_tags_5[0]), /* 2 */
	{ &asn_OER_type_ganssSupportIndication_constr_5, &asn_PER_type_ganssSupportIndication_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ganssSupportIndication_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mac_ehsSupport_value2enum_7[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_mac_ehsSupport_enum2value_7[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_mac_ehsSupport_specs_7 = {
	asn_MAP_mac_ehsSupport_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_mac_ehsSupport_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mac_ehsSupport_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mac_ehsSupport_7 = {
	"mac-ehsSupport",
	"mac-ehsSupport",
	&asn_OP_NativeEnumerated,
	asn_DEF_mac_ehsSupport_tags_7,
	sizeof(asn_DEF_mac_ehsSupport_tags_7)
		/sizeof(asn_DEF_mac_ehsSupport_tags_7[0]) - 1, /* 1 */
	asn_DEF_mac_ehsSupport_tags_7,	/* Same as above */
	sizeof(asn_DEF_mac_ehsSupport_tags_7)
		/sizeof(asn_DEF_mac_ehsSupport_tags_7[0]), /* 2 */
	{ &asn_OER_type_mac_ehsSupport_constr_7, &asn_PER_type_mac_ehsSupport_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mac_ehsSupport_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_RadioAccessCapabilityComp_v770ext_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapabilityComp_v770ext, rf_CapabilityComp),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RF_CapabilityComp_v770ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rf-CapabilityComp"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_RadioAccessCapabilityComp_v770ext, securityCapabilityIndication),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_securityCapabilityIndication_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"securityCapabilityIndication"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_RadioAccessCapabilityComp_v770ext, ganssSupportIndication),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ganssSupportIndication_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ganssSupportIndication"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_RadioAccessCapabilityComp_v770ext, mac_ehsSupport),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mac_ehsSupport_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-ehsSupport"
		},
};
static const int asn_MAP_UE_RadioAccessCapabilityComp_v770ext_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_UE_RadioAccessCapabilityComp_v770ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_RadioAccessCapabilityComp_v770ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rf-CapabilityComp */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* securityCapabilityIndication */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ganssSupportIndication */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* mac-ehsSupport */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_RadioAccessCapabilityComp_v770ext_specs_1 = {
	sizeof(struct UE_RadioAccessCapabilityComp_v770ext),
	offsetof(struct UE_RadioAccessCapabilityComp_v770ext, _asn_ctx),
	asn_MAP_UE_RadioAccessCapabilityComp_v770ext_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_UE_RadioAccessCapabilityComp_v770ext_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapabilityComp_v770ext = {
	"UE-RadioAccessCapabilityComp-v770ext",
	"UE-RadioAccessCapabilityComp-v770ext",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_RadioAccessCapabilityComp_v770ext_tags_1,
	sizeof(asn_DEF_UE_RadioAccessCapabilityComp_v770ext_tags_1)
		/sizeof(asn_DEF_UE_RadioAccessCapabilityComp_v770ext_tags_1[0]), /* 1 */
	asn_DEF_UE_RadioAccessCapabilityComp_v770ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_RadioAccessCapabilityComp_v770ext_tags_1)
		/sizeof(asn_DEF_UE_RadioAccessCapabilityComp_v770ext_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_RadioAccessCapabilityComp_v770ext_1,
	4,	/* Elements count */
	&asn_SPC_UE_RadioAccessCapabilityComp_v770ext_specs_1	/* Additional specs */
};

