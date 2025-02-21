/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "RRCEarlyDataRequest-5GC-r16-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_establishmentCause_r16_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_establishmentCause_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_establishmentCause_r16_value2enum_3[] = {
	{ 0,	7,	"mo-Data" },
	{ 1,	6,	"spare3" },
	{ 2,	6,	"spare2" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_establishmentCause_r16_enum2value_3[] = {
	0,	/* mo-Data(0) */
	3,	/* spare1(3) */
	2,	/* spare2(2) */
	1	/* spare3(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_establishmentCause_r16_specs_3 = {
	asn_MAP_establishmentCause_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_establishmentCause_r16_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_establishmentCause_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_establishmentCause_r16_3 = {
	"establishmentCause-r16",
	"establishmentCause-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_establishmentCause_r16_tags_3,
	sizeof(asn_DEF_establishmentCause_r16_tags_3)
		/sizeof(asn_DEF_establishmentCause_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_establishmentCause_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_establishmentCause_r16_tags_3)
		/sizeof(asn_DEF_establishmentCause_r16_tags_3[0]), /* 2 */
	{ &asn_OER_type_establishmentCause_r16_constr_3, &asn_PER_type_establishmentCause_r16_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_establishmentCause_r16_specs_3	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_10 = {
	sizeof(struct RRCEarlyDataRequest_5GC_r16_IEs__nonCriticalExtension),
	offsetof(struct RRCEarlyDataRequest_5GC_r16_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_10 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_10,
	sizeof(asn_DEF_nonCriticalExtension_tags_10)
		/sizeof(asn_DEF_nonCriticalExtension_tags_10[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_10,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_10)
		/sizeof(asn_DEF_nonCriticalExtension_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCEarlyDataRequest_5GC_r16_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCEarlyDataRequest_5GC_r16_IEs, ng_5G_S_TMSI_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NG_5G_S_TMSI_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ng-5G-S-TMSI-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCEarlyDataRequest_5GC_r16_IEs, establishmentCause_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_establishmentCause_r16_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"establishmentCause-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCEarlyDataRequest_5GC_r16_IEs, dedicatedInfoNAS_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DedicatedInfoNAS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dedicatedInfoNAS-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCEarlyDataRequest_5GC_r16_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCEarlyDataRequest_5GC_r16_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCEarlyDataRequest_5GC_r16_IEs_oms_1[] = { 3, 4 };
static const ber_tlv_tag_t asn_DEF_RRCEarlyDataRequest_5GC_r16_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCEarlyDataRequest_5GC_r16_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ng-5G-S-TMSI-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* establishmentCause-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dedicatedInfoNAS-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCEarlyDataRequest_5GC_r16_IEs_specs_1 = {
	sizeof(struct RRCEarlyDataRequest_5GC_r16_IEs),
	offsetof(struct RRCEarlyDataRequest_5GC_r16_IEs, _asn_ctx),
	asn_MAP_RRCEarlyDataRequest_5GC_r16_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RRCEarlyDataRequest_5GC_r16_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCEarlyDataRequest_5GC_r16_IEs = {
	"RRCEarlyDataRequest-5GC-r16-IEs",
	"RRCEarlyDataRequest-5GC-r16-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCEarlyDataRequest_5GC_r16_IEs_tags_1,
	sizeof(asn_DEF_RRCEarlyDataRequest_5GC_r16_IEs_tags_1)
		/sizeof(asn_DEF_RRCEarlyDataRequest_5GC_r16_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCEarlyDataRequest_5GC_r16_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCEarlyDataRequest_5GC_r16_IEs_tags_1)
		/sizeof(asn_DEF_RRCEarlyDataRequest_5GC_r16_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCEarlyDataRequest_5GC_r16_IEs_1,
	5,	/* Elements count */
	&asn_SPC_RRCEarlyDataRequest_5GC_r16_IEs_specs_1	/* Additional specs */
};

