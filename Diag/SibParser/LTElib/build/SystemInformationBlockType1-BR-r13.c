/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SystemInformationBlockType1-BR-r13.h"

/*
 * This type is implemented using SystemInformationBlockType1,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType1_BR_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_BR_r13 = {
	"SystemInformationBlockType1-BR-r13",
	"SystemInformationBlockType1-BR-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType1_BR_r13_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType1_BR_r13_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_BR_r13_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType1_BR_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType1_BR_r13_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_BR_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType1_1,
	9,	/* Elements count */
	&asn_SPC_SystemInformationBlockType1_specs_1	/* Additional specs */
};

