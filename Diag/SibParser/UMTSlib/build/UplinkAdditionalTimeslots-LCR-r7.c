/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UplinkAdditionalTimeslots-LCR-r7.h"

static asn_oer_constraints_t asn_OER_type_parameters_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_parameters_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_sameAsLast_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkAdditionalTimeslots_LCR_r7__parameters__sameAsLast, timeslotNumber),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotNumber,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeslotNumber"
		},
};
static const ber_tlv_tag_t asn_DEF_sameAsLast_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_sameAsLast_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* timeslotNumber */
};
static asn_SEQUENCE_specifics_t asn_SPC_sameAsLast_specs_3 = {
	sizeof(struct UplinkAdditionalTimeslots_LCR_r7__parameters__sameAsLast),
	offsetof(struct UplinkAdditionalTimeslots_LCR_r7__parameters__sameAsLast, _asn_ctx),
	asn_MAP_sameAsLast_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sameAsLast_3 = {
	"sameAsLast",
	"sameAsLast",
	&asn_OP_SEQUENCE,
	asn_DEF_sameAsLast_tags_3,
	sizeof(asn_DEF_sameAsLast_tags_3)
		/sizeof(asn_DEF_sameAsLast_tags_3[0]) - 1, /* 1 */
	asn_DEF_sameAsLast_tags_3,	/* Same as above */
	sizeof(asn_DEF_sameAsLast_tags_3)
		/sizeof(asn_DEF_sameAsLast_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_sameAsLast_3,
	1,	/* Elements count */
	&asn_SPC_sameAsLast_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_newParameters_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkAdditionalTimeslots_LCR_r7__parameters__newParameters, individualTimeslotInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IndividualTimeslotInfo_LCR_r4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"individualTimeslotInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkAdditionalTimeslots_LCR_r7__parameters__newParameters, ul_TS_ChannelisationCodeList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_TS_ChannelisationCodeList_r7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-TS-ChannelisationCodeList"
		},
};
static const ber_tlv_tag_t asn_DEF_newParameters_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_newParameters_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* individualTimeslotInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ul-TS-ChannelisationCodeList */
};
static asn_SEQUENCE_specifics_t asn_SPC_newParameters_specs_5 = {
	sizeof(struct UplinkAdditionalTimeslots_LCR_r7__parameters__newParameters),
	offsetof(struct UplinkAdditionalTimeslots_LCR_r7__parameters__newParameters, _asn_ctx),
	asn_MAP_newParameters_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_newParameters_5 = {
	"newParameters",
	"newParameters",
	&asn_OP_SEQUENCE,
	asn_DEF_newParameters_tags_5,
	sizeof(asn_DEF_newParameters_tags_5)
		/sizeof(asn_DEF_newParameters_tags_5[0]) - 1, /* 1 */
	asn_DEF_newParameters_tags_5,	/* Same as above */
	sizeof(asn_DEF_newParameters_tags_5)
		/sizeof(asn_DEF_newParameters_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_newParameters_5,
	2,	/* Elements count */
	&asn_SPC_newParameters_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_parameters_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkAdditionalTimeslots_LCR_r7__parameters, choice.sameAsLast),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_sameAsLast_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sameAsLast"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkAdditionalTimeslots_LCR_r7__parameters, choice.newParameters),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_newParameters_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"newParameters"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_parameters_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sameAsLast */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* newParameters */
};
static asn_CHOICE_specifics_t asn_SPC_parameters_specs_2 = {
	sizeof(struct UplinkAdditionalTimeslots_LCR_r7__parameters),
	offsetof(struct UplinkAdditionalTimeslots_LCR_r7__parameters, _asn_ctx),
	offsetof(struct UplinkAdditionalTimeslots_LCR_r7__parameters, present),
	sizeof(((struct UplinkAdditionalTimeslots_LCR_r7__parameters *)0)->present),
	asn_MAP_parameters_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_parameters_2 = {
	"parameters",
	"parameters",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_parameters_constr_2, &asn_PER_type_parameters_constr_2, CHOICE_constraint },
	asn_MBR_parameters_2,
	2,	/* Elements count */
	&asn_SPC_parameters_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UplinkAdditionalTimeslots_LCR_r7_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkAdditionalTimeslots_LCR_r7, parameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_parameters_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"parameters"
		},
};
static const ber_tlv_tag_t asn_DEF_UplinkAdditionalTimeslots_LCR_r7_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UplinkAdditionalTimeslots_LCR_r7_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* parameters */
};
asn_SEQUENCE_specifics_t asn_SPC_UplinkAdditionalTimeslots_LCR_r7_specs_1 = {
	sizeof(struct UplinkAdditionalTimeslots_LCR_r7),
	offsetof(struct UplinkAdditionalTimeslots_LCR_r7, _asn_ctx),
	asn_MAP_UplinkAdditionalTimeslots_LCR_r7_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UplinkAdditionalTimeslots_LCR_r7 = {
	"UplinkAdditionalTimeslots-LCR-r7",
	"UplinkAdditionalTimeslots-LCR-r7",
	&asn_OP_SEQUENCE,
	asn_DEF_UplinkAdditionalTimeslots_LCR_r7_tags_1,
	sizeof(asn_DEF_UplinkAdditionalTimeslots_LCR_r7_tags_1)
		/sizeof(asn_DEF_UplinkAdditionalTimeslots_LCR_r7_tags_1[0]), /* 1 */
	asn_DEF_UplinkAdditionalTimeslots_LCR_r7_tags_1,	/* Same as above */
	sizeof(asn_DEF_UplinkAdditionalTimeslots_LCR_r7_tags_1)
		/sizeof(asn_DEF_UplinkAdditionalTimeslots_LCR_r7_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UplinkAdditionalTimeslots_LCR_r7_1,
	1,	/* Elements count */
	&asn_SPC_UplinkAdditionalTimeslots_LCR_r7_specs_1	/* Additional specs */
};

