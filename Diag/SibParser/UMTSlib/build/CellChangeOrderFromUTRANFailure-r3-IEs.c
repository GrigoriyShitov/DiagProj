/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "CellChangeOrderFromUTRANFailure-r3-IEs.h"

asn_TYPE_member_t asn_MBR_CellChangeOrderFromUTRANFailure_r3_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellChangeOrderFromUTRANFailure_r3_IEs, rrc_TransactionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TransactionIdentifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrc-TransactionIdentifier"
		},
	{ ATF_POINTER, 1, offsetof(struct CellChangeOrderFromUTRANFailure_r3_IEs, dummy),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntegrityProtectionModeInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellChangeOrderFromUTRANFailure_r3_IEs, interRAT_ChangeFailureCause),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_InterRAT_ChangeFailureCause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interRAT-ChangeFailureCause"
		},
};
static const int asn_MAP_CellChangeOrderFromUTRANFailure_r3_IEs_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_CellChangeOrderFromUTRANFailure_r3_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellChangeOrderFromUTRANFailure_r3_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrc-TransactionIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dummy */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* interRAT-ChangeFailureCause */
};
asn_SEQUENCE_specifics_t asn_SPC_CellChangeOrderFromUTRANFailure_r3_IEs_specs_1 = {
	sizeof(struct CellChangeOrderFromUTRANFailure_r3_IEs),
	offsetof(struct CellChangeOrderFromUTRANFailure_r3_IEs, _asn_ctx),
	asn_MAP_CellChangeOrderFromUTRANFailure_r3_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_CellChangeOrderFromUTRANFailure_r3_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CellChangeOrderFromUTRANFailure_r3_IEs = {
	"CellChangeOrderFromUTRANFailure-r3-IEs",
	"CellChangeOrderFromUTRANFailure-r3-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_CellChangeOrderFromUTRANFailure_r3_IEs_tags_1,
	sizeof(asn_DEF_CellChangeOrderFromUTRANFailure_r3_IEs_tags_1)
		/sizeof(asn_DEF_CellChangeOrderFromUTRANFailure_r3_IEs_tags_1[0]), /* 1 */
	asn_DEF_CellChangeOrderFromUTRANFailure_r3_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellChangeOrderFromUTRANFailure_r3_IEs_tags_1)
		/sizeof(asn_DEF_CellChangeOrderFromUTRANFailure_r3_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CellChangeOrderFromUTRANFailure_r3_IEs_1,
	3,	/* Elements count */
	&asn_SPC_CellChangeOrderFromUTRANFailure_r3_IEs_specs_1	/* Additional specs */
};

