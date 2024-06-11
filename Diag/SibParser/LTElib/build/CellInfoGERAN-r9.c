/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "CellInfoGERAN-r9.h"

asn_TYPE_member_t asn_MBR_CellInfoGERAN_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellInfoGERAN_r9, physCellId_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellInfoGERAN_r9, carrierFreq_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellInfoGERAN_r9, systemInformation_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInfoListGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"systemInformation-r9"
		},
};
static const ber_tlv_tag_t asn_DEF_CellInfoGERAN_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellInfoGERAN_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* carrierFreq-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* systemInformation-r9 */
};
asn_SEQUENCE_specifics_t asn_SPC_CellInfoGERAN_r9_specs_1 = {
	sizeof(struct CellInfoGERAN_r9),
	offsetof(struct CellInfoGERAN_r9, _asn_ctx),
	asn_MAP_CellInfoGERAN_r9_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CellInfoGERAN_r9 = {
	"CellInfoGERAN-r9",
	"CellInfoGERAN-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_CellInfoGERAN_r9_tags_1,
	sizeof(asn_DEF_CellInfoGERAN_r9_tags_1)
		/sizeof(asn_DEF_CellInfoGERAN_r9_tags_1[0]), /* 1 */
	asn_DEF_CellInfoGERAN_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellInfoGERAN_r9_tags_1)
		/sizeof(asn_DEF_CellInfoGERAN_r9_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CellInfoGERAN_r9_1,
	3,	/* Elements count */
	&asn_SPC_CellInfoGERAN_r9_specs_1	/* Additional specs */
};

