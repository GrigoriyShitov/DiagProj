/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "AccessClassBarredList.h"

static asn_oer_constraints_t asn_OER_type_AccessClassBarredList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	16	/* (SIZE(16..16)) */};
asn_per_constraints_t asn_PER_type_AccessClassBarredList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_AccessClassBarredList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_AccessClassBarred,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_AccessClassBarredList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_AccessClassBarredList_specs_1 = {
	sizeof(struct AccessClassBarredList),
	offsetof(struct AccessClassBarredList, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_AccessClassBarredList = {
	"AccessClassBarredList",
	"AccessClassBarredList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_AccessClassBarredList_tags_1,
	sizeof(asn_DEF_AccessClassBarredList_tags_1)
		/sizeof(asn_DEF_AccessClassBarredList_tags_1[0]), /* 1 */
	asn_DEF_AccessClassBarredList_tags_1,	/* Same as above */
	sizeof(asn_DEF_AccessClassBarredList_tags_1)
		/sizeof(asn_DEF_AccessClassBarredList_tags_1[0]), /* 1 */
	{ &asn_OER_type_AccessClassBarredList_constr_1, &asn_PER_type_AccessClassBarredList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_AccessClassBarredList_1,
	1,	/* Single element */
	&asn_SPC_AccessClassBarredList_specs_1	/* Additional specs */
};

