/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "NetworkAssistedGANSS-Supported-List-v860ext.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_sbas_Ids_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_gANSS_SignalIds_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_oer_constraints_t asn_OER_type_non_native_AD_choices_supported_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_non_native_AD_choices_supported_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sbas_Ids_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_memb_sbas_Ids_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_gANSS_SignalIds_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_memb_gANSS_SignalIds_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_NetworkAssistedGANSS_Supported_List_v860ext_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
asn_per_constraints_t asn_PER_type_NetworkAssistedGANSS_Supported_List_v860ext_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_non_native_AD_choices_supported_value2enum_5[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_non_native_AD_choices_supported_enum2value_5[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_non_native_AD_choices_supported_specs_5 = {
	asn_MAP_non_native_AD_choices_supported_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_non_native_AD_choices_supported_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_non_native_AD_choices_supported_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_non_native_AD_choices_supported_5 = {
	"non-native-AD-choices-supported",
	"non-native-AD-choices-supported",
	&asn_OP_NativeEnumerated,
	asn_DEF_non_native_AD_choices_supported_tags_5,
	sizeof(asn_DEF_non_native_AD_choices_supported_tags_5)
		/sizeof(asn_DEF_non_native_AD_choices_supported_tags_5[0]) - 1, /* 1 */
	asn_DEF_non_native_AD_choices_supported_tags_5,	/* Same as above */
	sizeof(asn_DEF_non_native_AD_choices_supported_tags_5)
		/sizeof(asn_DEF_non_native_AD_choices_supported_tags_5[0]), /* 2 */
	{ &asn_OER_type_non_native_AD_choices_supported_constr_5, &asn_PER_type_non_native_AD_choices_supported_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_non_native_AD_choices_supported_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_POINTER, 3, offsetof(struct NetworkAssistedGANSS_Supported_List_v860ext__Member, sbas_Ids),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_sbas_Ids_constr_3, &asn_PER_memb_sbas_Ids_constr_3,  memb_sbas_Ids_constraint_2 },
		0, 0, /* No default value */
		"sbas-Ids"
		},
	{ ATF_POINTER, 2, offsetof(struct NetworkAssistedGANSS_Supported_List_v860ext__Member, gANSS_SignalIds),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_gANSS_SignalIds_constr_4, &asn_PER_memb_gANSS_SignalIds_constr_4,  memb_gANSS_SignalIds_constraint_2 },
		0, 0, /* No default value */
		"gANSS-SignalIds"
		},
	{ ATF_POINTER, 1, offsetof(struct NetworkAssistedGANSS_Supported_List_v860ext__Member, non_native_AD_choices_supported),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_non_native_AD_choices_supported_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"non-native-AD-choices-supported"
		},
};
static const int asn_MAP_Member_oms_2[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sbas-Ids */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gANSS-SignalIds */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* non-native-AD-choices-supported */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct NetworkAssistedGANSS_Supported_List_v860ext__Member),
	offsetof(struct NetworkAssistedGANSS_Supported_List_v860ext__Member, _asn_ctx),
	asn_MAP_Member_tag2el_2,
	3,	/* Count of tags in the map */
	asn_MAP_Member_oms_2,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
	&asn_OP_SEQUENCE,
	asn_DEF_Member_tags_2,
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	asn_DEF_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Member_2,
	3,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NetworkAssistedGANSS_Supported_List_v860ext_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NetworkAssistedGANSS_Supported_List_v860ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_NetworkAssistedGANSS_Supported_List_v860ext_specs_1 = {
	sizeof(struct NetworkAssistedGANSS_Supported_List_v860ext),
	offsetof(struct NetworkAssistedGANSS_Supported_List_v860ext, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_NetworkAssistedGANSS_Supported_List_v860ext = {
	"NetworkAssistedGANSS-Supported-List-v860ext",
	"NetworkAssistedGANSS-Supported-List-v860ext",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NetworkAssistedGANSS_Supported_List_v860ext_tags_1,
	sizeof(asn_DEF_NetworkAssistedGANSS_Supported_List_v860ext_tags_1)
		/sizeof(asn_DEF_NetworkAssistedGANSS_Supported_List_v860ext_tags_1[0]), /* 1 */
	asn_DEF_NetworkAssistedGANSS_Supported_List_v860ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_NetworkAssistedGANSS_Supported_List_v860ext_tags_1)
		/sizeof(asn_DEF_NetworkAssistedGANSS_Supported_List_v860ext_tags_1[0]), /* 1 */
	{ &asn_OER_type_NetworkAssistedGANSS_Supported_List_v860ext_constr_1, &asn_PER_type_NetworkAssistedGANSS_Supported_List_v860ext_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_NetworkAssistedGANSS_Supported_List_v860ext_1,
	1,	/* Single element */
	&asn_SPC_NetworkAssistedGANSS_Supported_List_v860ext_specs_1	/* Additional specs */
};

