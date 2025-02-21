/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "CellInfoSI-HCS-RSCP-LCR-r4.h"

static int asn_DFL_2_cmp_0(const void *sptr) {
	const CellIndividualOffset_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_2_set_0(void **sptr) {
	CellIndividualOffset_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
asn_TYPE_member_t asn_MBR_CellInfoSI_HCS_RSCP_LCR_r4_1[] = {
	{ ATF_NOFLAGS, 2, offsetof(struct CellInfoSI_HCS_RSCP_LCR_r4, cellIndividualOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndividualOffset,
		0,
		{ 0, 0, 0 },
		&asn_DFL_2_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_2_set_0,	/* Set DEFAULT 0 */
		"cellIndividualOffset"
		},
	{ ATF_POINTER, 1, offsetof(struct CellInfoSI_HCS_RSCP_LCR_r4, referenceTimeDifferenceToCell),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ReferenceTimeDifferenceToCell,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referenceTimeDifferenceToCell"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellInfoSI_HCS_RSCP_LCR_r4, primaryCCPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCCPCH_Info_LCR_r4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"primaryCCPCH-Info"
		},
	{ ATF_POINTER, 2, offsetof(struct CellInfoSI_HCS_RSCP_LCR_r4, primaryCCPCH_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCCPCH_TX_Power,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"primaryCCPCH-TX-Power"
		},
	{ ATF_POINTER, 1, offsetof(struct CellInfoSI_HCS_RSCP_LCR_r4, timeslotInfoList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotInfoList_LCR_r4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeslotInfoList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellInfoSI_HCS_RSCP_LCR_r4, readSFN_Indicator),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"readSFN-Indicator"
		},
	{ ATF_POINTER, 1, offsetof(struct CellInfoSI_HCS_RSCP_LCR_r4, cellSelectionReselectionInfo),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellSelectReselectInfoSIB_11_12_HCS_RSCP,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellSelectionReselectionInfo"
		},
};
static const int asn_MAP_CellInfoSI_HCS_RSCP_LCR_r4_oms_1[] = { 0, 1, 3, 4, 6 };
static const ber_tlv_tag_t asn_DEF_CellInfoSI_HCS_RSCP_LCR_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellInfoSI_HCS_RSCP_LCR_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellIndividualOffset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* referenceTimeDifferenceToCell */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* primaryCCPCH-Info */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* primaryCCPCH-TX-Power */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* timeslotInfoList */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* readSFN-Indicator */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* cellSelectionReselectionInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_CellInfoSI_HCS_RSCP_LCR_r4_specs_1 = {
	sizeof(struct CellInfoSI_HCS_RSCP_LCR_r4),
	offsetof(struct CellInfoSI_HCS_RSCP_LCR_r4, _asn_ctx),
	asn_MAP_CellInfoSI_HCS_RSCP_LCR_r4_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_CellInfoSI_HCS_RSCP_LCR_r4_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CellInfoSI_HCS_RSCP_LCR_r4 = {
	"CellInfoSI-HCS-RSCP-LCR-r4",
	"CellInfoSI-HCS-RSCP-LCR-r4",
	&asn_OP_SEQUENCE,
	asn_DEF_CellInfoSI_HCS_RSCP_LCR_r4_tags_1,
	sizeof(asn_DEF_CellInfoSI_HCS_RSCP_LCR_r4_tags_1)
		/sizeof(asn_DEF_CellInfoSI_HCS_RSCP_LCR_r4_tags_1[0]), /* 1 */
	asn_DEF_CellInfoSI_HCS_RSCP_LCR_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellInfoSI_HCS_RSCP_LCR_r4_tags_1)
		/sizeof(asn_DEF_CellInfoSI_HCS_RSCP_LCR_r4_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CellInfoSI_HCS_RSCP_LCR_r4_1,
	7,	/* Elements count */
	&asn_SPC_CellInfoSI_HCS_RSCP_LCR_r4_specs_1	/* Additional specs */
};

