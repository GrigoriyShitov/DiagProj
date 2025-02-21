/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "IDC-Config-r11.h"

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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_idc_Indication_r11_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_idc_Indication_r11_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_autonomousDenialSubframes_r11_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_autonomousDenialSubframes_r11_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_autonomousDenialValidity_r11_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_autonomousDenialValidity_r11_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_idc_Indication_UL_CA_r11_constr_24 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_idc_Indication_UL_CA_r11_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_idc_HardwareSharingIndication_r13_constr_26 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_idc_HardwareSharingIndication_r13_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_idc_Indication_MRDC_r15_constr_28 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_idc_Indication_MRDC_r15_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_idc_Indication_r11_value2enum_2[] = {
	{ 0,	5,	"setup" }
};
static const unsigned int asn_MAP_idc_Indication_r11_enum2value_2[] = {
	0	/* setup(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_idc_Indication_r11_specs_2 = {
	asn_MAP_idc_Indication_r11_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_idc_Indication_r11_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_idc_Indication_r11_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_idc_Indication_r11_2 = {
	"idc-Indication-r11",
	"idc-Indication-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_idc_Indication_r11_tags_2,
	sizeof(asn_DEF_idc_Indication_r11_tags_2)
		/sizeof(asn_DEF_idc_Indication_r11_tags_2[0]) - 1, /* 1 */
	asn_DEF_idc_Indication_r11_tags_2,	/* Same as above */
	sizeof(asn_DEF_idc_Indication_r11_tags_2)
		/sizeof(asn_DEF_idc_Indication_r11_tags_2[0]), /* 2 */
	{ &asn_OER_type_idc_Indication_r11_constr_2, &asn_PER_type_idc_Indication_r11_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_idc_Indication_r11_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_autonomousDenialSubframes_r11_value2enum_5[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n5" },
	{ 2,	3,	"n10" },
	{ 3,	3,	"n15" },
	{ 4,	3,	"n20" },
	{ 5,	3,	"n30" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_autonomousDenialSubframes_r11_enum2value_5[] = {
	2,	/* n10(2) */
	3,	/* n15(3) */
	0,	/* n2(0) */
	4,	/* n20(4) */
	5,	/* n30(5) */
	1,	/* n5(1) */
	7,	/* spare1(7) */
	6	/* spare2(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_autonomousDenialSubframes_r11_specs_5 = {
	asn_MAP_autonomousDenialSubframes_r11_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_autonomousDenialSubframes_r11_enum2value_5,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_autonomousDenialSubframes_r11_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_autonomousDenialSubframes_r11_5 = {
	"autonomousDenialSubframes-r11",
	"autonomousDenialSubframes-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_autonomousDenialSubframes_r11_tags_5,
	sizeof(asn_DEF_autonomousDenialSubframes_r11_tags_5)
		/sizeof(asn_DEF_autonomousDenialSubframes_r11_tags_5[0]) - 1, /* 1 */
	asn_DEF_autonomousDenialSubframes_r11_tags_5,	/* Same as above */
	sizeof(asn_DEF_autonomousDenialSubframes_r11_tags_5)
		/sizeof(asn_DEF_autonomousDenialSubframes_r11_tags_5[0]), /* 2 */
	{ &asn_OER_type_autonomousDenialSubframes_r11_constr_5, &asn_PER_type_autonomousDenialSubframes_r11_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_autonomousDenialSubframes_r11_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_autonomousDenialValidity_r11_value2enum_14[] = {
	{ 0,	5,	"sf200" },
	{ 1,	5,	"sf500" },
	{ 2,	6,	"sf1000" },
	{ 3,	6,	"sf2000" },
	{ 4,	6,	"spare4" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_autonomousDenialValidity_r11_enum2value_14[] = {
	2,	/* sf1000(2) */
	0,	/* sf200(0) */
	3,	/* sf2000(3) */
	1,	/* sf500(1) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* spare3(5) */
	4	/* spare4(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_autonomousDenialValidity_r11_specs_14 = {
	asn_MAP_autonomousDenialValidity_r11_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_autonomousDenialValidity_r11_enum2value_14,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_autonomousDenialValidity_r11_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_autonomousDenialValidity_r11_14 = {
	"autonomousDenialValidity-r11",
	"autonomousDenialValidity-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_autonomousDenialValidity_r11_tags_14,
	sizeof(asn_DEF_autonomousDenialValidity_r11_tags_14)
		/sizeof(asn_DEF_autonomousDenialValidity_r11_tags_14[0]) - 1, /* 1 */
	asn_DEF_autonomousDenialValidity_r11_tags_14,	/* Same as above */
	sizeof(asn_DEF_autonomousDenialValidity_r11_tags_14)
		/sizeof(asn_DEF_autonomousDenialValidity_r11_tags_14[0]), /* 2 */
	{ &asn_OER_type_autonomousDenialValidity_r11_constr_14, &asn_PER_type_autonomousDenialValidity_r11_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_autonomousDenialValidity_r11_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_autonomousDenialParameters_r11_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IDC_Config_r11__autonomousDenialParameters_r11, autonomousDenialSubframes_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_autonomousDenialSubframes_r11_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"autonomousDenialSubframes-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IDC_Config_r11__autonomousDenialParameters_r11, autonomousDenialValidity_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_autonomousDenialValidity_r11_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"autonomousDenialValidity-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_autonomousDenialParameters_r11_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_autonomousDenialParameters_r11_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* autonomousDenialSubframes-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* autonomousDenialValidity-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_autonomousDenialParameters_r11_specs_4 = {
	sizeof(struct IDC_Config_r11__autonomousDenialParameters_r11),
	offsetof(struct IDC_Config_r11__autonomousDenialParameters_r11, _asn_ctx),
	asn_MAP_autonomousDenialParameters_r11_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_autonomousDenialParameters_r11_4 = {
	"autonomousDenialParameters-r11",
	"autonomousDenialParameters-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_autonomousDenialParameters_r11_tags_4,
	sizeof(asn_DEF_autonomousDenialParameters_r11_tags_4)
		/sizeof(asn_DEF_autonomousDenialParameters_r11_tags_4[0]) - 1, /* 1 */
	asn_DEF_autonomousDenialParameters_r11_tags_4,	/* Same as above */
	sizeof(asn_DEF_autonomousDenialParameters_r11_tags_4)
		/sizeof(asn_DEF_autonomousDenialParameters_r11_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_autonomousDenialParameters_r11_4,
	2,	/* Elements count */
	&asn_SPC_autonomousDenialParameters_r11_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_idc_Indication_UL_CA_r11_value2enum_24[] = {
	{ 0,	5,	"setup" }
};
static const unsigned int asn_MAP_idc_Indication_UL_CA_r11_enum2value_24[] = {
	0	/* setup(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_idc_Indication_UL_CA_r11_specs_24 = {
	asn_MAP_idc_Indication_UL_CA_r11_value2enum_24,	/* "tag" => N; sorted by tag */
	asn_MAP_idc_Indication_UL_CA_r11_enum2value_24,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_idc_Indication_UL_CA_r11_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_idc_Indication_UL_CA_r11_24 = {
	"idc-Indication-UL-CA-r11",
	"idc-Indication-UL-CA-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_idc_Indication_UL_CA_r11_tags_24,
	sizeof(asn_DEF_idc_Indication_UL_CA_r11_tags_24)
		/sizeof(asn_DEF_idc_Indication_UL_CA_r11_tags_24[0]) - 1, /* 1 */
	asn_DEF_idc_Indication_UL_CA_r11_tags_24,	/* Same as above */
	sizeof(asn_DEF_idc_Indication_UL_CA_r11_tags_24)
		/sizeof(asn_DEF_idc_Indication_UL_CA_r11_tags_24[0]), /* 2 */
	{ &asn_OER_type_idc_Indication_UL_CA_r11_constr_24, &asn_PER_type_idc_Indication_UL_CA_r11_constr_24, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_idc_Indication_UL_CA_r11_specs_24	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_idc_HardwareSharingIndication_r13_value2enum_26[] = {
	{ 0,	5,	"setup" }
};
static const unsigned int asn_MAP_idc_HardwareSharingIndication_r13_enum2value_26[] = {
	0	/* setup(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_idc_HardwareSharingIndication_r13_specs_26 = {
	asn_MAP_idc_HardwareSharingIndication_r13_value2enum_26,	/* "tag" => N; sorted by tag */
	asn_MAP_idc_HardwareSharingIndication_r13_enum2value_26,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_idc_HardwareSharingIndication_r13_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_idc_HardwareSharingIndication_r13_26 = {
	"idc-HardwareSharingIndication-r13",
	"idc-HardwareSharingIndication-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_idc_HardwareSharingIndication_r13_tags_26,
	sizeof(asn_DEF_idc_HardwareSharingIndication_r13_tags_26)
		/sizeof(asn_DEF_idc_HardwareSharingIndication_r13_tags_26[0]) - 1, /* 1 */
	asn_DEF_idc_HardwareSharingIndication_r13_tags_26,	/* Same as above */
	sizeof(asn_DEF_idc_HardwareSharingIndication_r13_tags_26)
		/sizeof(asn_DEF_idc_HardwareSharingIndication_r13_tags_26[0]), /* 2 */
	{ &asn_OER_type_idc_HardwareSharingIndication_r13_constr_26, &asn_PER_type_idc_HardwareSharingIndication_r13_constr_26, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_idc_HardwareSharingIndication_r13_specs_26	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_idc_Indication_MRDC_r15_28[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IDC_Config_r11__idc_Indication_MRDC_r15, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IDC_Config_r11__idc_Indication_MRDC_r15, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CandidateServingFreqListNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_idc_Indication_MRDC_r15_tag2el_28[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_idc_Indication_MRDC_r15_specs_28 = {
	sizeof(struct IDC_Config_r11__idc_Indication_MRDC_r15),
	offsetof(struct IDC_Config_r11__idc_Indication_MRDC_r15, _asn_ctx),
	offsetof(struct IDC_Config_r11__idc_Indication_MRDC_r15, present),
	sizeof(((struct IDC_Config_r11__idc_Indication_MRDC_r15 *)0)->present),
	asn_MAP_idc_Indication_MRDC_r15_tag2el_28,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_idc_Indication_MRDC_r15_28 = {
	"idc-Indication-MRDC-r15",
	"idc-Indication-MRDC-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_idc_Indication_MRDC_r15_constr_28, &asn_PER_type_idc_Indication_MRDC_r15_constr_28, CHOICE_constraint },
	asn_MBR_idc_Indication_MRDC_r15_28,
	2,	/* Elements count */
	&asn_SPC_idc_Indication_MRDC_r15_specs_28	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_IDC_Config_r11_1[] = {
	{ ATF_POINTER, 5, offsetof(struct IDC_Config_r11, idc_Indication_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_idc_Indication_r11_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"idc-Indication-r11"
		},
	{ ATF_POINTER, 4, offsetof(struct IDC_Config_r11, autonomousDenialParameters_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_autonomousDenialParameters_r11_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"autonomousDenialParameters-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct IDC_Config_r11, idc_Indication_UL_CA_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_idc_Indication_UL_CA_r11_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"idc-Indication-UL-CA-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct IDC_Config_r11, idc_HardwareSharingIndication_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_idc_HardwareSharingIndication_r13_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"idc-HardwareSharingIndication-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct IDC_Config_r11, idc_Indication_MRDC_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_idc_Indication_MRDC_r15_28,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"idc-Indication-MRDC-r15"
		},
};
static const int asn_MAP_IDC_Config_r11_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_IDC_Config_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IDC_Config_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* idc-Indication-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* autonomousDenialParameters-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* idc-Indication-UL-CA-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* idc-HardwareSharingIndication-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* idc-Indication-MRDC-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_IDC_Config_r11_specs_1 = {
	sizeof(struct IDC_Config_r11),
	offsetof(struct IDC_Config_r11, _asn_ctx),
	asn_MAP_IDC_Config_r11_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_IDC_Config_r11_oms_1,	/* Optional members */
	2, 3,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_IDC_Config_r11 = {
	"IDC-Config-r11",
	"IDC-Config-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_IDC_Config_r11_tags_1,
	sizeof(asn_DEF_IDC_Config_r11_tags_1)
		/sizeof(asn_DEF_IDC_Config_r11_tags_1[0]), /* 1 */
	asn_DEF_IDC_Config_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_IDC_Config_r11_tags_1)
		/sizeof(asn_DEF_IDC_Config_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_IDC_Config_r11_1,
	5,	/* Elements count */
	&asn_SPC_IDC_Config_r11_specs_1	/* Additional specs */
};

