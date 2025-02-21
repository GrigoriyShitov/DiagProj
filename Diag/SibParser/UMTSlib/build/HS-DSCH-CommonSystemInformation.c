/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "HS-DSCH-CommonSystemInformation.h"

static int
memb_common_H_RNTI_information_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_common_H_RNTI_information_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_common_H_RNTI_information_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_common_H_RNTI_information_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_common_H_RNTI_information_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_common_H_RNTI_information_7[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_H_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_common_H_RNTI_information_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_common_H_RNTI_information_specs_7 = {
	sizeof(struct HS_DSCH_CommonSystemInformation__common_H_RNTI_information),
	offsetof(struct HS_DSCH_CommonSystemInformation__common_H_RNTI_information, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_common_H_RNTI_information_7 = {
	"common-H-RNTI-information",
	"common-H-RNTI-information",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_common_H_RNTI_information_tags_7,
	sizeof(asn_DEF_common_H_RNTI_information_tags_7)
		/sizeof(asn_DEF_common_H_RNTI_information_tags_7[0]) - 1, /* 1 */
	asn_DEF_common_H_RNTI_information_tags_7,	/* Same as above */
	sizeof(asn_DEF_common_H_RNTI_information_tags_7)
		/sizeof(asn_DEF_common_H_RNTI_information_tags_7[0]), /* 2 */
	{ &asn_OER_type_common_H_RNTI_information_constr_7, &asn_PER_type_common_H_RNTI_information_constr_7, SEQUENCE_OF_constraint },
	asn_MBR_common_H_RNTI_information_7,
	1,	/* Single element */
	&asn_SPC_common_H_RNTI_information_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_HS_DSCH_CommonSystemInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_CommonSystemInformation, ccch_MappingInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonRBMappingInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ccch-MappingInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct HS_DSCH_CommonSystemInformation, srb1_MappingInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonRBMappingInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srb1-MappingInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_CommonSystemInformation, common_MAC_ehs_ReorderingQueueList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Common_MAC_ehs_ReorderingQueueList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"common-MAC-ehs-ReorderingQueueList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_CommonSystemInformation, hs_scch_SystemInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HS_SCCH_SystemInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hs-scch-SystemInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_CommonSystemInformation, harq_SystemInfo),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HARQ_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"harq-SystemInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_CommonSystemInformation, common_H_RNTI_information),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_common_H_RNTI_information_7,
		0,
		{ &asn_OER_memb_common_H_RNTI_information_constr_7, &asn_PER_memb_common_H_RNTI_information_constr_7,  memb_common_H_RNTI_information_constraint_1 },
		0, 0, /* No default value */
		"common-H-RNTI-information"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_CommonSystemInformation, bcchSpecific_H_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_H_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bcchSpecific-H-RNTI"
		},
};
static const int asn_MAP_HS_DSCH_CommonSystemInformation_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_HS_DSCH_CommonSystemInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_HS_DSCH_CommonSystemInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ccch-MappingInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* srb1-MappingInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* common-MAC-ehs-ReorderingQueueList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* hs-scch-SystemInfo */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* harq-SystemInfo */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* common-H-RNTI-information */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* bcchSpecific-H-RNTI */
};
asn_SEQUENCE_specifics_t asn_SPC_HS_DSCH_CommonSystemInformation_specs_1 = {
	sizeof(struct HS_DSCH_CommonSystemInformation),
	offsetof(struct HS_DSCH_CommonSystemInformation, _asn_ctx),
	asn_MAP_HS_DSCH_CommonSystemInformation_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_HS_DSCH_CommonSystemInformation_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_HS_DSCH_CommonSystemInformation = {
	"HS-DSCH-CommonSystemInformation",
	"HS-DSCH-CommonSystemInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_HS_DSCH_CommonSystemInformation_tags_1,
	sizeof(asn_DEF_HS_DSCH_CommonSystemInformation_tags_1)
		/sizeof(asn_DEF_HS_DSCH_CommonSystemInformation_tags_1[0]), /* 1 */
	asn_DEF_HS_DSCH_CommonSystemInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_HS_DSCH_CommonSystemInformation_tags_1)
		/sizeof(asn_DEF_HS_DSCH_CommonSystemInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_HS_DSCH_CommonSystemInformation_1,
	7,	/* Elements count */
	&asn_SPC_HS_DSCH_CommonSystemInformation_specs_1	/* Additional specs */
};

