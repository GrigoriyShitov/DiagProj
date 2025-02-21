/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "NeighSatelliteInfo-r18.h"

static int
memb_nta_Common_r18_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 8316827)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_nta_CommonDrift_r18_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -261935 && value <= 261935)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_nta_CommonDriftVariation_r18_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 29479)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_startSFN_r18_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_startSubFrame_r18_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 9)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_k_Mac_r18_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 512)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_ephemerisInfo_r18_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ephemerisInfo_r18_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_nta_Common_r18_constr_7 CC_NOTUSED = {
	{ 4, 1 }	/* (0..8316827) */,
	-1};
static asn_per_constraints_t asn_PER_memb_nta_Common_r18_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 23, -1,  0,  8316827 }	/* (0..8316827) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_nta_CommonDrift_r18_constr_8 CC_NOTUSED = {
	{ 4, 0 }	/* (-261935..261935) */,
	-1};
static asn_per_constraints_t asn_PER_memb_nta_CommonDrift_r18_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 19, -1, -261935,  261935 }	/* (-261935..261935) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_nta_CommonDriftVariation_r18_constr_9 CC_NOTUSED = {
	{ 2, 1 }	/* (0..29479) */,
	-1};
static asn_per_constraints_t asn_PER_memb_nta_CommonDriftVariation_r18_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 15,  15,  0,  29479 }	/* (0..29479) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_startSFN_r18_constr_11 CC_NOTUSED = {
	{ 2, 1 }	/* (0..1023) */,
	-1};
static asn_per_constraints_t asn_PER_memb_startSFN_r18_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_startSubFrame_r18_constr_12 CC_NOTUSED = {
	{ 1, 1 }	/* (0..9) */,
	-1};
static asn_per_constraints_t asn_PER_memb_startSubFrame_r18_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_k_Mac_r18_constr_13 CC_NOTUSED = {
	{ 2, 1 }	/* (1..512) */,
	-1};
