/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "STARTList2.h"

static asn_oer_constraints_t asn_OER_type_STARTList2_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(2..4)) */};
asn_per_constraints_t asn_PER_type_STARTList2_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  2,  4 }	/* (SIZE(2..4)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_STARTList2_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_STARTSingle,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_STARTList2_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_STARTList2_specs_1 = {
	sizeof(struct STARTList2),
	offsetof(struct STARTList2, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_STARTList2 = {
	"STARTList2",
	"STARTList2",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_STARTList2_tags_1,
	sizeof(asn_DEF_STARTList2_tags_1)
		/sizeof(asn_DEF_STARTList2_tags_1[0]), /* 1 */
	asn_DEF_STARTList2_tags_1,	/* Same as above */
	sizeof(asn_DEF_STARTList2_tags_1)
		/sizeof(asn_DEF_STARTList2_tags_1[0]), /* 1 */
	{ &asn_OER_type_STARTList2_constr_1, &asn_PER_type_STARTList2_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_STARTList2_1,
	1,	/* Single element */
	&asn_SPC_STARTList2_specs_1	/* Additional specs */
};

