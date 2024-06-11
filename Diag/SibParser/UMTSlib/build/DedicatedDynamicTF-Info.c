/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "DedicatedDynamicTF-Info.h"

static int
memb_numberOfTbSizeList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 32)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_rlc_Size_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_rlc_Size_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_numberOfTbSizeList_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_type_numberOfTbSizeList_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_numberOfTbSizeList_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_memb_numberOfTbSizeList_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_rlc_Size_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DedicatedDynamicTF_Info__rlc_Size, choice.bitMode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_BitModeRLC_SizeInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bitMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DedicatedDynamicTF_Info__rlc_Size, choice.octetModeType1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_OctetModeRLC_SizeInfoType1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"octetModeType1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_rlc_Size_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bitMode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* octetModeType1 */
};
static asn_CHOICE_specifics_t asn_SPC_rlc_Size_specs_2 = {
	sizeof(struct DedicatedDynamicTF_Info__rlc_Size),
	offsetof(struct DedicatedDynamicTF_Info__rlc_Size, _asn_ctx),
	offsetof(struct DedicatedDynamicTF_Info__rlc_Size, present),
	sizeof(((struct DedicatedDynamicTF_Info__rlc_Size *)0)->present),
	asn_MAP_rlc_Size_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlc_Size_2 = {
	"rlc-Size",
	"rlc-Size",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_rlc_Size_constr_2, &asn_PER_type_rlc_Size_constr_2, CHOICE_constraint },
	asn_MBR_rlc_Size_2,
	2,	/* Elements count */
	&asn_SPC_rlc_Size_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_numberOfTbSizeList_5[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_NumberOfTransportBlocks,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_numberOfTbSizeList_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_numberOfTbSizeList_specs_5 = {
	sizeof(struct DedicatedDynamicTF_Info__numberOfTbSizeList),
	offsetof(struct DedicatedDynamicTF_Info__numberOfTbSizeList, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numberOfTbSizeList_5 = {
	"numberOfTbSizeList",
	"numberOfTbSizeList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_numberOfTbSizeList_tags_5,
	sizeof(asn_DEF_numberOfTbSizeList_tags_5)
		/sizeof(asn_DEF_numberOfTbSizeList_tags_5[0]) - 1, /* 1 */
	asn_DEF_numberOfTbSizeList_tags_5,	/* Same as above */
	sizeof(asn_DEF_numberOfTbSizeList_tags_5)
		/sizeof(asn_DEF_numberOfTbSizeList_tags_5[0]), /* 2 */
	{ &asn_OER_type_numberOfTbSizeList_constr_5, &asn_PER_type_numberOfTbSizeList_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_numberOfTbSizeList_5,
	1,	/* Single element */
	&asn_SPC_numberOfTbSizeList_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DedicatedDynamicTF_Info_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DedicatedDynamicTF_Info, rlc_Size),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_rlc_Size_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Size"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DedicatedDynamicTF_Info, numberOfTbSizeList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_numberOfTbSizeList_5,
		0,
		{ &asn_OER_memb_numberOfTbSizeList_constr_5, &asn_PER_memb_numberOfTbSizeList_constr_5,  memb_numberOfTbSizeList_constraint_1 },
		0, 0, /* No default value */
		"numberOfTbSizeList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DedicatedDynamicTF_Info, logicalChannelList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LogicalChannelList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logicalChannelList"
		},
};
static const ber_tlv_tag_t asn_DEF_DedicatedDynamicTF_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DedicatedDynamicTF_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlc-Size */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* numberOfTbSizeList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* logicalChannelList */
};
asn_SEQUENCE_specifics_t asn_SPC_DedicatedDynamicTF_Info_specs_1 = {
	sizeof(struct DedicatedDynamicTF_Info),
	offsetof(struct DedicatedDynamicTF_Info, _asn_ctx),
	asn_MAP_DedicatedDynamicTF_Info_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DedicatedDynamicTF_Info = {
	"DedicatedDynamicTF-Info",
	"DedicatedDynamicTF-Info",
	&asn_OP_SEQUENCE,
	asn_DEF_DedicatedDynamicTF_Info_tags_1,
	sizeof(asn_DEF_DedicatedDynamicTF_Info_tags_1)
		/sizeof(asn_DEF_DedicatedDynamicTF_Info_tags_1[0]), /* 1 */
	asn_DEF_DedicatedDynamicTF_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_DedicatedDynamicTF_Info_tags_1)
		/sizeof(asn_DEF_DedicatedDynamicTF_Info_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DedicatedDynamicTF_Info_1,
	3,	/* Elements count */
	&asn_SPC_DedicatedDynamicTF_Info_specs_1	/* Additional specs */
};

