/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "SysInfoType11-v590ext-IEs.h"

static int
memb_newIntraFrequencyCellInfoList_v590ext_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 32)) {
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
memb_newInterFrequencyCellInfoList_v590ext_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 32)) {
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
memb_newInterRATCellInfoList_v590ext_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 32)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_newIntraFrequencyCellInfoList_v590ext_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_type_newIntraFrequencyCellInfoList_v590ext_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_newInterFrequencyCellInfoList_v590ext_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_type_newInterFrequencyCellInfoList_v590ext_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_newInterRATCellInfoList_v590ext_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_type_newInterRATCellInfoList_v590ext_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_newIntraFrequencyCellInfoList_v590ext_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_memb_newIntraFrequencyCellInfoList_v590ext_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_newInterFrequencyCellInfoList_v590ext_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_memb_newInterFrequencyCellInfoList_v590ext_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_newInterRATCellInfoList_v590ext_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_memb_newInterRATCellInfoList_v590ext_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_newIntraFrequencyCellInfoList_v590ext_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CellSelectReselectInfo_v590ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_newIntraFrequencyCellInfoList_v590ext_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_newIntraFrequencyCellInfoList_v590ext_specs_2 = {
	sizeof(struct SysInfoType11_v590ext_IEs__newIntraFrequencyCellInfoList_v590ext),
	offsetof(struct SysInfoType11_v590ext_IEs__newIntraFrequencyCellInfoList_v590ext, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_newIntraFrequencyCellInfoList_v590ext_2 = {
	"newIntraFrequencyCellInfoList-v590ext",
	"newIntraFrequencyCellInfoList-v590ext",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_newIntraFrequencyCellInfoList_v590ext_tags_2,
	sizeof(asn_DEF_newIntraFrequencyCellInfoList_v590ext_tags_2)
		/sizeof(asn_DEF_newIntraFrequencyCellInfoList_v590ext_tags_2[0]) - 1, /* 1 */
	asn_DEF_newIntraFrequencyCellInfoList_v590ext_tags_2,	/* Same as above */
	sizeof(asn_DEF_newIntraFrequencyCellInfoList_v590ext_tags_2)
		/sizeof(asn_DEF_newIntraFrequencyCellInfoList_v590ext_tags_2[0]), /* 2 */
	{ &asn_OER_type_newIntraFrequencyCellInfoList_v590ext_constr_2, &asn_PER_type_newIntraFrequencyCellInfoList_v590ext_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_newIntraFrequencyCellInfoList_v590ext_2,
	1,	/* Single element */
	&asn_SPC_newIntraFrequencyCellInfoList_v590ext_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_newInterFrequencyCellInfoList_v590ext_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CellSelectReselectInfo_v590ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_newInterFrequencyCellInfoList_v590ext_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_newInterFrequencyCellInfoList_v590ext_specs_4 = {
	sizeof(struct SysInfoType11_v590ext_IEs__newInterFrequencyCellInfoList_v590ext),
	offsetof(struct SysInfoType11_v590ext_IEs__newInterFrequencyCellInfoList_v590ext, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_newInterFrequencyCellInfoList_v590ext_4 = {
	"newInterFrequencyCellInfoList-v590ext",
	"newInterFrequencyCellInfoList-v590ext",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_newInterFrequencyCellInfoList_v590ext_tags_4,
	sizeof(asn_DEF_newInterFrequencyCellInfoList_v590ext_tags_4)
		/sizeof(asn_DEF_newInterFrequencyCellInfoList_v590ext_tags_4[0]) - 1, /* 1 */
	asn_DEF_newInterFrequencyCellInfoList_v590ext_tags_4,	/* Same as above */
	sizeof(asn_DEF_newInterFrequencyCellInfoList_v590ext_tags_4)
		/sizeof(asn_DEF_newInterFrequencyCellInfoList_v590ext_tags_4[0]), /* 2 */
	{ &asn_OER_type_newInterFrequencyCellInfoList_v590ext_constr_4, &asn_PER_type_newInterFrequencyCellInfoList_v590ext_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_newInterFrequencyCellInfoList_v590ext_4,
	1,	/* Single element */
	&asn_SPC_newInterFrequencyCellInfoList_v590ext_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_newInterRATCellInfoList_v590ext_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CellSelectReselectInfo_v590ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_newInterRATCellInfoList_v590ext_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_newInterRATCellInfoList_v590ext_specs_6 = {
	sizeof(struct SysInfoType11_v590ext_IEs__newInterRATCellInfoList_v590ext),
	offsetof(struct SysInfoType11_v590ext_IEs__newInterRATCellInfoList_v590ext, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_newInterRATCellInfoList_v590ext_6 = {
	"newInterRATCellInfoList-v590ext",
	"newInterRATCellInfoList-v590ext",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_newInterRATCellInfoList_v590ext_tags_6,
	sizeof(asn_DEF_newInterRATCellInfoList_v590ext_tags_6)
		/sizeof(asn_DEF_newInterRATCellInfoList_v590ext_tags_6[0]) - 1, /* 1 */
	asn_DEF_newInterRATCellInfoList_v590ext_tags_6,	/* Same as above */
	sizeof(asn_DEF_newInterRATCellInfoList_v590ext_tags_6)
		/sizeof(asn_DEF_newInterRATCellInfoList_v590ext_tags_6[0]), /* 2 */
	{ &asn_OER_type_newInterRATCellInfoList_v590ext_constr_6, &asn_PER_type_newInterRATCellInfoList_v590ext_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_newInterRATCellInfoList_v590ext_6,
	1,	/* Single element */
	&asn_SPC_newInterRATCellInfoList_v590ext_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SysInfoType11_v590ext_IEs_1[] = {
	{ ATF_POINTER, 6, offsetof(struct SysInfoType11_v590ext_IEs, newIntraFrequencyCellInfoList_v590ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_newIntraFrequencyCellInfoList_v590ext_2,
		0,
		{ &asn_OER_memb_newIntraFrequencyCellInfoList_v590ext_constr_2, &asn_PER_memb_newIntraFrequencyCellInfoList_v590ext_constr_2,  memb_newIntraFrequencyCellInfoList_v590ext_constraint_1 },
		0, 0, /* No default value */
		"newIntraFrequencyCellInfoList-v590ext"
		},
	{ ATF_POINTER, 5, offsetof(struct SysInfoType11_v590ext_IEs, newInterFrequencyCellInfoList_v590ext),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_newInterFrequencyCellInfoList_v590ext_4,
		0,
		{ &asn_OER_memb_newInterFrequencyCellInfoList_v590ext_constr_4, &asn_PER_memb_newInterFrequencyCellInfoList_v590ext_constr_4,  memb_newInterFrequencyCellInfoList_v590ext_constraint_1 },
		0, 0, /* No default value */
		"newInterFrequencyCellInfoList-v590ext"
		},
	{ ATF_POINTER, 4, offsetof(struct SysInfoType11_v590ext_IEs, newInterRATCellInfoList_v590ext),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_newInterRATCellInfoList_v590ext_6,
		0,
		{ &asn_OER_memb_newInterRATCellInfoList_v590ext_constr_6, &asn_PER_memb_newInterRATCellInfoList_v590ext_constr_6,  memb_newInterRATCellInfoList_v590ext_constraint_1 },
		0, 0, /* No default value */
		"newInterRATCellInfoList-v590ext"
		},
	{ ATF_POINTER, 3, offsetof(struct SysInfoType11_v590ext_IEs, intraFreqEventCriteriaList_v590ext),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Intra_FreqEventCriteriaList_v590ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqEventCriteriaList-v590ext"
		},
	{ ATF_POINTER, 2, offsetof(struct SysInfoType11_v590ext_IEs, intraFreqReportingCriteria_1b_r5),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqReportingCriteria_1b_r5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqReportingCriteria-1b-r5"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType11_v590ext_IEs, intraFreqEvent_1d_r5),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqEvent_1d_r5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqEvent-1d-r5"
		},
};
static const int asn_MAP_SysInfoType11_v590ext_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_SysInfoType11_v590ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SysInfoType11_v590ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* newIntraFrequencyCellInfoList-v590ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* newInterFrequencyCellInfoList-v590ext */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* newInterRATCellInfoList-v590ext */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* intraFreqEventCriteriaList-v590ext */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* intraFreqReportingCriteria-1b-r5 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* intraFreqEvent-1d-r5 */
};
asn_SEQUENCE_specifics_t asn_SPC_SysInfoType11_v590ext_IEs_specs_1 = {
	sizeof(struct SysInfoType11_v590ext_IEs),
	offsetof(struct SysInfoType11_v590ext_IEs, _asn_ctx),
	asn_MAP_SysInfoType11_v590ext_IEs_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_SysInfoType11_v590ext_IEs_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType11_v590ext_IEs = {
	"SysInfoType11-v590ext-IEs",
	"SysInfoType11-v590ext-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_SysInfoType11_v590ext_IEs_tags_1,
	sizeof(asn_DEF_SysInfoType11_v590ext_IEs_tags_1)
		/sizeof(asn_DEF_SysInfoType11_v590ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType11_v590ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType11_v590ext_IEs_tags_1)
		/sizeof(asn_DEF_SysInfoType11_v590ext_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SysInfoType11_v590ext_IEs_1,
	6,	/* Elements count */
	&asn_SPC_SysInfoType11_v590ext_IEs_specs_1	/* Additional specs */
};

