/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "MRDC-AssistanceInfo-r15.h"

static int
memb_affectedCarrierFreqCombInfoListMRDC_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 128)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_affectedCarrierFreqCombInfoListMRDC_v1610_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 128)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_affectedCarrierFreqCombInfoListMRDC_r15_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..128)) */};
static asn_per_constraints_t asn_PER_type_affectedCarrierFreqCombInfoListMRDC_r15_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 7,  7,  1,  128 }	/* (SIZE(1..128)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_affectedCarrierFreqCombInfoListMRDC_v1610_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..128)) */};
static asn_per_constraints_t asn_PER_type_affectedCarrierFreqCombInfoListMRDC_v1610_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 7,  7,  1,  128 }	/* (SIZE(1..128)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_affectedCarrierFreqCombInfoListMRDC_r15_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..128)) */};
static asn_per_constraints_t asn_PER_memb_affectedCarrierFreqCombInfoListMRDC_r15_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 7,  7,  1,  128 }	/* (SIZE(1..128)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_affectedCarrierFreqCombInfoListMRDC_v1610_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..128)) */};
static asn_per_constraints_t asn_PER_memb_affectedCarrierFreqCombInfoListMRDC_v1610_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 7,  7,  1,  128 }	/* (SIZE(1..128)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_affectedCarrierFreqCombInfoListMRDC_r15_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AffectedCarrierFreqCombInfoMRDC_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_affectedCarrierFreqCombInfoListMRDC_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_affectedCarrierFreqCombInfoListMRDC_r15_specs_2 = {
	sizeof(struct MRDC_AssistanceInfo_r15__affectedCarrierFreqCombInfoListMRDC_r15),
	offsetof(struct MRDC_AssistanceInfo_r15__affectedCarrierFreqCombInfoListMRDC_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_affectedCarrierFreqCombInfoListMRDC_r15_2 = {
	"affectedCarrierFreqCombInfoListMRDC-r15",
	"affectedCarrierFreqCombInfoListMRDC-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_affectedCarrierFreqCombInfoListMRDC_r15_tags_2,
	sizeof(asn_DEF_affectedCarrierFreqCombInfoListMRDC_r15_tags_2)
		/sizeof(asn_DEF_affectedCarrierFreqCombInfoListMRDC_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_affectedCarrierFreqCombInfoListMRDC_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_affectedCarrierFreqCombInfoListMRDC_r15_tags_2)
		/sizeof(asn_DEF_affectedCarrierFreqCombInfoListMRDC_r15_tags_2[0]), /* 2 */
	{ &asn_OER_type_affectedCarrierFreqCombInfoListMRDC_r15_constr_2, &asn_PER_type_affectedCarrierFreqCombInfoListMRDC_r15_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_affectedCarrierFreqCombInfoListMRDC_r15_2,
	1,	/* Single element */
	&asn_SPC_affectedCarrierFreqCombInfoListMRDC_r15_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_affectedCarrierFreqCombInfoListMRDC_v1610_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_VictimSystemType_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_affectedCarrierFreqCombInfoListMRDC_v1610_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_affectedCarrierFreqCombInfoListMRDC_v1610_specs_5 = {
	sizeof(struct MRDC_AssistanceInfo_r15__affectedCarrierFreqCombInfoListMRDC_v1610),
	offsetof(struct MRDC_AssistanceInfo_r15__affectedCarrierFreqCombInfoListMRDC_v1610, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_affectedCarrierFreqCombInfoListMRDC_v1610_5 = {
	"affectedCarrierFreqCombInfoListMRDC-v1610",
	"affectedCarrierFreqCombInfoListMRDC-v1610",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_affectedCarrierFreqCombInfoListMRDC_v1610_tags_5,
	sizeof(asn_DEF_affectedCarrierFreqCombInfoListMRDC_v1610_tags_5)
		/sizeof(asn_DEF_affectedCarrierFreqCombInfoListMRDC_v1610_tags_5[0]) - 1, /* 1 */
	asn_DEF_affectedCarrierFreqCombInfoListMRDC_v1610_tags_5,	/* Same as above */
	sizeof(asn_DEF_affectedCarrierFreqCombInfoListMRDC_v1610_tags_5)
		/sizeof(asn_DEF_affectedCarrierFreqCombInfoListMRDC_v1610_tags_5[0]), /* 2 */
	{ &asn_OER_type_affectedCarrierFreqCombInfoListMRDC_v1610_constr_5, &asn_PER_type_affectedCarrierFreqCombInfoListMRDC_v1610_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_affectedCarrierFreqCombInfoListMRDC_v1610_5,
	1,	/* Single element */
	&asn_SPC_affectedCarrierFreqCombInfoListMRDC_v1610_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MRDC_AssistanceInfo_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MRDC_AssistanceInfo_r15, affectedCarrierFreqCombInfoListMRDC_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_affectedCarrierFreqCombInfoListMRDC_r15_2,
		0,
		{ &asn_OER_memb_affectedCarrierFreqCombInfoListMRDC_r15_constr_2, &asn_PER_memb_affectedCarrierFreqCombInfoListMRDC_r15_constr_2,  memb_affectedCarrierFreqCombInfoListMRDC_r15_constraint_1 },
		0, 0, /* No default value */
		"affectedCarrierFreqCombInfoListMRDC-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct MRDC_AssistanceInfo_r15, affectedCarrierFreqCombInfoListMRDC_v1610),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_affectedCarrierFreqCombInfoListMRDC_v1610_5,
		0,
		{ &asn_OER_memb_affectedCarrierFreqCombInfoListMRDC_v1610_constr_5, &asn_PER_memb_affectedCarrierFreqCombInfoListMRDC_v1610_constr_5,  memb_affectedCarrierFreqCombInfoListMRDC_v1610_constraint_1 },
		0, 0, /* No default value */
		"affectedCarrierFreqCombInfoListMRDC-v1610"
		},
};
static const int asn_MAP_MRDC_AssistanceInfo_r15_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_MRDC_AssistanceInfo_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MRDC_AssistanceInfo_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* affectedCarrierFreqCombInfoListMRDC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* affectedCarrierFreqCombInfoListMRDC-v1610 */
};
asn_SEQUENCE_specifics_t asn_SPC_MRDC_AssistanceInfo_r15_specs_1 = {
	sizeof(struct MRDC_AssistanceInfo_r15),
	offsetof(struct MRDC_AssistanceInfo_r15, _asn_ctx),
	asn_MAP_MRDC_AssistanceInfo_r15_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MRDC_AssistanceInfo_r15_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MRDC_AssistanceInfo_r15 = {
	"MRDC-AssistanceInfo-r15",
	"MRDC-AssistanceInfo-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_MRDC_AssistanceInfo_r15_tags_1,
	sizeof(asn_DEF_MRDC_AssistanceInfo_r15_tags_1)
		/sizeof(asn_DEF_MRDC_AssistanceInfo_r15_tags_1[0]), /* 1 */
	asn_DEF_MRDC_AssistanceInfo_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_MRDC_AssistanceInfo_r15_tags_1)
		/sizeof(asn_DEF_MRDC_AssistanceInfo_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MRDC_AssistanceInfo_r15_1,
	2,	/* Elements count */
	&asn_SPC_MRDC_AssistanceInfo_r15_specs_1	/* Additional specs */
};

