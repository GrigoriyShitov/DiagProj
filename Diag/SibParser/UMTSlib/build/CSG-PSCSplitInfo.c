/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "CSG-PSCSplitInfo.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_startPSC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_pscRange2Offset_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_numberOfPSCs_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_numberOfPSCs_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_startPSC_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..63) */,
	-1};
static asn_per_constraints_t asn_PER_memb_startPSC_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_pscRange2Offset_constr_20 CC_NOTUSED = {
	{ 1, 1 }	/* (1..63) */,
	-1};
static asn_per_constraints_t asn_PER_memb_pscRange2Offset_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (1..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_numberOfPSCs_value2enum_3[] = {
	{ 0,	4,	"psc5" },
	{ 1,	5,	"psc10" },
	{ 2,	5,	"psc15" },
	{ 3,	5,	"psc20" },
	{ 4,	5,	"psc30" },
	{ 5,	5,	"psc40" },
	{ 6,	5,	"psc50" },
	{ 7,	5,	"psc64" },
	{ 8,	5,	"psc80" },
	{ 9,	6,	"psc120" },
	{ 10,	6,	"psc160" },
	{ 11,	6,	"psc256" },
	{ 12,	10,	"alltheRest" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_numberOfPSCs_enum2value_3[] = {
	12,	/* alltheRest(12) */
	1,	/* psc10(1) */
	9,	/* psc120(9) */
	2,	/* psc15(2) */
	10,	/* psc160(10) */
	3,	/* psc20(3) */
	11,	/* psc256(11) */
	4,	/* psc30(4) */
	5,	/* psc40(5) */
	0,	/* psc5(0) */
	6,	/* psc50(6) */
	7,	/* psc64(7) */
	8,	/* psc80(8) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13	/* spare3(13) */
};
static const asn_INTEGER_specifics_t asn_SPC_numberOfPSCs_specs_3 = {
	asn_MAP_numberOfPSCs_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_numberOfPSCs_enum2value_3,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_numberOfPSCs_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numberOfPSCs_3 = {
	"numberOfPSCs",
	"numberOfPSCs",
	&asn_OP_NativeEnumerated,
	asn_DEF_numberOfPSCs_tags_3,
	sizeof(asn_DEF_numberOfPSCs_tags_3)
		/sizeof(asn_DEF_numberOfPSCs_tags_3[0]) - 1, /* 1 */
	asn_DEF_numberOfPSCs_tags_3,	/* Same as above */
	sizeof(asn_DEF_numberOfPSCs_tags_3)
		/sizeof(asn_DEF_numberOfPSCs_tags_3[0]), /* 2 */
	{ &asn_OER_type_numberOfPSCs_constr_3, &asn_PER_type_numberOfPSCs_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numberOfPSCs_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CSG_PSCSplitInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSG_PSCSplitInfo, startPSC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_startPSC_constr_2, &asn_PER_memb_startPSC_constr_2,  memb_startPSC_constraint_1 },
		0, 0, /* No default value */
		"startPSC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSG_PSCSplitInfo, numberOfPSCs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numberOfPSCs_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numberOfPSCs"
		},
	{ ATF_POINTER, 1, offsetof(struct CSG_PSCSplitInfo, pscRange2Offset),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_pscRange2Offset_constr_20, &asn_PER_memb_pscRange2Offset_constr_20,  memb_pscRange2Offset_constraint_1 },
		0, 0, /* No default value */
		"pscRange2Offset"
		},
};
static const int asn_MAP_CSG_PSCSplitInfo_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_CSG_PSCSplitInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CSG_PSCSplitInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* startPSC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* numberOfPSCs */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* pscRange2Offset */
};
asn_SEQUENCE_specifics_t asn_SPC_CSG_PSCSplitInfo_specs_1 = {
	sizeof(struct CSG_PSCSplitInfo),
	offsetof(struct CSG_PSCSplitInfo, _asn_ctx),
	asn_MAP_CSG_PSCSplitInfo_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_CSG_PSCSplitInfo_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CSG_PSCSplitInfo = {
	"CSG-PSCSplitInfo",
	"CSG-PSCSplitInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_CSG_PSCSplitInfo_tags_1,
	sizeof(asn_DEF_CSG_PSCSplitInfo_tags_1)
		/sizeof(asn_DEF_CSG_PSCSplitInfo_tags_1[0]), /* 1 */
	asn_DEF_CSG_PSCSplitInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSG_PSCSplitInfo_tags_1)
		/sizeof(asn_DEF_CSG_PSCSplitInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CSG_PSCSplitInfo_1,
	3,	/* Elements count */
	&asn_SPC_CSG_PSCSplitInfo_specs_1	/* Additional specs */
};

