/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "SystemInformationBlockType26-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_threshS_RSSI_CBR_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 45)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_slss_TxMultiFreq_r15_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_slss_TxMultiFreq_r15_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_threshS_RSSI_CBR_r15_constr_9 CC_NOTUSED = {
	{ 1, 1 }	/* (0..45) */,
	-1};
static asn_per_constraints_t asn_PER_memb_threshS_RSSI_CBR_r15_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  45 }	/* (0..45) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_slss_TxMultiFreq_r15_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_slss_TxMultiFreq_r15_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_slss_TxMultiFreq_r15_specs_6 = {
	asn_MAP_slss_TxMultiFreq_r15_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_slss_TxMultiFreq_r15_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_slss_TxMultiFreq_r15_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_slss_TxMultiFreq_r15_6 = {
	"slss-TxMultiFreq-r15",
	"slss-TxMultiFreq-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_slss_TxMultiFreq_r15_tags_6,
	sizeof(asn_DEF_slss_TxMultiFreq_r15_tags_6)
		/sizeof(asn_DEF_slss_TxMultiFreq_r15_tags_6[0]) - 1, /* 1 */
	asn_DEF_slss_TxMultiFreq_r15_tags_6,	/* Same as above */
	sizeof(asn_DEF_slss_TxMultiFreq_r15_tags_6)
		/sizeof(asn_DEF_slss_TxMultiFreq_r15_tags_6[0]), /* 2 */
	{ &asn_OER_type_slss_TxMultiFreq_r15_constr_6, &asn_PER_type_slss_TxMultiFreq_r15_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_slss_TxMultiFreq_r15_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType26_r15_1[] = {
	{ ATF_POINTER, 8, offsetof(struct SystemInformationBlockType26_r15, v2x_InterFreqInfoList_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_InterFreqInfoListV2X_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-InterFreqInfoList-r15"
		},
	{ ATF_POINTER, 7, offsetof(struct SystemInformationBlockType26_r15, cbr_pssch_TxConfigList_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CBR_PPPP_TxConfigList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cbr-pssch-TxConfigList-r15"
		},
	{ ATF_POINTER, 6, offsetof(struct SystemInformationBlockType26_r15, v2x_PacketDuplicationConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_V2X_PacketDuplicationConfig_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-PacketDuplicationConfig-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct SystemInformationBlockType26_r15, syncFreqList_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_V2X_SyncFreqList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncFreqList-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType26_r15, slss_TxMultiFreq_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_slss_TxMultiFreq_r15_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"slss-TxMultiFreq-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType26_r15, v2x_FreqSelectionConfigList_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_V2X_FreqSelectionConfigList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-FreqSelectionConfigList-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType26_r15, threshS_RSSI_CBR_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_threshS_RSSI_CBR_r15_constr_9, &asn_PER_memb_threshS_RSSI_CBR_r15_constr_9,  memb_threshS_RSSI_CBR_r15_constraint_1 },
		0, 0, /* No default value */
		"threshS-RSSI-CBR-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType26_r15, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformationBlockType26_r15_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType26_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType26_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* v2x-InterFreqInfoList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cbr-pssch-TxConfigList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* v2x-PacketDuplicationConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* syncFreqList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* slss-TxMultiFreq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* v2x-FreqSelectionConfigList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* threshS-RSSI-CBR-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* lateNonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType26_r15_specs_1 = {
	sizeof(struct SystemInformationBlockType26_r15),
	offsetof(struct SystemInformationBlockType26_r15, _asn_ctx),
	asn_MAP_SystemInformationBlockType26_r15_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType26_r15_oms_1,	/* Optional members */
	7, 1,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType26_r15 = {
	"SystemInformationBlockType26-r15",
	"SystemInformationBlockType26-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType26_r15_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType26_r15_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType26_r15_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType26_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType26_r15_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType26_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType26_r15_1,
	8,	/* Elements count */
	&asn_SPC_SystemInformationBlockType26_r15_specs_1	/* Additional specs */
};

