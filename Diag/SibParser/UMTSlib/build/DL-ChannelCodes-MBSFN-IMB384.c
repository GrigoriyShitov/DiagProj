/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "DL-ChannelCodes-MBSFN-IMB384.h"

static int
memb_firstChannelisationCode_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 15)) {
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
memb_lastChannelisationCode_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_firstChannelisationCode_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (1..15) */,
	-1};
static asn_per_constraints_t asn_PER_memb_firstChannelisationCode_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (1..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_lastChannelisationCode_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (1..15) */,
	-1};
static asn_per_constraints_t asn_PER_memb_lastChannelisationCode_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (1..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_DL_ChannelCodes_MBSFN_IMB384_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_ChannelCodes_MBSFN_IMB384, firstChannelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_firstChannelisationCode_constr_2, &asn_PER_memb_firstChannelisationCode_constr_2,  memb_firstChannelisationCode_constraint_1 },
		0, 0, /* No default value */
		"firstChannelisationCode"
		},
	{ ATF_POINTER, 1, offsetof(struct DL_ChannelCodes_MBSFN_IMB384, lastChannelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_lastChannelisationCode_constr_3, &asn_PER_memb_lastChannelisationCode_constr_3,  memb_lastChannelisationCode_constraint_1 },
		0, 0, /* No default value */
		"lastChannelisationCode"
		},
};
static const int asn_MAP_DL_ChannelCodes_MBSFN_IMB384_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_DL_ChannelCodes_MBSFN_IMB384_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DL_ChannelCodes_MBSFN_IMB384_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* firstChannelisationCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* lastChannelisationCode */
};
asn_SEQUENCE_specifics_t asn_SPC_DL_ChannelCodes_MBSFN_IMB384_specs_1 = {
	sizeof(struct DL_ChannelCodes_MBSFN_IMB384),
	offsetof(struct DL_ChannelCodes_MBSFN_IMB384, _asn_ctx),
	asn_MAP_DL_ChannelCodes_MBSFN_IMB384_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_DL_ChannelCodes_MBSFN_IMB384_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DL_ChannelCodes_MBSFN_IMB384 = {
	"DL-ChannelCodes-MBSFN-IMB384",
	"DL-ChannelCodes-MBSFN-IMB384",
	&asn_OP_SEQUENCE,
	asn_DEF_DL_ChannelCodes_MBSFN_IMB384_tags_1,
	sizeof(asn_DEF_DL_ChannelCodes_MBSFN_IMB384_tags_1)
		/sizeof(asn_DEF_DL_ChannelCodes_MBSFN_IMB384_tags_1[0]), /* 1 */
	asn_DEF_DL_ChannelCodes_MBSFN_IMB384_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_ChannelCodes_MBSFN_IMB384_tags_1)
		/sizeof(asn_DEF_DL_ChannelCodes_MBSFN_IMB384_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DL_ChannelCodes_MBSFN_IMB384_1,
	2,	/* Elements count */
	&asn_SPC_DL_ChannelCodes_MBSFN_IMB384_specs_1	/* Additional specs */
};

