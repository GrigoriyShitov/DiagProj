/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "TFCS-Removal.h"

static int
memb_tfci_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_tfci_constr_2 CC_NOTUSED = {
	{ 2, 1 }	/* (0..1023) */,
	-1};
static asn_per_constraints_t asn_PER_memb_tfci_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_TFCS_Removal_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TFCS_Removal, tfci),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_tfci_constr_2, &asn_PER_memb_tfci_constr_2,  memb_tfci_constraint_1 },
		0, 0, /* No default value */
		"tfci"
		},
};
static const ber_tlv_tag_t asn_DEF_TFCS_Removal_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TFCS_Removal_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tfci */
};
asn_SEQUENCE_specifics_t asn_SPC_TFCS_Removal_specs_1 = {
	sizeof(struct TFCS_Removal),
	offsetof(struct TFCS_Removal, _asn_ctx),
	asn_MAP_TFCS_Removal_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TFCS_Removal = {
	"TFCS-Removal",
	"TFCS-Removal",
	&asn_OP_SEQUENCE,
	asn_DEF_TFCS_Removal_tags_1,
	sizeof(asn_DEF_TFCS_Removal_tags_1)
		/sizeof(asn_DEF_TFCS_Removal_tags_1[0]), /* 1 */
	asn_DEF_TFCS_Removal_tags_1,	/* Same as above */
	sizeof(asn_DEF_TFCS_Removal_tags_1)
		/sizeof(asn_DEF_TFCS_Removal_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TFCS_Removal_1,
	1,	/* Elements count */
	&asn_SPC_TFCS_Removal_specs_1	/* Additional specs */
};

