/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SchedulingInfo-v12j0.h"

asn_TYPE_member_t asn_MBR_SchedulingInfo_v12j0_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SchedulingInfo_v12j0, sib_MappingInfo_v12j0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SIB_MappingInfo_v12j0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib-MappingInfo-v12j0"
		},
};
static const int asn_MAP_SchedulingInfo_v12j0_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_SchedulingInfo_v12j0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SchedulingInfo_v12j0_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sib-MappingInfo-v12j0 */
};
asn_SEQUENCE_specifics_t asn_SPC_SchedulingInfo_v12j0_specs_1 = {
	sizeof(struct SchedulingInfo_v12j0),
	offsetof(struct SchedulingInfo_v12j0, _asn_ctx),
	asn_MAP_SchedulingInfo_v12j0_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_SchedulingInfo_v12j0_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SchedulingInfo_v12j0 = {
	"SchedulingInfo-v12j0",
	"SchedulingInfo-v12j0",
	&asn_OP_SEQUENCE,
	asn_DEF_SchedulingInfo_v12j0_tags_1,
	sizeof(asn_DEF_SchedulingInfo_v12j0_tags_1)
		/sizeof(asn_DEF_SchedulingInfo_v12j0_tags_1[0]), /* 1 */
	asn_DEF_SchedulingInfo_v12j0_tags_1,	/* Same as above */
	sizeof(asn_DEF_SchedulingInfo_v12j0_tags_1)
		/sizeof(asn_DEF_SchedulingInfo_v12j0_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SchedulingInfo_v12j0_1,
	1,	/* Elements count */
	&asn_SPC_SchedulingInfo_v12j0_specs_1	/* Additional specs */
};

