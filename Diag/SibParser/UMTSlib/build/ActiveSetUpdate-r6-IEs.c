/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "ActiveSetUpdate-r6-IEs.h"

asn_TYPE_member_t asn_MBR_ActiveSetUpdate_r6_IEs_1[] = {
	{ ATF_POINTER, 13, offsetof(struct ActiveSetUpdate_r6_IEs, activationTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActivationTime,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"activationTime"
		},
	{ ATF_POINTER, 12, offsetof(struct ActiveSetUpdate_r6_IEs, newU_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_U_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"newU-RNTI"
		},
	{ ATF_POINTER, 11, offsetof(struct ActiveSetUpdate_r6_IEs, newH_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_H_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"newH-RNTI"
		},
	{ ATF_POINTER, 10, offsetof(struct ActiveSetUpdate_r6_IEs, newPrimary_E_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"newPrimary-E-RNTI"
		},
	{ ATF_POINTER, 9, offsetof(struct ActiveSetUpdate_r6_IEs, newSecondary_E_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"newSecondary-E-RNTI"
		},
	{ ATF_POINTER, 8, offsetof(struct ActiveSetUpdate_r6_IEs, cn_InformationInfo),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_InformationInfo_r6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cn-InformationInfo"
		},
	{ ATF_POINTER, 7, offsetof(struct ActiveSetUpdate_r6_IEs, maxAllowedUL_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxAllowedUL_TX_Power,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxAllowedUL-TX-Power"
		},
	{ ATF_POINTER, 6, offsetof(struct ActiveSetUpdate_r6_IEs, rl_AdditionInformationList),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RL_AdditionInformationList_r6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rl-AdditionInformationList"
		},
	{ ATF_POINTER, 5, offsetof(struct ActiveSetUpdate_r6_IEs, rl_RemovalInformationList),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RL_RemovalInformationList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rl-RemovalInformationList"
		},
	{ ATF_POINTER, 4, offsetof(struct ActiveSetUpdate_r6_IEs, tx_DiversityMode),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TX_DiversityMode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tx-DiversityMode"
		},
	{ ATF_POINTER, 3, offsetof(struct ActiveSetUpdate_r6_IEs, dpc_Mode),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DPC_Mode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dpc-Mode"
		},
	{ ATF_POINTER, 2, offsetof(struct ActiveSetUpdate_r6_IEs, serving_HSDSCH_CellInformation),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Serving_HSDSCH_CellInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"serving-HSDSCH-CellInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct ActiveSetUpdate_r6_IEs, e_dch_ReconfigurationInfo),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_DCH_ReconfigurationInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-dch-ReconfigurationInfo"
		},
};
static const int asn_MAP_ActiveSetUpdate_r6_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
static const ber_tlv_tag_t asn_DEF_ActiveSetUpdate_r6_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ActiveSetUpdate_r6_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* activationTime */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* newU-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* newH-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* newPrimary-E-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* newSecondary-E-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* cn-InformationInfo */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* maxAllowedUL-TX-Power */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* rl-AdditionInformationList */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* rl-RemovalInformationList */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* tx-DiversityMode */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* dpc-Mode */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* serving-HSDSCH-CellInformation */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* e-dch-ReconfigurationInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_ActiveSetUpdate_r6_IEs_specs_1 = {
	sizeof(struct ActiveSetUpdate_r6_IEs),
	offsetof(struct ActiveSetUpdate_r6_IEs, _asn_ctx),
	asn_MAP_ActiveSetUpdate_r6_IEs_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_ActiveSetUpdate_r6_IEs_oms_1,	/* Optional members */
	13, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ActiveSetUpdate_r6_IEs = {
	"ActiveSetUpdate-r6-IEs",
	"ActiveSetUpdate-r6-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_ActiveSetUpdate_r6_IEs_tags_1,
	sizeof(asn_DEF_ActiveSetUpdate_r6_IEs_tags_1)
		/sizeof(asn_DEF_ActiveSetUpdate_r6_IEs_tags_1[0]), /* 1 */
	asn_DEF_ActiveSetUpdate_r6_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_ActiveSetUpdate_r6_IEs_tags_1)
		/sizeof(asn_DEF_ActiveSetUpdate_r6_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ActiveSetUpdate_r6_IEs_1,
	13,	/* Elements count */
	&asn_SPC_ActiveSetUpdate_r6_IEs_specs_1	/* Additional specs */
};

