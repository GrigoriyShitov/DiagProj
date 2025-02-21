/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "PagingType1.h"

static const ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_12 = {
	sizeof(struct PagingType1__laterNonCriticalExtensions__v590NonCriticalExtensions__v860NonCriticalExtensions__vc50NonCriticalExtensions__nonCriticalExtensions),
	offsetof(struct PagingType1__laterNonCriticalExtensions__v590NonCriticalExtensions__v860NonCriticalExtensions__vc50NonCriticalExtensions__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_12 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtensions_tags_12,
	sizeof(asn_DEF_nonCriticalExtensions_tags_12)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_12[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_12,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_12)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_vc50NonCriticalExtensions_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PagingType1__laterNonCriticalExtensions__v590NonCriticalExtensions__v860NonCriticalExtensions__vc50NonCriticalExtensions, pagingType1_vc50ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingType1_vc50ext_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pagingType1-vc50ext"
		},
	{ ATF_POINTER, 1, offsetof(struct PagingType1__laterNonCriticalExtensions__v590NonCriticalExtensions__v860NonCriticalExtensions__vc50NonCriticalExtensions, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtensions"
		},
};
static const int asn_MAP_vc50NonCriticalExtensions_oms_10[] = { 1 };
static const ber_tlv_tag_t asn_DEF_vc50NonCriticalExtensions_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_vc50NonCriticalExtensions_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pagingType1-vc50ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_vc50NonCriticalExtensions_specs_10 = {
	sizeof(struct PagingType1__laterNonCriticalExtensions__v590NonCriticalExtensions__v860NonCriticalExtensions__vc50NonCriticalExtensions),
	offsetof(struct PagingType1__laterNonCriticalExtensions__v590NonCriticalExtensions__v860NonCriticalExtensions__vc50NonCriticalExtensions, _asn_ctx),
	asn_MAP_vc50NonCriticalExtensions_tag2el_10,
	2,	/* Count of tags in the map */
	asn_MAP_vc50NonCriticalExtensions_oms_10,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_vc50NonCriticalExtensions_10 = {
	"vc50NonCriticalExtensions",
	"vc50NonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_vc50NonCriticalExtensions_tags_10,
	sizeof(asn_DEF_vc50NonCriticalExtensions_tags_10)
		/sizeof(asn_DEF_vc50NonCriticalExtensions_tags_10[0]) - 1, /* 1 */
	asn_DEF_vc50NonCriticalExtensions_tags_10,	/* Same as above */
	sizeof(asn_DEF_vc50NonCriticalExtensions_tags_10)
		/sizeof(asn_DEF_vc50NonCriticalExtensions_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_vc50NonCriticalExtensions_10,
	2,	/* Elements count */
	&asn_SPC_vc50NonCriticalExtensions_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v860NonCriticalExtensions_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PagingType1__laterNonCriticalExtensions__v590NonCriticalExtensions__v860NonCriticalExtensions, pagingType1_v860ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingType1_v860ext_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pagingType1-v860ext"
		},
	{ ATF_POINTER, 1, offsetof(struct PagingType1__laterNonCriticalExtensions__v590NonCriticalExtensions__v860NonCriticalExtensions, vc50NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_vc50NonCriticalExtensions_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vc50NonCriticalExtensions"
		},
};
static const int asn_MAP_v860NonCriticalExtensions_oms_8[] = { 1 };
static const ber_tlv_tag_t asn_DEF_v860NonCriticalExtensions_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_v860NonCriticalExtensions_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pagingType1-v860ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* vc50NonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_v860NonCriticalExtensions_specs_8 = {
	sizeof(struct PagingType1__laterNonCriticalExtensions__v590NonCriticalExtensions__v860NonCriticalExtensions),
	offsetof(struct PagingType1__laterNonCriticalExtensions__v590NonCriticalExtensions__v860NonCriticalExtensions, _asn_ctx),
	asn_MAP_v860NonCriticalExtensions_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_v860NonCriticalExtensions_oms_8,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v860NonCriticalExtensions_8 = {
	"v860NonCriticalExtensions",
	"v860NonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_v860NonCriticalExtensions_tags_8,
	sizeof(asn_DEF_v860NonCriticalExtensions_tags_8)
		/sizeof(asn_DEF_v860NonCriticalExtensions_tags_8[0]) - 1, /* 1 */
	asn_DEF_v860NonCriticalExtensions_tags_8,	/* Same as above */
	sizeof(asn_DEF_v860NonCriticalExtensions_tags_8)
		/sizeof(asn_DEF_v860NonCriticalExtensions_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_v860NonCriticalExtensions_8,
	2,	/* Elements count */
	&asn_SPC_v860NonCriticalExtensions_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v590NonCriticalExtensions_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PagingType1__laterNonCriticalExtensions__v590NonCriticalExtensions, pagingType1_v590ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingType1_v590ext_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pagingType1-v590ext"
		},
	{ ATF_POINTER, 1, offsetof(struct PagingType1__laterNonCriticalExtensions__v590NonCriticalExtensions, v860NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v860NonCriticalExtensions_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v860NonCriticalExtensions"
		},
};
static const int asn_MAP_v590NonCriticalExtensions_oms_6[] = { 1 };
static const ber_tlv_tag_t asn_DEF_v590NonCriticalExtensions_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_v590NonCriticalExtensions_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pagingType1-v590ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v860NonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_v590NonCriticalExtensions_specs_6 = {
	sizeof(struct PagingType1__laterNonCriticalExtensions__v590NonCriticalExtensions),
	offsetof(struct PagingType1__laterNonCriticalExtensions__v590NonCriticalExtensions, _asn_ctx),
	asn_MAP_v590NonCriticalExtensions_tag2el_6,
	2,	/* Count of tags in the map */
	asn_MAP_v590NonCriticalExtensions_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v590NonCriticalExtensions_6 = {
	"v590NonCriticalExtensions",
	"v590NonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_v590NonCriticalExtensions_tags_6,
	sizeof(asn_DEF_v590NonCriticalExtensions_tags_6)
		/sizeof(asn_DEF_v590NonCriticalExtensions_tags_6[0]) - 1, /* 1 */
	asn_DEF_v590NonCriticalExtensions_tags_6,	/* Same as above */
	sizeof(asn_DEF_v590NonCriticalExtensions_tags_6)
		/sizeof(asn_DEF_v590NonCriticalExtensions_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_v590NonCriticalExtensions_6,
	2,	/* Elements count */
	&asn_SPC_v590NonCriticalExtensions_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_laterNonCriticalExtensions_4[] = {
	{ ATF_POINTER, 2, offsetof(struct PagingType1__laterNonCriticalExtensions, pagingType1_r3_add_ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pagingType1-r3-add-ext"
		},
	{ ATF_POINTER, 1, offsetof(struct PagingType1__laterNonCriticalExtensions, v590NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v590NonCriticalExtensions_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v590NonCriticalExtensions"
		},
};
static const int asn_MAP_laterNonCriticalExtensions_oms_4[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_laterNonCriticalExtensions_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_laterNonCriticalExtensions_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pagingType1-r3-add-ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v590NonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_laterNonCriticalExtensions_specs_4 = {
	sizeof(struct PagingType1__laterNonCriticalExtensions),
	offsetof(struct PagingType1__laterNonCriticalExtensions, _asn_ctx),
	asn_MAP_laterNonCriticalExtensions_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_laterNonCriticalExtensions_oms_4,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_laterNonCriticalExtensions_4 = {
	"laterNonCriticalExtensions",
	"laterNonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_laterNonCriticalExtensions_tags_4,
	sizeof(asn_DEF_laterNonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_laterNonCriticalExtensions_tags_4[0]) - 1, /* 1 */
	asn_DEF_laterNonCriticalExtensions_tags_4,	/* Same as above */
	sizeof(asn_DEF_laterNonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_laterNonCriticalExtensions_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_laterNonCriticalExtensions_4,
	2,	/* Elements count */
	&asn_SPC_laterNonCriticalExtensions_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PagingType1_1[] = {
	{ ATF_POINTER, 3, offsetof(struct PagingType1, pagingRecordList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingRecordList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pagingRecordList"
		},
	{ ATF_POINTER, 2, offsetof(struct PagingType1, bcch_ModificationInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BCCH_ModificationInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bcch-ModificationInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct PagingType1, laterNonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_laterNonCriticalExtensions_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laterNonCriticalExtensions"
		},
};
static const int asn_MAP_PagingType1_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_PagingType1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PagingType1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pagingRecordList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bcch-ModificationInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* laterNonCriticalExtensions */
};
asn_SEQUENCE_specifics_t asn_SPC_PagingType1_specs_1 = {
	sizeof(struct PagingType1),
	offsetof(struct PagingType1, _asn_ctx),
	asn_MAP_PagingType1_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PagingType1_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PagingType1 = {
	"PagingType1",
	"PagingType1",
	&asn_OP_SEQUENCE,
	asn_DEF_PagingType1_tags_1,
	sizeof(asn_DEF_PagingType1_tags_1)
		/sizeof(asn_DEF_PagingType1_tags_1[0]), /* 1 */
	asn_DEF_PagingType1_tags_1,	/* Same as above */
	sizeof(asn_DEF_PagingType1_tags_1)
		/sizeof(asn_DEF_PagingType1_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PagingType1_1,
	3,	/* Elements count */
	&asn_SPC_PagingType1_specs_1	/* Additional specs */
};

