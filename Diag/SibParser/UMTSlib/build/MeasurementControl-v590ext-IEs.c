/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "MeasurementControl-v590ext-IEs.h"

static asn_oer_constraints_t asn_OER_type_measurementCommand_v590ext_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_measurementCommand_v590ext_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_measurementCommand_v590ext_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementControl_v590ext_IEs__measurementCommand_v590ext, choice.intra_frequency),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Intra_FreqEventCriteriaList_v590ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intra-frequency"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementControl_v590ext_IEs__measurementCommand_v590ext, choice.inter_frequency),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Inter_FreqEventCriteriaList_v590ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"inter-frequency"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_measurementCommand_v590ext_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intra-frequency */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* inter-frequency */
};
static asn_CHOICE_specifics_t asn_SPC_measurementCommand_v590ext_specs_2 = {
	sizeof(struct MeasurementControl_v590ext_IEs__measurementCommand_v590ext),
	offsetof(struct MeasurementControl_v590ext_IEs__measurementCommand_v590ext, _asn_ctx),
	offsetof(struct MeasurementControl_v590ext_IEs__measurementCommand_v590ext, present),
	sizeof(((struct MeasurementControl_v590ext_IEs__measurementCommand_v590ext *)0)->present),
	asn_MAP_measurementCommand_v590ext_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measurementCommand_v590ext_2 = {
	"measurementCommand-v590ext",
	"measurementCommand-v590ext",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_measurementCommand_v590ext_constr_2, &asn_PER_type_measurementCommand_v590ext_constr_2, CHOICE_constraint },
	asn_MBR_measurementCommand_v590ext_2,
	2,	/* Elements count */
	&asn_SPC_measurementCommand_v590ext_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasurementControl_v590ext_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct MeasurementControl_v590ext_IEs, measurementCommand_v590ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_measurementCommand_v590ext_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measurementCommand-v590ext"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasurementControl_v590ext_IEs, intraFreqReportingCriteria_1b_r5),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqReportingCriteria_1b_r5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqReportingCriteria-1b-r5"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasurementControl_v590ext_IEs, intraFreqEvent_1d_r5),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqEvent_1d_r5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqEvent-1d-r5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementControl_v590ext_IEs, rrc_TransactionIdentifier_MSP_v590ext),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TransactionIdentifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrc-TransactionIdentifier-MSP-v590ext"
		},
};
static const int asn_MAP_MeasurementControl_v590ext_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_MeasurementControl_v590ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasurementControl_v590ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measurementCommand-v590ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* intraFreqReportingCriteria-1b-r5 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* intraFreqEvent-1d-r5 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* rrc-TransactionIdentifier-MSP-v590ext */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasurementControl_v590ext_IEs_specs_1 = {
	sizeof(struct MeasurementControl_v590ext_IEs),
	offsetof(struct MeasurementControl_v590ext_IEs, _asn_ctx),
	asn_MAP_MeasurementControl_v590ext_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MeasurementControl_v590ext_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasurementControl_v590ext_IEs = {
	"MeasurementControl-v590ext-IEs",
	"MeasurementControl-v590ext-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasurementControl_v590ext_IEs_tags_1,
	sizeof(asn_DEF_MeasurementControl_v590ext_IEs_tags_1)
		/sizeof(asn_DEF_MeasurementControl_v590ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_MeasurementControl_v590ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasurementControl_v590ext_IEs_tags_1)
		/sizeof(asn_DEF_MeasurementControl_v590ext_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasurementControl_v590ext_IEs_1,
	4,	/* Elements count */
	&asn_SPC_MeasurementControl_v590ext_IEs_specs_1	/* Additional specs */
};

