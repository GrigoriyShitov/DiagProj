/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "BandCombinationParameters-v1610.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_bandParameterList_v1610_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 64)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_bandParameterList_v1610_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..64)) */};
static asn_per_constraints_t asn_PER_type_bandParameterList_v1610_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_interFreqAsyncDAPS_r16_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_interFreqAsyncDAPS_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_interFreqMultiUL_TransmissionDAPS_r16_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_interFreqMultiUL_TransmissionDAPS_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_bandParameterList_v1610_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..64)) */};
static asn_per_constraints_t asn_PER_memb_bandParameterList_v1610_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_bandParameterList_v1610_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_BandParameters_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_bandParameterList_v1610_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_bandParameterList_v1610_specs_3 = {
	sizeof(struct BandCombinationParameters_v1610__bandParameterList_v1610),
	offsetof(struct BandCombinationParameters_v1610__bandParameterList_v1610, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bandParameterList_v1610_3 = {
	"bandParameterList-v1610",
	"bandParameterList-v1610",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_bandParameterList_v1610_tags_3,
	sizeof(asn_DEF_bandParameterList_v1610_tags_3)
		/sizeof(asn_DEF_bandParameterList_v1610_tags_3[0]) - 1, /* 1 */
	asn_DEF_bandParameterList_v1610_tags_3,	/* Same as above */
	sizeof(asn_DEF_bandParameterList_v1610_tags_3)
		/sizeof(asn_DEF_bandParameterList_v1610_tags_3[0]), /* 2 */
	{ &asn_OER_type_bandParameterList_v1610_constr_3, &asn_PER_type_bandParameterList_v1610_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_bandParameterList_v1610_3,
	1,	/* Single element */
	&asn_SPC_bandParameterList_v1610_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_interFreqAsyncDAPS_r16_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_interFreqAsyncDAPS_r16_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_interFreqAsyncDAPS_r16_specs_6 = {
	asn_MAP_interFreqAsyncDAPS_r16_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_interFreqAsyncDAPS_r16_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_interFreqAsyncDAPS_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_interFreqAsyncDAPS_r16_6 = {
	"interFreqAsyncDAPS-r16",
	"interFreqAsyncDAPS-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_interFreqAsyncDAPS_r16_tags_6,
	sizeof(asn_DEF_interFreqAsyncDAPS_r16_tags_6)
		/sizeof(asn_DEF_interFreqAsyncDAPS_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_interFreqAsyncDAPS_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_interFreqAsyncDAPS_r16_tags_6)
		/sizeof(asn_DEF_interFreqAsyncDAPS_r16_tags_6[0]), /* 2 */
	{ &asn_OER_type_interFreqAsyncDAPS_r16_constr_6, &asn_PER_type_interFreqAsyncDAPS_r16_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_interFreqAsyncDAPS_r16_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_interFreqMultiUL_TransmissionDAPS_r16_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_interFreqMultiUL_TransmissionDAPS_r16_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_interFreqMultiUL_TransmissionDAPS_r16_specs_8 = {
	asn_MAP_interFreqMultiUL_TransmissionDAPS_r16_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_interFreqMultiUL_TransmissionDAPS_r16_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_interFreqMultiUL_TransmissionDAPS_r16_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_interFreqMultiUL_TransmissionDAPS_r16_8 = {
	"interFreqMultiUL-TransmissionDAPS-r16",
	"interFreqMultiUL-TransmissionDAPS-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_interFreqMultiUL_TransmissionDAPS_r16_tags_8,
	sizeof(asn_DEF_interFreqMultiUL_TransmissionDAPS_r16_tags_8)
		/sizeof(asn_DEF_interFreqMultiUL_TransmissionDAPS_r16_tags_8[0]) - 1, /* 1 */
	asn_DEF_interFreqMultiUL_TransmissionDAPS_r16_tags_8,	/* Same as above */
	sizeof(asn_DEF_interFreqMultiUL_TransmissionDAPS_r16_tags_8)
		/sizeof(asn_DEF_interFreqMultiUL_TransmissionDAPS_r16_tags_8[0]), /* 2 */
	{ &asn_OER_type_interFreqMultiUL_TransmissionDAPS_r16_constr_8, &asn_PER_type_interFreqMultiUL_TransmissionDAPS_r16_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_interFreqMultiUL_TransmissionDAPS_r16_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_interFreqDAPS_r16_5[] = {
	{ ATF_POINTER, 2, offsetof(struct BandCombinationParameters_v1610__interFreqDAPS_r16, interFreqAsyncDAPS_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_interFreqAsyncDAPS_r16_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqAsyncDAPS-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct BandCombinationParameters_v1610__interFreqDAPS_r16, interFreqMultiUL_TransmissionDAPS_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_interFreqMultiUL_TransmissionDAPS_r16_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqMultiUL-TransmissionDAPS-r16"
		},
};
static const int asn_MAP_interFreqDAPS_r16_oms_5[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_interFreqDAPS_r16_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_interFreqDAPS_r16_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqAsyncDAPS-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interFreqMultiUL-TransmissionDAPS-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_interFreqDAPS_r16_specs_5 = {
	sizeof(struct BandCombinationParameters_v1610__interFreqDAPS_r16),
	offsetof(struct BandCombinationParameters_v1610__interFreqDAPS_r16, _asn_ctx),
	asn_MAP_interFreqDAPS_r16_tag2el_5,
	2,	/* Count of tags in the map */
	asn_MAP_interFreqDAPS_r16_oms_5,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_interFreqDAPS_r16_5 = {
	"interFreqDAPS-r16",
	"interFreqDAPS-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_interFreqDAPS_r16_tags_5,
	sizeof(asn_DEF_interFreqDAPS_r16_tags_5)
		/sizeof(asn_DEF_interFreqDAPS_r16_tags_5[0]) - 1, /* 1 */
	asn_DEF_interFreqDAPS_r16_tags_5,	/* Same as above */
	sizeof(asn_DEF_interFreqDAPS_r16_tags_5)
		/sizeof(asn_DEF_interFreqDAPS_r16_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_interFreqDAPS_r16_5,
	2,	/* Elements count */
	&asn_SPC_interFreqDAPS_r16_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BandCombinationParameters_v1610_1[] = {
	{ ATF_POINTER, 3, offsetof(struct BandCombinationParameters_v1610, measGapInfoNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasGapInfoNR_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measGapInfoNR-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct BandCombinationParameters_v1610, bandParameterList_v1610),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_bandParameterList_v1610_3,
		0,
		{ &asn_OER_memb_bandParameterList_v1610_constr_3, &asn_PER_memb_bandParameterList_v1610_constr_3,  memb_bandParameterList_v1610_constraint_1 },
		0, 0, /* No default value */
		"bandParameterList-v1610"
		},
	{ ATF_POINTER, 1, offsetof(struct BandCombinationParameters_v1610, interFreqDAPS_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_interFreqDAPS_r16_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqDAPS-r16"
		},
};
static const int asn_MAP_BandCombinationParameters_v1610_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_BandCombinationParameters_v1610_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandCombinationParameters_v1610_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measGapInfoNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bandParameterList-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* interFreqDAPS-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_BandCombinationParameters_v1610_specs_1 = {
	sizeof(struct BandCombinationParameters_v1610),
	offsetof(struct BandCombinationParameters_v1610, _asn_ctx),
	asn_MAP_BandCombinationParameters_v1610_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_BandCombinationParameters_v1610_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandCombinationParameters_v1610 = {
	"BandCombinationParameters-v1610",
	"BandCombinationParameters-v1610",
	&asn_OP_SEQUENCE,
	asn_DEF_BandCombinationParameters_v1610_tags_1,
	sizeof(asn_DEF_BandCombinationParameters_v1610_tags_1)
		/sizeof(asn_DEF_BandCombinationParameters_v1610_tags_1[0]), /* 1 */
	asn_DEF_BandCombinationParameters_v1610_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandCombinationParameters_v1610_tags_1)
		/sizeof(asn_DEF_BandCombinationParameters_v1610_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BandCombinationParameters_v1610_1,
	3,	/* Elements count */
	&asn_SPC_BandCombinationParameters_v1610_specs_1	/* Additional specs */
};

