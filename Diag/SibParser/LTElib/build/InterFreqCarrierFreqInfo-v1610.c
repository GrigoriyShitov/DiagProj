/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "InterFreqCarrierFreqInfo-v1610.h"

asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqInfo_v1610_1[] = {
	{ ATF_POINTER, 4, offsetof(struct InterFreqCarrierFreqInfo_v1610, altCellReselectionPriority_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionPriority,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"altCellReselectionPriority-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct InterFreqCarrierFreqInfo_v1610, altCellReselectionSubPriority_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionSubPriority_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"altCellReselectionSubPriority-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct InterFreqCarrierFreqInfo_v1610, rss_ConfigCarrierInfo_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSS_ConfigCarrierInfo_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rss-ConfigCarrierInfo-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct InterFreqCarrierFreqInfo_v1610, interFreqNeighCellList_v1610),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqNeighCellList_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqNeighCellList-v1610"
		},
};
static const int asn_MAP_InterFreqCarrierFreqInfo_v1610_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_InterFreqCarrierFreqInfo_v1610_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_InterFreqCarrierFreqInfo_v1610_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* altCellReselectionPriority-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* altCellReselectionSubPriority-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rss-ConfigCarrierInfo-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* interFreqNeighCellList-v1610 */
};
asn_SEQUENCE_specifics_t asn_SPC_InterFreqCarrierFreqInfo_v1610_specs_1 = {
	sizeof(struct InterFreqCarrierFreqInfo_v1610),
	offsetof(struct InterFreqCarrierFreqInfo_v1610, _asn_ctx),
	asn_MAP_InterFreqCarrierFreqInfo_v1610_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_InterFreqCarrierFreqInfo_v1610_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo_v1610 = {
	"InterFreqCarrierFreqInfo-v1610",
	"InterFreqCarrierFreqInfo-v1610",
	&asn_OP_SEQUENCE,
	asn_DEF_InterFreqCarrierFreqInfo_v1610_tags_1,
	sizeof(asn_DEF_InterFreqCarrierFreqInfo_v1610_tags_1)
		/sizeof(asn_DEF_InterFreqCarrierFreqInfo_v1610_tags_1[0]), /* 1 */
	asn_DEF_InterFreqCarrierFreqInfo_v1610_tags_1,	/* Same as above */
	sizeof(asn_DEF_InterFreqCarrierFreqInfo_v1610_tags_1)
		/sizeof(asn_DEF_InterFreqCarrierFreqInfo_v1610_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_InterFreqCarrierFreqInfo_v1610_1,
	4,	/* Elements count */
	&asn_SPC_InterFreqCarrierFreqInfo_v1610_specs_1	/* Additional specs */
};

