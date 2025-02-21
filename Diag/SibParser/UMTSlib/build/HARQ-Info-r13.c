/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "HARQ-Info-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_memorySize_constraint_19(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
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
memb_additionalMemorySizesForMIMO_constraint_19(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
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
memb_additionalMemorySizesThirdMIMOStream_constraint_19(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
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
memb_additionalMemorySizesFourthMIMOStream_constraint_19(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_numberOfProcesses_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_numberOfProcesses_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  13 }	/* (0..13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_memorySize_constr_20 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_type_memorySize_constr_20 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_additionalMemorySizesForMIMO_constr_22 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_type_additionalMemorySizesForMIMO_constr_22 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_additionalMemorySizesThirdMIMOStream_constr_24 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_type_additionalMemorySizesThirdMIMOStream_constr_24 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_additionalMemorySizesFourthMIMOStream_constr_26 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_type_additionalMemorySizesFourthMIMOStream_constr_26 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_memorySize_constr_20 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_memb_memorySize_constr_20 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_additionalMemorySizesForMIMO_constr_22 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_memb_additionalMemorySizesForMIMO_constr_22 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_additionalMemorySizesThirdMIMOStream_constr_24 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_memb_additionalMemorySizesThirdMIMOStream_constr_24 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_additionalMemorySizesFourthMIMOStream_constr_26 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_memb_additionalMemorySizesFourthMIMOStream_constr_26 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_memoryPartitioning_constr_17 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_memoryPartitioning_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_blindHARQRetransmissionsForHSDPA_constr_28 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_blindHARQRetransmissionsForHSDPA_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_numberOfProcesses_value2enum_2[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n5" },
	{ 5,	2,	"n6" },
	{ 6,	2,	"n7" },
	{ 7,	2,	"n8" },
	{ 8,	3,	"n12" },
	{ 9,	3,	"n14" },
	{ 10,	3,	"n16" },
	{ 11,	3,	"n24" },
	{ 12,	3,	"n28" },
	{ 13,	3,	"n32" }
};
static const unsigned int asn_MAP_numberOfProcesses_enum2value_2[] = {
	0,	/* n1(0) */
	8,	/* n12(8) */
	9,	/* n14(9) */
	10,	/* n16(10) */
	1,	/* n2(1) */
	11,	/* n24(11) */
	12,	/* n28(12) */
	2,	/* n3(2) */
	13,	/* n32(13) */
	3,	/* n4(3) */
	4,	/* n5(4) */
	5,	/* n6(5) */
	6,	/* n7(6) */
	7	/* n8(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_numberOfProcesses_specs_2 = {
	asn_MAP_numberOfProcesses_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_numberOfProcesses_enum2value_2,	/* N => "tag"; sorted by N */
	14,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_numberOfProcesses_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numberOfProcesses_2 = {
	"numberOfProcesses",
	"numberOfProcesses",
	&asn_OP_NativeEnumerated,
	asn_DEF_numberOfProcesses_tags_2,
	sizeof(asn_DEF_numberOfProcesses_tags_2)
		/sizeof(asn_DEF_numberOfProcesses_tags_2[0]) - 1, /* 1 */
	asn_DEF_numberOfProcesses_tags_2,	/* Same as above */
	sizeof(asn_DEF_numberOfProcesses_tags_2)
		/sizeof(asn_DEF_numberOfProcesses_tags_2[0]), /* 2 */
	{ &asn_OER_type_numberOfProcesses_constr_2, &asn_PER_type_numberOfProcesses_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numberOfProcesses_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_memorySize_20[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_HARQMemorySize,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_memorySize_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_memorySize_specs_20 = {
	sizeof(struct HARQ_Info_r13__memoryPartitioning__explicit__memorySize),
	offsetof(struct HARQ_Info_r13__memoryPartitioning__explicit__memorySize, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_memorySize_20 = {
	"memorySize",
	"memorySize",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_memorySize_tags_20,
	sizeof(asn_DEF_memorySize_tags_20)
		/sizeof(asn_DEF_memorySize_tags_20[0]) - 1, /* 1 */
	asn_DEF_memorySize_tags_20,	/* Same as above */
	sizeof(asn_DEF_memorySize_tags_20)
		/sizeof(asn_DEF_memorySize_tags_20[0]), /* 2 */
	{ &asn_OER_type_memorySize_constr_20, &asn_PER_type_memorySize_constr_20, SEQUENCE_OF_constraint },
	asn_MBR_memorySize_20,
	1,	/* Single element */
	&asn_SPC_memorySize_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_additionalMemorySizesForMIMO_22[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_HARQMemorySize,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_additionalMemorySizesForMIMO_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_additionalMemorySizesForMIMO_specs_22 = {
	sizeof(struct HARQ_Info_r13__memoryPartitioning__explicit__additionalMemorySizesForMIMO),
	offsetof(struct HARQ_Info_r13__memoryPartitioning__explicit__additionalMemorySizesForMIMO, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_additionalMemorySizesForMIMO_22 = {
	"additionalMemorySizesForMIMO",
	"additionalMemorySizesForMIMO",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_additionalMemorySizesForMIMO_tags_22,
	sizeof(asn_DEF_additionalMemorySizesForMIMO_tags_22)
		/sizeof(asn_DEF_additionalMemorySizesForMIMO_tags_22[0]) - 1, /* 1 */
	asn_DEF_additionalMemorySizesForMIMO_tags_22,	/* Same as above */
	sizeof(asn_DEF_additionalMemorySizesForMIMO_tags_22)
		/sizeof(asn_DEF_additionalMemorySizesForMIMO_tags_22[0]), /* 2 */
	{ &asn_OER_type_additionalMemorySizesForMIMO_constr_22, &asn_PER_type_additionalMemorySizesForMIMO_constr_22, SEQUENCE_OF_constraint },
	asn_MBR_additionalMemorySizesForMIMO_22,
	1,	/* Single element */
	&asn_SPC_additionalMemorySizesForMIMO_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_additionalMemorySizesThirdMIMOStream_24[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_HARQMemorySize,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_additionalMemorySizesThirdMIMOStream_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_additionalMemorySizesThirdMIMOStream_specs_24 = {
	sizeof(struct HARQ_Info_r13__memoryPartitioning__explicit__additionalMemorySizesThirdMIMOStream),
	offsetof(struct HARQ_Info_r13__memoryPartitioning__explicit__additionalMemorySizesThirdMIMOStream, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_additionalMemorySizesThirdMIMOStream_24 = {
	"additionalMemorySizesThirdMIMOStream",
	"additionalMemorySizesThirdMIMOStream",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_additionalMemorySizesThirdMIMOStream_tags_24,
	sizeof(asn_DEF_additionalMemorySizesThirdMIMOStream_tags_24)
		/sizeof(asn_DEF_additionalMemorySizesThirdMIMOStream_tags_24[0]) - 1, /* 1 */
	asn_DEF_additionalMemorySizesThirdMIMOStream_tags_24,	/* Same as above */
	sizeof(asn_DEF_additionalMemorySizesThirdMIMOStream_tags_24)
		/sizeof(asn_DEF_additionalMemorySizesThirdMIMOStream_tags_24[0]), /* 2 */
	{ &asn_OER_type_additionalMemorySizesThirdMIMOStream_constr_24, &asn_PER_type_additionalMemorySizesThirdMIMOStream_constr_24, SEQUENCE_OF_constraint },
	asn_MBR_additionalMemorySizesThirdMIMOStream_24,
	1,	/* Single element */
	&asn_SPC_additionalMemorySizesThirdMIMOStream_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_additionalMemorySizesFourthMIMOStream_26[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_HARQMemorySize,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_additionalMemorySizesFourthMIMOStream_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_additionalMemorySizesFourthMIMOStream_specs_26 = {
	sizeof(struct HARQ_Info_r13__memoryPartitioning__explicit__additionalMemorySizesFourthMIMOStream),
	offsetof(struct HARQ_Info_r13__memoryPartitioning__explicit__additionalMemorySizesFourthMIMOStream, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_additionalMemorySizesFourthMIMOStream_26 = {
	"additionalMemorySizesFourthMIMOStream",
	"additionalMemorySizesFourthMIMOStream",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_additionalMemorySizesFourthMIMOStream_tags_26,
	sizeof(asn_DEF_additionalMemorySizesFourthMIMOStream_tags_26)
		/sizeof(asn_DEF_additionalMemorySizesFourthMIMOStream_tags_26[0]) - 1, /* 1 */
	asn_DEF_additionalMemorySizesFourthMIMOStream_tags_26,	/* Same as above */
	sizeof(asn_DEF_additionalMemorySizesFourthMIMOStream_tags_26)
		/sizeof(asn_DEF_additionalMemorySizesFourthMIMOStream_tags_26[0]), /* 2 */
	{ &asn_OER_type_additionalMemorySizesFourthMIMOStream_constr_26, &asn_PER_type_additionalMemorySizesFourthMIMOStream_constr_26, SEQUENCE_OF_constraint },
	asn_MBR_additionalMemorySizesFourthMIMOStream_26,
	1,	/* Single element */
	&asn_SPC_additionalMemorySizesFourthMIMOStream_specs_26	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_explicit_19[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HARQ_Info_r13__memoryPartitioning__explicit, memorySize),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_memorySize_20,
		0,
		{ &asn_OER_memb_memorySize_constr_20, &asn_PER_memb_memorySize_constr_20,  memb_memorySize_constraint_19 },
		0, 0, /* No default value */
		"memorySize"
		},
	{ ATF_POINTER, 3, offsetof(struct HARQ_Info_r13__memoryPartitioning__explicit, additionalMemorySizesForMIMO),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_additionalMemorySizesForMIMO_22,
		0,
		{ &asn_OER_memb_additionalMemorySizesForMIMO_constr_22, &asn_PER_memb_additionalMemorySizesForMIMO_constr_22,  memb_additionalMemorySizesForMIMO_constraint_19 },
		0, 0, /* No default value */
		"additionalMemorySizesForMIMO"
		},
	{ ATF_POINTER, 2, offsetof(struct HARQ_Info_r13__memoryPartitioning__explicit, additionalMemorySizesThirdMIMOStream),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_additionalMemorySizesThirdMIMOStream_24,
		0,
		{ &asn_OER_memb_additionalMemorySizesThirdMIMOStream_constr_24, &asn_PER_memb_additionalMemorySizesThirdMIMOStream_constr_24,  memb_additionalMemorySizesThirdMIMOStream_constraint_19 },
		0, 0, /* No default value */
		"additionalMemorySizesThirdMIMOStream"
		},
	{ ATF_POINTER, 1, offsetof(struct HARQ_Info_r13__memoryPartitioning__explicit, additionalMemorySizesFourthMIMOStream),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_additionalMemorySizesFourthMIMOStream_26,
		0,
		{ &asn_OER_memb_additionalMemorySizesFourthMIMOStream_constr_26, &asn_PER_memb_additionalMemorySizesFourthMIMOStream_constr_26,  memb_additionalMemorySizesFourthMIMOStream_constraint_19 },
		0, 0, /* No default value */
		"additionalMemorySizesFourthMIMOStream"
		},
};
static const int asn_MAP_explicit_oms_19[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_explicit_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_explicit_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* memorySize */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* additionalMemorySizesForMIMO */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* additionalMemorySizesThirdMIMOStream */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* additionalMemorySizesFourthMIMOStream */
};
static asn_SEQUENCE_specifics_t asn_SPC_explicit_specs_19 = {
	sizeof(struct HARQ_Info_r13__memoryPartitioning__explicit),
	offsetof(struct HARQ_Info_r13__memoryPartitioning__explicit, _asn_ctx),
	asn_MAP_explicit_tag2el_19,
	4,	/* Count of tags in the map */
	asn_MAP_explicit_oms_19,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_explicit_19 = {
	"explicit",
	"explicit",
	&asn_OP_SEQUENCE,
	asn_DEF_explicit_tags_19,
	sizeof(asn_DEF_explicit_tags_19)
		/sizeof(asn_DEF_explicit_tags_19[0]) - 1, /* 1 */
	asn_DEF_explicit_tags_19,	/* Same as above */
	sizeof(asn_DEF_explicit_tags_19)
		/sizeof(asn_DEF_explicit_tags_19[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_explicit_19,
	4,	/* Elements count */
	&asn_SPC_explicit_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_memoryPartitioning_17[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HARQ_Info_r13__memoryPartitioning, choice.implicit),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"implicit"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HARQ_Info_r13__memoryPartitioning, choice.Explicit),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_explicit_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"explicit"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_memoryPartitioning_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* implicit */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* explicit */
};
static asn_CHOICE_specifics_t asn_SPC_memoryPartitioning_specs_17 = {
	sizeof(struct HARQ_Info_r13__memoryPartitioning),
	offsetof(struct HARQ_Info_r13__memoryPartitioning, _asn_ctx),
	offsetof(struct HARQ_Info_r13__memoryPartitioning, present),
	sizeof(((struct HARQ_Info_r13__memoryPartitioning *)0)->present),
	asn_MAP_memoryPartitioning_tag2el_17,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_memoryPartitioning_17 = {
	"memoryPartitioning",
	"memoryPartitioning",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_memoryPartitioning_constr_17, &asn_PER_type_memoryPartitioning_constr_17, CHOICE_constraint },
	asn_MBR_memoryPartitioning_17,
	2,	/* Elements count */
	&asn_SPC_memoryPartitioning_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_blindHARQRetransmissionsForHSDPA_value2enum_28[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_blindHARQRetransmissionsForHSDPA_enum2value_28[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_blindHARQRetransmissionsForHSDPA_specs_28 = {
	asn_MAP_blindHARQRetransmissionsForHSDPA_value2enum_28,	/* "tag" => N; sorted by tag */
	asn_MAP_blindHARQRetransmissionsForHSDPA_enum2value_28,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_blindHARQRetransmissionsForHSDPA_tags_28[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_blindHARQRetransmissionsForHSDPA_28 = {
	"blindHARQRetransmissionsForHSDPA",
	"blindHARQRetransmissionsForHSDPA",
	&asn_OP_NativeEnumerated,
	asn_DEF_blindHARQRetransmissionsForHSDPA_tags_28,
	sizeof(asn_DEF_blindHARQRetransmissionsForHSDPA_tags_28)
		/sizeof(asn_DEF_blindHARQRetransmissionsForHSDPA_tags_28[0]) - 1, /* 1 */
	asn_DEF_blindHARQRetransmissionsForHSDPA_tags_28,	/* Same as above */
	sizeof(asn_DEF_blindHARQRetransmissionsForHSDPA_tags_28)
		/sizeof(asn_DEF_blindHARQRetransmissionsForHSDPA_tags_28[0]), /* 2 */
	{ &asn_OER_type_blindHARQRetransmissionsForHSDPA_constr_28, &asn_PER_type_blindHARQRetransmissionsForHSDPA_constr_28, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_blindHARQRetransmissionsForHSDPA_specs_28	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_HARQ_Info_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HARQ_Info_r13, numberOfProcesses),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numberOfProcesses_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numberOfProcesses"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HARQ_Info_r13, memoryPartitioning),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_memoryPartitioning_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"memoryPartitioning"
		},
	{ ATF_POINTER, 1, offsetof(struct HARQ_Info_r13, blindHARQRetransmissionsForHSDPA),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_blindHARQRetransmissionsForHSDPA_28,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"blindHARQRetransmissionsForHSDPA"
		},
};
static const int asn_MAP_HARQ_Info_r13_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_HARQ_Info_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_HARQ_Info_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* numberOfProcesses */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* memoryPartitioning */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* blindHARQRetransmissionsForHSDPA */
};
asn_SEQUENCE_specifics_t asn_SPC_HARQ_Info_r13_specs_1 = {
	sizeof(struct HARQ_Info_r13),
	offsetof(struct HARQ_Info_r13, _asn_ctx),
	asn_MAP_HARQ_Info_r13_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_HARQ_Info_r13_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_HARQ_Info_r13 = {
	"HARQ-Info-r13",
	"HARQ-Info-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_HARQ_Info_r13_tags_1,
	sizeof(asn_DEF_HARQ_Info_r13_tags_1)
		/sizeof(asn_DEF_HARQ_Info_r13_tags_1[0]), /* 1 */
	asn_DEF_HARQ_Info_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_HARQ_Info_r13_tags_1)
		/sizeof(asn_DEF_HARQ_Info_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_HARQ_Info_r13_1,
	3,	/* Elements count */
	&asn_SPC_HARQ_Info_r13_specs_1	/* Additional specs */
};

