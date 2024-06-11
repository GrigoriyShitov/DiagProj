/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "QuantityConfig.h"

asn_TYPE_member_t asn_MBR_QuantityConfig_1[] = {
	{ ATF_POINTER, 9, offsetof(struct QuantityConfig, quantityConfigEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigEUTRA"
		},
	{ ATF_POINTER, 8, offsetof(struct QuantityConfig, quantityConfigUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigUTRA"
		},
	{ ATF_POINTER, 7, offsetof(struct QuantityConfig, quantityConfigGERAN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigGERAN"
		},
	{ ATF_POINTER, 6, offsetof(struct QuantityConfig, quantityConfigCDMA2000),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigCDMA2000"
		},
	{ ATF_POINTER, 5, offsetof(struct QuantityConfig, quantityConfigUTRA_v1020),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigUTRA_v1020,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigUTRA-v1020"
		},
	{ ATF_POINTER, 4, offsetof(struct QuantityConfig, quantityConfigEUTRA_v1250),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigEUTRA_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigEUTRA-v1250"
		},
	{ ATF_POINTER, 3, offsetof(struct QuantityConfig, quantityConfigEUTRA_v1310),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigEUTRA_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigEUTRA-v1310"
		},
	{ ATF_POINTER, 2, offsetof(struct QuantityConfig, quantityConfigWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigWLAN_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigWLAN-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct QuantityConfig, quantityConfigNRList_r15),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigNRList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigNRList-r15"
		},
};
static const int asn_MAP_QuantityConfig_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_QuantityConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_QuantityConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* quantityConfigEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* quantityConfigUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* quantityConfigGERAN */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* quantityConfigCDMA2000 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* quantityConfigUTRA-v1020 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* quantityConfigEUTRA-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* quantityConfigEUTRA-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* quantityConfigWLAN-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* quantityConfigNRList-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_QuantityConfig_specs_1 = {
	sizeof(struct QuantityConfig),
	offsetof(struct QuantityConfig, _asn_ctx),
	asn_MAP_QuantityConfig_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_QuantityConfig_oms_1,	/* Optional members */
	4, 5,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_QuantityConfig = {
	"QuantityConfig",
	"QuantityConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_QuantityConfig_tags_1,
	sizeof(asn_DEF_QuantityConfig_tags_1)
		/sizeof(asn_DEF_QuantityConfig_tags_1[0]), /* 1 */
	asn_DEF_QuantityConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_QuantityConfig_tags_1)
		/sizeof(asn_DEF_QuantityConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_QuantityConfig_1,
	9,	/* Elements count */
	&asn_SPC_QuantityConfig_specs_1	/* Additional specs */
};

