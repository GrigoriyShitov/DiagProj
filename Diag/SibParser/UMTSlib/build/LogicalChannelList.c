/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "LogicalChannelList.h"

static int
memb_explicitList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 15)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_explicitList_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..15)) */};
static asn_per_constraints_t asn_PER_type_explicitList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (SIZE(1..15)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_explicitList_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..15)) */};
static asn_per_constraints_t asn_PER_memb_explicitList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (SIZE(1..15)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LogicalChannelList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_LogicalChannelList_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_explicitList_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LogicalChannelByRB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_explicitList_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_explicitList_specs_4 = {
	sizeof(struct LogicalChannelList__explicitList),
	offsetof(struct LogicalChannelList__explicitList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_explicitList_4 = {
	"explicitList",
	"explicitList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_explicitList_tags_4,
	sizeof(asn_DEF_explicitList_tags_4)
		/sizeof(asn_DEF_explicitList_tags_4[0]) - 1, /* 1 */
	asn_DEF_explicitList_tags_4,	/* Same as above */
	sizeof(asn_DEF_explicitList_tags_4)
		/sizeof(asn_DEF_explicitList_tags_4[0]), /* 2 */
	{ &asn_OER_type_explicitList_constr_4, &asn_PER_type_explicitList_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_explicitList_4,
	1,	/* Single element */
	&asn_SPC_explicitList_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LogicalChannelList_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LogicalChannelList, choice.allSizes),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"allSizes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LogicalChannelList, choice.configured),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"configured"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LogicalChannelList, choice.explicitList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_explicitList_4,
		0,
		{ &asn_OER_memb_explicitList_constr_4, &asn_PER_memb_explicitList_constr_4,  memb_explicitList_constraint_1 },
		0, 0, /* No default value */
		"explicitList"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LogicalChannelList_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* allSizes */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* configured */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* explicitList */
};
asn_CHOICE_specifics_t asn_SPC_LogicalChannelList_specs_1 = {
	sizeof(struct LogicalChannelList),
	offsetof(struct LogicalChannelList, _asn_ctx),
	offsetof(struct LogicalChannelList, present),
	sizeof(((struct LogicalChannelList *)0)->present),
	asn_MAP_LogicalChannelList_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LogicalChannelList = {
	"LogicalChannelList",
	"LogicalChannelList",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_LogicalChannelList_constr_1, &asn_PER_type_LogicalChannelList_constr_1, CHOICE_constraint },
	asn_MBR_LogicalChannelList_1,
	3,	/* Elements count */
	&asn_SPC_LogicalChannelList_specs_1	/* Additional specs */
};

