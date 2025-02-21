/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "PNBSCH-Allocation-r4.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_numberOfRepetitionsPerSFNPeriod_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_numberOfRepetitionsPerSFNPeriod_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  23 }	/* (0..23) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_numberOfRepetitionsPerSFNPeriod_value2enum_2[] = {
	{ 0,	2,	"c2" },
	{ 1,	2,	"c3" },
	{ 2,	2,	"c4" },
	{ 3,	2,	"c5" },
	{ 4,	2,	"c6" },
	{ 5,	2,	"c7" },
	{ 6,	2,	"c8" },
	{ 7,	2,	"c9" },
	{ 8,	3,	"c10" },
	{ 9,	3,	"c12" },
	{ 10,	3,	"c14" },
	{ 11,	3,	"c16" },
	{ 12,	3,	"c18" },
	{ 13,	3,	"c20" },
	{ 14,	3,	"c24" },
	{ 15,	3,	"c28" },
	{ 16,	3,	"c32" },
	{ 17,	3,	"c36" },
	{ 18,	3,	"c40" },
	{ 19,	3,	"c48" },
	{ 20,	3,	"c56" },
	{ 21,	3,	"c64" },
	{ 22,	3,	"c72" },
	{ 23,	3,	"c80" }
};
static const unsigned int asn_MAP_numberOfRepetitionsPerSFNPeriod_enum2value_2[] = {
	8,	/* c10(8) */
	9,	/* c12(9) */
	10,	/* c14(10) */
	11,	/* c16(11) */
	12,	/* c18(12) */
	0,	/* c2(0) */
	13,	/* c20(13) */
	14,	/* c24(14) */
	15,	/* c28(15) */
	1,	/* c3(1) */
	16,	/* c32(16) */
	17,	/* c36(17) */
	2,	/* c4(2) */
	18,	/* c40(18) */
	19,	/* c48(19) */
	3,	/* c5(3) */
	20,	/* c56(20) */
	4,	/* c6(4) */
	21,	/* c64(21) */
	5,	/* c7(5) */
	22,	/* c72(22) */
	6,	/* c8(6) */
	23,	/* c80(23) */
	7	/* c9(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_numberOfRepetitionsPerSFNPeriod_specs_2 = {
	asn_MAP_numberOfRepetitionsPerSFNPeriod_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_numberOfRepetitionsPerSFNPeriod_enum2value_2,	/* N => "tag"; sorted by N */
	24,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_numberOfRepetitionsPerSFNPeriod_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numberOfRepetitionsPerSFNPeriod_2 = {
	"numberOfRepetitionsPerSFNPeriod",
	"numberOfRepetitionsPerSFNPeriod",
	&asn_OP_NativeEnumerated,
	asn_DEF_numberOfRepetitionsPerSFNPeriod_tags_2,
	sizeof(asn_DEF_numberOfRepetitionsPerSFNPeriod_tags_2)
		/sizeof(asn_DEF_numberOfRepetitionsPerSFNPeriod_tags_2[0]) - 1, /* 1 */
	asn_DEF_numberOfRepetitionsPerSFNPeriod_tags_2,	/* Same as above */
	sizeof(asn_DEF_numberOfRepetitionsPerSFNPeriod_tags_2)
		/sizeof(asn_DEF_numberOfRepetitionsPerSFNPeriod_tags_2[0]), /* 2 */
	{ &asn_OER_type_numberOfRepetitionsPerSFNPeriod_constr_2, &asn_PER_type_numberOfRepetitionsPerSFNPeriod_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numberOfRepetitionsPerSFNPeriod_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PNBSCH_Allocation_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PNBSCH_Allocation_r4, numberOfRepetitionsPerSFNPeriod),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numberOfRepetitionsPerSFNPeriod_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numberOfRepetitionsPerSFNPeriod"
		},
};
static const ber_tlv_tag_t asn_DEF_PNBSCH_Allocation_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PNBSCH_Allocation_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* numberOfRepetitionsPerSFNPeriod */
};
asn_SEQUENCE_specifics_t asn_SPC_PNBSCH_Allocation_r4_specs_1 = {
	sizeof(struct PNBSCH_Allocation_r4),
	offsetof(struct PNBSCH_Allocation_r4, _asn_ctx),
	asn_MAP_PNBSCH_Allocation_r4_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PNBSCH_Allocation_r4 = {
	"PNBSCH-Allocation-r4",
	"PNBSCH-Allocation-r4",
	&asn_OP_SEQUENCE,
	asn_DEF_PNBSCH_Allocation_r4_tags_1,
	sizeof(asn_DEF_PNBSCH_Allocation_r4_tags_1)
		/sizeof(asn_DEF_PNBSCH_Allocation_r4_tags_1[0]), /* 1 */
	asn_DEF_PNBSCH_Allocation_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_PNBSCH_Allocation_r4_tags_1)
		/sizeof(asn_DEF_PNBSCH_Allocation_r4_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PNBSCH_Allocation_r4_1,
	1,	/* Elements count */
	&asn_SPC_PNBSCH_Allocation_r4_specs_1	/* Additional specs */
};

