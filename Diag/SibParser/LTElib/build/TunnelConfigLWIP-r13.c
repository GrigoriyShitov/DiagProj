/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "TunnelConfigLWIP-r13.h"

static int
memb_lwip_Counter_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_lwip_Counter_r13_constr_5 CC_NOTUSED = {
	{ 2, 1 }	/* (0..65535) */,
	-1};
static asn_per_constraints_t asn_PER_memb_lwip_Counter_r13_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_TunnelConfigLWIP_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TunnelConfigLWIP_r13, ip_Address_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_IP_Address_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ip-Address-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TunnelConfigLWIP_r13, ike_Identity_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IKE_Identity_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ike-Identity-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct TunnelConfigLWIP_r13, lwip_Counter_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_lwip_Counter_r13_constr_5, &asn_PER_memb_lwip_Counter_r13_constr_5,  memb_lwip_Counter_r13_constraint_1 },
		0, 0, /* No default value */
		"lwip-Counter-r13"
		},
};
static const int asn_MAP_TunnelConfigLWIP_r13_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_TunnelConfigLWIP_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TunnelConfigLWIP_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ip-Address-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ike-Identity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* lwip-Counter-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_TunnelConfigLWIP_r13_specs_1 = {
	sizeof(struct TunnelConfigLWIP_r13),
	offsetof(struct TunnelConfigLWIP_r13, _asn_ctx),
	asn_MAP_TunnelConfigLWIP_r13_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_TunnelConfigLWIP_r13_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TunnelConfigLWIP_r13 = {
	"TunnelConfigLWIP-r13",
	"TunnelConfigLWIP-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_TunnelConfigLWIP_r13_tags_1,
	sizeof(asn_DEF_TunnelConfigLWIP_r13_tags_1)
		/sizeof(asn_DEF_TunnelConfigLWIP_r13_tags_1[0]), /* 1 */
	asn_DEF_TunnelConfigLWIP_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_TunnelConfigLWIP_r13_tags_1)
		/sizeof(asn_DEF_TunnelConfigLWIP_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TunnelConfigLWIP_r13_1,
	3,	/* Elements count */
	&asn_SPC_TunnelConfigLWIP_r13_specs_1	/* Additional specs */
};

