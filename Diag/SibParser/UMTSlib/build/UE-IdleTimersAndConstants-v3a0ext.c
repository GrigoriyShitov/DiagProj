/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UE-IdleTimersAndConstants-v3a0ext.h"

asn_TYPE_member_t asn_MBR_UE_IdleTimersAndConstants_v3a0ext_1[] = {
	{ ATF_POINTER, 1, offsetof(struct UE_IdleTimersAndConstants_v3a0ext, n_312),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_N_312ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n-312"
		},
};
static const int asn_MAP_UE_IdleTimersAndConstants_v3a0ext_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_UE_IdleTimersAndConstants_v3a0ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_IdleTimersAndConstants_v3a0ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* n-312 */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_IdleTimersAndConstants_v3a0ext_specs_1 = {
	sizeof(struct UE_IdleTimersAndConstants_v3a0ext),
	offsetof(struct UE_IdleTimersAndConstants_v3a0ext, _asn_ctx),
	asn_MAP_UE_IdleTimersAndConstants_v3a0ext_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_UE_IdleTimersAndConstants_v3a0ext_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_IdleTimersAndConstants_v3a0ext = {
	"UE-IdleTimersAndConstants-v3a0ext",
	"UE-IdleTimersAndConstants-v3a0ext",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_IdleTimersAndConstants_v3a0ext_tags_1,
	sizeof(asn_DEF_UE_IdleTimersAndConstants_v3a0ext_tags_1)
		/sizeof(asn_DEF_UE_IdleTimersAndConstants_v3a0ext_tags_1[0]), /* 1 */
	asn_DEF_UE_IdleTimersAndConstants_v3a0ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_IdleTimersAndConstants_v3a0ext_tags_1)
		/sizeof(asn_DEF_UE_IdleTimersAndConstants_v3a0ext_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_IdleTimersAndConstants_v3a0ext_1,
	1,	/* Elements count */
	&asn_SPC_UE_IdleTimersAndConstants_v3a0ext_specs_1	/* Additional specs */
};

