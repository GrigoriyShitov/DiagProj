/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SatelliteInfo-r17.h"

static int
memb_longitude_r17_constraint_7(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -131072 && value <= 131071)) {
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
memb_latitude_r17_constraint_7(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -131072 && value <= 131071)) {
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
memb_elevationAngleRight_r17_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -14 && value <= 14)) {
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
memb_elevationAngleLeft_r17_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -14 && value <= 14)) {
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
memb_radius_r17_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 256)) {
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
memb_satelliteId_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_longitude_r17_constr_8 CC_NOTUSED = {
	{ 4, 0 }	/* (-131072..131071) */,
	-1};
static asn_per_constraints_t asn_PER_memb_longitude_r17_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 18, -1, -131072,  131071 }	/* (-131072..131071) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_latitude_r17_constr_9 CC_NOTUSED = {
	{ 4, 0 }	/* (-131072..131071) */,
	-1};
static asn_per_constraints_t asn_PER_memb_latitude_r17_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 18, -1, -131072,  131071 }	/* (-131072..131071) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_elevationAngleRight_r17_constr_11 CC_NOTUSED = {
	{ 1, 0 }	/* (-14..14) */,
	-1};
static asn_per_constraints_t asn_PER_memb_elevationAngleRight_r17_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -14,  14 }	/* (-14..14) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_elevationAngleLeft_r17_constr_12 CC_NOTUSED = {
	{ 1, 0 }	/* (-14..14) */,
	-1};
static asn_per_constraints_t asn_PER_memb_elevationAngleLeft_r17_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -14,  14 }	/* (-14..14) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_radius_r17_constr_13 CC_NOTUSED = {
	{ 2, 1 }	/* (1..256) */,
	-1};
static asn_per_constraints_t asn_PER_memb_radius_r17_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (1..256) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_satelliteId_r17_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..255) */,
	-1};
