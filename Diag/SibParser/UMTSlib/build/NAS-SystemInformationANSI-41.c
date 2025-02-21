/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "NAS-SystemInformationANSI-41.h"

int
NAS_SystemInformationANSI_41_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const ANSI_41_NAS_Parameter_t *st = (const ANSI_41_NAS_Parameter_t *)sptr;
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
	
	if((size >= 1 && size <= 2048)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using ANSI_41_NAS_Parameter,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_NAS_SystemInformationANSI_41_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2048)) */};
asn_per_constraints_t asn_PER_type_NAS_SystemInformationANSI_41_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 11,  11,  1,  2048 }	/* (SIZE(1..2048)) */,
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_NAS_SystemInformationANSI_41_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (3 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NAS_SystemInformationANSI_41 = {
	"NAS-SystemInformationANSI-41",
	"NAS-SystemInformationANSI-41",
	&asn_OP_BIT_STRING,
	asn_DEF_NAS_SystemInformationANSI_41_tags_1,
	sizeof(asn_DEF_NAS_SystemInformationANSI_41_tags_1)
		/sizeof(asn_DEF_NAS_SystemInformationANSI_41_tags_1[0]), /* 1 */
	asn_DEF_NAS_SystemInformationANSI_41_tags_1,	/* Same as above */
	sizeof(asn_DEF_NAS_SystemInformationANSI_41_tags_1)
		/sizeof(asn_DEF_NAS_SystemInformationANSI_41_tags_1[0]), /* 1 */
	{ &asn_OER_type_NAS_SystemInformationANSI_41_constr_1, &asn_PER_type_NAS_SystemInformationANSI_41_constr_1, NAS_SystemInformationANSI_41_constraint },
	0, 0,	/* No members */
	&asn_SPC_BIT_STRING_specs	/* Additional specs */
};

