/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SCellToAddMod-v13c0.h"

asn_TYPE_member_t asn_MBR_SCellToAddMod_v13c0_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SCellToAddMod_v13c0, radioResourceConfigDedicatedSCell_v13c0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicatedSCell_v13c0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigDedicatedSCell-v13c0"
		},
};
static const int asn_MAP_SCellToAddMod_v13c0_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_SCellToAddMod_v13c0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SCellToAddMod_v13c0_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* radioResourceConfigDedicatedSCell-v13c0 */
};
asn_SEQUENCE_specifics_t asn_SPC_SCellToAddMod_v13c0_specs_1 = {
	sizeof(struct SCellToAddMod_v13c0),
	offsetof(struct SCellToAddMod_v13c0, _asn_ctx),
	asn_MAP_SCellToAddMod_v13c0_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_SCellToAddMod_v13c0_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SCellToAddMod_v13c0 = {
	"SCellToAddMod-v13c0",
	"SCellToAddMod-v13c0",
	&asn_OP_SEQUENCE,
	asn_DEF_SCellToAddMod_v13c0_tags_1,
	sizeof(asn_DEF_SCellToAddMod_v13c0_tags_1)
		/sizeof(asn_DEF_SCellToAddMod_v13c0_tags_1[0]), /* 1 */
	asn_DEF_SCellToAddMod_v13c0_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCellToAddMod_v13c0_tags_1)
		/sizeof(asn_DEF_SCellToAddMod_v13c0_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SCellToAddMod_v13c0_1,
	1,	/* Elements count */
	&asn_SPC_SCellToAddMod_v13c0_specs_1	/* Additional specs */
};

