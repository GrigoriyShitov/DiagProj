/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UE-EUTRA-Capability-v1800-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_multiNS_PmaxAerial_r18_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_multiNS_PmaxAerial_r18_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_multiNS_PmaxAerial_r18_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_multiNS_PmaxAerial_r18_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_multiNS_PmaxAerial_r18_specs_6 = {
	asn_MAP_multiNS_PmaxAerial_r18_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_multiNS_PmaxAerial_r18_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_multiNS_PmaxAerial_r18_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multiNS_PmaxAerial_r18_6 = {
	"multiNS-PmaxAerial-r18",
	"multiNS-PmaxAerial-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_multiNS_PmaxAerial_r18_tags_6,
	sizeof(asn_DEF_multiNS_PmaxAerial_r18_tags_6)
		/sizeof(asn_DEF_multiNS_PmaxAerial_r18_tags_6[0]) - 1, /* 1 */
	asn_DEF_multiNS_PmaxAerial_r18_tags_6,	/* Same as above */
	sizeof(asn_DEF_multiNS_PmaxAerial_r18_tags_6)
		/sizeof(asn_DEF_multiNS_PmaxAerial_r18_tags_6[0]), /* 2 */
	{ &asn_OER_type_multiNS_PmaxAerial_r18_constr_6, &asn_PER_type_multiNS_PmaxAerial_r18_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_multiNS_PmaxAerial_r18_specs_6	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_10 = {
	sizeof(struct UE_EUTRA_Capability_v1800_IEs__nonCriticalExtension),
	offsetof(struct UE_EUTRA_Capability_v1800_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_10 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_10,
	sizeof(asn_DEF_nonCriticalExtension_tags_10)
		/sizeof(asn_DEF_nonCriticalExtension_tags_10[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_10,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_10)
		/sizeof(asn_DEF_nonCriticalExtension_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1800_IEs_1[] = {
	{ ATF_POINTER, 5, offsetof(struct UE_EUTRA_Capability_v1800_IEs, measParameters_v1800),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasParameters_v1800,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measParameters-v1800"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_EUTRA_Capability_v1800_IEs, rf_Parameters_v1800),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RF_Parameters_v1800,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rf-Parameters-v1800"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_EUTRA_Capability_v1800_IEs, ntn_Parameters_v1800),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NTN_Parameters_v1800,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ntn-Parameters-v1800"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v1800_IEs, sl_Parameters_v1800),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_Parameters_v1800,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-Parameters-v1800"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1800_IEs, multiNS_PmaxAerial_r18),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_multiNS_PmaxAerial_r18_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiNS-PmaxAerial-r18"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1800_IEs, son_Parameters_v1800),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SON_Parameters_v1800,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"son-Parameters-v1800"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1800_IEs, ue_BasedNetwPerfMeasParameters_v1800),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_BasedNetwPerfMeasParameters_v1800,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-BasedNetwPerfMeasParameters-v1800"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1800_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_EUTRA_Capability_v1800_IEs_oms_1[] = { 0, 1, 2, 3, 4, 7 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_Capability_v1800_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_Capability_v1800_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measParameters-v1800 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rf-Parameters-v1800 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ntn-Parameters-v1800 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-Parameters-v1800 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* multiNS-PmaxAerial-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* son-Parameters-v1800 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ue-BasedNetwPerfMeasParameters-v1800 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1800_IEs_specs_1 = {
	sizeof(struct UE_EUTRA_Capability_v1800_IEs),
	offsetof(struct UE_EUTRA_Capability_v1800_IEs, _asn_ctx),
	asn_MAP_UE_EUTRA_Capability_v1800_IEs_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_Capability_v1800_IEs_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1800_IEs = {
	"UE-EUTRA-Capability-v1800-IEs",
	"UE-EUTRA-Capability-v1800-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_Capability_v1800_IEs_tags_1,
	sizeof(asn_DEF_UE_EUTRA_Capability_v1800_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1800_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_Capability_v1800_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_Capability_v1800_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1800_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_EUTRA_Capability_v1800_IEs_1,
	8,	/* Elements count */
	&asn_SPC_UE_EUTRA_Capability_v1800_IEs_specs_1	/* Additional specs */
};

