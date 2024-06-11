/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "DRB-CountMSB-Info.h"

static int
memb_countMSB_Uplink_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 33554431)) {
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
memb_countMSB_Downlink_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 33554431)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_countMSB_Uplink_constr_3 CC_NOTUSED = {
	{ 4, 1 }	/* (0..33554431) */,
	-1};
static asn_per_constraints_t asn_PER_memb_countMSB_Uplink_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 25, -1,  0,  33554431 }	/* (0..33554431) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_countMSB_Downlink_constr_4 CC_NOTUSED = {
	{ 4, 1 }	/* (0..33554431) */,
	-1};
static asn_per_constraints_t asn_PER_memb_countMSB_Downlink_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 25, -1,  0,  33554431 }	/* (0..33554431) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_DRB_CountMSB_Info_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_CountMSB_Info, drb_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_CountMSB_Info, countMSB_Uplink),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_countMSB_Uplink_constr_3, &asn_PER_memb_countMSB_Uplink_constr_3,  memb_countMSB_Uplink_constraint_1 },
		0, 0, /* No default value */
		"countMSB-Uplink"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_CountMSB_Info, countMSB_Downlink),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_countMSB_Downlink_constr_4, &asn_PER_memb_countMSB_Downlink_constr_4,  memb_countMSB_Downlink_constraint_1 },
		0, 0, /* No default value */
		"countMSB-Downlink"
		},
};
static const ber_tlv_tag_t asn_DEF_DRB_CountMSB_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRB_CountMSB_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drb-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* countMSB-Uplink */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* countMSB-Downlink */
};
asn_SEQUENCE_specifics_t asn_SPC_DRB_CountMSB_Info_specs_1 = {
	sizeof(struct DRB_CountMSB_Info),
	offsetof(struct DRB_CountMSB_Info, _asn_ctx),
	asn_MAP_DRB_CountMSB_Info_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRB_CountMSB_Info = {
	"DRB-CountMSB-Info",
	"DRB-CountMSB-Info",
	&asn_OP_SEQUENCE,
	asn_DEF_DRB_CountMSB_Info_tags_1,
	sizeof(asn_DEF_DRB_CountMSB_Info_tags_1)
		/sizeof(asn_DEF_DRB_CountMSB_Info_tags_1[0]), /* 1 */
	asn_DEF_DRB_CountMSB_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRB_CountMSB_Info_tags_1)
		/sizeof(asn_DEF_DRB_CountMSB_Info_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DRB_CountMSB_Info_1,
	3,	/* Elements count */
	&asn_SPC_DRB_CountMSB_Info_specs_1	/* Additional specs */
};