static asn_per_constraints_t asn_PER_memb_satelliteId_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_serviceInfo_r17_3[] = {
	{ ATF_POINTER, 2, offsetof(struct SatelliteInfo_r17__serviceInfo_r17, tle_EphemerisParameters_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TLE_EphemerisParameters_r17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tle-EphemerisParameters-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct SatelliteInfo_r17__serviceInfo_r17, t_ServiceStart_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeOffsetUTC_r17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ServiceStart-r17"
		},
};
static const int asn_MAP_serviceInfo_r17_oms_3[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_serviceInfo_r17_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_serviceInfo_r17_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tle-EphemerisParameters-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* t-ServiceStart-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_serviceInfo_r17_specs_3 = {
	sizeof(struct SatelliteInfo_r17__serviceInfo_r17),
	offsetof(struct SatelliteInfo_r17__serviceInfo_r17, _asn_ctx),
	asn_MAP_serviceInfo_r17_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_serviceInfo_r17_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_serviceInfo_r17_3 = {
	"serviceInfo-r17",
	"serviceInfo-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_serviceInfo_r17_tags_3,
	sizeof(asn_DEF_serviceInfo_r17_tags_3)
		/sizeof(asn_DEF_serviceInfo_r17_tags_3[0]) - 1, /* 1 */
	asn_DEF_serviceInfo_r17_tags_3,	/* Same as above */
	sizeof(asn_DEF_serviceInfo_r17_tags_3)
		/sizeof(asn_DEF_serviceInfo_r17_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_serviceInfo_r17_3,
	2,	/* Elements count */
	&asn_SPC_serviceInfo_r17_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_referencePoint_r17_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SatelliteInfo_r17__footprintInfo_r17__referencePoint_r17, longitude_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_longitude_r17_constr_8, &asn_PER_memb_longitude_r17_constr_8,  memb_longitude_r17_constraint_7 },
		0, 0, /* No default value */
		"longitude-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SatelliteInfo_r17__footprintInfo_r17__referencePoint_r17, latitude_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_latitude_r17_constr_9, &asn_PER_memb_latitude_r17_constr_9,  memb_latitude_r17_constraint_7 },
		0, 0, /* No default value */
		"latitude-r17"
		},
};
static const ber_tlv_tag_t asn_DEF_referencePoint_r17_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_referencePoint_r17_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* longitude-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* latitude-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_referencePoint_r17_specs_7 = {
	sizeof(struct SatelliteInfo_r17__footprintInfo_r17__referencePoint_r17),
	offsetof(struct SatelliteInfo_r17__footprintInfo_r17__referencePoint_r17, _asn_ctx),
	asn_MAP_referencePoint_r17_tag2el_7,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_referencePoint_r17_7 = {
	"referencePoint-r17",
	"referencePoint-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_referencePoint_r17_tags_7,
	sizeof(asn_DEF_referencePoint_r17_tags_7)
		/sizeof(asn_DEF_referencePoint_r17_tags_7[0]) - 1, /* 1 */
	asn_DEF_referencePoint_r17_tags_7,	/* Same as above */
	sizeof(asn_DEF_referencePoint_r17_tags_7)
		/sizeof(asn_DEF_referencePoint_r17_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_referencePoint_r17_7,
	2,	/* Elements count */
	&asn_SPC_referencePoint_r17_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_elevationAngles_r17_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SatelliteInfo_r17__footprintInfo_r17__elevationAngles_r17, elevationAngleRight_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_elevationAngleRight_r17_constr_11, &asn_PER_memb_elevationAngleRight_r17_constr_11,  memb_elevationAngleRight_r17_constraint_10 },
		0, 0, /* No default value */
		"elevationAngleRight-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct SatelliteInfo_r17__footprintInfo_r17__elevationAngles_r17, elevationAngleLeft_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_elevationAngleLeft_r17_constr_12, &asn_PER_memb_elevationAngleLeft_r17_constr_12,  memb_elevationAngleLeft_r17_constraint_10 },
		0, 0, /* No default value */
		"elevationAngleLeft-r17"
		},
};
static const int asn_MAP_elevationAngles_r17_oms_10[] = { 1 };
static const ber_tlv_tag_t asn_DEF_elevationAngles_r17_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_elevationAngles_r17_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* elevationAngleRight-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* elevationAngleLeft-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_elevationAngles_r17_specs_10 = {
	sizeof(struct SatelliteInfo_r17__footprintInfo_r17__elevationAngles_r17),
	offsetof(struct SatelliteInfo_r17__footprintInfo_r17__elevationAngles_r17, _asn_ctx),
	asn_MAP_elevationAngles_r17_tag2el_10,
	2,	/* Count of tags in the map */
	asn_MAP_elevationAngles_r17_oms_10,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_elevationAngles_r17_10 = {
	"elevationAngles-r17",
	"elevationAngles-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_elevationAngles_r17_tags_10,
	sizeof(asn_DEF_elevationAngles_r17_tags_10)
		/sizeof(asn_DEF_elevationAngles_r17_tags_10[0]) - 1, /* 1 */
	asn_DEF_elevationAngles_r17_tags_10,	/* Same as above */
	sizeof(asn_DEF_elevationAngles_r17_tags_10)
		/sizeof(asn_DEF_elevationAngles_r17_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_elevationAngles_r17_10,
	2,	/* Elements count */
	&asn_SPC_elevationAngles_r17_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_footprintInfo_r17_6[] = {
	{ ATF_POINTER, 3, offsetof(struct SatelliteInfo_r17__footprintInfo_r17, referencePoint_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_referencePoint_r17_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referencePoint-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct SatelliteInfo_r17__footprintInfo_r17, elevationAngles_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_elevationAngles_r17_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"elevationAngles-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct SatelliteInfo_r17__footprintInfo_r17, radius_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_radius_r17_constr_13, &asn_PER_memb_radius_r17_constr_13,  memb_radius_r17_constraint_6 },
		0, 0, /* No default value */
		"radius-r17"
		},
};
static const int asn_MAP_footprintInfo_r17_oms_6[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_footprintInfo_r17_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_footprintInfo_r17_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* referencePoint-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* elevationAngles-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* radius-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_footprintInfo_r17_specs_6 = {
	sizeof(struct SatelliteInfo_r17__footprintInfo_r17),
	offsetof(struct SatelliteInfo_r17__footprintInfo_r17, _asn_ctx),
	asn_MAP_footprintInfo_r17_tag2el_6,
	3,	/* Count of tags in the map */
	asn_MAP_footprintInfo_r17_oms_6,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_footprintInfo_r17_6 = {
	"footprintInfo-r17",
	"footprintInfo-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_footprintInfo_r17_tags_6,
	sizeof(asn_DEF_footprintInfo_r17_tags_6)
		/sizeof(asn_DEF_footprintInfo_r17_tags_6[0]) - 1, /* 1 */
	asn_DEF_footprintInfo_r17_tags_6,	/* Same as above */
	sizeof(asn_DEF_footprintInfo_r17_tags_6)
		/sizeof(asn_DEF_footprintInfo_r17_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_footprintInfo_r17_6,
	3,	/* Elements count */
	&asn_SPC_footprintInfo_r17_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SatelliteInfo_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SatelliteInfo_r17, satelliteId_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_satelliteId_r17_constr_2, &asn_PER_memb_satelliteId_r17_constr_2,  memb_satelliteId_r17_constraint_1 },
		0, 0, /* No default value */
		"satelliteId-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SatelliteInfo_r17, serviceInfo_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_serviceInfo_r17_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"serviceInfo-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SatelliteInfo_r17, footprintInfo_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_footprintInfo_r17_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"footprintInfo-r17"
		},
};
static const ber_tlv_tag_t asn_DEF_SatelliteInfo_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SatelliteInfo_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* satelliteId-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* serviceInfo-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* footprintInfo-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_SatelliteInfo_r17_specs_1 = {
	sizeof(struct SatelliteInfo_r17),
	offsetof(struct SatelliteInfo_r17, _asn_ctx),
	asn_MAP_SatelliteInfo_r17_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SatelliteInfo_r17 = {
	"SatelliteInfo-r17",
	"SatelliteInfo-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_SatelliteInfo_r17_tags_1,
	sizeof(asn_DEF_SatelliteInfo_r17_tags_1)
		/sizeof(asn_DEF_SatelliteInfo_r17_tags_1[0]), /* 1 */
	asn_DEF_SatelliteInfo_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_SatelliteInfo_r17_tags_1)
		/sizeof(asn_DEF_SatelliteInfo_r17_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SatelliteInfo_r17_1,
	3,	/* Elements count */
	&asn_SPC_SatelliteInfo_r17_specs_1	/* Additional specs */
};

