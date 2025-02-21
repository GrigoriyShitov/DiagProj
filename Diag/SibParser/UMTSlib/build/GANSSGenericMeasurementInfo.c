/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "GANSSGenericMeasurementInfo.h"

static int
memb_ganssId_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_ganssId_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..7) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ganssId_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_GANSSGenericMeasurementInfo_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
asn_per_constraints_t asn_PER_type_GANSSGenericMeasurementInfo_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_POINTER, 1, offsetof(struct GANSSGenericMeasurementInfo__Member, ganssId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ganssId_constr_3, &asn_PER_memb_ganssId_constr_3,  memb_ganssId_constraint_2 },
		0, 0, /* No default value */
		"ganssId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSGenericMeasurementInfo__Member, ganssMeasurementSignalList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GANSSMeasurementSignalList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ganssMeasurementSignalList"
		},
};
static const int asn_MAP_Member_oms_2[] = { 0 };
static const ber_tlv_tag_t asn_DEF_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ganssId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ganssMeasurementSignalList */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct GANSSGenericMeasurementInfo__Member),
	offsetof(struct GANSSGenericMeasurementInfo__Member, _asn_ctx),
	asn_MAP_Member_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_Member_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
	&asn_OP_SEQUENCE,
	asn_DEF_Member_tags_2,
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	asn_DEF_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Member_2,
	2,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_GANSSGenericMeasurementInfo_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_GANSSGenericMeasurementInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_GANSSGenericMeasurementInfo_specs_1 = {
	sizeof(struct GANSSGenericMeasurementInfo),
	offsetof(struct GANSSGenericMeasurementInfo, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_GANSSGenericMeasurementInfo = {
	"GANSSGenericMeasurementInfo",
	"GANSSGenericMeasurementInfo",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_GANSSGenericMeasurementInfo_tags_1,
	sizeof(asn_DEF_GANSSGenericMeasurementInfo_tags_1)
		/sizeof(asn_DEF_GANSSGenericMeasurementInfo_tags_1[0]), /* 1 */
	asn_DEF_GANSSGenericMeasurementInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_GANSSGenericMeasurementInfo_tags_1)
		/sizeof(asn_DEF_GANSSGenericMeasurementInfo_tags_1[0]), /* 1 */
	{ &asn_OER_type_GANSSGenericMeasurementInfo_constr_1, &asn_PER_type_GANSSGenericMeasurementInfo_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_GANSSGenericMeasurementInfo_1,
	1,	/* Single element */
	&asn_SPC_GANSSGenericMeasurementInfo_specs_1	/* Additional specs */
};

