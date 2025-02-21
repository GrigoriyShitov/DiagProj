/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "ServingCellChangeParameters.h"

asn_TYPE_member_t asn_MBR_ServingCellChangeParameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ServingCellChangeParameters, servingCellChangeMACreset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServingCellChangeMACreset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servingCellChangeMACreset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ServingCellChangeParameters, servingCellChangeMsgType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServingCellChangeMsgType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servingCellChangeMsgType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ServingCellChangeParameters, servingCellChangeTrId),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServingCellChangeTrId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servingCellChangeTrId"
		},
};
static const ber_tlv_tag_t asn_DEF_ServingCellChangeParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ServingCellChangeParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servingCellChangeMACreset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* servingCellChangeMsgType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* servingCellChangeTrId */
};
asn_SEQUENCE_specifics_t asn_SPC_ServingCellChangeParameters_specs_1 = {
	sizeof(struct ServingCellChangeParameters),
	offsetof(struct ServingCellChangeParameters, _asn_ctx),
	asn_MAP_ServingCellChangeParameters_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ServingCellChangeParameters = {
	"ServingCellChangeParameters",
	"ServingCellChangeParameters",
	&asn_OP_SEQUENCE,
	asn_DEF_ServingCellChangeParameters_tags_1,
	sizeof(asn_DEF_ServingCellChangeParameters_tags_1)
		/sizeof(asn_DEF_ServingCellChangeParameters_tags_1[0]), /* 1 */
	asn_DEF_ServingCellChangeParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_ServingCellChangeParameters_tags_1)
		/sizeof(asn_DEF_ServingCellChangeParameters_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ServingCellChangeParameters_1,
	3,	/* Elements count */
	&asn_SPC_ServingCellChangeParameters_specs_1	/* Additional specs */
};

