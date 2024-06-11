/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "SysInfoType8.h"

static const ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_5 = {
	sizeof(struct SysInfoType8__nonCriticalExtensions),
	offsetof(struct SysInfoType8__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_5 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtensions_tags_5,
	sizeof(asn_DEF_nonCriticalExtensions_tags_5)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_5[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_5,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_5)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SysInfoType8_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType8, dummy1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CPCH_Parameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType8, dummy2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CPCH_SetInfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType8, dummy3),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSICH_PowerOffset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy3"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType8, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtensions"
		},
};
static const int asn_MAP_SysInfoType8_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_SysInfoType8_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SysInfoType8_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dummy1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dummy2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dummy3 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_SysInfoType8_specs_1 = {
	sizeof(struct SysInfoType8),
	offsetof(struct SysInfoType8, _asn_ctx),
	asn_MAP_SysInfoType8_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SysInfoType8_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType8 = {
	"SysInfoType8",
	"SysInfoType8",
	&asn_OP_SEQUENCE,
	asn_DEF_SysInfoType8_tags_1,
	sizeof(asn_DEF_SysInfoType8_tags_1)
		/sizeof(asn_DEF_SysInfoType8_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType8_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType8_tags_1)
		/sizeof(asn_DEF_SysInfoType8_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SysInfoType8_1,
	4,	/* Elements count */
	&asn_SPC_SysInfoType8_specs_1	/* Additional specs */
};

