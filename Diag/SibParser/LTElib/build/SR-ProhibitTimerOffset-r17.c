/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SR-ProhibitTimerOffset-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_SR_ProhibitTimerOffset_r17_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_SR_ProhibitTimerOffset_r17_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_SR_ProhibitTimerOffset_r17_value2enum_1[] = {
	{ 0,	4,	"ms90" },
	{ 1,	5,	"ms180" },
	{ 2,	5,	"ms270" },
	{ 3,	5,	"ms360" },
	{ 4,	5,	"ms450" },
	{ 5,	5,	"ms540" },
	{ 6,	6,	"ms1080" },
	{ 7,	5,	"spare" }
};
static const unsigned int asn_MAP_SR_ProhibitTimerOffset_r17_enum2value_1[] = {
	6,	/* ms1080(6) */
	1,	/* ms180(1) */
	2,	/* ms270(2) */
	3,	/* ms360(3) */
	4,	/* ms450(4) */
	5,	/* ms540(5) */
	0,	/* ms90(0) */
	7	/* spare(7) */
};
const asn_INTEGER_specifics_t asn_SPC_SR_ProhibitTimerOffset_r17_specs_1 = {
	asn_MAP_SR_ProhibitTimerOffset_r17_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SR_ProhibitTimerOffset_r17_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_SR_ProhibitTimerOffset_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SR_ProhibitTimerOffset_r17 = {
	"SR-ProhibitTimerOffset-r17",
	"SR-ProhibitTimerOffset-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_SR_ProhibitTimerOffset_r17_tags_1,
	sizeof(asn_DEF_SR_ProhibitTimerOffset_r17_tags_1)
		/sizeof(asn_DEF_SR_ProhibitTimerOffset_r17_tags_1[0]), /* 1 */
	asn_DEF_SR_ProhibitTimerOffset_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_SR_ProhibitTimerOffset_r17_tags_1)
		/sizeof(asn_DEF_SR_ProhibitTimerOffset_r17_tags_1[0]), /* 1 */
	{ &asn_OER_type_SR_ProhibitTimerOffset_r17_constr_1, &asn_PER_type_SR_ProhibitTimerOffset_r17_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SR_ProhibitTimerOffset_r17_specs_1	/* Additional specs */
};

