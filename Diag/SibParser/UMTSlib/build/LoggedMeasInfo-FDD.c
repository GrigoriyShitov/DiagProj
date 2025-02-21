/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "LoggedMeasInfo-FDD.h"

static int
memb_relativeTimeStamp_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7200)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_relativeTimeStamp_constr_2 CC_NOTUSED = {
	{ 2, 1 }	/* (0..7200) */,
	-1};
static asn_per_constraints_t asn_PER_memb_relativeTimeStamp_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 13,  13,  0,  7200 }	/* (0..7200) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LoggedMeasInfo_FDD_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasInfo_FDD, relativeTimeStamp),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_relativeTimeStamp_constr_2, &asn_PER_memb_relativeTimeStamp_constr_2,  memb_relativeTimeStamp_constraint_1 },
		0, 0, /* No default value */
		"relativeTimeStamp"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasInfo_FDD, loggedMeasServingCellMeas),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoggedMeasServingCellMeas_FDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"loggedMeasServingCellMeas"
		},
	{ ATF_POINTER, 4, offsetof(struct LoggedMeasInfo_FDD, loggedMeasIntrafreqNeighbourList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoggedMeasIntrafreqNeighbourList_FDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"loggedMeasIntrafreqNeighbourList"
		},
	{ ATF_POINTER, 3, offsetof(struct LoggedMeasInfo_FDD, loggedMeasInterfreqList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoggedMeasInterfreqList_FDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"loggedMeasInterfreqList"
		},
	{ ATF_POINTER, 2, offsetof(struct LoggedMeasInfo_FDD, loggedMeasInterRATNeighbourMeas),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoggedMeasInterRATNeighbourMeas,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"loggedMeasInterRATNeighbourMeas"
		},
	{ ATF_POINTER, 1, offsetof(struct LoggedMeasInfo_FDD, loggedMeasLocationInfo),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LoggedMeasLocationInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"loggedMeasLocationInfo"
		},
};
static const int asn_MAP_LoggedMeasInfo_FDD_oms_1[] = { 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_LoggedMeasInfo_FDD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LoggedMeasInfo_FDD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* relativeTimeStamp */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* loggedMeasServingCellMeas */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* loggedMeasIntrafreqNeighbourList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* loggedMeasInterfreqList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* loggedMeasInterRATNeighbourMeas */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* loggedMeasLocationInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_LoggedMeasInfo_FDD_specs_1 = {
	sizeof(struct LoggedMeasInfo_FDD),
	offsetof(struct LoggedMeasInfo_FDD, _asn_ctx),
	asn_MAP_LoggedMeasInfo_FDD_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LoggedMeasInfo_FDD_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LoggedMeasInfo_FDD = {
	"LoggedMeasInfo-FDD",
	"LoggedMeasInfo-FDD",
	&asn_OP_SEQUENCE,
	asn_DEF_LoggedMeasInfo_FDD_tags_1,
	sizeof(asn_DEF_LoggedMeasInfo_FDD_tags_1)
		/sizeof(asn_DEF_LoggedMeasInfo_FDD_tags_1[0]), /* 1 */
	asn_DEF_LoggedMeasInfo_FDD_tags_1,	/* Same as above */
	sizeof(asn_DEF_LoggedMeasInfo_FDD_tags_1)
		/sizeof(asn_DEF_LoggedMeasInfo_FDD_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LoggedMeasInfo_FDD_1,
	6,	/* Elements count */
	&asn_SPC_LoggedMeasInfo_FDD_specs_1	/* Additional specs */
};

