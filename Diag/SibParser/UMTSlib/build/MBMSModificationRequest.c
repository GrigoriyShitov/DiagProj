/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "MBMSModificationRequest.h"

static const ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_8 = {
	sizeof(struct MBMSModificationRequest__v6b0NonCriticalExtensions__v6f0NonCriticalExtensions__nonCriticalExtensions),
	offsetof(struct MBMSModificationRequest__v6b0NonCriticalExtensions__v6f0NonCriticalExtensions__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_8 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtensions_tags_8,
	sizeof(asn_DEF_nonCriticalExtensions_tags_8)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_8[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_8,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_8)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v6f0NonCriticalExtensions_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMSModificationRequest__v6b0NonCriticalExtensions__v6f0NonCriticalExtensions, mbmsModificationRequest_v6f0ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMSModificationRequest_v6f0ext_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbmsModificationRequest-v6f0ext"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMSModificationRequest__v6b0NonCriticalExtensions__v6f0NonCriticalExtensions, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtensions"
		},
};
static const int asn_MAP_v6f0NonCriticalExtensions_oms_6[] = { 1 };
static const ber_tlv_tag_t asn_DEF_v6f0NonCriticalExtensions_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_v6f0NonCriticalExtensions_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbmsModificationRequest-v6f0ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_v6f0NonCriticalExtensions_specs_6 = {
	sizeof(struct MBMSModificationRequest__v6b0NonCriticalExtensions__v6f0NonCriticalExtensions),
	offsetof(struct MBMSModificationRequest__v6b0NonCriticalExtensions__v6f0NonCriticalExtensions, _asn_ctx),
	asn_MAP_v6f0NonCriticalExtensions_tag2el_6,
	2,	/* Count of tags in the map */
	asn_MAP_v6f0NonCriticalExtensions_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v6f0NonCriticalExtensions_6 = {
	"v6f0NonCriticalExtensions",
	"v6f0NonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_v6f0NonCriticalExtensions_tags_6,
	sizeof(asn_DEF_v6f0NonCriticalExtensions_tags_6)
		/sizeof(asn_DEF_v6f0NonCriticalExtensions_tags_6[0]) - 1, /* 1 */
	asn_DEF_v6f0NonCriticalExtensions_tags_6,	/* Same as above */
	sizeof(asn_DEF_v6f0NonCriticalExtensions_tags_6)
		/sizeof(asn_DEF_v6f0NonCriticalExtensions_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_v6f0NonCriticalExtensions_6,
	2,	/* Elements count */
	&asn_SPC_v6f0NonCriticalExtensions_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v6b0NonCriticalExtensions_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMSModificationRequest__v6b0NonCriticalExtensions, mbmsModificationRequest_v6b0ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMSModificationRequest_v6b0ext_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbmsModificationRequest-v6b0ext"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMSModificationRequest__v6b0NonCriticalExtensions, v6f0NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v6f0NonCriticalExtensions_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v6f0NonCriticalExtensions"
		},
};
static const int asn_MAP_v6b0NonCriticalExtensions_oms_4[] = { 1 };
static const ber_tlv_tag_t asn_DEF_v6b0NonCriticalExtensions_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_v6b0NonCriticalExtensions_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbmsModificationRequest-v6b0ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v6f0NonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_v6b0NonCriticalExtensions_specs_4 = {
	sizeof(struct MBMSModificationRequest__v6b0NonCriticalExtensions),
	offsetof(struct MBMSModificationRequest__v6b0NonCriticalExtensions, _asn_ctx),
	asn_MAP_v6b0NonCriticalExtensions_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_v6b0NonCriticalExtensions_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v6b0NonCriticalExtensions_4 = {
	"v6b0NonCriticalExtensions",
	"v6b0NonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_v6b0NonCriticalExtensions_tags_4,
	sizeof(asn_DEF_v6b0NonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_v6b0NonCriticalExtensions_tags_4[0]) - 1, /* 1 */
	asn_DEF_v6b0NonCriticalExtensions_tags_4,	/* Same as above */
	sizeof(asn_DEF_v6b0NonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_v6b0NonCriticalExtensions_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_v6b0NonCriticalExtensions_4,
	2,	/* Elements count */
	&asn_SPC_v6b0NonCriticalExtensions_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MBMSModificationRequest_1[] = {
	{ ATF_POINTER, 3, offsetof(struct MBMSModificationRequest, mbms_PreferredFreqRequest),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_ServiceIdentity_r6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-PreferredFreqRequest"
		},
	{ ATF_POINTER, 2, offsetof(struct MBMSModificationRequest, rb_InformationReleaseList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_InformationReleaseList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rb-InformationReleaseList"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMSModificationRequest, v6b0NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_v6b0NonCriticalExtensions_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v6b0NonCriticalExtensions"
		},
};
static const int asn_MAP_MBMSModificationRequest_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_MBMSModificationRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBMSModificationRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbms-PreferredFreqRequest */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rb-InformationReleaseList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* v6b0NonCriticalExtensions */
};
asn_SEQUENCE_specifics_t asn_SPC_MBMSModificationRequest_specs_1 = {
	sizeof(struct MBMSModificationRequest),
	offsetof(struct MBMSModificationRequest, _asn_ctx),
	asn_MAP_MBMSModificationRequest_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MBMSModificationRequest_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBMSModificationRequest = {
	"MBMSModificationRequest",
	"MBMSModificationRequest",
	&asn_OP_SEQUENCE,
	asn_DEF_MBMSModificationRequest_tags_1,
	sizeof(asn_DEF_MBMSModificationRequest_tags_1)
		/sizeof(asn_DEF_MBMSModificationRequest_tags_1[0]), /* 1 */
	asn_DEF_MBMSModificationRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMSModificationRequest_tags_1)
		/sizeof(asn_DEF_MBMSModificationRequest_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MBMSModificationRequest_1,
	3,	/* Elements count */
	&asn_SPC_MBMSModificationRequest_specs_1	/* Additional specs */
};

