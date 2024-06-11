/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "PICH-Info-LCR-r4.h"

static int asn_DFL_6_cmp_0(const void *sptr) {
	const PagingIndicatorLength_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_6_set_0(void **sptr) {
	PagingIndicatorLength_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
static int asn_DFL_7_cmp_1(const void *sptr) {
	const N_GAP_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 1 */
	return (*st != 1);
}
static int asn_DFL_7_set_1(void **sptr) {
	N_GAP_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 1 */
	*st = 1;
	return 0;
}
static int asn_DFL_8_cmp_2(const void *sptr) {
	const N_PCH_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 2 */
	return (*st != 2);
}
static int asn_DFL_8_set_2(void **sptr) {
	N_PCH_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 2 */
	*st = 2;
	return 0;
}
asn_TYPE_member_t asn_MBR_PICH_Info_LCR_r4_1[] = {
	{ ATF_POINTER, 1, offsetof(struct PICH_Info_LCR_r4, timeslot),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotNumber_LCR_r4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeslot"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PICH_Info_LCR_r4, pichChannelisationCodeList_LCR_r4),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PichChannelisationCodeList_LCR_r4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pichChannelisationCodeList-LCR-r4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PICH_Info_LCR_r4, midambleShiftAndBurstType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleShiftAndBurstType_LCR_r4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"midambleShiftAndBurstType"
		},
	{ ATF_POINTER, 4, offsetof(struct PICH_Info_LCR_r4, repetitionPeriodLengthOffset),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RepPerLengthOffset_PICH,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"repetitionPeriodLengthOffset"
		},
	{ ATF_NOFLAGS, 3, offsetof(struct PICH_Info_LCR_r4, pagingIndicatorLength),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingIndicatorLength,
		0,
		{ 0, 0, 0 },
		&asn_DFL_6_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_6_set_0,	/* Set DEFAULT 0 */
		"pagingIndicatorLength"
		},
	{ ATF_POINTER, 2, offsetof(struct PICH_Info_LCR_r4, n_GAP),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_N_GAP,
		0,
		{ 0, 0, 0 },
		&asn_DFL_7_cmp_1,	/* Compare DEFAULT 1 */
		&asn_DFL_7_set_1,	/* Set DEFAULT 1 */
		"n-GAP"
		},
	{ ATF_POINTER, 1, offsetof(struct PICH_Info_LCR_r4, n_PCH),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_N_PCH,
		0,
		{ 0, 0, 0 },
		&asn_DFL_8_cmp_2,	/* Compare DEFAULT 2 */
		&asn_DFL_8_set_2,	/* Set DEFAULT 2 */
		"n-PCH"
		},
};
static const int asn_MAP_PICH_Info_LCR_r4_oms_1[] = { 0, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_PICH_Info_LCR_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PICH_Info_LCR_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeslot */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pichChannelisationCodeList-LCR-r4 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* midambleShiftAndBurstType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* repetitionPeriodLengthOffset */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pagingIndicatorLength */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* n-GAP */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* n-PCH */
};
asn_SEQUENCE_specifics_t asn_SPC_PICH_Info_LCR_r4_specs_1 = {
	sizeof(struct PICH_Info_LCR_r4),
	offsetof(struct PICH_Info_LCR_r4, _asn_ctx),
	asn_MAP_PICH_Info_LCR_r4_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_PICH_Info_LCR_r4_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PICH_Info_LCR_r4 = {
	"PICH-Info-LCR-r4",
	"PICH-Info-LCR-r4",
	&asn_OP_SEQUENCE,
	asn_DEF_PICH_Info_LCR_r4_tags_1,
	sizeof(asn_DEF_PICH_Info_LCR_r4_tags_1)
		/sizeof(asn_DEF_PICH_Info_LCR_r4_tags_1[0]), /* 1 */
	asn_DEF_PICH_Info_LCR_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_PICH_Info_LCR_r4_tags_1)
		/sizeof(asn_DEF_PICH_Info_LCR_r4_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PICH_Info_LCR_r4_1,
	7,	/* Elements count */
	&asn_SPC_PICH_Info_LCR_r4_specs_1	/* Additional specs */
};

