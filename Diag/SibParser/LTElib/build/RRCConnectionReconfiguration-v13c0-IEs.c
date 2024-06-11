/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "RRCConnectionReconfiguration-v13c0-IEs.h"

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_6 = {
	sizeof(struct RRCConnectionReconfiguration_v13c0_IEs__nonCriticalExtension),
	offsetof(struct RRCConnectionReconfiguration_v13c0_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_6 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_6,
	sizeof(asn_DEF_nonCriticalExtension_tags_6)
		/sizeof(asn_DEF_nonCriticalExtension_tags_6[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_6,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_6)
		/sizeof(asn_DEF_nonCriticalExtension_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCConnectionReconfiguration_v13c0_IEs_1[] = {
	{ ATF_POINTER, 5, offsetof(struct RRCConnectionReconfiguration_v13c0_IEs, radioResourceConfigDedicated_v13c0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicated_v13c0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigDedicated-v13c0"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCConnectionReconfiguration_v13c0_IEs, sCellToAddModList_v13c0),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellToAddModList_v13c0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellToAddModList-v13c0"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionReconfiguration_v13c0_IEs, sCellToAddModListExt_v13c0),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellToAddModListExt_v13c0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellToAddModListExt-v13c0"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionReconfiguration_v13c0_IEs, scg_Configuration_v13c0),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SCG_Configuration_v13c0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scg-Configuration-v13c0"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionReconfiguration_v13c0_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCConnectionReconfiguration_v13c0_IEs_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionReconfiguration_v13c0_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionReconfiguration_v13c0_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioResourceConfigDedicated-v13c0 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sCellToAddModList-v13c0 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sCellToAddModListExt-v13c0 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* scg-Configuration-v13c0 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfiguration_v13c0_IEs_specs_1 = {
	sizeof(struct RRCConnectionReconfiguration_v13c0_IEs),
	offsetof(struct RRCConnectionReconfiguration_v13c0_IEs, _asn_ctx),
	asn_MAP_RRCConnectionReconfiguration_v13c0_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RRCConnectionReconfiguration_v13c0_IEs_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_v13c0_IEs = {
	"RRCConnectionReconfiguration-v13c0-IEs",
	"RRCConnectionReconfiguration-v13c0-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionReconfiguration_v13c0_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionReconfiguration_v13c0_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionReconfiguration_v13c0_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionReconfiguration_v13c0_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionReconfiguration_v13c0_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionReconfiguration_v13c0_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionReconfiguration_v13c0_IEs_1,
	5,	/* Elements count */
	&asn_SPC_RRCConnectionReconfiguration_v13c0_IEs_specs_1	/* Additional specs */
};