static asn_per_constraints_t asn_PER_memb_k_Mac_r18_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (1..512) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ephemerisInfo_r18_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NeighSatelliteInfo_r18__ephemerisInfo_r18, choice.stateVectors_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EphemerisStateVectors_r17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"stateVectors-r18"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighSatelliteInfo_r18__ephemerisInfo_r18, choice.orbitalParameters_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EphemerisOrbitalParameters_r17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"orbitalParameters-r18"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ephemerisInfo_r18_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* stateVectors-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* orbitalParameters-r18 */
};
static asn_CHOICE_specifics_t asn_SPC_ephemerisInfo_r18_specs_3 = {
	sizeof(struct NeighSatelliteInfo_r18__ephemerisInfo_r18),
	offsetof(struct NeighSatelliteInfo_r18__ephemerisInfo_r18, _asn_ctx),
	offsetof(struct NeighSatelliteInfo_r18__ephemerisInfo_r18, present),
	sizeof(((struct NeighSatelliteInfo_r18__ephemerisInfo_r18 *)0)->present),
	asn_MAP_ephemerisInfo_r18_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ephemerisInfo_r18_3 = {
	"ephemerisInfo-r18",
	"ephemerisInfo-r18",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ephemerisInfo_r18_constr_3, &asn_PER_type_ephemerisInfo_r18_constr_3, CHOICE_constraint },
	asn_MBR_ephemerisInfo_r18_3,
	2,	/* Elements count */
	&asn_SPC_ephemerisInfo_r18_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_nta_CommonParameters_r18_6[] = {
	{ ATF_POINTER, 3, offsetof(struct NeighSatelliteInfo_r18__nta_CommonParameters_r18, nta_Common_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_nta_Common_r18_constr_7, &asn_PER_memb_nta_Common_r18_constr_7,  memb_nta_Common_r18_constraint_6 },
		0, 0, /* No default value */
		"nta-Common-r18"
		},
	{ ATF_POINTER, 2, offsetof(struct NeighSatelliteInfo_r18__nta_CommonParameters_r18, nta_CommonDrift_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_nta_CommonDrift_r18_constr_8, &asn_PER_memb_nta_CommonDrift_r18_constr_8,  memb_nta_CommonDrift_r18_constraint_6 },
		0, 0, /* No default value */
		"nta-CommonDrift-r18"
		},
	{ ATF_POINTER, 1, offsetof(struct NeighSatelliteInfo_r18__nta_CommonParameters_r18, nta_CommonDriftVariation_r18),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_nta_CommonDriftVariation_r18_constr_9, &asn_PER_memb_nta_CommonDriftVariation_r18_constr_9,  memb_nta_CommonDriftVariation_r18_constraint_6 },
		0, 0, /* No default value */
		"nta-CommonDriftVariation-r18"
		},
};
static const int asn_MAP_nta_CommonParameters_r18_oms_6[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_nta_CommonParameters_r18_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_nta_CommonParameters_r18_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nta-Common-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nta-CommonDrift-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nta-CommonDriftVariation-r18 */
};
static asn_SEQUENCE_specifics_t asn_SPC_nta_CommonParameters_r18_specs_6 = {
	sizeof(struct NeighSatelliteInfo_r18__nta_CommonParameters_r18),
	offsetof(struct NeighSatelliteInfo_r18__nta_CommonParameters_r18, _asn_ctx),
	asn_MAP_nta_CommonParameters_r18_tag2el_6,
	3,	/* Count of tags in the map */
	asn_MAP_nta_CommonParameters_r18_oms_6,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nta_CommonParameters_r18_6 = {
	"nta-CommonParameters-r18",
	"nta-CommonParameters-r18",
	&asn_OP_SEQUENCE,
	asn_DEF_nta_CommonParameters_r18_tags_6,
	sizeof(asn_DEF_nta_CommonParameters_r18_tags_6)
		/sizeof(asn_DEF_nta_CommonParameters_r18_tags_6[0]) - 1, /* 1 */
	asn_DEF_nta_CommonParameters_r18_tags_6,	/* Same as above */
	sizeof(asn_DEF_nta_CommonParameters_r18_tags_6)
		/sizeof(asn_DEF_nta_CommonParameters_r18_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_nta_CommonParameters_r18_6,
	3,	/* Elements count */
	&asn_SPC_nta_CommonParameters_r18_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_epochTime_r18_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NeighSatelliteInfo_r18__epochTime_r18, startSFN_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_startSFN_r18_constr_11, &asn_PER_memb_startSFN_r18_constr_11,  memb_startSFN_r18_constraint_10 },
		0, 0, /* No default value */
		"startSFN-r18"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighSatelliteInfo_r18__epochTime_r18, startSubFrame_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_startSubFrame_r18_constr_12, &asn_PER_memb_startSubFrame_r18_constr_12,  memb_startSubFrame_r18_constraint_10 },
		0, 0, /* No default value */
		"startSubFrame-r18"
		},
};
static const ber_tlv_tag_t asn_DEF_epochTime_r18_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_epochTime_r18_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* startSFN-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* startSubFrame-r18 */
};
static asn_SEQUENCE_specifics_t asn_SPC_epochTime_r18_specs_10 = {
	sizeof(struct NeighSatelliteInfo_r18__epochTime_r18),
	offsetof(struct NeighSatelliteInfo_r18__epochTime_r18, _asn_ctx),
	asn_MAP_epochTime_r18_tag2el_10,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_epochTime_r18_10 = {
	"epochTime-r18",
	"epochTime-r18",
	&asn_OP_SEQUENCE,
	asn_DEF_epochTime_r18_tags_10,
	sizeof(asn_DEF_epochTime_r18_tags_10)
		/sizeof(asn_DEF_epochTime_r18_tags_10[0]) - 1, /* 1 */
	asn_DEF_epochTime_r18_tags_10,	/* Same as above */
	sizeof(asn_DEF_epochTime_r18_tags_10)
		/sizeof(asn_DEF_epochTime_r18_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_epochTime_r18_10,
	2,	/* Elements count */
	&asn_SPC_epochTime_r18_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NeighSatelliteInfo_r18_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NeighSatelliteInfo_r18, satelliteId_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SatelliteId_r18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"satelliteId-r18"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighSatelliteInfo_r18, ephemerisInfo_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ephemerisInfo_r18_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ephemerisInfo-r18"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighSatelliteInfo_r18, nta_CommonParameters_r18),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nta_CommonParameters_r18_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nta-CommonParameters-r18"
		},
	{ ATF_POINTER, 3, offsetof(struct NeighSatelliteInfo_r18, epochTime_r18),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_epochTime_r18_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"epochTime-r18"
		},
	{ ATF_POINTER, 2, offsetof(struct NeighSatelliteInfo_r18, k_Mac_r18),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_k_Mac_r18_constr_13, &asn_PER_memb_k_Mac_r18_constr_13,  memb_k_Mac_r18_constraint_1 },
		0, 0, /* No default value */
		"k-Mac-r18"
		},
	{ ATF_POINTER, 1, offsetof(struct NeighSatelliteInfo_r18, t_ServiceStartNeigh_r18),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeOffsetUTC_r17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ServiceStartNeigh-r18"
		},
};
static const int asn_MAP_NeighSatelliteInfo_r18_oms_1[] = { 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_NeighSatelliteInfo_r18_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NeighSatelliteInfo_r18_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* satelliteId-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ephemerisInfo-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nta-CommonParameters-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* epochTime-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* k-Mac-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* t-ServiceStartNeigh-r18 */
};
asn_SEQUENCE_specifics_t asn_SPC_NeighSatelliteInfo_r18_specs_1 = {
	sizeof(struct NeighSatelliteInfo_r18),
	offsetof(struct NeighSatelliteInfo_r18, _asn_ctx),
	asn_MAP_NeighSatelliteInfo_r18_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NeighSatelliteInfo_r18_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NeighSatelliteInfo_r18 = {
	"NeighSatelliteInfo-r18",
	"NeighSatelliteInfo-r18",
	&asn_OP_SEQUENCE,
	asn_DEF_NeighSatelliteInfo_r18_tags_1,
	sizeof(asn_DEF_NeighSatelliteInfo_r18_tags_1)
		/sizeof(asn_DEF_NeighSatelliteInfo_r18_tags_1[0]), /* 1 */
	asn_DEF_NeighSatelliteInfo_r18_tags_1,	/* Same as above */
	sizeof(asn_DEF_NeighSatelliteInfo_r18_tags_1)
		/sizeof(asn_DEF_NeighSatelliteInfo_r18_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NeighSatelliteInfo_r18_1,
	6,	/* Elements count */
	&asn_SPC_NeighSatelliteInfo_r18_specs_1	/* Additional specs */
};

