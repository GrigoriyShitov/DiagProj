/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "PDSCH-CapacityAllocationInfo-r4.h"

static asn_oer_constraints_t asn_OER_type_configuration_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_configuration_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static int asn_DFL_5_cmp_1(const void *sptr) {
	const TFCS_IdentityPlain_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 1 */
	return (*st != 1);
}
static int asn_DFL_5_set_1(void **sptr) {
	TFCS_IdentityPlain_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 1 */
	*st = 1;
	return 0;
}
static asn_TYPE_member_t asn_MBR_old_Configuration_4[] = {
	{ ATF_POINTER, 1, offsetof(struct PDSCH_CapacityAllocationInfo_r4__configuration__old_Configuration, tfcs_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TFCS_IdentityPlain,
		0,
		{ 0, 0, 0 },
		&asn_DFL_5_cmp_1,	/* Compare DEFAULT 1 */
		&asn_DFL_5_set_1,	/* Set DEFAULT 1 */
		"tfcs-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_CapacityAllocationInfo_r4__configuration__old_Configuration, pdsch_Identity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-Identity"
		},
};
static const int asn_MAP_old_Configuration_oms_4[] = { 0 };
static const ber_tlv_tag_t asn_DEF_old_Configuration_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_old_Configuration_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tfcs-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pdsch-Identity */
};
static asn_SEQUENCE_specifics_t asn_SPC_old_Configuration_specs_4 = {
	sizeof(struct PDSCH_CapacityAllocationInfo_r4__configuration__old_Configuration),
	offsetof(struct PDSCH_CapacityAllocationInfo_r4__configuration__old_Configuration, _asn_ctx),
	asn_MAP_old_Configuration_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_old_Configuration_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_old_Configuration_4 = {
	"old-Configuration",
	"old-Configuration",
	&asn_OP_SEQUENCE,
	asn_DEF_old_Configuration_tags_4,
	sizeof(asn_DEF_old_Configuration_tags_4)
		/sizeof(asn_DEF_old_Configuration_tags_4[0]) - 1, /* 1 */
	asn_DEF_old_Configuration_tags_4,	/* Same as above */
	sizeof(asn_DEF_old_Configuration_tags_4)
		/sizeof(asn_DEF_old_Configuration_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_old_Configuration_4,
	2,	/* Elements count */
	&asn_SPC_old_Configuration_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_new_Configuration_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_CapacityAllocationInfo_r4__configuration__new_Configuration, pdsch_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_Info_r4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-Info"
		},
	{ ATF_POINTER, 2, offsetof(struct PDSCH_CapacityAllocationInfo_r4__configuration__new_Configuration, pdsch_Identity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-Identity"
		},
	{ ATF_POINTER, 1, offsetof(struct PDSCH_CapacityAllocationInfo_r4__configuration__new_Configuration, pdsch_PowerControlInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_PowerControlInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-PowerControlInfo"
		},
};
static const int asn_MAP_new_Configuration_oms_7[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_new_Configuration_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_new_Configuration_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdsch-Info */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdsch-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* pdsch-PowerControlInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_new_Configuration_specs_7 = {
	sizeof(struct PDSCH_CapacityAllocationInfo_r4__configuration__new_Configuration),
	offsetof(struct PDSCH_CapacityAllocationInfo_r4__configuration__new_Configuration, _asn_ctx),
	asn_MAP_new_Configuration_tag2el_7,
	3,	/* Count of tags in the map */
	asn_MAP_new_Configuration_oms_7,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_new_Configuration_7 = {
	"new-Configuration",
	"new-Configuration",
	&asn_OP_SEQUENCE,
	asn_DEF_new_Configuration_tags_7,
	sizeof(asn_DEF_new_Configuration_tags_7)
		/sizeof(asn_DEF_new_Configuration_tags_7[0]) - 1, /* 1 */
	asn_DEF_new_Configuration_tags_7,	/* Same as above */
	sizeof(asn_DEF_new_Configuration_tags_7)
		/sizeof(asn_DEF_new_Configuration_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_new_Configuration_7,
	3,	/* Elements count */
	&asn_SPC_new_Configuration_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_configuration_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_CapacityAllocationInfo_r4__configuration, choice.old_Configuration),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_old_Configuration_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"old-Configuration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_CapacityAllocationInfo_r4__configuration, choice.new_Configuration),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_new_Configuration_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"new-Configuration"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_configuration_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* old-Configuration */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* new-Configuration */
};
static asn_CHOICE_specifics_t asn_SPC_configuration_specs_3 = {
	sizeof(struct PDSCH_CapacityAllocationInfo_r4__configuration),
	offsetof(struct PDSCH_CapacityAllocationInfo_r4__configuration, _asn_ctx),
	offsetof(struct PDSCH_CapacityAllocationInfo_r4__configuration, present),
	sizeof(((struct PDSCH_CapacityAllocationInfo_r4__configuration *)0)->present),
	asn_MAP_configuration_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_configuration_3 = {
	"configuration",
	"configuration",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_configuration_constr_3, &asn_PER_type_configuration_constr_3, CHOICE_constraint },
	asn_MBR_configuration_3,
	2,	/* Elements count */
	&asn_SPC_configuration_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDSCH_CapacityAllocationInfo_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_CapacityAllocationInfo_r4, pdsch_AllocationPeriodInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AllocationPeriodInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-AllocationPeriodInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_CapacityAllocationInfo_r4, configuration),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_configuration_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"configuration"
		},
};
static const ber_tlv_tag_t asn_DEF_PDSCH_CapacityAllocationInfo_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDSCH_CapacityAllocationInfo_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdsch-AllocationPeriodInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* configuration */
};
asn_SEQUENCE_specifics_t asn_SPC_PDSCH_CapacityAllocationInfo_r4_specs_1 = {
	sizeof(struct PDSCH_CapacityAllocationInfo_r4),
	offsetof(struct PDSCH_CapacityAllocationInfo_r4, _asn_ctx),
	asn_MAP_PDSCH_CapacityAllocationInfo_r4_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDSCH_CapacityAllocationInfo_r4 = {
	"PDSCH-CapacityAllocationInfo-r4",
	"PDSCH-CapacityAllocationInfo-r4",
	&asn_OP_SEQUENCE,
	asn_DEF_PDSCH_CapacityAllocationInfo_r4_tags_1,
	sizeof(asn_DEF_PDSCH_CapacityAllocationInfo_r4_tags_1)
		/sizeof(asn_DEF_PDSCH_CapacityAllocationInfo_r4_tags_1[0]), /* 1 */
	asn_DEF_PDSCH_CapacityAllocationInfo_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDSCH_CapacityAllocationInfo_r4_tags_1)
		/sizeof(asn_DEF_PDSCH_CapacityAllocationInfo_r4_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDSCH_CapacityAllocationInfo_r4_1,
	2,	/* Elements count */
	&asn_SPC_PDSCH_CapacityAllocationInfo_r4_specs_1	/* Additional specs */
};

