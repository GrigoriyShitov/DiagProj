/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "MeasurementCapabilityExt.h"

asn_TYPE_member_t asn_MBR_MeasurementCapabilityExt_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementCapabilityExt, compressedModeMeasCapabFDDList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CompressedModeMeasCapabFDDList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"compressedModeMeasCapabFDDList"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasurementCapabilityExt, compressedModeMeasCapabTDDList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CompressedModeMeasCapabTDDList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"compressedModeMeasCapabTDDList"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasurementCapabilityExt, compressedModeMeasCapabGSMList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CompressedModeMeasCapabGSMList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"compressedModeMeasCapabGSMList"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasurementCapabilityExt, compressedModeMeasCapabMC),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CompressedModeMeasCapabMC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"compressedModeMeasCapabMC"
		},
};
static const int asn_MAP_MeasurementCapabilityExt_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_MeasurementCapabilityExt_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasurementCapabilityExt_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* compressedModeMeasCapabFDDList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* compressedModeMeasCapabTDDList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* compressedModeMeasCapabGSMList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* compressedModeMeasCapabMC */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasurementCapabilityExt_specs_1 = {
	sizeof(struct MeasurementCapabilityExt),
	offsetof(struct MeasurementCapabilityExt, _asn_ctx),
	asn_MAP_MeasurementCapabilityExt_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MeasurementCapabilityExt_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasurementCapabilityExt = {
	"MeasurementCapabilityExt",
	"MeasurementCapabilityExt",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasurementCapabilityExt_tags_1,
	sizeof(asn_DEF_MeasurementCapabilityExt_tags_1)
		/sizeof(asn_DEF_MeasurementCapabilityExt_tags_1[0]), /* 1 */
	asn_DEF_MeasurementCapabilityExt_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasurementCapabilityExt_tags_1)
		/sizeof(asn_DEF_MeasurementCapabilityExt_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasurementCapabilityExt_1,
	4,	/* Elements count */
	&asn_SPC_MeasurementCapabilityExt_specs_1	/* Additional specs */
};

