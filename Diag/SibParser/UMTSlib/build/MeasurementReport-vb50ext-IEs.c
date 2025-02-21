/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "MeasurementReport-vb50ext-IEs.h"

asn_TYPE_member_t asn_MBR_MeasurementReport_vb50ext_IEs_1[] = {
	{ ATF_POINTER, 5, offsetof(struct MeasurementReport_vb50ext_IEs, measuredResultsOnRACHEUTRAFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasuredResultsOnRACH_EUTRAFreq,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measuredResultsOnRACHEUTRAFreq"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasurementReport_vb50ext_IEs, eutra_EventResultsForCELLFACH),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_EventResultsForCELLFACH,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-EventResultsForCELLFACH"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasurementReport_vb50ext_IEs, cSGProximityIndication),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSGProximityIndication_vb50ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cSGProximityIndication"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasurementReport_vb50ext_IEs, eutra_MeasuredResults),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_MeasuredResults_vb50ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-MeasuredResults"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasurementReport_vb50ext_IEs, eutra_EventResults),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_EventResults_vb50ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-EventResults"
		},
};
static const int asn_MAP_MeasurementReport_vb50ext_IEs_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_MeasurementReport_vb50ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasurementReport_vb50ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measuredResultsOnRACHEUTRAFreq */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eutra-EventResultsForCELLFACH */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cSGProximityIndication */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* eutra-MeasuredResults */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* eutra-EventResults */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasurementReport_vb50ext_IEs_specs_1 = {
	sizeof(struct MeasurementReport_vb50ext_IEs),
	offsetof(struct MeasurementReport_vb50ext_IEs, _asn_ctx),
	asn_MAP_MeasurementReport_vb50ext_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_MeasurementReport_vb50ext_IEs_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasurementReport_vb50ext_IEs = {
	"MeasurementReport-vb50ext-IEs",
	"MeasurementReport-vb50ext-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasurementReport_vb50ext_IEs_tags_1,
	sizeof(asn_DEF_MeasurementReport_vb50ext_IEs_tags_1)
		/sizeof(asn_DEF_MeasurementReport_vb50ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_MeasurementReport_vb50ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasurementReport_vb50ext_IEs_tags_1)
		/sizeof(asn_DEF_MeasurementReport_vb50ext_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasurementReport_vb50ext_IEs_1,
	5,	/* Elements count */
	&asn_SPC_MeasurementReport_vb50ext_IEs_specs_1	/* Additional specs */
};

