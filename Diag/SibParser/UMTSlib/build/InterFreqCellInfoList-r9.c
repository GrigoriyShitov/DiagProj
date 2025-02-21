/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "InterFreqCellInfoList-r9.h"

asn_TYPE_member_t asn_MBR_InterFreqCellInfoList_r9_1[] = {
	{ ATF_POINTER, 5, offsetof(struct InterFreqCellInfoList_r9, removedInterFreqCellList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RemovedInterFreqCellList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"removedInterFreqCellList"
		},
	{ ATF_POINTER, 4, offsetof(struct InterFreqCellInfoList_r9, newInterFreqCellList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NewInterFreqCellList_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"newInterFreqCellList"
		},
	{ ATF_POINTER, 3, offsetof(struct InterFreqCellInfoList_r9, cellsForInterFreqMeasList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellsForInterFreqMeasList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellsForInterFreqMeasList"
		},
	{ ATF_POINTER, 2, offsetof(struct InterFreqCellInfoList_r9, cSGInterFreqCellInfoList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSGInterFreqCellInfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cSGInterFreqCellInfoList"
		},
	{ ATF_POINTER, 1, offsetof(struct InterFreqCellInfoList_r9, interFreqSIAcquisition),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqSIAcquisition,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqSIAcquisition"
		},
};
static const int asn_MAP_InterFreqCellInfoList_r9_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_InterFreqCellInfoList_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_InterFreqCellInfoList_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* removedInterFreqCellList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* newInterFreqCellList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cellsForInterFreqMeasList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cSGInterFreqCellInfoList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* interFreqSIAcquisition */
};
asn_SEQUENCE_specifics_t asn_SPC_InterFreqCellInfoList_r9_specs_1 = {
	sizeof(struct InterFreqCellInfoList_r9),
	offsetof(struct InterFreqCellInfoList_r9, _asn_ctx),
	asn_MAP_InterFreqCellInfoList_r9_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_InterFreqCellInfoList_r9_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_InterFreqCellInfoList_r9 = {
	"InterFreqCellInfoList-r9",
	"InterFreqCellInfoList-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_InterFreqCellInfoList_r9_tags_1,
	sizeof(asn_DEF_InterFreqCellInfoList_r9_tags_1)
		/sizeof(asn_DEF_InterFreqCellInfoList_r9_tags_1[0]), /* 1 */
	asn_DEF_InterFreqCellInfoList_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_InterFreqCellInfoList_r9_tags_1)
		/sizeof(asn_DEF_InterFreqCellInfoList_r9_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_InterFreqCellInfoList_r9_1,
	5,	/* Elements count */
	&asn_SPC_InterFreqCellInfoList_r9_specs_1	/* Additional specs */
};

