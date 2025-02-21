/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UL-DPCH-PowerControlInfoPostTDD-LCR-r4.h"

asn_TYPE_member_t asn_MBR_UL_DPCH_PowerControlInfoPostTDD_LCR_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfoPostTDD_LCR_r4, ul_TargetSIR),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_TargetSIR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-TargetSIR"
		},
};
static const ber_tlv_tag_t asn_DEF_UL_DPCH_PowerControlInfoPostTDD_LCR_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UL_DPCH_PowerControlInfoPostTDD_LCR_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ul-TargetSIR */
};
asn_SEQUENCE_specifics_t asn_SPC_UL_DPCH_PowerControlInfoPostTDD_LCR_r4_specs_1 = {
	sizeof(struct UL_DPCH_PowerControlInfoPostTDD_LCR_r4),
	offsetof(struct UL_DPCH_PowerControlInfoPostTDD_LCR_r4, _asn_ctx),
	asn_MAP_UL_DPCH_PowerControlInfoPostTDD_LCR_r4_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UL_DPCH_PowerControlInfoPostTDD_LCR_r4 = {
	"UL-DPCH-PowerControlInfoPostTDD-LCR-r4",
	"UL-DPCH-PowerControlInfoPostTDD-LCR-r4",
	&asn_OP_SEQUENCE,
	asn_DEF_UL_DPCH_PowerControlInfoPostTDD_LCR_r4_tags_1,
	sizeof(asn_DEF_UL_DPCH_PowerControlInfoPostTDD_LCR_r4_tags_1)
		/sizeof(asn_DEF_UL_DPCH_PowerControlInfoPostTDD_LCR_r4_tags_1[0]), /* 1 */
	asn_DEF_UL_DPCH_PowerControlInfoPostTDD_LCR_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_DPCH_PowerControlInfoPostTDD_LCR_r4_tags_1)
		/sizeof(asn_DEF_UL_DPCH_PowerControlInfoPostTDD_LCR_r4_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UL_DPCH_PowerControlInfoPostTDD_LCR_r4_1,
	1,	/* Elements count */
	&asn_SPC_UL_DPCH_PowerControlInfoPostTDD_LCR_r4_specs_1	/* Additional specs */
};

