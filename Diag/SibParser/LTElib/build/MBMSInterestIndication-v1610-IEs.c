/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "MBMSInterestIndication-v1610-IEs.h"

static int
memb_mbms_ROM_InfoList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 15)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_mbms_ROM_InfoList_r16_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..15)) */};
static asn_per_constraints_t asn_PER_type_mbms_ROM_InfoList_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (SIZE(1..15)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_mbms_ROM_InfoList_r16_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..15)) */};
static asn_per_constraints_t asn_PER_memb_mbms_ROM_InfoList_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (SIZE(1..15)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_mbms_ROM_InfoList_r16_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_MBMS_ROM_Info_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_mbms_ROM_InfoList_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_mbms_ROM_InfoList_r16_specs_2 = {
	sizeof(struct MBMSInterestIndication_v1610_IEs__mbms_ROM_InfoList_r16),
	offsetof(struct MBMSInterestIndication_v1610_IEs__mbms_ROM_InfoList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mbms_ROM_InfoList_r16_2 = {
	"mbms-ROM-InfoList-r16",
	"mbms-ROM-InfoList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_mbms_ROM_InfoList_r16_tags_2,
	sizeof(asn_DEF_mbms_ROM_InfoList_r16_tags_2)
		/sizeof(asn_DEF_mbms_ROM_InfoList_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_mbms_ROM_InfoList_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_mbms_ROM_InfoList_r16_tags_2)
		/sizeof(asn_DEF_mbms_ROM_InfoList_r16_tags_2[0]), /* 2 */
	{ &asn_OER_type_mbms_ROM_InfoList_r16_constr_2, &asn_PER_type_mbms_ROM_InfoList_r16_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_mbms_ROM_InfoList_r16_2,
	1,	/* Single element */
	&asn_SPC_mbms_ROM_InfoList_r16_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_4 = {
	sizeof(struct MBMSInterestIndication_v1610_IEs__nonCriticalExtension),
	offsetof(struct MBMSInterestIndication_v1610_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_4 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_4,
	sizeof(asn_DEF_nonCriticalExtension_tags_4)
		/sizeof(asn_DEF_nonCriticalExtension_tags_4[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_4,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_4)
		/sizeof(asn_DEF_nonCriticalExtension_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MBMSInterestIndication_v1610_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct MBMSInterestIndication_v1610_IEs, mbms_ROM_InfoList_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_mbms_ROM_InfoList_r16_2,
		0,
		{ &asn_OER_memb_mbms_ROM_InfoList_r16_constr_2, &asn_PER_memb_mbms_ROM_InfoList_r16_constr_2,  memb_mbms_ROM_InfoList_r16_constraint_1 },
		0, 0, /* No default value */
		"mbms-ROM-InfoList-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMSInterestIndication_v1610_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_MBMSInterestIndication_v1610_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_MBMSInterestIndication_v1610_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBMSInterestIndication_v1610_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbms-ROM-InfoList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_MBMSInterestIndication_v1610_IEs_specs_1 = {
	sizeof(struct MBMSInterestIndication_v1610_IEs),
	offsetof(struct MBMSInterestIndication_v1610_IEs, _asn_ctx),
	asn_MAP_MBMSInterestIndication_v1610_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MBMSInterestIndication_v1610_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBMSInterestIndication_v1610_IEs = {
	"MBMSInterestIndication-v1610-IEs",
	"MBMSInterestIndication-v1610-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_MBMSInterestIndication_v1610_IEs_tags_1,
	sizeof(asn_DEF_MBMSInterestIndication_v1610_IEs_tags_1)
		/sizeof(asn_DEF_MBMSInterestIndication_v1610_IEs_tags_1[0]), /* 1 */
	asn_DEF_MBMSInterestIndication_v1610_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMSInterestIndication_v1610_IEs_tags_1)
		/sizeof(asn_DEF_MBMSInterestIndication_v1610_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MBMSInterestIndication_v1610_IEs_1,
	2,	/* Elements count */
	&asn_SPC_MBMSInterestIndication_v1610_IEs_specs_1	/* Additional specs */
};

