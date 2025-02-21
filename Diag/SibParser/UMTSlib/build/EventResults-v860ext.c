/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "EventResults-v860ext.h"

static asn_oer_constraints_t asn_OER_type_EventResults_v860ext_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_EventResults_v860ext_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_EventResults_v860ext_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EventResults_v860ext, choice.ue_positioning_MeasurementEventResults),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UE_Positioning_MeasurementEventResults_v860ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-positioning-MeasurementEventResults"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_EventResults_v860ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ue-positioning-MeasurementEventResults */
};
asn_CHOICE_specifics_t asn_SPC_EventResults_v860ext_specs_1 = {
	sizeof(struct EventResults_v860ext),
	offsetof(struct EventResults_v860ext, _asn_ctx),
	offsetof(struct EventResults_v860ext, present),
	sizeof(((struct EventResults_v860ext *)0)->present),
	asn_MAP_EventResults_v860ext_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_EventResults_v860ext = {
	"EventResults-v860ext",
	"EventResults-v860ext",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_EventResults_v860ext_constr_1, &asn_PER_type_EventResults_v860ext_constr_1, CHOICE_constraint },
	asn_MBR_EventResults_v860ext_1,
	1,	/* Elements count */
	&asn_SPC_EventResults_v860ext_specs_1	/* Additional specs */
};

