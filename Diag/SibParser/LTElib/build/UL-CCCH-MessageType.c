/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UL-CCCH-MessageType.h"

static asn_oer_constraints_t asn_OER_type_c1_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_c1_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_c2_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_c2_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_c3_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_c3_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_messageClassExtensionFuture_r13_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_messageClassExtensionFuture_r13_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_messageClassExtension_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_messageClassExtension_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_UL_CCCH_MessageType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_UL_CCCH_MessageType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_c1_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_CCCH_MessageType__c1, choice.rrcConnectionReestablishmentRequest),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReestablishmentRequest,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionReestablishmentRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_CCCH_MessageType__c1, choice.rrcConnectionRequest),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionRequest,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionRequest"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_c1_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionReestablishmentRequest */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rrcConnectionRequest */
};
static asn_CHOICE_specifics_t asn_SPC_c1_specs_2 = {
	sizeof(struct UL_CCCH_MessageType__c1),
	offsetof(struct UL_CCCH_MessageType__c1, _asn_ctx),
	offsetof(struct UL_CCCH_MessageType__c1, present),
	sizeof(((struct UL_CCCH_MessageType__c1 *)0)->present),
	asn_MAP_c1_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_c1_2 = {
	"c1",
	"c1",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_c1_constr_2, &asn_PER_type_c1_constr_2, CHOICE_constraint },
	asn_MBR_c1_2,
	2,	/* Elements count */
	&asn_SPC_c1_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_c2_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_CCCH_MessageType__messageClassExtension__c2, choice.rrcConnectionResumeRequest_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionResumeRequest_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionResumeRequest-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_c2_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rrcConnectionResumeRequest-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_c2_specs_6 = {
	sizeof(struct UL_CCCH_MessageType__messageClassExtension__c2),
	offsetof(struct UL_CCCH_MessageType__messageClassExtension__c2, _asn_ctx),
	offsetof(struct UL_CCCH_MessageType__messageClassExtension__c2, present),
	sizeof(((struct UL_CCCH_MessageType__messageClassExtension__c2 *)0)->present),
	asn_MAP_c2_tag2el_6,
	1,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_c2_6 = {
	"c2",
	"c2",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_c2_constr_6, &asn_PER_type_c2_constr_6, CHOICE_constraint },
	asn_MBR_c2_6,
	1,	/* Elements count */
	&asn_SPC_c2_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_c3_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__c3, choice.rrcEarlyDataRequest_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCEarlyDataRequest_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcEarlyDataRequest-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__c3, choice.spare3),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__c3, choice.spare2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__c3, choice.spare1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_c3_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcEarlyDataRequest-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* spare3 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* spare2 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* spare1 */
};
static asn_CHOICE_specifics_t asn_SPC_c3_specs_9 = {
	sizeof(struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__c3),
	offsetof(struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__c3, _asn_ctx),
	offsetof(struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__c3, present),
	sizeof(((struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__c3 *)0)->present),
	asn_MAP_c3_tag2el_9,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_c3_9 = {
	"c3",
	"c3",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_c3_constr_9, &asn_PER_type_c3_constr_9, CHOICE_constraint },
	asn_MBR_c3_9,
	4,	/* Elements count */
	&asn_SPC_c3_specs_9	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_messageClassExtensionFuture_r15_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_messageClassExtensionFuture_r15_specs_14 = {
	sizeof(struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__messageClassExtensionFuture_r15),
	offsetof(struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__messageClassExtensionFuture_r15, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_messageClassExtensionFuture_r15_14 = {
	"messageClassExtensionFuture-r15",
	"messageClassExtensionFuture-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_messageClassExtensionFuture_r15_tags_14,
	sizeof(asn_DEF_messageClassExtensionFuture_r15_tags_14)
		/sizeof(asn_DEF_messageClassExtensionFuture_r15_tags_14[0]) - 1, /* 1 */
	asn_DEF_messageClassExtensionFuture_r15_tags_14,	/* Same as above */
	sizeof(asn_DEF_messageClassExtensionFuture_r15_tags_14)
		/sizeof(asn_DEF_messageClassExtensionFuture_r15_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_messageClassExtensionFuture_r15_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_messageClassExtensionFuture_r13_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13, choice.c3),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_c3_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13, choice.messageClassExtensionFuture_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_messageClassExtensionFuture_r15_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"messageClassExtensionFuture-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_messageClassExtensionFuture_r13_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c3 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* messageClassExtensionFuture-r15 */
};
static asn_CHOICE_specifics_t asn_SPC_messageClassExtensionFuture_r13_specs_8 = {
	sizeof(struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13),
	offsetof(struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13, _asn_ctx),
	offsetof(struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13, present),
	sizeof(((struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13 *)0)->present),
	asn_MAP_messageClassExtensionFuture_r13_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_messageClassExtensionFuture_r13_8 = {
	"messageClassExtensionFuture-r13",
	"messageClassExtensionFuture-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_messageClassExtensionFuture_r13_constr_8, &asn_PER_type_messageClassExtensionFuture_r13_constr_8, CHOICE_constraint },
	asn_MBR_messageClassExtensionFuture_r13_8,
	2,	/* Elements count */
	&asn_SPC_messageClassExtensionFuture_r13_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_messageClassExtension_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_CCCH_MessageType__messageClassExtension, choice.c2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_c2_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_CCCH_MessageType__messageClassExtension, choice.messageClassExtensionFuture_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_messageClassExtensionFuture_r13_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"messageClassExtensionFuture-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_messageClassExtension_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c2 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* messageClassExtensionFuture-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_messageClassExtension_specs_5 = {
	sizeof(struct UL_CCCH_MessageType__messageClassExtension),
	offsetof(struct UL_CCCH_MessageType__messageClassExtension, _asn_ctx),
	offsetof(struct UL_CCCH_MessageType__messageClassExtension, present),
	sizeof(((struct UL_CCCH_MessageType__messageClassExtension *)0)->present),
	asn_MAP_messageClassExtension_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_messageClassExtension_5 = {
	"messageClassExtension",
	"messageClassExtension",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_messageClassExtension_constr_5, &asn_PER_type_messageClassExtension_constr_5, CHOICE_constraint },
	asn_MBR_messageClassExtension_5,
	2,	/* Elements count */
	&asn_SPC_messageClassExtension_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UL_CCCH_MessageType_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_CCCH_MessageType, choice.c1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_c1_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_CCCH_MessageType, choice.messageClassExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_messageClassExtension_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"messageClassExtension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_UL_CCCH_MessageType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* messageClassExtension */
};
asn_CHOICE_specifics_t asn_SPC_UL_CCCH_MessageType_specs_1 = {
	sizeof(struct UL_CCCH_MessageType),
	offsetof(struct UL_CCCH_MessageType, _asn_ctx),
	offsetof(struct UL_CCCH_MessageType, present),
	sizeof(((struct UL_CCCH_MessageType *)0)->present),
	asn_MAP_UL_CCCH_MessageType_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UL_CCCH_MessageType = {
	"UL-CCCH-MessageType",
	"UL-CCCH-MessageType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_UL_CCCH_MessageType_constr_1, &asn_PER_type_UL_CCCH_MessageType_constr_1, CHOICE_constraint },
	asn_MBR_UL_CCCH_MessageType_1,
	2,	/* Elements count */
	&asn_SPC_UL_CCCH_MessageType_specs_1	/* Additional specs */
};

