/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "RMTC-ConfigNR-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_rmtc_SubframeOffsetNR_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 639)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_rmtc_PeriodicityNR_r16_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_rmtc_PeriodicityNR_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_measDurationNR_r16_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_measDurationNR_r16_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_refSCS_CP_NR_r16_constr_16 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_refSCS_CP_NR_r16_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_rmtc_BandwidthNR_r17_constr_22 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_rmtc_BandwidthNR_r17_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_measDurationNR_r17_constr_28 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_measDurationNR_r17_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_refSCS_CP_NR_r17_constr_32 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_refSCS_CP_NR_r17_constr_32 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_rmtc_SubframeOffsetNR_r16_constr_8 CC_NOTUSED = {
	{ 2, 1 }	/* (0..639) */,
	-1};
static asn_per_constraints_t asn_PER_memb_rmtc_SubframeOffsetNR_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  639 }	/* (0..639) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_rmtc_PeriodicityNR_r16_value2enum_2[] = {
	{ 0,	4,	"ms40" },
	{ 1,	4,	"ms80" },
	{ 2,	5,	"ms160" },
	{ 3,	5,	"ms320" },
	{ 4,	5,	"ms640" }
};
static const unsigned int asn_MAP_rmtc_PeriodicityNR_r16_enum2value_2[] = {
	2,	/* ms160(2) */
	3,	/* ms320(3) */
	0,	/* ms40(0) */
	4,	/* ms640(4) */
	1	/* ms80(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_rmtc_PeriodicityNR_r16_specs_2 = {
	asn_MAP_rmtc_PeriodicityNR_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_rmtc_PeriodicityNR_r16_enum2value_2,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rmtc_PeriodicityNR_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rmtc_PeriodicityNR_r16_2 = {
	"rmtc-PeriodicityNR-r16",
	"rmtc-PeriodicityNR-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_rmtc_PeriodicityNR_r16_tags_2,
	sizeof(asn_DEF_rmtc_PeriodicityNR_r16_tags_2)
		/sizeof(asn_DEF_rmtc_PeriodicityNR_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_rmtc_PeriodicityNR_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_rmtc_PeriodicityNR_r16_tags_2)
		/sizeof(asn_DEF_rmtc_PeriodicityNR_r16_tags_2[0]), /* 2 */
	{ &asn_OER_type_rmtc_PeriodicityNR_r16_constr_2, &asn_PER_type_rmtc_PeriodicityNR_r16_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rmtc_PeriodicityNR_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_measDurationNR_r16_value2enum_9[] = {
	{ 0,	4,	"sym1" },
	{ 1,	9,	"sym14or12" },
	{ 2,	9,	"sym28or24" },
	{ 3,	9,	"sym42or36" },
	{ 4,	9,	"sym70or60" }
};
static const unsigned int asn_MAP_measDurationNR_r16_enum2value_9[] = {
	0,	/* sym1(0) */
	1,	/* sym14or12(1) */
	2,	/* sym28or24(2) */
	3,	/* sym42or36(3) */
	4	/* sym70or60(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_measDurationNR_r16_specs_9 = {
	asn_MAP_measDurationNR_r16_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_measDurationNR_r16_enum2value_9,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_measDurationNR_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measDurationNR_r16_9 = {
	"measDurationNR-r16",
	"measDurationNR-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_measDurationNR_r16_tags_9,
	sizeof(asn_DEF_measDurationNR_r16_tags_9)
		/sizeof(asn_DEF_measDurationNR_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_measDurationNR_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_measDurationNR_r16_tags_9)
		/sizeof(asn_DEF_measDurationNR_r16_tags_9[0]), /* 2 */
	{ &asn_OER_type_measDurationNR_r16_constr_9, &asn_PER_type_measDurationNR_r16_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_measDurationNR_r16_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_refSCS_CP_NR_r16_value2enum_16[] = {
	{ 0,	5,	"kHz15" },
	{ 1,	5,	"kHz30" },
	{ 2,	9,	"kHz60-NCP" },
	{ 3,	9,	"kHz60-ECP" }
};
static const unsigned int asn_MAP_refSCS_CP_NR_r16_enum2value_16[] = {
	0,	/* kHz15(0) */
	1,	/* kHz30(1) */
	3,	/* kHz60-ECP(3) */
	2	/* kHz60-NCP(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_refSCS_CP_NR_r16_specs_16 = {
	asn_MAP_refSCS_CP_NR_r16_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_refSCS_CP_NR_r16_enum2value_16,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_refSCS_CP_NR_r16_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_refSCS_CP_NR_r16_16 = {
	"refSCS-CP-NR-r16",
	"refSCS-CP-NR-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_refSCS_CP_NR_r16_tags_16,
	sizeof(asn_DEF_refSCS_CP_NR_r16_tags_16)
		/sizeof(asn_DEF_refSCS_CP_NR_r16_tags_16[0]) - 1, /* 1 */
	asn_DEF_refSCS_CP_NR_r16_tags_16,	/* Same as above */
	sizeof(asn_DEF_refSCS_CP_NR_r16_tags_16)
		/sizeof(asn_DEF_refSCS_CP_NR_r16_tags_16[0]), /* 2 */
	{ &asn_OER_type_refSCS_CP_NR_r16_constr_16, &asn_PER_type_refSCS_CP_NR_r16_constr_16, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_refSCS_CP_NR_r16_specs_16	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_rmtc_BandwidthNR_r17_value2enum_22[] = {
	{ 0,	6,	"mhz100" },
	{ 1,	6,	"mhz400" },
	{ 2,	6,	"mhz800" },
	{ 3,	7,	"mhz1600" },
	{ 4,	7,	"mhz2000" }
};
static const unsigned int asn_MAP_rmtc_BandwidthNR_r17_enum2value_22[] = {
	0,	/* mhz100(0) */
	3,	/* mhz1600(3) */
	4,	/* mhz2000(4) */
	1,	/* mhz400(1) */
	2	/* mhz800(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_rmtc_BandwidthNR_r17_specs_22 = {
	asn_MAP_rmtc_BandwidthNR_r17_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_rmtc_BandwidthNR_r17_enum2value_22,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rmtc_BandwidthNR_r17_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rmtc_BandwidthNR_r17_22 = {
	"rmtc-BandwidthNR-r17",
	"rmtc-BandwidthNR-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_rmtc_BandwidthNR_r17_tags_22,
	sizeof(asn_DEF_rmtc_BandwidthNR_r17_tags_22)
		/sizeof(asn_DEF_rmtc_BandwidthNR_r17_tags_22[0]) - 1, /* 1 */
	asn_DEF_rmtc_BandwidthNR_r17_tags_22,	/* Same as above */
	sizeof(asn_DEF_rmtc_BandwidthNR_r17_tags_22)
		/sizeof(asn_DEF_rmtc_BandwidthNR_r17_tags_22[0]), /* 2 */
	{ &asn_OER_type_rmtc_BandwidthNR_r17_constr_22, &asn_PER_type_rmtc_BandwidthNR_r17_constr_22, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rmtc_BandwidthNR_r17_specs_22	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_measDurationNR_r17_value2enum_28[] = {
	{ 0,	6,	"sym140" },
	{ 1,	6,	"sym560" },
	{ 2,	7,	"sym1120" }
};
static const unsigned int asn_MAP_measDurationNR_r17_enum2value_28[] = {
	2,	/* sym1120(2) */
	0,	/* sym140(0) */
	1	/* sym560(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_measDurationNR_r17_specs_28 = {
	asn_MAP_measDurationNR_r17_value2enum_28,	/* "tag" => N; sorted by tag */
	asn_MAP_measDurationNR_r17_enum2value_28,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_measDurationNR_r17_tags_28[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measDurationNR_r17_28 = {
	"measDurationNR-r17",
	"measDurationNR-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_measDurationNR_r17_tags_28,
	sizeof(asn_DEF_measDurationNR_r17_tags_28)
		/sizeof(asn_DEF_measDurationNR_r17_tags_28[0]) - 1, /* 1 */
	asn_DEF_measDurationNR_r17_tags_28,	/* Same as above */
	sizeof(asn_DEF_measDurationNR_r17_tags_28)
		/sizeof(asn_DEF_measDurationNR_r17_tags_28[0]), /* 2 */
	{ &asn_OER_type_measDurationNR_r17_constr_28, &asn_PER_type_measDurationNR_r17_constr_28, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_measDurationNR_r17_specs_28	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_refSCS_CP_NR_r17_value2enum_32[] = {
	{ 0,	6,	"kHz120" },
	{ 1,	6,	"kHz480" },
	{ 2,	6,	"kHz960" }
};
static const unsigned int asn_MAP_refSCS_CP_NR_r17_enum2value_32[] = {
	0,	/* kHz120(0) */
	1,	/* kHz480(1) */
	2	/* kHz960(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_refSCS_CP_NR_r17_specs_32 = {
	asn_MAP_refSCS_CP_NR_r17_value2enum_32,	/* "tag" => N; sorted by tag */
	asn_MAP_refSCS_CP_NR_r17_enum2value_32,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_refSCS_CP_NR_r17_tags_32[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_refSCS_CP_NR_r17_32 = {
	"refSCS-CP-NR-r17",
	"refSCS-CP-NR-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_refSCS_CP_NR_r17_tags_32,
	sizeof(asn_DEF_refSCS_CP_NR_r17_tags_32)
		/sizeof(asn_DEF_refSCS_CP_NR_r17_tags_32[0]) - 1, /* 1 */
	asn_DEF_refSCS_CP_NR_r17_tags_32,	/* Same as above */
	sizeof(asn_DEF_refSCS_CP_NR_r17_tags_32)
		/sizeof(asn_DEF_refSCS_CP_NR_r17_tags_32[0]), /* 2 */
	{ &asn_OER_type_refSCS_CP_NR_r17_constr_32, &asn_PER_type_refSCS_CP_NR_r17_constr_32, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_refSCS_CP_NR_r17_specs_32	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RMTC_ConfigNR_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RMTC_ConfigNR_r16, rmtc_PeriodicityNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rmtc_PeriodicityNR_r16_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rmtc-PeriodicityNR-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct RMTC_ConfigNR_r16, rmtc_SubframeOffsetNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_rmtc_SubframeOffsetNR_r16_constr_8, &asn_PER_memb_rmtc_SubframeOffsetNR_r16_constr_8,  memb_rmtc_SubframeOffsetNR_r16_constraint_1 },
		0, 0, /* No default value */
		"rmtc-SubframeOffsetNR-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RMTC_ConfigNR_r16, measDurationNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_measDurationNR_r16_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measDurationNR-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RMTC_ConfigNR_r16, rmtc_FrequencyNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rmtc-FrequencyNR-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RMTC_ConfigNR_r16, refSCS_CP_NR_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_refSCS_CP_NR_r16_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"refSCS-CP-NR-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct RMTC_ConfigNR_r16, rmtc_BandwidthNR_r17),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rmtc_BandwidthNR_r17_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rmtc-BandwidthNR-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct RMTC_ConfigNR_r16, measDurationNR_r17),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_measDurationNR_r17_28,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measDurationNR-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct RMTC_ConfigNR_r16, refSCS_CP_NR_r17),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_refSCS_CP_NR_r17_32,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"refSCS-CP-NR-r17"
		},
};
static const int asn_MAP_RMTC_ConfigNR_r16_oms_1[] = { 1, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_RMTC_ConfigNR_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RMTC_ConfigNR_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rmtc-PeriodicityNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rmtc-SubframeOffsetNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measDurationNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rmtc-FrequencyNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* refSCS-CP-NR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* rmtc-BandwidthNR-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* measDurationNR-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* refSCS-CP-NR-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_RMTC_ConfigNR_r16_specs_1 = {
	sizeof(struct RMTC_ConfigNR_r16),
	offsetof(struct RMTC_ConfigNR_r16, _asn_ctx),
	asn_MAP_RMTC_ConfigNR_r16_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_RMTC_ConfigNR_r16_oms_1,	/* Optional members */
	1, 3,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RMTC_ConfigNR_r16 = {
	"RMTC-ConfigNR-r16",
	"RMTC-ConfigNR-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_RMTC_ConfigNR_r16_tags_1,
	sizeof(asn_DEF_RMTC_ConfigNR_r16_tags_1)
		/sizeof(asn_DEF_RMTC_ConfigNR_r16_tags_1[0]), /* 1 */
	asn_DEF_RMTC_ConfigNR_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_RMTC_ConfigNR_r16_tags_1)
		/sizeof(asn_DEF_RMTC_ConfigNR_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RMTC_ConfigNR_r16_1,
	8,	/* Elements count */
	&asn_SPC_RMTC_ConfigNR_r16_specs_1	/* Additional specs */
};

