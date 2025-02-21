/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "MBMS-MCCH-ConfigurationInfo-r6.h"

static int
memb_accessInfoPeriodCoefficient_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
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
memb_repetitionPeriodCoefficient_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
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
memb_modificationPeriodCoefficient_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 7 && value <= 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_accessInfoPeriodCoefficient_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..3) */,
	-1};
static asn_per_constraints_t asn_PER_memb_accessInfoPeriodCoefficient_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_repetitionPeriodCoefficient_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..3) */,
	-1};
static asn_per_constraints_t asn_PER_memb_repetitionPeriodCoefficient_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_modificationPeriodCoefficient_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (7..10) */,
	-1};
static asn_per_constraints_t asn_PER_memb_modificationPeriodCoefficient_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  7,  10 }	/* (7..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_MBMS_MCCH_ConfigurationInfo_r6_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MCCH_ConfigurationInfo_r6, accessInfoPeriodCoefficient),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_accessInfoPeriodCoefficient_constr_2, &asn_PER_memb_accessInfoPeriodCoefficient_constr_2,  memb_accessInfoPeriodCoefficient_constraint_1 },
		0, 0, /* No default value */
		"accessInfoPeriodCoefficient"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MCCH_ConfigurationInfo_r6, repetitionPeriodCoefficient),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_repetitionPeriodCoefficient_constr_3, &asn_PER_memb_repetitionPeriodCoefficient_constr_3,  memb_repetitionPeriodCoefficient_constraint_1 },
		0, 0, /* No default value */
		"repetitionPeriodCoefficient"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MCCH_ConfigurationInfo_r6, modificationPeriodCoefficient),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_modificationPeriodCoefficient_constr_4, &asn_PER_memb_modificationPeriodCoefficient_constr_4,  memb_modificationPeriodCoefficient_constraint_1 },
		0, 0, /* No default value */
		"modificationPeriodCoefficient"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MCCH_ConfigurationInfo_r6, rlc_Info),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Info_MCCH_r6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Info"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMS_MCCH_ConfigurationInfo_r6, tctf_Presence),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_TCTF_Presence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tctf-Presence"
		},
};
static const int asn_MAP_MBMS_MCCH_ConfigurationInfo_r6_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_MBMS_MCCH_ConfigurationInfo_r6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBMS_MCCH_ConfigurationInfo_r6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* accessInfoPeriodCoefficient */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* repetitionPeriodCoefficient */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* modificationPeriodCoefficient */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rlc-Info */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* tctf-Presence */
};
asn_SEQUENCE_specifics_t asn_SPC_MBMS_MCCH_ConfigurationInfo_r6_specs_1 = {
	sizeof(struct MBMS_MCCH_ConfigurationInfo_r6),
	offsetof(struct MBMS_MCCH_ConfigurationInfo_r6, _asn_ctx),
	asn_MAP_MBMS_MCCH_ConfigurationInfo_r6_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_MBMS_MCCH_ConfigurationInfo_r6_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_MCCH_ConfigurationInfo_r6 = {
	"MBMS-MCCH-ConfigurationInfo-r6",
	"MBMS-MCCH-ConfigurationInfo-r6",
	&asn_OP_SEQUENCE,
	asn_DEF_MBMS_MCCH_ConfigurationInfo_r6_tags_1,
	sizeof(asn_DEF_MBMS_MCCH_ConfigurationInfo_r6_tags_1)
		/sizeof(asn_DEF_MBMS_MCCH_ConfigurationInfo_r6_tags_1[0]), /* 1 */
	asn_DEF_MBMS_MCCH_ConfigurationInfo_r6_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_MCCH_ConfigurationInfo_r6_tags_1)
		/sizeof(asn_DEF_MBMS_MCCH_ConfigurationInfo_r6_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MBMS_MCCH_ConfigurationInfo_r6_1,
	5,	/* Elements count */
	&asn_SPC_MBMS_MCCH_ConfigurationInfo_r6_specs_1	/* Additional specs */
};

