/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "RRCConnectionSetup-v690ext-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_postVerificationPeriod_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_postVerificationPeriod_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_postVerificationPeriod_value2enum_3[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_postVerificationPeriod_enum2value_3[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_postVerificationPeriod_specs_3 = {
	asn_MAP_postVerificationPeriod_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_postVerificationPeriod_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_postVerificationPeriod_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_postVerificationPeriod_3 = {
	"postVerificationPeriod",
	"postVerificationPeriod",
	&asn_OP_NativeEnumerated,
	asn_DEF_postVerificationPeriod_tags_3,
	sizeof(asn_DEF_postVerificationPeriod_tags_3)
		/sizeof(asn_DEF_postVerificationPeriod_tags_3[0]) - 1, /* 1 */
	asn_DEF_postVerificationPeriod_tags_3,	/* Same as above */
	sizeof(asn_DEF_postVerificationPeriod_tags_3)
		/sizeof(asn_DEF_postVerificationPeriod_tags_3[0]), /* 2 */
	{ &asn_OER_type_postVerificationPeriod_constr_3, &asn_PER_type_postVerificationPeriod_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_postVerificationPeriod_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCConnectionSetup_v690ext_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionSetup_v690ext_IEs, beaconPLEst),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BEACON_PL_Est,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"beaconPLEst"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetup_v690ext_IEs, postVerificationPeriod),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_postVerificationPeriod_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"postVerificationPeriod"
		},
};
static const int asn_MAP_RRCConnectionSetup_v690ext_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionSetup_v690ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionSetup_v690ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* beaconPLEst */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* postVerificationPeriod */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetup_v690ext_IEs_specs_1 = {
	sizeof(struct RRCConnectionSetup_v690ext_IEs),
	offsetof(struct RRCConnectionSetup_v690ext_IEs, _asn_ctx),
	asn_MAP_RRCConnectionSetup_v690ext_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RRCConnectionSetup_v690ext_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetup_v690ext_IEs = {
	"RRCConnectionSetup-v690ext-IEs",
	"RRCConnectionSetup-v690ext-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionSetup_v690ext_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionSetup_v690ext_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetup_v690ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionSetup_v690ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionSetup_v690ext_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetup_v690ext_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionSetup_v690ext_IEs_1,
	2,	/* Elements count */
	&asn_SPC_RRCConnectionSetup_v690ext_IEs_specs_1	/* Additional specs */
};

