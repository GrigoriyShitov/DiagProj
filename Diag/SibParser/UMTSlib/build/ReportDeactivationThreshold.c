/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "ReportDeactivationThreshold.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_ReportDeactivationThreshold_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ReportDeactivationThreshold_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ReportDeactivationThreshold_value2enum_1[] = {
	{ 0,	13,	"notApplicable" },
	{ 1,	2,	"t1" },
	{ 2,	2,	"t2" },
	{ 3,	2,	"t3" },
	{ 4,	2,	"t4" },
	{ 5,	2,	"t5" },
	{ 6,	2,	"t6" },
	{ 7,	2,	"t7" }
};
static const unsigned int asn_MAP_ReportDeactivationThreshold_enum2value_1[] = {
	0,	/* notApplicable(0) */
	1,	/* t1(1) */
	2,	/* t2(2) */
	3,	/* t3(3) */
	4,	/* t4(4) */
	5,	/* t5(5) */
	6,	/* t6(6) */
	7	/* t7(7) */
};
const asn_INTEGER_specifics_t asn_SPC_ReportDeactivationThreshold_specs_1 = {
	asn_MAP_ReportDeactivationThreshold_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_ReportDeactivationThreshold_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ReportDeactivationThreshold_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ReportDeactivationThreshold = {
	"ReportDeactivationThreshold",
	"ReportDeactivationThreshold",
	&asn_OP_NativeEnumerated,
	asn_DEF_ReportDeactivationThreshold_tags_1,
	sizeof(asn_DEF_ReportDeactivationThreshold_tags_1)
		/sizeof(asn_DEF_ReportDeactivationThreshold_tags_1[0]), /* 1 */
	asn_DEF_ReportDeactivationThreshold_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReportDeactivationThreshold_tags_1)
		/sizeof(asn_DEF_ReportDeactivationThreshold_tags_1[0]), /* 1 */
	{ &asn_OER_type_ReportDeactivationThreshold_constr_1, &asn_PER_type_ReportDeactivationThreshold_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ReportDeactivationThreshold_specs_1	/* Additional specs */
};

