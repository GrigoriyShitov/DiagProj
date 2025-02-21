/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Class-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "UL-DCCH-MessageType.h"

static asn_oer_constraints_t asn_OER_type_UL_DCCH_MessageType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_UL_DCCH_MessageType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UL_DCCH_MessageType_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.activeSetUpdateComplete),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActiveSetUpdateComplete,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"activeSetUpdateComplete"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.activeSetUpdateFailure),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActiveSetUpdateFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"activeSetUpdateFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.cellChangeOrderFromUTRANFailure),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CellChangeOrderFromUTRANFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellChangeOrderFromUTRANFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.counterCheckResponse),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CounterCheckResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"counterCheckResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.handoverToUTRANComplete),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HandoverToUTRANComplete,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"handoverToUTRANComplete"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.initialDirectTransfer),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InitialDirectTransfer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"initialDirectTransfer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.handoverFromUTRANFailure),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HandoverFromUTRANFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"handoverFromUTRANFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.measurementControlFailure),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementControlFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measurementControlFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.measurementReport),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementReport,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measurementReport"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.physicalChannelReconfigurationComplete),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysicalChannelReconfigurationComplete,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physicalChannelReconfigurationComplete"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.physicalChannelReconfigurationFailure),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysicalChannelReconfigurationFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physicalChannelReconfigurationFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.radioBearerReconfigurationComplete),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioBearerReconfigurationComplete,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioBearerReconfigurationComplete"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.radioBearerReconfigurationFailure),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioBearerReconfigurationFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioBearerReconfigurationFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.radioBearerReleaseComplete),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioBearerReleaseComplete,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioBearerReleaseComplete"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.radioBearerReleaseFailure),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioBearerReleaseFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioBearerReleaseFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.radioBearerSetupComplete),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioBearerSetupComplete,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioBearerSetupComplete"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.radioBearerSetupFailure),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioBearerSetupFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioBearerSetupFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.rrcConnectionReleaseComplete),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReleaseComplete,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionReleaseComplete"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.rrcConnectionSetupComplete),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionSetupComplete,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionSetupComplete"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.rrcStatus),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCStatus,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcStatus"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.securityModeComplete),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityModeComplete,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"securityModeComplete"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.securityModeFailure),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityModeFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"securityModeFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.signallingConnectionReleaseIndication),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SignallingConnectionReleaseIndication,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"signallingConnectionReleaseIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.transportChannelReconfigurationComplete),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportChannelReconfigurationComplete,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transportChannelReconfigurationComplete"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.transportChannelReconfigurationFailure),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportChannelReconfigurationFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transportChannelReconfigurationFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.transportFormatCombinationControlFailure),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportFormatCombinationControlFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transportFormatCombinationControlFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.ueCapabilityInformation),
		(ASN_TAG_CLASS_CONTEXT | (26 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UECapabilityInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueCapabilityInformation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.uplinkDirectTransfer),
		(ASN_TAG_CLASS_CONTEXT | (27 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkDirectTransfer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkDirectTransfer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.utranMobilityInformationConfirm),
		(ASN_TAG_CLASS_CONTEXT | (28 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTRANMobilityInformationConfirm,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"utranMobilityInformationConfirm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.utranMobilityInformationFailure),
		(ASN_TAG_CLASS_CONTEXT | (29 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTRANMobilityInformationFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"utranMobilityInformationFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.mbmsModificationRequest),
		(ASN_TAG_CLASS_CONTEXT | (30 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMSModificationRequest,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbmsModificationRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType, choice.ul_DCCH_MessageType_ext),
		(ASN_TAG_CLASS_CONTEXT | (31 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UL_DCCH_MessageType_ext,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-DCCH-MessageType-ext"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_UL_DCCH_MessageType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* activeSetUpdateComplete */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* activeSetUpdateFailure */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cellChangeOrderFromUTRANFailure */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* counterCheckResponse */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* handoverToUTRANComplete */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* initialDirectTransfer */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* handoverFromUTRANFailure */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* measurementControlFailure */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* measurementReport */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* physicalChannelReconfigurationComplete */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* physicalChannelReconfigurationFailure */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* radioBearerReconfigurationComplete */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* radioBearerReconfigurationFailure */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* radioBearerReleaseComplete */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* radioBearerReleaseFailure */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* radioBearerSetupComplete */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* radioBearerSetupFailure */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* rrcConnectionReleaseComplete */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* rrcConnectionSetupComplete */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* rrcStatus */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* securityModeComplete */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* securityModeFailure */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 }, /* signallingConnectionReleaseIndication */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 23, 0, 0 }, /* transportChannelReconfigurationComplete */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 24, 0, 0 }, /* transportChannelReconfigurationFailure */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 25, 0, 0 }, /* transportFormatCombinationControlFailure */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 26, 0, 0 }, /* ueCapabilityInformation */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 27, 0, 0 }, /* uplinkDirectTransfer */
    { (ASN_TAG_CLASS_CONTEXT | (28 << 2)), 28, 0, 0 }, /* utranMobilityInformationConfirm */
    { (ASN_TAG_CLASS_CONTEXT | (29 << 2)), 29, 0, 0 }, /* utranMobilityInformationFailure */
    { (ASN_TAG_CLASS_CONTEXT | (30 << 2)), 30, 0, 0 }, /* mbmsModificationRequest */
    { (ASN_TAG_CLASS_CONTEXT | (31 << 2)), 31, 0, 0 } /* ul-DCCH-MessageType-ext */
};
asn_CHOICE_specifics_t asn_SPC_UL_DCCH_MessageType_specs_1 = {
	sizeof(struct UL_DCCH_MessageType),
	offsetof(struct UL_DCCH_MessageType, _asn_ctx),
	offsetof(struct UL_DCCH_MessageType, present),
	sizeof(((struct UL_DCCH_MessageType *)0)->present),
	asn_MAP_UL_DCCH_MessageType_tag2el_1,
	32,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UL_DCCH_MessageType = {
	"UL-DCCH-MessageType",
	"UL-DCCH-MessageType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_UL_DCCH_MessageType_constr_1, &asn_PER_type_UL_DCCH_MessageType_constr_1, CHOICE_constraint },
	asn_MBR_UL_DCCH_MessageType_1,
	32,	/* Elements count */
	&asn_SPC_UL_DCCH_MessageType_specs_1	/* Additional specs */
};

