/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UE-Positioning-GANSS-AddIonoModel.h"

static int
memb_dataID_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 2)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_dataID_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_memb_dataID_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UE_Positioning_GANSS_AddIonoModel_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_GANSS_AddIonoModel, dataID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_dataID_constr_2, &asn_PER_memb_dataID_constr_2,  memb_dataID_constraint_1 },
		0, 0, /* No default value */
		"dataID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_GANSS_AddIonoModel, alpha_beta_parameters),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_GPS_IonosphericModel,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"alpha-beta-parameters"
		},
};
static const ber_tlv_tag_t asn_DEF_UE_Positioning_GANSS_AddIonoModel_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_Positioning_GANSS_AddIonoModel_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dataID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* alpha-beta-parameters */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_GANSS_AddIonoModel_specs_1 = {
	sizeof(struct UE_Positioning_GANSS_AddIonoModel),
	offsetof(struct UE_Positioning_GANSS_AddIonoModel, _asn_ctx),
	asn_MAP_UE_Positioning_GANSS_AddIonoModel_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GANSS_AddIonoModel = {
	"UE-Positioning-GANSS-AddIonoModel",
	"UE-Positioning-GANSS-AddIonoModel",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_Positioning_GANSS_AddIonoModel_tags_1,
	sizeof(asn_DEF_UE_Positioning_GANSS_AddIonoModel_tags_1)
		/sizeof(asn_DEF_UE_Positioning_GANSS_AddIonoModel_tags_1[0]), /* 1 */
	asn_DEF_UE_Positioning_GANSS_AddIonoModel_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_Positioning_GANSS_AddIonoModel_tags_1)
		/sizeof(asn_DEF_UE_Positioning_GANSS_AddIonoModel_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_Positioning_GANSS_AddIonoModel_1,
	2,	/* Elements count */
	&asn_SPC_UE_Positioning_GANSS_AddIonoModel_specs_1	/* Additional specs */
};

