/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "MeasIdToAddMod.h"

asn_TYPE_member_t asn_MBR_MeasIdToAddMod_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasIdToAddMod, measId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasIdToAddMod, measObjectId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasIdToAddMod, reportConfigId),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportConfigId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportConfigId"
		},
};
static const ber_tlv_tag_t asn_DEF_MeasIdToAddMod_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasIdToAddMod_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measObjectId */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* reportConfigId */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasIdToAddMod_specs_1 = {
	sizeof(struct MeasIdToAddMod),
	offsetof(struct MeasIdToAddMod, _asn_ctx),
	asn_MAP_MeasIdToAddMod_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasIdToAddMod = {
	"MeasIdToAddMod",
	"MeasIdToAddMod",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasIdToAddMod_tags_1,
	sizeof(asn_DEF_MeasIdToAddMod_tags_1)
		/sizeof(asn_DEF_MeasIdToAddMod_tags_1[0]), /* 1 */
	asn_DEF_MeasIdToAddMod_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasIdToAddMod_tags_1)
		/sizeof(asn_DEF_MeasIdToAddMod_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasIdToAddMod_1,
	3,	/* Elements count */
	&asn_SPC_MeasIdToAddMod_specs_1	/* Additional specs */
};

