/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "MeasResultFreqFailNR-r15.h"

asn_TYPE_member_t asn_MBR_MeasResultFreqFailNR_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultFreqFailNR_r15, carrierFreq_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultFreqFailNR_r15, measResultCellList_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultCellListNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultCellList-r15"
		},
};
static const int asn_MAP_MeasResultFreqFailNR_r15_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_MeasResultFreqFailNR_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultFreqFailNR_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measResultCellList-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResultFreqFailNR_r15_specs_1 = {
	sizeof(struct MeasResultFreqFailNR_r15),
	offsetof(struct MeasResultFreqFailNR_r15, _asn_ctx),
	asn_MAP_MeasResultFreqFailNR_r15_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MeasResultFreqFailNR_r15_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultFreqFailNR_r15 = {
	"MeasResultFreqFailNR-r15",
	"MeasResultFreqFailNR-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultFreqFailNR_r15_tags_1,
	sizeof(asn_DEF_MeasResultFreqFailNR_r15_tags_1)
		/sizeof(asn_DEF_MeasResultFreqFailNR_r15_tags_1[0]), /* 1 */
	asn_DEF_MeasResultFreqFailNR_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultFreqFailNR_r15_tags_1)
		/sizeof(asn_DEF_MeasResultFreqFailNR_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResultFreqFailNR_r15_1,
	2,	/* Elements count */
	&asn_SPC_MeasResultFreqFailNR_r15_specs_1	/* Additional specs */
};

