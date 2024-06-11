/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "PUSCH-TxDuration-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_pusch_TxDuration_r17_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pusch_TxDuration_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_pusch_TxDuration_r17_value2enum_2[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n8" },
	{ 3,	3,	"n16" },
	{ 4,	3,	"n32" },
	{ 5,	3,	"n64" },
	{ 6,	4,	"n128" },
	{ 7,	4,	"n256" }
};
static const unsigned int asn_MAP_pusch_TxDuration_r17_enum2value_2[] = {
	6,	/* n128(6) */
	3,	/* n16(3) */
	0,	/* n2(0) */
	7,	/* n256(7) */
	4,	/* n32(4) */
	1,	/* n4(1) */
	5,	/* n64(5) */
	2	/* n8(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_pusch_TxDuration_r17_specs_2 = {
	asn_MAP_pusch_TxDuration_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_pusch_TxDuration_r17_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pusch_TxDuration_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pusch_TxDuration_r17_2 = {
	"pusch-TxDuration-r17",
	"pusch-TxDuration-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_pusch_TxDuration_r17_tags_2,
	sizeof(asn_DEF_pusch_TxDuration_r17_tags_2)
		/sizeof(asn_DEF_pusch_TxDuration_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_pusch_TxDuration_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_pusch_TxDuration_r17_tags_2)
		/sizeof(asn_DEF_pusch_TxDuration_r17_tags_2[0]), /* 2 */
	{ &asn_OER_type_pusch_TxDuration_r17_constr_2, &asn_PER_type_pusch_TxDuration_r17_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pusch_TxDuration_r17_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PUSCH_TxDuration_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_TxDuration_r17, pusch_TxDuration_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pusch_TxDuration_r17_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-TxDuration-r17"
		},
};
static const ber_tlv_tag_t asn_DEF_PUSCH_TxDuration_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PUSCH_TxDuration_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* pusch-TxDuration-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_PUSCH_TxDuration_r17_specs_1 = {
	sizeof(struct PUSCH_TxDuration_r17),
	offsetof(struct PUSCH_TxDuration_r17, _asn_ctx),
	asn_MAP_PUSCH_TxDuration_r17_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PUSCH_TxDuration_r17 = {
	"PUSCH-TxDuration-r17",
	"PUSCH-TxDuration-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_PUSCH_TxDuration_r17_tags_1,
	sizeof(asn_DEF_PUSCH_TxDuration_r17_tags_1)
		/sizeof(asn_DEF_PUSCH_TxDuration_r17_tags_1[0]), /* 1 */
	asn_DEF_PUSCH_TxDuration_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUSCH_TxDuration_r17_tags_1)
		/sizeof(asn_DEF_PUSCH_TxDuration_r17_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PUSCH_TxDuration_r17_1,
	1,	/* Elements count */
	&asn_SPC_PUSCH_TxDuration_r17_specs_1	/* Additional specs */
};

