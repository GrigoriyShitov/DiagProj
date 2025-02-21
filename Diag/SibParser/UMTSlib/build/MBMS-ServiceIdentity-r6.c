/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "MBMS-ServiceIdentity-r6.h"

static int
memb_sameAsMIB_MultiPLMN_Id_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 5)) {
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
memb_serviceIdentity_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_sameAsMIB_MultiPLMN_Id_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (1..5) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sameAsMIB_MultiPLMN_Id_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (1..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_other_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_other_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_plmn_Identity_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_plmn_Identity_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_serviceIdentity_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	3	/* (SIZE(3..3)) */};
static asn_per_constraints_t asn_PER_memb_serviceIdentity_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_other_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_ServiceIdentity_r6__plmn_Identity__other, choice.sameAsMIB_MultiPLMN_Id),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sameAsMIB_MultiPLMN_Id_constr_6, &asn_PER_memb_sameAsMIB_MultiPLMN_Id_constr_6,  memb_sameAsMIB_MultiPLMN_Id_constraint_5 },
		0, 0, /* No default value */
		"sameAsMIB-MultiPLMN-Id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_ServiceIdentity_r6__plmn_Identity__other, choice.explicitPLMN_Id),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"explicitPLMN-Id"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_other_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sameAsMIB-MultiPLMN-Id */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* explicitPLMN-Id */
};
static asn_CHOICE_specifics_t asn_SPC_other_specs_5 = {
	sizeof(struct MBMS_ServiceIdentity_r6__plmn_Identity__other),
	offsetof(struct MBMS_ServiceIdentity_r6__plmn_Identity__other, _asn_ctx),
	offsetof(struct MBMS_ServiceIdentity_r6__plmn_Identity__other, present),
	sizeof(((struct MBMS_ServiceIdentity_r6__plmn_Identity__other *)0)->present),
	asn_MAP_other_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_other_5 = {
	"other",
	"other",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_other_constr_5, &asn_PER_type_other_constr_5, CHOICE_constraint },
	asn_MBR_other_5,
	2,	/* Elements count */
	&asn_SPC_other_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_plmn_Identity_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_ServiceIdentity_r6__plmn_Identity, choice.sameAsMIB_PLMN_Id),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sameAsMIB-PLMN-Id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_ServiceIdentity_r6__plmn_Identity, choice.other),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_other_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"other"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_plmn_Identity_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sameAsMIB-PLMN-Id */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* other */
};
static asn_CHOICE_specifics_t asn_SPC_plmn_Identity_specs_3 = {
	sizeof(struct MBMS_ServiceIdentity_r6__plmn_Identity),
	offsetof(struct MBMS_ServiceIdentity_r6__plmn_Identity, _asn_ctx),
	offsetof(struct MBMS_ServiceIdentity_r6__plmn_Identity, present),
	sizeof(((struct MBMS_ServiceIdentity_r6__plmn_Identity *)0)->present),
	asn_MAP_plmn_Identity_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_plmn_Identity_3 = {
	"plmn-Identity",
	"plmn-Identity",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_plmn_Identity_constr_3, &asn_PER_type_plmn_Identity_constr_3, CHOICE_constraint },
	asn_MBR_plmn_Identity_3,
	2,	/* Elements count */
	&asn_SPC_plmn_Identity_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MBMS_ServiceIdentity_r6_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_ServiceIdentity_r6, serviceIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_serviceIdentity_constr_2, &asn_PER_memb_serviceIdentity_constr_2,  memb_serviceIdentity_constraint_1 },
		0, 0, /* No default value */
		"serviceIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_ServiceIdentity_r6, plmn_Identity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_plmn_Identity_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-Identity"
		},
};
static const ber_tlv_tag_t asn_DEF_MBMS_ServiceIdentity_r6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBMS_ServiceIdentity_r6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* serviceIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* plmn-Identity */
};
asn_SEQUENCE_specifics_t asn_SPC_MBMS_ServiceIdentity_r6_specs_1 = {
	sizeof(struct MBMS_ServiceIdentity_r6),
	offsetof(struct MBMS_ServiceIdentity_r6, _asn_ctx),
	asn_MAP_MBMS_ServiceIdentity_r6_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_ServiceIdentity_r6 = {
	"MBMS-ServiceIdentity-r6",
	"MBMS-ServiceIdentity-r6",
	&asn_OP_SEQUENCE,
	asn_DEF_MBMS_ServiceIdentity_r6_tags_1,
	sizeof(asn_DEF_MBMS_ServiceIdentity_r6_tags_1)
		/sizeof(asn_DEF_MBMS_ServiceIdentity_r6_tags_1[0]), /* 1 */
	asn_DEF_MBMS_ServiceIdentity_r6_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_ServiceIdentity_r6_tags_1)
		/sizeof(asn_DEF_MBMS_ServiceIdentity_r6_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MBMS_ServiceIdentity_r6_1,
	2,	/* Elements count */
	&asn_SPC_MBMS_ServiceIdentity_r6_specs_1	/* Additional specs */
};

