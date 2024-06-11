/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "ULInformationTransferIRAT-r16-IEs.h"

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_4 = {
	sizeof(struct ULInformationTransferIRAT_r16_IEs__nonCriticalExtension),
	offsetof(struct ULInformationTransferIRAT_r16_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_4 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_4,
	sizeof(asn_DEF_nonCriticalExtension_tags_4)
		/sizeof(asn_DEF_nonCriticalExtension_tags_4[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_4,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_4)
		/sizeof(asn_DEF_nonCriticalExtension_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ULInformationTransferIRAT_r16_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct ULInformationTransferIRAT_r16_IEs, ul_DCCH_MessageNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-DCCH-MessageNR-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct ULInformationTransferIRAT_r16_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct ULInformationTransferIRAT_r16_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_ULInformationTransferIRAT_r16_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ULInformationTransferIRAT_r16_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ULInformationTransferIRAT_r16_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-DCCH-MessageNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_ULInformationTransferIRAT_r16_IEs_specs_1 = {
	sizeof(struct ULInformationTransferIRAT_r16_IEs),
	offsetof(struct ULInformationTransferIRAT_r16_IEs, _asn_ctx),
	asn_MAP_ULInformationTransferIRAT_r16_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ULInformationTransferIRAT_r16_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ULInformationTransferIRAT_r16_IEs = {
	"ULInformationTransferIRAT-r16-IEs",
	"ULInformationTransferIRAT-r16-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_ULInformationTransferIRAT_r16_IEs_tags_1,
	sizeof(asn_DEF_ULInformationTransferIRAT_r16_IEs_tags_1)
		/sizeof(asn_DEF_ULInformationTransferIRAT_r16_IEs_tags_1[0]), /* 1 */
	asn_DEF_ULInformationTransferIRAT_r16_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_ULInformationTransferIRAT_r16_IEs_tags_1)
		/sizeof(asn_DEF_ULInformationTransferIRAT_r16_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ULInformationTransferIRAT_r16_IEs_1,
	3,	/* Elements count */
	&asn_SPC_ULInformationTransferIRAT_r16_IEs_specs_1	/* Additional specs */
};

