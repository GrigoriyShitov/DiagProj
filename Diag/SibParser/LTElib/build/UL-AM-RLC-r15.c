/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UL-AM-RLC-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_maxRetxThreshold_r15_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_maxRetxThreshold_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_maxRetxThreshold_r15_value2enum_5[] = {
	{ 0,	2,	"t1" },
	{ 1,	2,	"t2" },
	{ 2,	2,	"t3" },
	{ 3,	2,	"t4" },
	{ 4,	2,	"t6" },
	{ 5,	2,	"t8" },
	{ 6,	3,	"t16" },
	{ 7,	3,	"t32" }
};
static const unsigned int asn_MAP_maxRetxThreshold_r15_enum2value_5[] = {
	0,	/* t1(0) */
	6,	/* t16(6) */
	1,	/* t2(1) */
	2,	/* t3(2) */
	7,	/* t32(7) */
	3,	/* t4(3) */
	4,	/* t6(4) */
	5	/* t8(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxRetxThreshold_r15_specs_5 = {
	asn_MAP_maxRetxThreshold_r15_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_maxRetxThreshold_r15_enum2value_5,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxRetxThreshold_r15_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxRetxThreshold_r15_5 = {
	"maxRetxThreshold-r15",
	"maxRetxThreshold-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxRetxThreshold_r15_tags_5,
	sizeof(asn_DEF_maxRetxThreshold_r15_tags_5)
		/sizeof(asn_DEF_maxRetxThreshold_r15_tags_5[0]) - 1, /* 1 */
	asn_DEF_maxRetxThreshold_r15_tags_5,	/* Same as above */
	sizeof(asn_DEF_maxRetxThreshold_r15_tags_5)
		/sizeof(asn_DEF_maxRetxThreshold_r15_tags_5[0]), /* 2 */
	{ &asn_OER_type_maxRetxThreshold_r15_constr_5, &asn_PER_type_maxRetxThreshold_r15_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxRetxThreshold_r15_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UL_AM_RLC_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_AM_RLC_r15, t_PollRetransmit_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_PollRetransmit,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-PollRetransmit-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_AM_RLC_r15, pollPDU_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PollPDU_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pollPDU-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_AM_RLC_r15, pollByte_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PollByte_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pollByte-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_AM_RLC_r15, maxRetxThreshold_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxRetxThreshold_r15_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxRetxThreshold-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_AM_RLC_r15, extended_RLC_LI_Field_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"extended-RLC-LI-Field-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_UL_AM_RLC_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UL_AM_RLC_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t-PollRetransmit-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pollPDU-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pollByte-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* maxRetxThreshold-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* extended-RLC-LI-Field-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_UL_AM_RLC_r15_specs_1 = {
	sizeof(struct UL_AM_RLC_r15),
	offsetof(struct UL_AM_RLC_r15, _asn_ctx),
	asn_MAP_UL_AM_RLC_r15_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UL_AM_RLC_r15 = {
	"UL-AM-RLC-r15",
	"UL-AM-RLC-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_UL_AM_RLC_r15_tags_1,
	sizeof(asn_DEF_UL_AM_RLC_r15_tags_1)
		/sizeof(asn_DEF_UL_AM_RLC_r15_tags_1[0]), /* 1 */
	asn_DEF_UL_AM_RLC_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_AM_RLC_r15_tags_1)
		/sizeof(asn_DEF_UL_AM_RLC_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UL_AM_RLC_r15_1,
	5,	/* Elements count */
	&asn_SPC_UL_AM_RLC_r15_specs_1	/* Additional specs */
};

