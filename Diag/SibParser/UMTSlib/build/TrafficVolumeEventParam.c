/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "TrafficVolumeEventParam.h"

asn_TYPE_member_t asn_MBR_TrafficVolumeEventParam_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficVolumeEventParam, eventID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrafficVolumeEventType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficVolumeEventParam, reportingThreshold),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrafficVolumeThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportingThreshold"
		},
	{ ATF_POINTER, 3, offsetof(struct TrafficVolumeEventParam, timeToTrigger),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeToTrigger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeToTrigger"
		},
	{ ATF_POINTER, 2, offsetof(struct TrafficVolumeEventParam, pendingTimeAfterTrigger),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PendingTimeAfterTrigger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pendingTimeAfterTrigger"
		},
	{ ATF_POINTER, 1, offsetof(struct TrafficVolumeEventParam, tx_InterruptionAfterTrigger),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TX_InterruptionAfterTrigger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tx-InterruptionAfterTrigger"
		},
};
static const int asn_MAP_TrafficVolumeEventParam_oms_1[] = { 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_TrafficVolumeEventParam_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TrafficVolumeEventParam_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reportingThreshold */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* timeToTrigger */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pendingTimeAfterTrigger */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* tx-InterruptionAfterTrigger */
};
asn_SEQUENCE_specifics_t asn_SPC_TrafficVolumeEventParam_specs_1 = {
	sizeof(struct TrafficVolumeEventParam),
	offsetof(struct TrafficVolumeEventParam, _asn_ctx),
	asn_MAP_TrafficVolumeEventParam_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_TrafficVolumeEventParam_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TrafficVolumeEventParam = {
	"TrafficVolumeEventParam",
	"TrafficVolumeEventParam",
	&asn_OP_SEQUENCE,
	asn_DEF_TrafficVolumeEventParam_tags_1,
	sizeof(asn_DEF_TrafficVolumeEventParam_tags_1)
		/sizeof(asn_DEF_TrafficVolumeEventParam_tags_1[0]), /* 1 */
	asn_DEF_TrafficVolumeEventParam_tags_1,	/* Same as above */
	sizeof(asn_DEF_TrafficVolumeEventParam_tags_1)
		/sizeof(asn_DEF_TrafficVolumeEventParam_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TrafficVolumeEventParam_1,
	5,	/* Elements count */
	&asn_SPC_TrafficVolumeEventParam_specs_1	/* Additional specs */
};

