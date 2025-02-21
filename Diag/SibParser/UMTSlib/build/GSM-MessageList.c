/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "GSM-MessageList.h"

static int
memb_BIT_STRING_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 1 && size <= 512)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_Member_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..512)) */};
static asn_per_constraints_t asn_PER_memb_Member_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_GSM_MessageList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
asn_per_constraints_t asn_PER_type_GSM_MessageList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_GSM_MessageList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_Member_constr_2, &asn_PER_memb_Member_constr_2,  memb_BIT_STRING_constraint_1 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_GSM_MessageList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_GSM_MessageList_specs_1 = {
	sizeof(struct GSM_MessageList),
	offsetof(struct GSM_MessageList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_GSM_MessageList = {
	"GSM-MessageList",
	"GSM-MessageList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_GSM_MessageList_tags_1,
	sizeof(asn_DEF_GSM_MessageList_tags_1)
		/sizeof(asn_DEF_GSM_MessageList_tags_1[0]), /* 1 */
	asn_DEF_GSM_MessageList_tags_1,	/* Same as above */
	sizeof(asn_DEF_GSM_MessageList_tags_1)
		/sizeof(asn_DEF_GSM_MessageList_tags_1[0]), /* 1 */
	{ &asn_OER_type_GSM_MessageList_constr_1, &asn_PER_type_GSM_MessageList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_GSM_MessageList_1,
	1,	/* Single element */
	&asn_SPC_GSM_MessageList_specs_1	/* Additional specs */
};

