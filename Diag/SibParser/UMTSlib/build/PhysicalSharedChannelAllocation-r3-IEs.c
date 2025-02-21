/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "PhysicalSharedChannelAllocation-r3-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_trafficVolumeReportRequest_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_oer_constraints_t asn_OER_type_confirmRequest_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_confirmRequest_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_trafficVolumeReportRequest_constr_10 CC_NOTUSED = {
	{ 1, 1 }	/* (0..255) */,
	-1};
static asn_per_constraints_t asn_PER_memb_trafficVolumeReportRequest_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_confirmRequest_value2enum_7[] = {
	{ 0,	12,	"confirmPDSCH" },
	{ 1,	12,	"confirmPUSCH" }
};
static const unsigned int asn_MAP_confirmRequest_enum2value_7[] = {
	0,	/* confirmPDSCH(0) */
	1	/* confirmPUSCH(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_confirmRequest_specs_7 = {
	asn_MAP_confirmRequest_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_confirmRequest_enum2value_7,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_confirmRequest_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_confirmRequest_7 = {
	"confirmRequest",
	"confirmRequest",
	&asn_OP_NativeEnumerated,
	asn_DEF_confirmRequest_tags_7,
	sizeof(asn_DEF_confirmRequest_tags_7)
		/sizeof(asn_DEF_confirmRequest_tags_7[0]) - 1, /* 1 */
	asn_DEF_confirmRequest_tags_7,	/* Same as above */
	sizeof(asn_DEF_confirmRequest_tags_7)
		/sizeof(asn_DEF_confirmRequest_tags_7[0]), /* 2 */
	{ &asn_OER_type_confirmRequest_constr_7, &asn_PER_type_confirmRequest_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_confirmRequest_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PhysicalSharedChannelAllocation_r3_IEs_1[] = {
	{ ATF_POINTER, 1, offsetof(struct PhysicalSharedChannelAllocation_r3_IEs, dsch_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSCH_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dsch-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalSharedChannelAllocation_r3_IEs, rrc_TransactionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TransactionIdentifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrc-TransactionIdentifier"
		},
	{ ATF_POINTER, 6, offsetof(struct PhysicalSharedChannelAllocation_r3_IEs, ul_TimingAdvance),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UL_TimingAdvanceControl,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-TimingAdvance"
		},
	{ ATF_POINTER, 5, offsetof(struct PhysicalSharedChannelAllocation_r3_IEs, pusch_CapacityAllocationInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_CapacityAllocationInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-CapacityAllocationInfo"
		},
	{ ATF_POINTER, 4, offsetof(struct PhysicalSharedChannelAllocation_r3_IEs, pdsch_CapacityAllocationInfo),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_CapacityAllocationInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-CapacityAllocationInfo"
		},
	{ ATF_POINTER, 3, offsetof(struct PhysicalSharedChannelAllocation_r3_IEs, confirmRequest),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_confirmRequest_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"confirmRequest"
		},
	{ ATF_POINTER, 2, offsetof(struct PhysicalSharedChannelAllocation_r3_IEs, trafficVolumeReportRequest),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_trafficVolumeReportRequest_constr_10, &asn_PER_memb_trafficVolumeReportRequest_constr_10,  memb_trafficVolumeReportRequest_constraint_1 },
		0, 0, /* No default value */
		"trafficVolumeReportRequest"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalSharedChannelAllocation_r3_IEs, iscpTimeslotList),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iscpTimeslotList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalSharedChannelAllocation_r3_IEs, requestPCCPCHRSCP),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"requestPCCPCHRSCP"
		},
};
static const int asn_MAP_PhysicalSharedChannelAllocation_r3_IEs_oms_1[] = { 0, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_PhysicalSharedChannelAllocation_r3_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PhysicalSharedChannelAllocation_r3_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dsch-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rrc-TransactionIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ul-TimingAdvance */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pusch-CapacityAllocationInfo */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pdsch-CapacityAllocationInfo */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* confirmRequest */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* trafficVolumeReportRequest */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* iscpTimeslotList */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* requestPCCPCHRSCP */
};
asn_SEQUENCE_specifics_t asn_SPC_PhysicalSharedChannelAllocation_r3_IEs_specs_1 = {
	sizeof(struct PhysicalSharedChannelAllocation_r3_IEs),
	offsetof(struct PhysicalSharedChannelAllocation_r3_IEs, _asn_ctx),
	asn_MAP_PhysicalSharedChannelAllocation_r3_IEs_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_PhysicalSharedChannelAllocation_r3_IEs_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PhysicalSharedChannelAllocation_r3_IEs = {
	"PhysicalSharedChannelAllocation-r3-IEs",
	"PhysicalSharedChannelAllocation-r3-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_PhysicalSharedChannelAllocation_r3_IEs_tags_1,
	sizeof(asn_DEF_PhysicalSharedChannelAllocation_r3_IEs_tags_1)
		/sizeof(asn_DEF_PhysicalSharedChannelAllocation_r3_IEs_tags_1[0]), /* 1 */
	asn_DEF_PhysicalSharedChannelAllocation_r3_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysicalSharedChannelAllocation_r3_IEs_tags_1)
		/sizeof(asn_DEF_PhysicalSharedChannelAllocation_r3_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PhysicalSharedChannelAllocation_r3_IEs_1,
	9,	/* Elements count */
	&asn_SPC_PhysicalSharedChannelAllocation_r3_IEs_specs_1	/* Additional specs */
};

