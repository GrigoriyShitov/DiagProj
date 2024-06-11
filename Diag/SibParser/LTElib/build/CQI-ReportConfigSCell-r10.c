/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "CQI-ReportConfigSCell-r10.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_nomPDSCH_RS_EPRE_Offset_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -1 && value <= 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_pmi_RI_Report_r10_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pmi_RI_Report_r10_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_nomPDSCH_RS_EPRE_Offset_r10_constr_3 CC_NOTUSED = {
	{ 1, 0 }	/* (-1..6) */,
	-1};
static asn_per_constraints_t asn_PER_memb_nomPDSCH_RS_EPRE_Offset_r10_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3, -1,  6 }	/* (-1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_pmi_RI_Report_r10_value2enum_5[] = {
	{ 0,	5,	"setup" }
};
static const unsigned int asn_MAP_pmi_RI_Report_r10_enum2value_5[] = {
	0	/* setup(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pmi_RI_Report_r10_specs_5 = {
	asn_MAP_pmi_RI_Report_r10_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_pmi_RI_Report_r10_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pmi_RI_Report_r10_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pmi_RI_Report_r10_5 = {
	"pmi-RI-Report-r10",
	"pmi-RI-Report-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_pmi_RI_Report_r10_tags_5,
	sizeof(asn_DEF_pmi_RI_Report_r10_tags_5)
		/sizeof(asn_DEF_pmi_RI_Report_r10_tags_5[0]) - 1, /* 1 */
	asn_DEF_pmi_RI_Report_r10_tags_5,	/* Same as above */
	sizeof(asn_DEF_pmi_RI_Report_r10_tags_5)
		/sizeof(asn_DEF_pmi_RI_Report_r10_tags_5[0]), /* 2 */
	{ &asn_OER_type_pmi_RI_Report_r10_constr_5, &asn_PER_type_pmi_RI_Report_r10_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pmi_RI_Report_r10_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CQI_ReportConfigSCell_r10_1[] = {
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportConfigSCell_r10, cqi_ReportModeAperiodic_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportModeAperiodic,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportModeAperiodic-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportConfigSCell_r10, nomPDSCH_RS_EPRE_Offset_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_nomPDSCH_RS_EPRE_Offset_r10_constr_3, &asn_PER_memb_nomPDSCH_RS_EPRE_Offset_r10_constr_3,  memb_nomPDSCH_RS_EPRE_Offset_r10_constraint_1 },
		0, 0, /* No default value */
		"nomPDSCH-RS-EPRE-Offset-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct CQI_ReportConfigSCell_r10, cqi_ReportPeriodicSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CQI_ReportPeriodic_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportPeriodicSCell-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportConfigSCell_r10, pmi_RI_Report_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pmi_RI_Report_r10_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pmi-RI-Report-r10"
		},
};
static const int asn_MAP_CQI_ReportConfigSCell_r10_oms_1[] = { 0, 2, 3 };
static const ber_tlv_tag_t asn_DEF_CQI_ReportConfigSCell_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CQI_ReportConfigSCell_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cqi-ReportModeAperiodic-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nomPDSCH-RS-EPRE-Offset-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cqi-ReportPeriodicSCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* pmi-RI-Report-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportConfigSCell_r10_specs_1 = {
	sizeof(struct CQI_ReportConfigSCell_r10),
	offsetof(struct CQI_ReportConfigSCell_r10, _asn_ctx),
	asn_MAP_CQI_ReportConfigSCell_r10_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CQI_ReportConfigSCell_r10_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CQI_ReportConfigSCell_r10 = {
	"CQI-ReportConfigSCell-r10",
	"CQI-ReportConfigSCell-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_CQI_ReportConfigSCell_r10_tags_1,
	sizeof(asn_DEF_CQI_ReportConfigSCell_r10_tags_1)
		/sizeof(asn_DEF_CQI_ReportConfigSCell_r10_tags_1[0]), /* 1 */
	asn_DEF_CQI_ReportConfigSCell_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_CQI_ReportConfigSCell_r10_tags_1)
		/sizeof(asn_DEF_CQI_ReportConfigSCell_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CQI_ReportConfigSCell_r10_1,
	4,	/* Elements count */
	&asn_SPC_CQI_ReportConfigSCell_r10_specs_1	/* Additional specs */
};

