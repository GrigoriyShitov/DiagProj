/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "HandoverFromUTRANCommand-GSM-v860ext-IEs.h"

asn_TYPE_member_t asn_MBR_HandoverFromUTRANCommand_GSM_v860ext_IEs_1[] = {
	{ ATF_POINTER, 1, offsetof(struct HandoverFromUTRANCommand_GSM_v860ext_IEs, sr_vcc_SecurityRABInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SR_VCC_SecurityRABInfo_v860ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sr-vcc-SecurityRABInfo"
		},
};
static const int asn_MAP_HandoverFromUTRANCommand_GSM_v860ext_IEs_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_HandoverFromUTRANCommand_GSM_v860ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_HandoverFromUTRANCommand_GSM_v860ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sr-vcc-SecurityRABInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_HandoverFromUTRANCommand_GSM_v860ext_IEs_specs_1 = {
	sizeof(struct HandoverFromUTRANCommand_GSM_v860ext_IEs),
	offsetof(struct HandoverFromUTRANCommand_GSM_v860ext_IEs, _asn_ctx),
	asn_MAP_HandoverFromUTRANCommand_GSM_v860ext_IEs_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_HandoverFromUTRANCommand_GSM_v860ext_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_HandoverFromUTRANCommand_GSM_v860ext_IEs = {
	"HandoverFromUTRANCommand-GSM-v860ext-IEs",
	"HandoverFromUTRANCommand-GSM-v860ext-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_HandoverFromUTRANCommand_GSM_v860ext_IEs_tags_1,
	sizeof(asn_DEF_HandoverFromUTRANCommand_GSM_v860ext_IEs_tags_1)
		/sizeof(asn_DEF_HandoverFromUTRANCommand_GSM_v860ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_HandoverFromUTRANCommand_GSM_v860ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_HandoverFromUTRANCommand_GSM_v860ext_IEs_tags_1)
		/sizeof(asn_DEF_HandoverFromUTRANCommand_GSM_v860ext_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_HandoverFromUTRANCommand_GSM_v860ext_IEs_1,
	1,	/* Elements count */
	&asn_SPC_HandoverFromUTRANCommand_GSM_v860ext_IEs_specs_1	/* Additional specs */
};

