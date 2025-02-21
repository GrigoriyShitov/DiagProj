/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "PLMN-IdentityInfoNR-v1710.h"

static int
memb_gNB_ID_Length_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 22 && value <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_gNB_ID_Length_r17_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (22..32) */,
	-1};
static asn_per_constraints_t asn_PER_memb_gNB_ID_Length_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  22,  32 }	/* (22..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PLMN_IdentityInfoNR_v1710_1[] = {
	{ ATF_POINTER, 1, offsetof(struct PLMN_IdentityInfoNR_v1710, gNB_ID_Length_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_gNB_ID_Length_r17_constr_2, &asn_PER_memb_gNB_ID_Length_r17_constr_2,  memb_gNB_ID_Length_r17_constraint_1 },
		0, 0, /* No default value */
		"gNB-ID-Length-r17"
		},
};
static const int asn_MAP_PLMN_IdentityInfoNR_v1710_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_PLMN_IdentityInfoNR_v1710_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PLMN_IdentityInfoNR_v1710_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* gNB-ID-Length-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_PLMN_IdentityInfoNR_v1710_specs_1 = {
	sizeof(struct PLMN_IdentityInfoNR_v1710),
	offsetof(struct PLMN_IdentityInfoNR_v1710, _asn_ctx),
	asn_MAP_PLMN_IdentityInfoNR_v1710_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_PLMN_IdentityInfoNR_v1710_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityInfoNR_v1710 = {
	"PLMN-IdentityInfoNR-v1710",
	"PLMN-IdentityInfoNR-v1710",
	&asn_OP_SEQUENCE,
	asn_DEF_PLMN_IdentityInfoNR_v1710_tags_1,
	sizeof(asn_DEF_PLMN_IdentityInfoNR_v1710_tags_1)
		/sizeof(asn_DEF_PLMN_IdentityInfoNR_v1710_tags_1[0]), /* 1 */
	asn_DEF_PLMN_IdentityInfoNR_v1710_tags_1,	/* Same as above */
	sizeof(asn_DEF_PLMN_IdentityInfoNR_v1710_tags_1)
		/sizeof(asn_DEF_PLMN_IdentityInfoNR_v1710_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PLMN_IdentityInfoNR_v1710_1,
	1,	/* Elements count */
	&asn_SPC_PLMN_IdentityInfoNR_v1710_specs_1	/* Additional specs */
};

