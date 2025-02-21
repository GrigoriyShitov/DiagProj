/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "EventResults.h"

static asn_oer_constraints_t asn_OER_type_EventResults_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_EventResults_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_EventResults_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EventResults, choice.intraFreqEventResults),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqEventResults,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqEventResults"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EventResults, choice.interFreqEventResults),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqEventResults,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqEventResults"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EventResults, choice.interRATEventResults),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterRATEventResults,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interRATEventResults"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EventResults, choice.trafficVolumeEventResults),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrafficVolumeEventResults,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trafficVolumeEventResults"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EventResults, choice.qualityEventResults),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QualityEventResults,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qualityEventResults"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EventResults, choice.ue_InternalEventResults),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UE_InternalEventResults,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-InternalEventResults"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EventResults, choice.ue_positioning_MeasurementEventResults),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UE_Positioning_MeasurementEventResults,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-positioning-MeasurementEventResults"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EventResults, choice.spare),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_EventResults_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqEventResults */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* interFreqEventResults */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* interRATEventResults */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* trafficVolumeEventResults */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* qualityEventResults */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ue-InternalEventResults */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ue-positioning-MeasurementEventResults */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* spare */
};
asn_CHOICE_specifics_t asn_SPC_EventResults_specs_1 = {
	sizeof(struct EventResults),
	offsetof(struct EventResults, _asn_ctx),
	offsetof(struct EventResults, present),
	sizeof(((struct EventResults *)0)->present),
	asn_MAP_EventResults_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_EventResults = {
	"EventResults",
	"EventResults",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_EventResults_constr_1, &asn_PER_type_EventResults_constr_1, CHOICE_constraint },
	asn_MBR_EventResults_1,
	8,	/* Elements count */
	&asn_SPC_EventResults_specs_1	/* Additional specs */
};

