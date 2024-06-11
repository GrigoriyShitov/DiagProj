/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "LoggingInterval-r10.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_LoggingInterval_r10_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_LoggingInterval_r10_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LoggingInterval_r10_value2enum_1[] = {
	{ 0,	6,	"ms1280" },
	{ 1,	6,	"ms2560" },
	{ 2,	6,	"ms5120" },
	{ 3,	7,	"ms10240" },
	{ 4,	7,	"ms20480" },
	{ 5,	7,	"ms30720" },
	{ 6,	7,	"ms40960" },
	{ 7,	7,	"ms61440" }
};
static const unsigned int asn_MAP_LoggingInterval_r10_enum2value_1[] = {
	3,	/* ms10240(3) */
	0,	/* ms1280(0) */
	4,	/* ms20480(4) */
	1,	/* ms2560(1) */
	5,	/* ms30720(5) */
	6,	/* ms40960(6) */
	2,	/* ms5120(2) */
	7	/* ms61440(7) */
};
const asn_INTEGER_specifics_t asn_SPC_LoggingInterval_r10_specs_1 = {
	asn_MAP_LoggingInterval_r10_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LoggingInterval_r10_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LoggingInterval_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LoggingInterval_r10 = {
	"LoggingInterval-r10",
	"LoggingInterval-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_LoggingInterval_r10_tags_1,
	sizeof(asn_DEF_LoggingInterval_r10_tags_1)
		/sizeof(asn_DEF_LoggingInterval_r10_tags_1[0]), /* 1 */
	asn_DEF_LoggingInterval_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_LoggingInterval_r10_tags_1)
		/sizeof(asn_DEF_LoggingInterval_r10_tags_1[0]), /* 1 */
	{ &asn_OER_type_LoggingInterval_r10_constr_1, &asn_PER_type_LoggingInterval_r10_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LoggingInterval_r10_specs_1	/* Additional specs */
};

