/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UEInformationResponse-v1610-IEs.h"

asn_TYPE_member_t asn_MBR_UEInformationResponse_v1610_IEs_1[] = {
	{ ATF_POINTER, 4, offsetof(struct UEInformationResponse_v1610_IEs, rach_Report_v1610),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RACH_Report_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-Report-v1610"
		},
	{ ATF_POINTER, 3, offsetof(struct UEInformationResponse_v1610_IEs, measResultListExtIdle_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultListExtIdle_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListExtIdle-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct UEInformationResponse_v1610_IEs, measResultListIdleNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultListIdleNR_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListIdleNR-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct UEInformationResponse_v1610_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UEInformationResponse_v1710_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UEInformationResponse_v1610_IEs_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_UEInformationResponse_v1610_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UEInformationResponse_v1610_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rach-Report-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResultListExtIdle-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measResultListIdleNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UEInformationResponse_v1610_IEs_specs_1 = {
	sizeof(struct UEInformationResponse_v1610_IEs),
	offsetof(struct UEInformationResponse_v1610_IEs, _asn_ctx),
	asn_MAP_UEInformationResponse_v1610_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_UEInformationResponse_v1610_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UEInformationResponse_v1610_IEs = {
	"UEInformationResponse-v1610-IEs",
	"UEInformationResponse-v1610-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UEInformationResponse_v1610_IEs_tags_1,
	sizeof(asn_DEF_UEInformationResponse_v1610_IEs_tags_1)
		/sizeof(asn_DEF_UEInformationResponse_v1610_IEs_tags_1[0]), /* 1 */
	asn_DEF_UEInformationResponse_v1610_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEInformationResponse_v1610_IEs_tags_1)
		/sizeof(asn_DEF_UEInformationResponse_v1610_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UEInformationResponse_v1610_IEs_1,
	4,	/* Elements count */
	&asn_SPC_UEInformationResponse_v1610_IEs_specs_1	/* Additional specs */
};

