/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "Event2g.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_useCIO_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_useCIO_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_useCIO_value2enum_5[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_useCIO_enum2value_5[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_useCIO_specs_5 = {
	asn_MAP_useCIO_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_useCIO_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_useCIO_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_useCIO_5 = {
	"useCIO",
	"useCIO",
	&asn_OP_NativeEnumerated,
	asn_DEF_useCIO_tags_5,
	sizeof(asn_DEF_useCIO_tags_5)
		/sizeof(asn_DEF_useCIO_tags_5[0]) - 1, /* 1 */
	asn_DEF_useCIO_tags_5,	/* Same as above */
	sizeof(asn_DEF_useCIO_tags_5)
		/sizeof(asn_DEF_useCIO_tags_5[0]), /* 2 */
	{ &asn_OER_type_useCIO_constr_5, &asn_PER_type_useCIO_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_useCIO_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Event2g_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Event2g, hysteresis),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HysteresisInterFreq,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hysteresis"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event2g, timeToTrigger),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeToTrigger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeToTrigger"
		},
	{ ATF_POINTER, 2, offsetof(struct Event2g, reportingCellStatus),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ReportingCellStatus_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportingCellStatus"
		},
	{ ATF_POINTER, 1, offsetof(struct Event2g, useCIO),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_useCIO_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"useCIO"
		},
};
static const int asn_MAP_Event2g_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_Event2g_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Event2g_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hysteresis */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* timeToTrigger */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reportingCellStatus */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* useCIO */
};
asn_SEQUENCE_specifics_t asn_SPC_Event2g_specs_1 = {
	sizeof(struct Event2g),
	offsetof(struct Event2g, _asn_ctx),
	asn_MAP_Event2g_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Event2g_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Event2g = {
	"Event2g",
	"Event2g",
	&asn_OP_SEQUENCE,
	asn_DEF_Event2g_tags_1,
	sizeof(asn_DEF_Event2g_tags_1)
		/sizeof(asn_DEF_Event2g_tags_1[0]), /* 1 */
	asn_DEF_Event2g_tags_1,	/* Same as above */
	sizeof(asn_DEF_Event2g_tags_1)
		/sizeof(asn_DEF_Event2g_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Event2g_1,
	4,	/* Elements count */
	&asn_SPC_Event2g_specs_1	/* Additional specs */
};

