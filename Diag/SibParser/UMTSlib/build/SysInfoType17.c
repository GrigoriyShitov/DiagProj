/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SysInfoType17.h"

static const ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_10 = {
	sizeof(struct SysInfoType17__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v770NonCriticalExtensions__nonCriticalExtensions),
	offsetof(struct SysInfoType17__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v770NonCriticalExtensions__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_10 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtensions_tags_10,
	sizeof(asn_DEF_nonCriticalExtensions_tags_10)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_10[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_10,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_10)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v770NonCriticalExtensions_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType17__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v770NonCriticalExtensions, sysInfoType17_v770ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType17_v770ext_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sysInfoType17-v770ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType17__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v770NonCriticalExtensions, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtensions"
		},
};
static const int asn_MAP_v770NonCriticalExtensions_oms_8[] = { 1 };
static const ber_tlv_tag_t asn_DEF_v770NonCriticalExtensions_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_v770NonCriticalExtensions_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType17-v770ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_v770NonCriticalExtensions_specs_8 = {
	sizeof(struct SysInfoType17__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v770NonCriticalExtensions),
	offsetof(struct SysInfoType17__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v770NonCriticalExtensions, _asn_ctx),
	asn_MAP_v770NonCriticalExtensions_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_v770NonCriticalExtensions_oms_8,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v770NonCriticalExtensions_8 = {
	"v770NonCriticalExtensions",
	"v770NonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_v770NonCriticalExtensions_tags_8,
	sizeof(asn_DEF_v770NonCriticalExtensions_tags_8)
		/sizeof(asn_DEF_v770NonCriticalExtensions_tags_8[0]) - 1, /* 1 */
	asn_DEF_v770NonCriticalExtensions_tags_8,	/* Same as above */
	sizeof(asn_DEF_v770NonCriticalExtensions_tags_8)
		/sizeof(asn_DEF_v770NonCriticalExtensions_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_v770NonCriticalExtensions_8,
	2,	/* Elements count */
	&asn_SPC_v770NonCriticalExtensions_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v590NonCriticalExtensions_6[] = {
	{ ATF_POINTER, 2, offsetof(struct SysInfoType17__v4b0NonCriticalExtensions__v590NonCriticalExtensions, sysInfoType17_v590ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType17_v590ext_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sysInfoType17-v590ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType17__v4b0NonCriticalExtensions__v590NonCriticalExtensions, v770NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v770NonCriticalExtensions_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v770NonCriticalExtensions"
		},
};
static const int asn_MAP_v590NonCriticalExtensions_oms_6[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_v590NonCriticalExtensions_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_v590NonCriticalExtensions_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType17-v590ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v770NonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_v590NonCriticalExtensions_specs_6 = {
	sizeof(struct SysInfoType17__v4b0NonCriticalExtensions__v590NonCriticalExtensions),
	offsetof(struct SysInfoType17__v4b0NonCriticalExtensions__v590NonCriticalExtensions, _asn_ctx),
	asn_MAP_v590NonCriticalExtensions_tag2el_6,
	2,	/* Count of tags in the map */
	asn_MAP_v590NonCriticalExtensions_oms_6,	/* Optional members */
	2, 0,	/* Root/Additions */
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

static asn_TYPE_member_t asn_MBR_v4b0NonCriticalExtensions_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType17__v4b0NonCriticalExtensions, sysInfoType17_v4b0ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType17_v4b0ext_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sysInfoType17-v4b0ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType17__v4b0NonCriticalExtensions, v590NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v590NonCriticalExtensions_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v590NonCriticalExtensions"
		},
};
static const int asn_MAP_v4b0NonCriticalExtensions_oms_4[] = { 1 };
static const ber_tlv_tag_t asn_DEF_v4b0NonCriticalExtensions_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_v4b0NonCriticalExtensions_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType17-v4b0ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v590NonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_v4b0NonCriticalExtensions_specs_4 = {
	sizeof(struct SysInfoType17__v4b0NonCriticalExtensions),
	offsetof(struct SysInfoType17__v4b0NonCriticalExtensions, _asn_ctx),
	asn_MAP_v4b0NonCriticalExtensions_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_v4b0NonCriticalExtensions_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v4b0NonCriticalExtensions_4 = {
	"v4b0NonCriticalExtensions",
	"v4b0NonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_v4b0NonCriticalExtensions_tags_4,
	sizeof(asn_DEF_v4b0NonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_v4b0NonCriticalExtensions_tags_4[0]) - 1, /* 1 */
	asn_DEF_v4b0NonCriticalExtensions_tags_4,	/* Same as above */
	sizeof(asn_DEF_v4b0NonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_v4b0NonCriticalExtensions_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_v4b0NonCriticalExtensions_4,
	2,	/* Elements count */
	&asn_SPC_v4b0NonCriticalExtensions_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SysInfoType17_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SysInfoType17, pusch_SysInfoList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_SysInfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-SysInfoList"
		},
	{ ATF_POINTER, 2, offsetof(struct SysInfoType17, pdsch_SysInfoList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_SysInfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-SysInfoList"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType17, v4b0NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_v4b0NonCriticalExtensions_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v4b0NonCriticalExtensions"
		},
};
static const int asn_MAP_SysInfoType17_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_SysInfoType17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SysInfoType17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pusch-SysInfoList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdsch-SysInfoList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* v4b0NonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_SysInfoType17_specs_1 = {
	sizeof(struct SysInfoType17),
	offsetof(struct SysInfoType17, _asn_ctx),
	asn_MAP_SysInfoType17_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SysInfoType17_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType17 = {
	"SysInfoType17",
	"SysInfoType17",
	&asn_OP_SEQUENCE,
	asn_DEF_SysInfoType17_tags_1,
	sizeof(asn_DEF_SysInfoType17_tags_1)
		/sizeof(asn_DEF_SysInfoType17_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType17_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType17_tags_1)
		/sizeof(asn_DEF_SysInfoType17_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SysInfoType17_1,
	3,	/* Elements count */
	&asn_SPC_SysInfoType17_specs_1	/* Additional specs */
};

