/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UE-EUTRA-CapabilityAddXDD-Mode-v1180.h"

asn_TYPE_member_t asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1180_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1180, mbms_Parameters_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_Parameters_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-Parameters-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1180_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1180_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mbms-Parameters-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1180_specs_1 = {
	sizeof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1180),
	offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1180, _asn_ctx),
	asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1180_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1180 = {
	"UE-EUTRA-CapabilityAddXDD-Mode-v1180",
	"UE-EUTRA-CapabilityAddXDD-Mode-v1180",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1180_tags_1,
	sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1180_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1180_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1180_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1180_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1180_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1180_1,
	1,	/* Elements count */
	&asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1180_specs_1	/* Additional specs */
};

