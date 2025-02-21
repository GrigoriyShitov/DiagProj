/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "BandCombinationParameters-v1530.h"

static int
memb_bandParameterList_v1530_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 64)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_bandParameterList_v1530_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..64)) */};
static asn_per_constraints_t asn_PER_type_bandParameterList_v1530_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_bandParameterList_v1530_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..64)) */};
static asn_per_constraints_t asn_PER_memb_bandParameterList_v1530_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_bandParameterList_v1530_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_BandParameters_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_bandParameterList_v1530_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_bandParameterList_v1530_specs_2 = {
	sizeof(struct BandCombinationParameters_v1530__bandParameterList_v1530),
	offsetof(struct BandCombinationParameters_v1530__bandParameterList_v1530, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bandParameterList_v1530_2 = {
	"bandParameterList-v1530",
	"bandParameterList-v1530",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_bandParameterList_v1530_tags_2,
	sizeof(asn_DEF_bandParameterList_v1530_tags_2)
		/sizeof(asn_DEF_bandParameterList_v1530_tags_2[0]) - 1, /* 1 */
	asn_DEF_bandParameterList_v1530_tags_2,	/* Same as above */
	sizeof(asn_DEF_bandParameterList_v1530_tags_2)
		/sizeof(asn_DEF_bandParameterList_v1530_tags_2[0]), /* 2 */
	{ &asn_OER_type_bandParameterList_v1530_constr_2, &asn_PER_type_bandParameterList_v1530_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_bandParameterList_v1530_2,
	1,	/* Single element */
	&asn_SPC_bandParameterList_v1530_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BandCombinationParameters_v1530_1[] = {
	{ ATF_POINTER, 2, offsetof(struct BandCombinationParameters_v1530, bandParameterList_v1530),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_bandParameterList_v1530_2,
		0,
		{ &asn_OER_memb_bandParameterList_v1530_constr_2, &asn_PER_memb_bandParameterList_v1530_constr_2,  memb_bandParameterList_v1530_constraint_1 },
		0, 0, /* No default value */
		"bandParameterList-v1530"
		},
	{ ATF_POINTER, 1, offsetof(struct BandCombinationParameters_v1530, spt_Parameters_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SPT_Parameters_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spt-Parameters-r15"
		},
};
static const int asn_MAP_BandCombinationParameters_v1530_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_BandCombinationParameters_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandCombinationParameters_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandParameterList-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* spt-Parameters-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_BandCombinationParameters_v1530_specs_1 = {
	sizeof(struct BandCombinationParameters_v1530),
	offsetof(struct BandCombinationParameters_v1530, _asn_ctx),
	asn_MAP_BandCombinationParameters_v1530_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_BandCombinationParameters_v1530_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandCombinationParameters_v1530 = {
	"BandCombinationParameters-v1530",
	"BandCombinationParameters-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_BandCombinationParameters_v1530_tags_1,
	sizeof(asn_DEF_BandCombinationParameters_v1530_tags_1)
		/sizeof(asn_DEF_BandCombinationParameters_v1530_tags_1[0]), /* 1 */
	asn_DEF_BandCombinationParameters_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandCombinationParameters_v1530_tags_1)
		/sizeof(asn_DEF_BandCombinationParameters_v1530_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BandCombinationParameters_v1530_1,
	2,	/* Elements count */
	&asn_SPC_BandCombinationParameters_v1530_specs_1	/* Additional specs */
};

