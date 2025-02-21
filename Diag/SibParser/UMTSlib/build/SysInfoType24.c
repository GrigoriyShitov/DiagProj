/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SysInfoType24.h"

static int
memb_dtchTransmissionBlocked_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_dtchTransmissionBlocked_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	16	/* (SIZE(16..16)) */};
static asn_per_constraints_t asn_PER_memb_dtchTransmissionBlocked_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_4 = {
	sizeof(struct SysInfoType24__nonCriticalExtensions),
	offsetof(struct SysInfoType24__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_4 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtensions_tags_4,
	sizeof(asn_DEF_nonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_4[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_4,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SysInfoType24_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SysInfoType24, dtchTransmissionBlocked),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_dtchTransmissionBlocked_constr_2, &asn_PER_memb_dtchTransmissionBlocked_constr_2,  memb_dtchTransmissionBlocked_constraint_1 },
		0, 0, /* No default value */
		"dtchTransmissionBlocked"
		},
	{ ATF_POINTER, 2, offsetof(struct SysInfoType24, expirationTimeFactor),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExpirationTimeFactor2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"expirationTimeFactor"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType24, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtensions"
		},
};
static const int asn_MAP_SysInfoType24_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_SysInfoType24_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SysInfoType24_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dtchTransmissionBlocked */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* expirationTimeFactor */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_SysInfoType24_specs_1 = {
	sizeof(struct SysInfoType24),
	offsetof(struct SysInfoType24, _asn_ctx),
	asn_MAP_SysInfoType24_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SysInfoType24_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType24 = {
	"SysInfoType24",
	"SysInfoType24",
	&asn_OP_SEQUENCE,
	asn_DEF_SysInfoType24_tags_1,
	sizeof(asn_DEF_SysInfoType24_tags_1)
		/sizeof(asn_DEF_SysInfoType24_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType24_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType24_tags_1)
		/sizeof(asn_DEF_SysInfoType24_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SysInfoType24_1,
	3,	/* Elements count */
	&asn_SPC_SysInfoType24_specs_1	/* Additional specs */
};

