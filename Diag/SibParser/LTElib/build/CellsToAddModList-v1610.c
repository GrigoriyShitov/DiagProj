/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "CellsToAddModList-v1610.h"

static asn_oer_constraints_t asn_OER_type_CellsToAddModList_v1610_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
asn_per_constraints_t asn_PER_type_CellsToAddModList_v1610_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_CellsToAddModList_v1610_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CellsToAddMod_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_CellsToAddModList_v1610_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_CellsToAddModList_v1610_specs_1 = {
	sizeof(struct CellsToAddModList_v1610),
	offsetof(struct CellsToAddModList_v1610, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_CellsToAddModList_v1610 = {
	"CellsToAddModList-v1610",
	"CellsToAddModList-v1610",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_CellsToAddModList_v1610_tags_1,
	sizeof(asn_DEF_CellsToAddModList_v1610_tags_1)
		/sizeof(asn_DEF_CellsToAddModList_v1610_tags_1[0]), /* 1 */
	asn_DEF_CellsToAddModList_v1610_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellsToAddModList_v1610_tags_1)
		/sizeof(asn_DEF_CellsToAddModList_v1610_tags_1[0]), /* 1 */
	{ &asn_OER_type_CellsToAddModList_v1610_constr_1, &asn_PER_type_CellsToAddModList_v1610_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_CellsToAddModList_v1610_1,
	1,	/* Single element */
	&asn_SPC_CellsToAddModList_v1610_specs_1	/* Additional specs */
};

