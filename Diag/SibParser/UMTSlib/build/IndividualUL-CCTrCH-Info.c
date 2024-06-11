/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "IndividualUL-CCTrCH-Info.h"

asn_TYPE_member_t asn_MBR_IndividualUL_CCTrCH_Info_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IndividualUL_CCTrCH_Info, ul_TFCS_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TFCS_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-TFCS-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IndividualUL_CCTrCH_Info, ul_TFCS),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TFCS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-TFCS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IndividualUL_CCTrCH_Info, tfc_Subset),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TFC_Subset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tfc-Subset"
		},
};
static const ber_tlv_tag_t asn_DEF_IndividualUL_CCTrCH_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IndividualUL_CCTrCH_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-TFCS-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-TFCS */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* tfc-Subset */
};
asn_SEQUENCE_specifics_t asn_SPC_IndividualUL_CCTrCH_Info_specs_1 = {
	sizeof(struct IndividualUL_CCTrCH_Info),
	offsetof(struct IndividualUL_CCTrCH_Info, _asn_ctx),
	asn_MAP_IndividualUL_CCTrCH_Info_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_IndividualUL_CCTrCH_Info = {
	"IndividualUL-CCTrCH-Info",
	"IndividualUL-CCTrCH-Info",
	&asn_OP_SEQUENCE,
	asn_DEF_IndividualUL_CCTrCH_Info_tags_1,
	sizeof(asn_DEF_IndividualUL_CCTrCH_Info_tags_1)
		/sizeof(asn_DEF_IndividualUL_CCTrCH_Info_tags_1[0]), /* 1 */
	asn_DEF_IndividualUL_CCTrCH_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_IndividualUL_CCTrCH_Info_tags_1)
		/sizeof(asn_DEF_IndividualUL_CCTrCH_Info_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_IndividualUL_CCTrCH_Info_1,
	3,	/* Elements count */
	&asn_SPC_IndividualUL_CCTrCH_Info_specs_1	/* Additional specs */
};

