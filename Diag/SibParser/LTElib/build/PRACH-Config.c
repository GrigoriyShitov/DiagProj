/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "PRACH-Config.h"

static int
memb_rootSequenceIndex_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 837)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_rootSequenceIndex_constr_2 CC_NOTUSED = {
	{ 2, 1 }	/* (0..837) */,
	-1};
static asn_per_constraints_t asn_PER_memb_rootSequenceIndex_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  837 }	/* (0..837) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PRACH_Config_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PRACH_Config, rootSequenceIndex),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_rootSequenceIndex_constr_2, &asn_PER_memb_rootSequenceIndex_constr_2,  memb_rootSequenceIndex_constraint_1 },
		0, 0, /* No default value */
		"rootSequenceIndex"
		},
	{ ATF_POINTER, 1, offsetof(struct PRACH_Config, prach_ConfigInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_ConfigInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prach-ConfigInfo"
		},
};
static const int asn_MAP_PRACH_Config_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_PRACH_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PRACH_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rootSequenceIndex */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* prach-ConfigInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_PRACH_Config_specs_1 = {
	sizeof(struct PRACH_Config),
	offsetof(struct PRACH_Config, _asn_ctx),
	asn_MAP_PRACH_Config_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PRACH_Config_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PRACH_Config = {
	"PRACH-Config",
	"PRACH-Config",
	&asn_OP_SEQUENCE,
	asn_DEF_PRACH_Config_tags_1,
	sizeof(asn_DEF_PRACH_Config_tags_1)
		/sizeof(asn_DEF_PRACH_Config_tags_1[0]), /* 1 */
	asn_DEF_PRACH_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_PRACH_Config_tags_1)
		/sizeof(asn_DEF_PRACH_Config_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PRACH_Config_1,
	2,	/* Elements count */
	&asn_SPC_PRACH_Config_specs_1	/* Additional specs */
};

