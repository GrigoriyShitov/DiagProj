/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "TrafficVolumeMeasQuantity.h"

static asn_oer_constraints_t asn_OER_type_TrafficVolumeMeasQuantity_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_TrafficVolumeMeasQuantity_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_TrafficVolumeMeasQuantity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficVolumeMeasQuantity, choice.rlc_BufferPayload),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-BufferPayload"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficVolumeMeasQuantity, choice.averageRLC_BufferPayload),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeInterval,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"averageRLC-BufferPayload"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficVolumeMeasQuantity, choice.varianceOfRLC_BufferPayload),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeInterval,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"varianceOfRLC-BufferPayload"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_TrafficVolumeMeasQuantity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlc-BufferPayload */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* averageRLC-BufferPayload */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* varianceOfRLC-BufferPayload */
};
asn_CHOICE_specifics_t asn_SPC_TrafficVolumeMeasQuantity_specs_1 = {
	sizeof(struct TrafficVolumeMeasQuantity),
	offsetof(struct TrafficVolumeMeasQuantity, _asn_ctx),
	offsetof(struct TrafficVolumeMeasQuantity, present),
	sizeof(((struct TrafficVolumeMeasQuantity *)0)->present),
	asn_MAP_TrafficVolumeMeasQuantity_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_TrafficVolumeMeasQuantity = {
	"TrafficVolumeMeasQuantity",
	"TrafficVolumeMeasQuantity",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_TrafficVolumeMeasQuantity_constr_1, &asn_PER_type_TrafficVolumeMeasQuantity_constr_1, CHOICE_constraint },
	asn_MBR_TrafficVolumeMeasQuantity_1,
	3,	/* Elements count */
	&asn_SPC_TrafficVolumeMeasQuantity_specs_1	/* Additional specs */
};

