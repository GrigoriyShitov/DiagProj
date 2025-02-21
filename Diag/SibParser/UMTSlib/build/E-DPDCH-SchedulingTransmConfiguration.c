/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "E-DPDCH-SchedulingTransmConfiguration.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_value_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 38)) {
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
memb_ms2_SchedTransmGrantHARQAlloc_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_primary_Secondary_GrantSelector_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_primary_Secondary_GrantSelector_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_value_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (0..38) */,
	-1};
static asn_per_constraints_t asn_PER_memb_value_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  38 }	/* (0..38) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms2_SchedTransmGrantHARQAlloc_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_memb_ms2_SchedTransmGrantHARQAlloc_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_primary_Secondary_GrantSelector_value2enum_5[] = {
	{ 0,	7,	"primary" },
	{ 1,	9,	"secondary" }
};
static const unsigned int asn_MAP_primary_Secondary_GrantSelector_enum2value_5[] = {
	0,	/* primary(0) */
	1	/* secondary(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_primary_Secondary_GrantSelector_specs_5 = {
	asn_MAP_primary_Secondary_GrantSelector_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_primary_Secondary_GrantSelector_enum2value_5,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_primary_Secondary_GrantSelector_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_primary_Secondary_GrantSelector_5 = {
	"primary-Secondary-GrantSelector",
	"primary-Secondary-GrantSelector",
	&asn_OP_NativeEnumerated,
	asn_DEF_primary_Secondary_GrantSelector_tags_5,
	sizeof(asn_DEF_primary_Secondary_GrantSelector_tags_5)
		/sizeof(asn_DEF_primary_Secondary_GrantSelector_tags_5[0]) - 1, /* 1 */
	asn_DEF_primary_Secondary_GrantSelector_tags_5,	/* Same as above */
	sizeof(asn_DEF_primary_Secondary_GrantSelector_tags_5)
		/sizeof(asn_DEF_primary_Secondary_GrantSelector_tags_5[0]), /* 2 */
	{ &asn_OER_type_primary_Secondary_GrantSelector_constr_5, &asn_PER_type_primary_Secondary_GrantSelector_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_primary_Secondary_GrantSelector_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_servingGrant_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E_DPDCH_SchedulingTransmConfiguration__servingGrant, value),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_value_constr_4, &asn_PER_memb_value_constr_4,  memb_value_constraint_3 },
		0, 0, /* No default value */
		"value"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_DPDCH_SchedulingTransmConfiguration__servingGrant, primary_Secondary_GrantSelector),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_primary_Secondary_GrantSelector_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"primary-Secondary-GrantSelector"
		},
};
static const ber_tlv_tag_t asn_DEF_servingGrant_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_servingGrant_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* value */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* primary-Secondary-GrantSelector */
};
static asn_SEQUENCE_specifics_t asn_SPC_servingGrant_specs_3 = {
	sizeof(struct E_DPDCH_SchedulingTransmConfiguration__servingGrant),
	offsetof(struct E_DPDCH_SchedulingTransmConfiguration__servingGrant, _asn_ctx),
	asn_MAP_servingGrant_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_servingGrant_3 = {
	"servingGrant",
	"servingGrant",
	&asn_OP_SEQUENCE,
	asn_DEF_servingGrant_tags_3,
	sizeof(asn_DEF_servingGrant_tags_3)
		/sizeof(asn_DEF_servingGrant_tags_3[0]) - 1, /* 1 */
	asn_DEF_servingGrant_tags_3,	/* Same as above */
	sizeof(asn_DEF_servingGrant_tags_3)
		/sizeof(asn_DEF_servingGrant_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_servingGrant_3,
	2,	/* Elements count */
	&asn_SPC_servingGrant_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_E_DPDCH_SchedulingTransmConfiguration_1[] = {
	{ ATF_POINTER, 2, offsetof(struct E_DPDCH_SchedulingTransmConfiguration, ms2_SchedTransmGrantHARQAlloc),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_ms2_SchedTransmGrantHARQAlloc_constr_2, &asn_PER_memb_ms2_SchedTransmGrantHARQAlloc_constr_2,  memb_ms2_SchedTransmGrantHARQAlloc_constraint_1 },
		0, 0, /* No default value */
		"ms2-SchedTransmGrantHARQAlloc"
		},
	{ ATF_POINTER, 1, offsetof(struct E_DPDCH_SchedulingTransmConfiguration, servingGrant),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_servingGrant_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servingGrant"
		},
};
static const int asn_MAP_E_DPDCH_SchedulingTransmConfiguration_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_E_DPDCH_SchedulingTransmConfiguration_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E_DPDCH_SchedulingTransmConfiguration_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ms2-SchedTransmGrantHARQAlloc */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* servingGrant */
};
asn_SEQUENCE_specifics_t asn_SPC_E_DPDCH_SchedulingTransmConfiguration_specs_1 = {
	sizeof(struct E_DPDCH_SchedulingTransmConfiguration),
	offsetof(struct E_DPDCH_SchedulingTransmConfiguration, _asn_ctx),
	asn_MAP_E_DPDCH_SchedulingTransmConfiguration_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_E_DPDCH_SchedulingTransmConfiguration_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E_DPDCH_SchedulingTransmConfiguration = {
	"E-DPDCH-SchedulingTransmConfiguration",
	"E-DPDCH-SchedulingTransmConfiguration",
	&asn_OP_SEQUENCE,
	asn_DEF_E_DPDCH_SchedulingTransmConfiguration_tags_1,
	sizeof(asn_DEF_E_DPDCH_SchedulingTransmConfiguration_tags_1)
		/sizeof(asn_DEF_E_DPDCH_SchedulingTransmConfiguration_tags_1[0]), /* 1 */
	asn_DEF_E_DPDCH_SchedulingTransmConfiguration_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_DPDCH_SchedulingTransmConfiguration_tags_1)
		/sizeof(asn_DEF_E_DPDCH_SchedulingTransmConfiguration_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E_DPDCH_SchedulingTransmConfiguration_1,
	2,	/* Elements count */
	&asn_SPC_E_DPDCH_SchedulingTransmConfiguration_specs_1	/* Additional specs */
};

