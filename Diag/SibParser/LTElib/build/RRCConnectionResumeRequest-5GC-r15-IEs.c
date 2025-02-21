/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "RRCConnectionResumeRequest-5GC-r15-IEs.h"

static int
memb_shortResumeMAC_I_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_spare_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_resumeIdentity_r15_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_resumeIdentity_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_shortResumeMAC_I_r15_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	16	/* (SIZE(16..16)) */};
static asn_per_constraints_t asn_PER_memb_shortResumeMAC_I_r15_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_spare_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	1	/* (SIZE(1..1)) */};
static asn_per_constraints_t asn_PER_memb_spare_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (SIZE(1..1)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_resumeIdentity_r15_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionResumeRequest_5GC_r15_IEs__resumeIdentity_r15, choice.fullI_RNTI_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_I_RNTI_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fullI-RNTI-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionResumeRequest_5GC_r15_IEs__resumeIdentity_r15, choice.shortI_RNTI_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ShortI_RNTI_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"shortI-RNTI-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_resumeIdentity_r15_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fullI-RNTI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* shortI-RNTI-r15 */
};
static asn_CHOICE_specifics_t asn_SPC_resumeIdentity_r15_specs_2 = {
	sizeof(struct RRCConnectionResumeRequest_5GC_r15_IEs__resumeIdentity_r15),
	offsetof(struct RRCConnectionResumeRequest_5GC_r15_IEs__resumeIdentity_r15, _asn_ctx),
	offsetof(struct RRCConnectionResumeRequest_5GC_r15_IEs__resumeIdentity_r15, present),
	sizeof(((struct RRCConnectionResumeRequest_5GC_r15_IEs__resumeIdentity_r15 *)0)->present),
	asn_MAP_resumeIdentity_r15_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_resumeIdentity_r15_2 = {
	"resumeIdentity-r15",
	"resumeIdentity-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_resumeIdentity_r15_constr_2, &asn_PER_type_resumeIdentity_r15_constr_2, CHOICE_constraint },
	asn_MBR_resumeIdentity_r15_2,
	2,	/* Elements count */
	&asn_SPC_resumeIdentity_r15_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCConnectionResumeRequest_5GC_r15_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionResumeRequest_5GC_r15_IEs, resumeIdentity_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_resumeIdentity_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resumeIdentity-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionResumeRequest_5GC_r15_IEs, shortResumeMAC_I_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_shortResumeMAC_I_r15_constr_5, &asn_PER_memb_shortResumeMAC_I_r15_constr_5,  memb_shortResumeMAC_I_r15_constraint_1 },
		0, 0, /* No default value */
		"shortResumeMAC-I-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionResumeRequest_5GC_r15_IEs, resumeCause_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResumeCause_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resumeCause-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionResumeRequest_5GC_r15_IEs, spare),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_spare_constr_7, &asn_PER_memb_spare_constr_7,  memb_spare_constraint_1 },
		0, 0, /* No default value */
		"spare"
		},
};
static const ber_tlv_tag_t asn_DEF_RRCConnectionResumeRequest_5GC_r15_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionResumeRequest_5GC_r15_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* resumeIdentity-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* shortResumeMAC-I-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* resumeCause-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* spare */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResumeRequest_5GC_r15_IEs_specs_1 = {
	sizeof(struct RRCConnectionResumeRequest_5GC_r15_IEs),
	offsetof(struct RRCConnectionResumeRequest_5GC_r15_IEs, _asn_ctx),
	asn_MAP_RRCConnectionResumeRequest_5GC_r15_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionResumeRequest_5GC_r15_IEs = {
	"RRCConnectionResumeRequest-5GC-r15-IEs",
	"RRCConnectionResumeRequest-5GC-r15-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionResumeRequest_5GC_r15_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionResumeRequest_5GC_r15_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionResumeRequest_5GC_r15_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionResumeRequest_5GC_r15_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionResumeRequest_5GC_r15_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionResumeRequest_5GC_r15_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionResumeRequest_5GC_r15_IEs_1,
	4,	/* Elements count */
	&asn_SPC_RRCConnectionResumeRequest_5GC_r15_IEs_specs_1	/* Additional specs */
};

