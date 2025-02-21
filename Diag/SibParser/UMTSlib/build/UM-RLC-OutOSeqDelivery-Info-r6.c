/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UM-RLC-OutOSeqDelivery-Info-r6.h"

asn_TYPE_member_t asn_MBR_UM_RLC_OutOSeqDelivery_Info_r6_1[] = {
	{ ATF_POINTER, 1, offsetof(struct UM_RLC_OutOSeqDelivery_Info_r6, timer_OSD),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimerOSD_r6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timer-OSD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UM_RLC_OutOSeqDelivery_Info_r6, windowSize_OSD),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WindowSizeOSD_r6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"windowSize-OSD"
		},
};
static const int asn_MAP_UM_RLC_OutOSeqDelivery_Info_r6_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_UM_RLC_OutOSeqDelivery_Info_r6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UM_RLC_OutOSeqDelivery_Info_r6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timer-OSD */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* windowSize-OSD */
};
asn_SEQUENCE_specifics_t asn_SPC_UM_RLC_OutOSeqDelivery_Info_r6_specs_1 = {
	sizeof(struct UM_RLC_OutOSeqDelivery_Info_r6),
	offsetof(struct UM_RLC_OutOSeqDelivery_Info_r6, _asn_ctx),
	asn_MAP_UM_RLC_OutOSeqDelivery_Info_r6_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UM_RLC_OutOSeqDelivery_Info_r6_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UM_RLC_OutOSeqDelivery_Info_r6 = {
	"UM-RLC-OutOSeqDelivery-Info-r6",
	"UM-RLC-OutOSeqDelivery-Info-r6",
	&asn_OP_SEQUENCE,
	asn_DEF_UM_RLC_OutOSeqDelivery_Info_r6_tags_1,
	sizeof(asn_DEF_UM_RLC_OutOSeqDelivery_Info_r6_tags_1)
		/sizeof(asn_DEF_UM_RLC_OutOSeqDelivery_Info_r6_tags_1[0]), /* 1 */
	asn_DEF_UM_RLC_OutOSeqDelivery_Info_r6_tags_1,	/* Same as above */
	sizeof(asn_DEF_UM_RLC_OutOSeqDelivery_Info_r6_tags_1)
		/sizeof(asn_DEF_UM_RLC_OutOSeqDelivery_Info_r6_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UM_RLC_OutOSeqDelivery_Info_r6_1,
	2,	/* Elements count */
	&asn_SPC_UM_RLC_OutOSeqDelivery_Info_r6_specs_1	/* Additional specs */
};

