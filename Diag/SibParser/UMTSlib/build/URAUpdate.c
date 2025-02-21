/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "URAUpdate.h"

static int
memb_uraUpdate_r3_add_ext_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_oer_constraints_t asn_OER_memb_uraUpdate_r3_add_ext_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_uraUpdate_r3_add_ext_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_13 = {
	sizeof(struct URAUpdate__laterNonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions__nonCriticalExtensions),
	offsetof(struct URAUpdate__laterNonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_13 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtensions_tags_13,
	sizeof(asn_DEF_nonCriticalExtensions_tags_13)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_13[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_13,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_13)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_13[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_va40NonCriticalExtensions_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct URAUpdate__laterNonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions, uraUpdate_va40ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_URAUpdate_va40ext_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uraUpdate-va40ext"
		},
	{ ATF_POINTER, 1, offsetof(struct URAUpdate__laterNonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtensions"
		},
};
static const int asn_MAP_va40NonCriticalExtensions_oms_11[] = { 1 };
static const ber_tlv_tag_t asn_DEF_va40NonCriticalExtensions_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_va40NonCriticalExtensions_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uraUpdate-va40ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_va40NonCriticalExtensions_specs_11 = {
	sizeof(struct URAUpdate__laterNonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions),
	offsetof(struct URAUpdate__laterNonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions, _asn_ctx),
	asn_MAP_va40NonCriticalExtensions_tag2el_11,
	2,	/* Count of tags in the map */
	asn_MAP_va40NonCriticalExtensions_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_va40NonCriticalExtensions_11 = {
	"va40NonCriticalExtensions",
	"va40NonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_va40NonCriticalExtensions_tags_11,
	sizeof(asn_DEF_va40NonCriticalExtensions_tags_11)
		/sizeof(asn_DEF_va40NonCriticalExtensions_tags_11[0]) - 1, /* 1 */
	asn_DEF_va40NonCriticalExtensions_tags_11,	/* Same as above */
	sizeof(asn_DEF_va40NonCriticalExtensions_tags_11)
		/sizeof(asn_DEF_va40NonCriticalExtensions_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_va40NonCriticalExtensions_11,
	2,	/* Elements count */
	&asn_SPC_va40NonCriticalExtensions_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v860NonCriticalExtensions_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct URAUpdate__laterNonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions, uraUpdate_v860ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_URAUpdate_v860ext_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uraUpdate-v860ext"
		},
	{ ATF_POINTER, 1, offsetof(struct URAUpdate__laterNonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions, va40NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_va40NonCriticalExtensions_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"va40NonCriticalExtensions"
		},
};
static const int asn_MAP_v860NonCriticalExtensions_oms_9[] = { 1 };
static const ber_tlv_tag_t asn_DEF_v860NonCriticalExtensions_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_v860NonCriticalExtensions_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uraUpdate-v860ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* va40NonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_v860NonCriticalExtensions_specs_9 = {
	sizeof(struct URAUpdate__laterNonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions),
	offsetof(struct URAUpdate__laterNonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions, _asn_ctx),
	asn_MAP_v860NonCriticalExtensions_tag2el_9,
	2,	/* Count of tags in the map */
	asn_MAP_v860NonCriticalExtensions_oms_9,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v860NonCriticalExtensions_9 = {
	"v860NonCriticalExtensions",
	"v860NonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_v860NonCriticalExtensions_tags_9,
	sizeof(asn_DEF_v860NonCriticalExtensions_tags_9)
		/sizeof(asn_DEF_v860NonCriticalExtensions_tags_9[0]) - 1, /* 1 */
	asn_DEF_v860NonCriticalExtensions_tags_9,	/* Same as above */
	sizeof(asn_DEF_v860NonCriticalExtensions_tags_9)
		/sizeof(asn_DEF_v860NonCriticalExtensions_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_v860NonCriticalExtensions_9,
	2,	/* Elements count */
	&asn_SPC_v860NonCriticalExtensions_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v770NonCriticalExtensions_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct URAUpdate__laterNonCriticalExtensions__v770NonCriticalExtensions, uraUpdate_v770ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UraUpdate_v770ext_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uraUpdate-v770ext"
		},
	{ ATF_POINTER, 1, offsetof(struct URAUpdate__laterNonCriticalExtensions__v770NonCriticalExtensions, v860NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v860NonCriticalExtensions_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v860NonCriticalExtensions"
		},
};
static const int asn_MAP_v770NonCriticalExtensions_oms_7[] = { 1 };
static const ber_tlv_tag_t asn_DEF_v770NonCriticalExtensions_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_v770NonCriticalExtensions_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uraUpdate-v770ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v860NonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_v770NonCriticalExtensions_specs_7 = {
	sizeof(struct URAUpdate__laterNonCriticalExtensions__v770NonCriticalExtensions),
	offsetof(struct URAUpdate__laterNonCriticalExtensions__v770NonCriticalExtensions, _asn_ctx),
	asn_MAP_v770NonCriticalExtensions_tag2el_7,
	2,	/* Count of tags in the map */
	asn_MAP_v770NonCriticalExtensions_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v770NonCriticalExtensions_7 = {
	"v770NonCriticalExtensions",
	"v770NonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_v770NonCriticalExtensions_tags_7,
	sizeof(asn_DEF_v770NonCriticalExtensions_tags_7)
		/sizeof(asn_DEF_v770NonCriticalExtensions_tags_7[0]) - 1, /* 1 */
	asn_DEF_v770NonCriticalExtensions_tags_7,	/* Same as above */
	sizeof(asn_DEF_v770NonCriticalExtensions_tags_7)
		/sizeof(asn_DEF_v770NonCriticalExtensions_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_v770NonCriticalExtensions_7,
	2,	/* Elements count */
	&asn_SPC_v770NonCriticalExtensions_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_laterNonCriticalExtensions_5[] = {
	{ ATF_POINTER, 2, offsetof(struct URAUpdate__laterNonCriticalExtensions, uraUpdate_r3_add_ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_uraUpdate_r3_add_ext_constr_6, &asn_PER_memb_uraUpdate_r3_add_ext_constr_6,  memb_uraUpdate_r3_add_ext_constraint_5 },
		0, 0, /* No default value */
		"uraUpdate-r3-add-ext"
		},
	{ ATF_POINTER, 1, offsetof(struct URAUpdate__laterNonCriticalExtensions, v770NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v770NonCriticalExtensions_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v770NonCriticalExtensions"
		},
};
static const int asn_MAP_laterNonCriticalExtensions_oms_5[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_laterNonCriticalExtensions_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_laterNonCriticalExtensions_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uraUpdate-r3-add-ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v770NonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_laterNonCriticalExtensions_specs_5 = {
	sizeof(struct URAUpdate__laterNonCriticalExtensions),
	offsetof(struct URAUpdate__laterNonCriticalExtensions, _asn_ctx),
	asn_MAP_laterNonCriticalExtensions_tag2el_5,
	2,	/* Count of tags in the map */
	asn_MAP_laterNonCriticalExtensions_oms_5,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_laterNonCriticalExtensions_5 = {
	"laterNonCriticalExtensions",
	"laterNonCriticalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_laterNonCriticalExtensions_tags_5,
	sizeof(asn_DEF_laterNonCriticalExtensions_tags_5)
		/sizeof(asn_DEF_laterNonCriticalExtensions_tags_5[0]) - 1, /* 1 */
	asn_DEF_laterNonCriticalExtensions_tags_5,	/* Same as above */
	sizeof(asn_DEF_laterNonCriticalExtensions_tags_5)
		/sizeof(asn_DEF_laterNonCriticalExtensions_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_laterNonCriticalExtensions_5,
	2,	/* Elements count */
	&asn_SPC_laterNonCriticalExtensions_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_URAUpdate_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct URAUpdate, u_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_U_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"u-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct URAUpdate, ura_UpdateCause),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_URA_UpdateCause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ura-UpdateCause"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct URAUpdate, protocolErrorIndicator),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ProtocolErrorIndicatorWithMoreInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protocolErrorIndicator"
		},
	{ ATF_POINTER, 1, offsetof(struct URAUpdate, laterNonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_laterNonCriticalExtensions_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laterNonCriticalExtensions"
		},
};
static const int asn_MAP_URAUpdate_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_URAUpdate_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_URAUpdate_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* u-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ura-UpdateCause */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* protocolErrorIndicator */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* laterNonCriticalExtensions */
};
asn_SEQUENCE_specifics_t asn_SPC_URAUpdate_specs_1 = {
	sizeof(struct URAUpdate),
	offsetof(struct URAUpdate, _asn_ctx),
	asn_MAP_URAUpdate_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_URAUpdate_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_URAUpdate = {
	"URAUpdate",
	"URAUpdate",
	&asn_OP_SEQUENCE,
	asn_DEF_URAUpdate_tags_1,
	sizeof(asn_DEF_URAUpdate_tags_1)
		/sizeof(asn_DEF_URAUpdate_tags_1[0]), /* 1 */
	asn_DEF_URAUpdate_tags_1,	/* Same as above */
	sizeof(asn_DEF_URAUpdate_tags_1)
		/sizeof(asn_DEF_URAUpdate_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_URAUpdate_1,
	4,	/* Elements count */
	&asn_SPC_URAUpdate_specs_1	/* Additional specs */
};

